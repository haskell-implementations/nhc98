module Prelude where

_filter :: Bool -> ([a]->[a]) -> [a] -> [a]
_filter b e r = if b then e r else r

