-- | Function to performs memory and zapping analysis on bycode
module ByteCode.Analysis(bcAnalysis) where

import ByteCode.Graph
import ByteCode.Type
import ByteCode.Metric
import Control.Monad.State
import qualified Data.Set as Set
import qualified Data.Map as Map
import Id
import Flags

-- | Annotates bytecode declarations with memory and zapping analysis
--   results, and inserts @NEED_HEAP@ instructions as necessary.
bcAnalysis :: Flags -> BCModule -> BCModule
bcAnalysis fl m = m { bcmDecls = map (anDecl fl) $ bcmDecls m }

anDecl :: Flags -> BCDecl -> BCDecl
anDecl flags (Fun n p z as cs cn pr st nd fl) = Fun n p z as (anCode flags as cs) cn pr st nd fl
anDecl flags x                                = x

anCode :: Flags -> [String] -> Code -> Code
anCode flags as (CGraph start graph jumps) =
    let mst       = GState start graph jumps ()
        ((),mst') = runState (memGraph flags) mst

        zst       = GState (gsStart mst') (gsGraph mst') (gsJumpers mst') Map.empty
        zst'      = execState (zapInits as (gsStart mst')) zst
    in
      CGraph (gsStart zst') (gsGraph zst') (gsJumpers zst')

----------------------------------------------------------------------------------------------
-- memory analysis looks at each linear block and determines how much memory
-- it needs and inserts NEED_HEAP instructions if necessary.
----------------------------------------------------------------------------------------------

type MemMonad a = GraphMonad () a

-- do memory analysis for every node in the graph
memGraph :: Flags -> MemMonad ()
memGraph flags =
    do labels <- gGetLabels
       mapM_ (memLabel flags) labels

-- do memory analysis for the node given by a particular label
memLabel :: Flags -> GLabel -> MemMonad ()
memLabel flags label =
    do node <- gGetNode label
       case node of
           GLinear ins eval next -> memLinear flags label node
           _                     -> return ()

-- do the memory analysis for the linear block of code,
-- scans the instructions and inserts a need-heap instruction if needed
memLinear :: Flags -> GLabel -> GraphNode -> MemMonad ()
memLinear flags label (GLinear isus eval next) =
        gSetNode label (GLinear isus' eval next)
    where
    isus' = memIns flags (reverse isus) 0 []


-- perform memory analysis for a block of instructions, we also need to consider dynamic instructions
memIns :: Flags -> [UseIns] -> Int -> [UseIns] -> [UseIns]
memIns flags []             need acc = (NEED_HEAP need,emptyUS) : acc
memIns flags (iu@(i,u):ius) need acc =
    case imHeap (bcodeMetric i) of
       HeapStatic f -> memIns flags ius (need+f extra) (iu:acc)
       HeapDynamic ->  memIns flags ius 0 (iu:(NEED_HEAP need,emptyUS):acc)
    where
    extra = calcHeapExtra flags

----------------------------------------------------------------------------------------------
-- stack zapping analysis
----------------------------------------------------------------------------------------------

type ZapMonad a = GraphMonad (Map.Map GLabel NeedSet) a

type NeedSet = Set.Set String

----------------------------------------------------------------------------------------------
-- monadic helper functions

zapGetNeeds :: GLabel -> ZapMonad (Maybe NeedSet)
zapGetNeeds label = gReadX $ \ s -> Map.lookup label s

zapSetNeeds :: GLabel -> NeedSet -> ZapMonad ()
zapSetNeeds label set = gWriteX_ $ \ s -> Map.insert label set s

----------------------------------------------------------------------------------------------
-- zap analysis

-- do zapping analysis for the whole graph, and then
-- zap the arguments if they aren't needed
zapInits :: [String] -> GLabel -> ZapMonad ()
zapInits have label =
    do need <- zapGraph label
       last <- gAlwaysReturns label
       let hs = zip have [0..]
           zaps = [ (ZAP_ARG n,UseSet 0 [h] need) | (h,n) <- hs, not (h `Set.member` need) ]
       if null zaps || last then
          return ()
        else
          do node <- gGetNode label
             let node' = case node of
                             GLinear ins eval next ->
                                 GLinear (zaps++ins) eval next
             gSetNode label node'

-- zap a whole graph, mostly just recursively boiler-plate
zapGraph :: GLabel -> ZapMonad NeedSet
zapGraph label =
    do set <- zapGetNeeds label
       case set of
           Just need -> return need
           Nothing   ->
               do node <- gGetNode label
                  need <- case node of
                              GLinear ins eval next ->
                                  zapLinear label node
                              GIf true false ->
                                  do tset <- zapGraph true
                                     fset <- zapGraph false
                                     return $ tset `Set.union` fset
                              GCase int alts mdef ->
                                  do asets <- mapM (\(t,j) -> zapGraph j) alts
                                     dset  <- maybe (return Set.empty) zapGraph mdef
                                     return $ Set.unions (dset:asets)
                              GReturn ->
                                  return Set.empty
                              GDead ->
                                  error $ "zapGraph: reached dead code "++show label
                  zapSetNeeds label need
                  return need

-- zap a linear block of code, calculating the set and updating instructions
zapLinear :: GLabel -> GraphNode -> ZapMonad NeedSet
zapLinear label (GLinear ins eval next) =
    do last <- gAlwaysReturns label
       need <- zapGraph next
       let (ins',need') = zapAll last ins need

       gSetNode label (GLinear ins' eval next)
       return need'

-- zap a list of instructions
zapAll :: Bool -> [UseIns] -> NeedSet -> ([UseIns],NeedSet)
zapAll last []     us = ([],us)
zapAll last (i:is) us =
    let (is',us1) = zapAll last is us
        (i',us2)  = zapIns last i us1
    in (i' ++ is',us2)

-- zap analysis for a single instruction
zapIns :: Bool -> UseIns -> NeedSet -> ([UseIns],NeedSet)
zapIns last (i,UseSet depth give need) us = (ins',us')
   where
   ins' = zapTransform last ins
   ins = (i, UseSet depth give us)
   us' = us `Set.union` need

-- transform a single instruction
zapTransform :: Bool -> UseIns -> [UseIns]
zapTransform last (i, use@(UseSet depth give need)) = rs
    where
    [g] = give
    rs = map (\i -> (i,use)) is
    is = case i of
             PUSH_ARG n -> if save g then [PUSH_ARG n]
                                     else [PUSH_ZAP_ARG n]
             PUSH n     -> if save g then [PUSH n]
                                     else [PUSH_ZAP n]
             UNPACK n   -> [UNPACK n] ++ if last then [] else zaps
                 where
                 zaps = concatMap (\(g,n) -> if save g then [] else [ZAP_STACK n]) (zip give [0..])
             x          -> [x]

    save g = g `Set.member` need
