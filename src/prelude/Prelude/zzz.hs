module Prelude where

applyM {- primitive 2 -} ::(Monad b) => ((a -> (b c)) -> ((b a) -> (b c)))

mapM {- primitive 2 -} ::(Monad b) => ((a -> (b c)) -> ([a] -> (b [c])))

atan2 {- primitive 2 -} ::(RealFloat a) => (a -> (a -> a))

applyM = error ""
mapM = error ""
atan2 = error ""
