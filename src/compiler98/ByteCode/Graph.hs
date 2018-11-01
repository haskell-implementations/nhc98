-- | Converts the jump and label linear instruction list into a flow graph,
--   this aids later optimisation and memory phases.
--
--   It also includes the code for the graph monad which is used extensively
--   in later analysis processes.

module ByteCode.Graph(

-- * Bytecode graph conversion
bcGraph

-- * Graph state monad
, GState(..)
, GraphMonad
, gGetStart
, gSetStart
, gGetLabels
, gGetNode
, gSetNode
, gGetJumpers
, gSetJumpers
, gAddJumpers
, gRemoveJumpers
, gAlwaysReturns
, gReadX
, gWriteX
, gWriteX_

, module StateMonad
) where

import ByteCode.Type
import StateMonad
import Control.Monad.State
import qualified Data.Map as Map
import qualified Data.Set as Set
import Maybe(fromJust)

----------------------------------------------------------------------
-- graph monad
----------------------------------------------------------------------

-- | Generic graph monad state
data GState x = GState { gsStart :: GLabel,
                         gsGraph :: Graph,
                         gsJumpers :: Jumpers,
                         gsExtra :: x }

-- | A graph monad with a given extra state, returning a given value
type GraphMonad x a = State (GState x) a

----------------------------------------------------------------------

gGetStart :: GraphMonad x GLabel
gGetStart = readState gsStart

gSetStart :: GLabel -> GraphMonad x ()
gSetStart start = writeState_ $ \s -> s { gsStart = start }

gGetLabels :: GraphMonad x [GLabel]
gGetLabels = readState $ \s -> (map fst . Map.toList . gsGraph) s

gGetNode :: GLabel -> GraphMonad x GraphNode
gGetNode label = readState $ \s -> fromJust $ Map.lookup label (gsGraph s)

gSetNode :: GLabel -> GraphNode -> GraphMonad x ()
gSetNode label node = writeState_ $ \s -> s { gsGraph = Map.insert label node (gsGraph s) }

gGetJumpers :: GLabel -> GraphMonad x (Set.Set GLabel)
gGetJumpers label = readState $ \s -> maybe Set.empty id $ Map.lookup label (gsJumpers s)

gSetJumpers :: GLabel -> Set.Set GLabel -> GraphMonad x ()
gSetJumpers label jumps = writeState_ $ \s -> s { gsJumpers = Map.insert label jumps (gsJumpers s) }

gAddJumpers :: GLabel -> Set.Set GLabel -> GraphMonad x ()
gAddJumpers label jumps = do old <- gGetJumpers label
                             gSetJumpers label (old `Set.union` jumps)

gRemoveJumpers :: GLabel -> Set.Set GLabel -> GraphMonad x ()
gRemoveJumpers label jumps = do old <- gGetJumpers label
                                gSetJumpers label (old `Set.difference` jumps)

gReadX :: (x -> a) -> GraphMonad x a
gReadX f = readState $ \s -> f (gsExtra s)

gWriteX :: (x -> (x,a)) -> GraphMonad x a
gWriteX f = writeState $ \s -> let (x',a) = f (gsExtra s)
                               in (s { gsExtra = x' }, a)

gWriteX_ :: (x -> x) -> GraphMonad x ()
gWriteX_ f = gWriteX (\x -> (f x,()))

-- | Given a node, chase down it to see if it invariably ends up
--   at a return without doing anything substantial on the way
gAlwaysReturns :: GLabel -> GraphMonad x Bool
gAlwaysReturns label =
    do node <- gGetNode label
       case node of
           GLinear ins False next ->
               if allSlides ins then gAlwaysReturns next
                                else return False
           GReturn -> return True
           GDead   -> error $ "gAlwaysReturns: somehow reached dead code! "++show label
           _       -> return False
    where
    -- given a list of instructions returns whether all the instructions are
    -- slides, pops or need heaps. If so then they can be ignored before a return
    allSlides []                   = True
    allSlides ((NEED_HEAP n,_):is) = allSlides is
    allSlides ((SLIDE n,_):is)     = allSlides is
    allSlides ((POP n,_):is)       = allSlides is
    allSlides _                    = False

----------------------------------------------------------------------
-- graph builder specifics
----------------------------------------------------------------------

-- extra state for graph building
data Extra = Extra { sMapping :: Map.Map Label GLabel,
                     sLabels :: [GLabel] }

type Builder a = GraphMonad Extra a

----------------------------------------------------------------------
-- monadic helpers for building graphs
----------------------------------------------------------------------

-- bind a label to particular graph node
bind :: GLabel -> GraphNode -> Builder ()
bind label node = gSetNode label node

-- allocate a new unique label
newLabel :: Builder GLabel
newLabel = gWriteX $ \s -> let (l:ls) = sLabels s
                           in (s { sLabels = ls }, l)

-- record a label mapping from old labels to new labels
mapping :: Label -> GLabel -> Builder ()
mapping from to = gWriteX_ $ \s -> s { sMapping = Map.insert from to (sMapping s) }


-- records what a particular label is mapped to, if anything
mappedTo :: Label -> Builder (Maybe GLabel)
mappedTo from = gReadX $ \s -> Map.lookup from (sMapping s)

-- records a jump mapping from a label to a list of target labels. Note that this is actually stored
-- the other way round, i.e. record all the labels that jump to a particular label
jumpsTo :: GLabel -> [GLabel] -> Builder ()
jumpsTo from to = mapM_ (addJump from) to
    where
    addJump from to = gAddJumpers to (Set.singleton from)

----------------------------------------------------------------------
-- graph building
----------------------------------------------------------------------

-- | Turn linear bytecode into a graph representation.
bcGraph :: BCModule -> BCModule
bcGraph m = m { bcmDecls = map bcDecl $ bcmDecls m }

-- build the graph for a single declaration
bcDecl :: BCDecl -> BCDecl
bcDecl (Fun name pos arity args (CLinear code) consts isPrim stack numDict fl) =
    Fun name pos arity args graph consts isPrim stack numDict fl
    where
    st          = GState undefined Map.empty Map.empty (Extra Map.empty (map GLabel [0..]))
    (start,st') = runState (gBody code) st
    graph       = CGraph start (gsGraph st') (gsJumpers st')
bcDecl x                                                            = x

-- build the body of a function
gBody :: [UseIns] -> Builder GLabel
gBody code = do ret <- gCode code []
                oGraph ret
                return ret

-- build a graph out of a list of instructions, uses an accumulator to store
-- which nodes should go in the current block
gCode :: [UseIns] -> [UseIns] -> Builder GLabel
gCode [(RETURN,_)]     acc =
    do next <- newLabel
       accL <- gAcc acc next
       bind next GReturn
       return $ accL `orMaybe` next

gCode ((LABEL n,_):is) acc =
    do m <- mappedTo n
       next <- case m of
                 Just m  -> return m
                 Nothing -> do next <- gCode is []
                               mapping n next
                               return next
       accL <- gAcc acc next
       return $ accL `orMaybe` next

gCode ((EVAL,us):is) acc =
    do next <- gCode is []
       (Just accL) <- gAcc ((EVAL,us):acc) next
       return accL

gCode ((JUMP j,_):is) acc =
    do next <- gCodeAt j is []
       accL <- gAcc acc next
       return $ accL `orMaybe` next

gCode ((JUMP_FALSE j,_):is) acc =
    do true <- gCode is []
       false <- gCodeAt j is []
       next <- newLabel
       bind next (GIf true false)
       jumpsTo next [true,false]
       accL <- gAcc acc next
       return $ accL `orMaybe` next

gCode ((CASE int tas def,_):is) acc =
    do tas' <- mapM (gAlt is) tas
       next <- newLabel
       def' <- case def of
                   Just def -> do def' <- gCodeAt def is []
                                  jumpsTo next [def']
                                  return $ Just def'
                   Nothing  -> return Nothing
       bind next (GCase int tas' def')
       jumpsTo next (map snd tas')
       accL <- gAcc acc next
       return $ accL `orMaybe` next

gCode ((STOP,us):is) acc = gCode [(RETURN,us)] acc
gCode (i:is) acc = gCode is (i:acc)

-- does that same as gCode but skips instructions until it finds the given label
gCodeAt :: Label -> [UseIns] -> [UseIns] -> Builder GLabel
gCodeAt j is acc
    | null is'  = error $ "gCodeAt: cannot jump to label L_"++show j++" because it does not exist"
    | otherwise = gCode is' acc
    where
    is' = dropWhile (\k -> case k of
                               (LABEL k,_) -> j /= k
                               _           -> True) is

-- convert the accumulation buffer into a graph node if it's not empty
gAcc :: [UseIns] -> GLabel -> Builder (Maybe GLabel)
gAcc []  next  = return Nothing
gAcc acc next =
    do lab <- newLabel
       let isEval = case acc of
                        ((EVAL,_):_) -> True
                        _            -> False
       bind lab (GLinear (reverse acc) isEval next)
       jumpsTo lab [next]
       return (Just lab)

-- handle the alt of a case, simply a lifted gCodeAt
gAlt :: [UseIns] -> (Tag,Label) -> Builder (Tag,GLabel)
gAlt is (tag,j) = do next <- gCodeAt j is []
                     return (tag,next)

----------------------------------------------------------------------
-- helper functions
----------------------------------------------------------------------

-- return the first item if it's not Nothing, otherwise return the second
orMaybe :: Maybe a -> a -> a
orMaybe m d = maybe d id m

----------------------------------------------------------------------
-- graph optimisation functions
----------------------------------------------------------------------

oGraph :: GLabel -> Builder ()
oGraph label =
    do node <- gGetNode label
       case node of
           GLinear ins True next  -> oGraph next
           GLinear ins False next -> oLinear label node
           GCase int tas def      -> do mapM_ (\(t,as) -> oGraph as) tas
                                        case def of
                                            Just def -> oGraph def
                                            Nothing  -> return ()
           GIf true false         -> do oGraph true
                                        oGraph false
           GReturn                -> return ()

oLinear :: GLabel -> GraphNode -> Builder ()
oLinear label (GLinear ins False next) =
    do (extra,eval,next') <- oRemove next
       gSetNode label (GLinear (ins++extra) eval next')
       oGraph next'

oRemove :: GLabel -> Builder ([UseIns],Bool,GLabel)
oRemove label =
    do jumps <- gGetJumpers label
       if Set.size jumps /= 1 then
          return ([],False,label)
        else
          do node <- gGetNode label
             examine node
    where
    examine (GLinear ins eval next) =
        do more <- if not eval then
                     oRemove next
                    else
                     return ([],True,next)
           let (extra,eval',next') = more
           -- now we can remove this node
           oRemoveFromGraph label next'
           -- return the code
           return (ins ++ extra, eval',next')

    examine _                       =
        return ([],False,label)


oRemoveFromGraph :: GLabel -> GLabel -> Builder ()
oRemoveFromGraph node next =
    do parents <- gGetJumpers node
       gRemoveJumpers next (Set.singleton node)
       gAddJumpers next parents
       gSetNode node GDead
       gSetJumpers node Set.empty
