module List where

zipWith5                 :: (a->b->c->d->e->f) -> [a]->[b]->[c]->[d]->[e]->[f]
zipWith5 z (b:bs) (c:cs) (d:ds) (e:es) (f:fs)
                          = z b c d e f : zipWith5 z bs cs ds es fs
zipWith5 _ _ _ _ _ _      = []

