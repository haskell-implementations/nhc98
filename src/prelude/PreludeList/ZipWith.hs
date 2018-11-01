module Prelude where

zipWith                  :: (a->b->c) -> [a]->[b]->[c]
zipWith z (b:bs) (c:cs)   = z b c : zipWith z bs cs
zipWith _ _      _        = []
