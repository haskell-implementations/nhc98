module Ix where

class (Ord a) => Ix a  where
    range     :: (a,a) -> [a]
    index     :: (a,a) -> a -> Int
    inRange   :: (a,a) -> a -> Bool
    rangeSize :: (a,a) -> Int

    rangeSize b@(l,h)
	| null (range b) = 0
	| otherwise      =  index b h + 1

                    -- NB: replacing "null (range b)" by  "not (l <= h)"
                    -- fails if the bounds are tuples.  For example,
                    --      (1,2) <= (2,1)
                    -- but the range is nevertheless empty
                    --      range ((1,2),(2,1)) = []

