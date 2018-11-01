module Prelude where

infixl 9 !!

(!!) :: [a] -> Int -> a

[]     !! _ = error "PreludeList.!!: on empty list"
(x:_)  !! 0 = x
(_:xs) !! n = 
  if n < 0 then
    error "Prelude.!!: negative index"
  else
    xs `walk` (n-1)
 where
   walk           :: [a] -> Int -> a
   [] `walk` _     = error "Prelude.!!: index too large"
   (x:xs) `walk` 0 = x
   (_:xs) `walk` n = xs `walk` (n-1)

