module List where

zipWith4                 :: (a->b->c->d->e) -> [a]->[b]->[c]->[d]->[e]
zipWith4 z (b:bs) (c:cs) (d:ds) (e:es)
                          = z b c d e : zipWith4 z bs cs ds es
zipWith4 _ _ _ _ _        = []

