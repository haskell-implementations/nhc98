module List where

zipWith7                 :: (a->b->c->d->e->f->g->h)
                             -> [a]->[b]->[c]->[d]->[e]->[f]->[g]->[h]
zipWith7 z (b:bs) (c:cs) (d:ds) (e:es) (f:fs) (g:gs) (h:hs)
                          = z b c d e f g h : zipWith7 z bs cs ds es fs gs hs
zipWith7 _ _ _ _ _ _ _ _  = []

