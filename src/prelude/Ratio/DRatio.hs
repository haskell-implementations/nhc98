module Ratio (Ratio(..)) where

infixl 7 :%

data Integral a => Ratio a = !a :% !a
