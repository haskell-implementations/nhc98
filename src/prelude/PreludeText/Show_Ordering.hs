module Prelude(Show(..)) where

instance Show Ordering where
  showsPrec p LT = showString "LT"
  showsPrec p EQ = showString "EQ"
  showsPrec p GT = showString "GT"

  showsType a = showString "Ordering"
