-- | Function to turns bytecode graph structure back into a linear list of instructions
module ByteCode.Flatten(bcFlatten) where

import ByteCode.Type
import ByteCode.Graph
import Control.Monad.State
import qualified Data.Set as Set
import List(sortBy)
import Debug.Trace(trace)

--------------------------------------------------------------------------------------------------------

type Flattener a = GraphMonad (Set.Set GLabel) a

flMark :: GLabel -> Flattener Bool
flMark m = gWriteX $ \ s -> (Set.insert m s, m `Set.member` s)

flIsMarked :: GLabel -> Flattener Bool
flIsMarked m = gReadX $ \ s -> m `Set.member` s

--------------------------------------------------------------------------------------------------------

-- | Turn bytecode represented as a graph into bytecode represented as a linear sequence
--   of instructions
bcFlatten :: BCModule -> BCModule
bcFlatten m = m { bcmDecls = map flDecl $ bcmDecls m }

-- flatten a single declaration
flDecl :: BCDecl -> BCDecl
flDecl (Fun n p z as cs cn pr st nd fl) = Fun n p z as (flCode cs) cn pr st nd fl
flDecl x                                = x

-- flatten a code block
flCode :: Code -> Code
flCode (CGraph start graph jumps) = CLinear is'
    where
    st  = GState start graph jumps Set.empty
    is  = evalState (flGraph start False) st
    is' = map (\i -> (i,emptyUS)) $ is ++ [END_CODE]

-- flatten a program graph into a linear list of instructions
flGraph :: GLabel -> Bool -> Flattener [Ins]
flGraph label needsJump = do
    -- check the predecessors of this node
    incoming <- gGetJumpers label
    markeds <- mapM flIsMarked $ Set.toList incoming
    if not $ and markeds then
        -- not all our predecessors have been generated yet so we should wait
        -- and just insert a jump here (if needed)
        if needsJump then return [JUMP (toLabel label)]
                     else return []
     else do
        -- all predecessors marked so generate here
        flMark label
        node <- gGetNode label
        rest <- case node of
            GLinear ins eval next -> flLinear label ins eval next
            GIf true false -> flIf label true false
            GCase int alts mdef -> flCase label int alts mdef
            GReturn -> return [RETURN]
            GDead -> error $ "flGraph: somehow reached dead code! "++show label
        return $ LABEL (toLabel label) : rest

-- | flatten a linear block of code
flLinear :: GLabel -> [UseIns] -> Bool -> GLabel -> Flattener [Ins]
flLinear label isus eval next = do
    ret <- gAlwaysReturns next
    let is = map fst isus
    if ret then
        let retins = if eval then [RETURN_EVAL] else [RETURN]
        in return $ is ++ retins
     else do
        rest <- flGraph next True
        return $ is ++ rest

-- | flatten an if statement
flIf :: GLabel -> GLabel -> GLabel -> Flattener [Ins]
flIf label true false = do
    ts <- flGraph true True
    fs <- flGraph false False
    return $ JUMP_FALSE (toLabel false) : ts ++ fs

-- | flatten a case statement
flCase :: GLabel -> Bool -> [(Tag,GLabel)] -> Maybe GLabel -> Flattener [Ins]
flCase label int alts mdef = do
    ais <- mapM (\(_,j) -> flGraph j False) alts
    dis <- case mdef of
              Just j -> flGraph j False
              Nothing -> return []
    let alts' = map (\(t,j) -> (t, toLabel j)) alts
        mdef' = maybe Nothing (Just . toLabel) mdef
        sw    = switch int alts' mdef'
    return $ sw : concat ais ++ dis

-- converts a graph label to a normal label
toLabel :: GLabel -> Label
toLabel (GLabel label) = label

-- choose the right switch instruction
switch :: Bool -> [(Tag,Label)] -> Maybe Label -> Ins
switch True  alts (Just def) = INT_SWITCH alts def
switch False alts (Just def) = LOOKUP_SWITCH alts def
switch False alts Nothing    = TABLE_SWITCH alts'
    where
    alts' = map snd $ sortBy (\(t,x) (u,y) -> compare t u) alts
