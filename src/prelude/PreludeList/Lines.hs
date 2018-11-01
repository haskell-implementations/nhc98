module Prelude where

lines	   	:: String -> [String]

-- specification in the Report:
--
lines ""	= []
lines s	= let (l,s') = break (== '\n') s 
	  in l : case s' of
		      []      -> []
		      (_:s'') -> lines s''


-- more efficient but less lazy:
--
-- lines = foldr f []
--   where
--     f '\n' xss = "" : xss
--     f x [] = [[x]]
--     f x (ys:yss) = (x:ys) : yss



-- more efficient still:
--
-- lines [] = []
-- lines (x:xs) = f x (lines xs)
--   where
--      f '\n' xss = "" : xss
--      f x [] = [[x]]
--      f x (ys:yss) = (x:ys) : yss



-- even more efficient:
--
-- lines s = lines' s id
--   where
--   lines' []       acc = [acc []]
--   lines' ('\n':s) acc = acc [] : lines' s id
--   lines' (c:s)    acc = lines' s (acc . (c:))

