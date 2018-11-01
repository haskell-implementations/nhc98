module ByteCode.CompileLib 
    (
     -- *State and types 
     CTable, CState(..), initCompileState, STCompiler, InsCode, Compiler, CMode(..), 
     cStrict, cLazy, cTraced, cUntraced, cUnproject,
     Where(..),
     shiftWhere,

     -- *Monadic plumbing
     -- $monadic_plumbing
     (=>>=), (=>>), mapC, mapC_, simply, liftC, block,

     -- *State manipulation functions
     shiftStack, getFlags, getDepth, setDepth, bindArgs, bind, whereIs, addConst,
     isEvaled, evaled, newLabel, newLabels, branch, mergeDepths, pushFail, popFail,
     getFail, getIntState     
    ) where

import ByteCode.Type
import qualified Data.Map as Map
import qualified Data.Set as Set
import Flags
import IntState hiding (getIntState, getFlags)
import StateMonad
import Id(Id)
import Debug.Trace
import Control.Monad.State

--------------------------------------------------------------
-- state and types
--------------------------------------------------------------

type CTable = Map.Map ConstItem CRef

-- | The internal compiler state
--
-- @
--    flags,state         - saved external items
--    maxDepth            - the biggest depth we reached in this function
--    constIds            - the list of free constant ids
--    consts              - the current constant table
--    labels              - the list of free labels
-- @
--
-- @
--    env                 - where each variable can be found
--    depth               - the current stack depth
--    fails               - a list of fail handlers (still used?)
--    evals               - the set of variables that we know to be evaluated
-- @

data CState = S { -- global state parameters
                 cFlags :: Flags,
                 cState :: IntState,
                 cMaxDepth :: Int,
                 cConstIds :: CRef,
                 cConsts :: Map.Map ConstItem CRef,
                 cLabels :: Label,

                 -- local state parameters
                 cEnv :: Map.Map Id Where,
                 cDepth :: Int,
                 cFails :: [(Label,Int)],
                 cEvals :: Set.Set Id }

initCompileState :: Flags -> IntState -> CState
initCompileState flags state = S flags state 0 0 Map.empty 0 Map.empty 0 [] Set.empty

instance Show CState where
  show s@(S {}) = "--STATE--------------------------\n" ++
                  "maxDepth="++show (cMaxDepth s)++"\n"++
                  "constId="++show (cConstIds s)++"\n"++
                  "consts="++show (cConsts s)++"\n"++
                  "labels="++show (cLabels s)++"\n"++
                  "env="++show (cEnv s)++"\n"++
                  "depth="++show (cDepth s)++"\n"++
                  "fails="++show (cFails s)++"\n"++
                  "evals="++show (cEvals s)++"\n"

type STCompiler a = State CState a
type InsCode = [UseIns] -> [UseIns]
type Compiler a = STCompiler (InsCode,a)

{- | compiler mode information -}
data CMode = CMode { isStrict :: Bool, isTraced :: Bool, isProjected :: Bool }

cStrict, cLazy, cTraced, cUntraced, cProject, cUnproject :: CMode -> CMode
cStrict (CMode _ t p) = CMode True t p
cLazy (CMode _ t p) = CMode False t p
cTraced (CMode s _ p) = CMode s True p
cUntraced (CMode s _ p) = CMode s False p
cProject (CMode s t _) = CMode s t True
cUnproject (CMode s t _) = CMode s t False

{- | where we can find a variable -}
data Where = Stack Int Bool        -- true if this item comes from a pattern match
           | Arg Int
           deriving Show

{- | shift a where by an offset, if it's on the stack -}
shiftWhere :: Int -> Where -> Where
shiftWhere n (Stack i pm) = Stack (i+n) pm
shiftWhere n x            = x


-- $monadic_plumbing
--
-- the underlying state of the compiler, recording stack depth, environment
-- etc. is monadic, ontop of this combinators are provided to plug together
-- the outputted code, which are also monad like in nature.
--
-- needless to say the internal details of how this works are complicated,
-- however, conceptually it's quite easy.
--
-- > p =>> q
--
-- runs the monad for compiler p, then the one for compiler q and then
-- joins the instructions generated together.
--
-- > p =>>= \ x -> q
--
-- does the same as the above but this time it's assumed p is returning something
-- besides just the code that is generated, which is then used as a local variable
-- in defining q.
--
-- for example:
--
-- > newLabel =>>= \ j ->
-- > ins (JUMP j)
--
-- calls the monad to generate a new internal label, and joins its code (i.e. none)
-- with the code for a JUMP to address provided by newLabel.

(=>>=) :: Compiler a -> (a -> Compiler b) -> Compiler b
c =>>= d = do (cs,a) <- c
              (ds,b) <- d a
              return (cs . ds, b)

(=>>) :: Compiler () -> Compiler a -> Compiler a
c =>> d = c =>>= \ () -> d

mapC :: (a -> Compiler b) -> [a] -> Compiler [b]
mapC f []     = simply []
mapC f (c:cs) = f c =>>= \ b ->
                mapC f cs =>>= \ bs ->
                simply (b:bs)

mapC_ :: (a -> Compiler ()) -> [a] -> Compiler ()
mapC_ f cs = mapC f cs =>>= \ _ -> simply ()

simply :: a -> Compiler a
simply a = return (id, a)

liftC :: STCompiler a -> Compiler a
liftC s = do a <- s
             simply a

block :: InsCode -> Compiler ()
block is = return (is, ())

--------------------------------------------------------------
-- state manipulation functions
--------------------------------------------------------------

{- | shift the stack by the given amount, also offsets the stack stored variables in
   the environment and changes the maxDepth if appropriate -}
shiftStack :: Int -> Compiler ()
shiftStack n =
    liftC $ writeState_ $ \s -> let depth'    = cDepth s + n
                                    maxDepth' = max (cMaxDepth s) depth'
                                    cEnv'     = Map.map (shiftWhere n) (cEnv s)
                                in s { cEnv = cEnv', cDepth = depth', cMaxDepth = maxDepth' }

{- | get the flags -}
getFlags :: Compiler Flags
getFlags = liftC $ readState cFlags

{- | get the current depth -}
getDepth :: Compiler Int
getDepth = liftC $ readState cDepth

{- | set the current depth -}
setDepth :: Int -> Compiler ()
setDepth depth = liftC $ writeState_ $ \s -> s { cDepth = depth }

{- | bind the argument list -}
bindArgs :: [Id] -> Compiler ()
bindArgs is = liftC $ writeState_ $ \s -> s { cEnv = env }
    where
    env  = Map.fromList isns
    isns = zip is (map Arg [0..])

{- | bind an identifier to a stack location -}
bind :: Bool -> Id -> Int -> Compiler ()
bind pm i n = liftC $ writeState_ $ \s -> s { cEnv = Map.insert i (Stack n pm) (cEnv s) }

{- | find out where an identifier is stored -}
whereIs :: Id -> Compiler (Maybe Where)
whereIs i = liftC $ readState $ \s -> Map.lookup i (cEnv s)

{- | add a const to the consttable, if it's not there already -}
addConst :: ConstItem -> Compiler CRef
addConst x =
    liftC $ writeState $ \s -> case Map.lookup x (cConsts s) of
                                     Just r -> (s,r)
                                     Nothing -> let i       = cConstIds s
                                                    consts' = Map.insert x i (cConsts s)
                                                    s'      = s { cConsts = consts', cConstIds = i+1 }
                                                in (s',i)

{- | find out whether a variable has been evaluated already -}
isEvaled :: Id -> Compiler Bool
isEvaled i = liftC $ readState $ \s -> i `Set.member` (cEvals s)

{- | mark that a variable has been evaluated -}
evaled :: Id -> Compiler ()
evaled i = liftC $ writeState_ $ \s -> s { cEvals = Set.insert i (cEvals s) }

{- | allocate a new compiler label and return it -}
newLabel :: Compiler Label
newLabel = newLabels 1 =>>= \ [lab] ->
           simply lab

{- | allocate some new labels -}
newLabels :: Int -> Compiler [Label]
newLabels n = liftC $ writeState $ \s -> let ls = cLabels s
                                         in (s { cLabels = ls+n }, [ls..ls+n-1])

-- | take a compiler and compile it in its own environment,
-- saving and restoring the appropriate local state elements
-- give the depth on return.
branch :: Compiler () -> Compiler Int
branch c =
    liftC get =>>= \ state ->
    let ((is,()),state1) = runState c state
        state2           = merge state state1 in
    liftC (put state2) =>>
    return (is, cDepth state1)
    where
    merge s1 s2 = s2 { cEnv = cEnv s1, cFails = cFails s1, cEvals = cEvals s1,
                       cDepth = cDepth s1 }
                       -- FIXME: we can do better than this with the cEvals ...

-- | merge together a list of depths taken from branching, checks they are all the same
-- and sets the depth to that
mergeDepths :: Label -> String -> [Int] -> Compiler ()
mergeDepths lab kind (i:is)
    | and (map (==i) is) = setDepth i
    | otherwise          = trace ("L_" ++ show lab++":"++kind++" depths don't match on merge depths "++show (i:is)) (simply ())

-- | push a fail on the fail stack
pushFail :: Label -> Compiler ()
pushFail f = liftC $ writeState_ $ \s -> let fs = cFails s
                                             d  = cDepth s
                                         in s { cFails = (f,d):fs }

-- | pop a fail from the fail stack
popFail :: Compiler ()
popFail = liftC $ writeState_ $ \s -> s { cFails = tail (cFails s) }


-- | get the failure on the fail of the stack
getFail :: Compiler (Label,Int)
getFail = liftC $ readState $ \s -> head (cFails s)

-- | get the internal state
getIntState :: Compiler IntState
getIntState = liftC $ readState cState
