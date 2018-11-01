module Prelude where

infixr 3  &&

(&&) :: Bool -> Bool -> Bool
True  && x = x
False && _ = False
