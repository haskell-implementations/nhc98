module NHC.Binary
  ( (<<)
  , castFst
  ) where

infixl <<
(<<) :: ((a->b),c) -> (c->(a,d)) -> (b,d)
 
-- Strict <<
--(f,c) << g = castFst f (g c)

-- Lazy <<
(f,c) << g = (\a-> (f (fst a), snd a)) (g c)

castFst :: (a->c) -> (a,b) -> (c,b)
castFst f (x,y) = (f x, y)
 
