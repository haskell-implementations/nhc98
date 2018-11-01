-----------------------------------------------------------------------------
-- |
-- Module      :  Order
-- Copyright   :  Thomas Hallgren? Lennart Augustsson?
-- 
-- Maintainer  :  Malcolm Wallace <Malcolm.Wallace@cs.york.ac.uk>
-- Stability   :  Stable
-- Portability :  All
--
-- Provides a strongly connected component topological sort.
-----------------------------------------------------------------------------

module Order (closegraph, decorate, scctsort) where
import Compat(assocFail)
import Graph(scceq)
import ListUtil(lconcatMap)
import Tsort
import Utils(apair, asnd, pairwith)

-- unused in hmake
decorate :: (Eq a) => [(a, b)]
         -> (t, [[a]])
         -> (t, [[(a, b)]])
decorate g = asnd (map (map (\f -> (f, assocFail f g))))

-- | Topological sort of strongly connected components.
--   Nodes within a scc will appear in an arbitrary order.
scctsort g =
    let sccg = scceq (==) g
        sccs = map (map fst) sccg
        cg = map collapse_node sccg
        sortg = (ptsort . rmreflx . closegraph . collapse_graph sccs) cg
    in  sccs


closegraph g =
    let nodes = map fst g
        isnode f = f `elem` nodes
    in  map (asnd (filter isnode)) g

rmreflx xs = map (\(f, fs) -> (f, filter (/= f) fs)) xs

collapse_node ((f, fs) : ms) = (f, fs ++ concat (map snd ms))

collapse_graph eq = map (apair (pairwith map (reprnode eq)))

reconstruct sccg f =
    assocFail f (map (\((f', _) : fs) -> (f', f' : map fst fs)) sccg)

reprnode eq a = (head . head . filter (a `elem`)) eq

