module Prelude where

infixr 2  ||

(||) :: Bool -> Bool -> Bool
True  || _ = True
False || x = x
