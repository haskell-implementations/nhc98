module Prelude where

zipWith3                 :: (a->b->c->d) -> [a]->[b]->[c]->[d]
zipWith3 z (b:bs) (c:cs) (d:ds)
                          = z b c d : zipWith3 z bs cs ds
zipWith3 _ _ _ _          = []

