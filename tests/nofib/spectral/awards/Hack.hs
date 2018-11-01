-- In a public award scheme, each entrant can receive awards
-- based on their scores in a number of events.  To achieve an
-- award, the competitor must have competed in three events
-- and achieved a total score greater than the fixed threshold
-- for the award.

-- No score can be counted towards more than one award, 
-- but there is no limit on the total number of awards that can be won.

-- The thresholds for the various awards are:
--	Gold	70 points
--	Silver	60 points
--	Bronze	50 points

import QSort
import List hiding (sort)	-- ((\\))
--import NonStdTrace
trace x y = y

-- Generate all possible permutations of length m from a list of scores
perms m l = trace ("Entering perms "++show m++" "++show l++"\n") $ perms' m l
perms' m [] = []
perms' 1 l  = map (: []) l
perms' m (n:ns) = map ((:) n) (perms' (m-1) ns) ++ perms' m ns

gold   () = ("Golden",70)
silver () = ("Silver",60)
bronze () = ("Bronze",50)

-- Find the (sorted) list of possible awards for a list of scores
awards scores =
    trace ("Entering awards "++show scores++"\n") $
    award ("Gold",70) ++ award ("Silver",60) ++ award ("Bronze",50)
 -- concat [award (gold()), award (silver()), award (bronze())]
  where
    sumscores = map (\ p -> (sum p, p)) (perms 3 scores)
    atleast threshold = filter (\(thesum,p) -> thesum >= threshold) sumscores
    award (name,threshold) = map (\ ps -> (name,ps)) (sort (atleast threshold))

-- Find all possible awards for a list of scores, counting each score once only
findawards scores = trace ("Entering findawards "++show scores++"\n") $ findawards' scores
findawards' scores | null (theawards ()) = []
  	           | otherwise = firstaward : findawards (scores \\ perm)
	where firstaward@(_    ,(_  ,perm)) = head (theawards ())
	      theawards () = awards scores

-- Find the awards for all competitors, each competitor is a pair of
-- (Name, list of scores)
--findallawards :: (Ord a, Num a) => [(b,[a])] -> [(b,[([Char],(a,[a]))])]
findallawards :: [(String,[Int])] -> [(String,[(String,(Int,[Int]))])]
findallawards competitors = 
	trace "Entering findallawards.\n" $
	map (\ (name,scores) -> (name, findawards scores)) competitors


competitors :: [(String,[Int])]
competitors = trace "Entering competitors.\n" $
              [
		("Simon",[31,22,40,19,34,21]), 
--		("Simon",[35,27,40,19,34,21]), 
		("Hans",[23,19,45,17,10,5,8,14]),
--		("Hans",[23,19,45,17,10,5,8,14]),
		("Phil",[1,18,35,20,21,19,34,8,16,21]),
--		("Phil",[1,18,35,20,21,19,34,8,16,21]),
		("Kevin",[9,23,17,54,18,41,9,18,14])
--		("Kevin",[9,23,17,54,18,41,9,18,14])
	      ]

main = print (findallawards competitors)
