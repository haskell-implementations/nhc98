module Numeric(readInt) where

import Nonnull

readInt :: (Integral a) => a -> (Char -> Bool) -> (Char -> Int) -> ReadS a

-- readInt :: (Integral a) => a -> (Char -> Bool) -> (Char -> Int) -> (String -> [(a,String)])

readInt radix isDig digToInt s =
    [(foldl1 (\n d -> n * radix + d) (map (fromIntegral . digToInt) ds), r)
	| (ds,r) <- nonnull isDig s ]

