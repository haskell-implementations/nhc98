-----------------------------------------------------------------------------
-- |
-- Module      :  Tsort
-- Copyright   :  Thomas Hallgren?  Lennart Augustsson?
-- 
-- Maintainer  :  Malcolm Wallace <Malcolm.Wallace@cs.york.ac.uk>
-- Stability   :  Stable
-- Portability :  All
--
-- partial topological sort
-----------------------------------------------------------------------------

module Tsort(ptsort) where
import Compat(difference)
import List

-- | partial topological sort
--
--		ptsort G sorts the graph G.  A graph is a list of nodes, each
--		node is a pair, a name and a list of names of connected nodes.
--
--		The output is a list of lists, where the lists contain nodes
--		that come before nodes occuring in later lists.
--		The order of nodes within each list is arbitrary and not
--		determined by the graph.
ptsort :: (Eq a) => [(a, [a])] -> [[a]]
ptsort [] = []
ptsort gG =
    case partition (\(_, x) -> null x) gG of
      ([], _) -> error "ptsort: cycle in data\n"
      (a, b) -> let a' = map fst a
                in  a' : ptsort (map (\(x, xs) -> (x, difference xs a')) b)
