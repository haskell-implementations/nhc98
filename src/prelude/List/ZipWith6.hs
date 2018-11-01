module List where

zipWith6                 :: (a->b->c->d->e->f->g)
                            -> [a]->[b]->[c]->[d]->[e]->[f]->[g]
zipWith6 z (b:bs) (c:cs) (d:ds) (e:es) (f:fs) (g:gs) 
                          = z b c d e f g : zipWith6 z bs cs ds es fs gs
zipWith6 _ _ _ _ _ _ _    = []

