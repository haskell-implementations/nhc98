module Prelude(Show(..)) where

instance Show () where
  showsPrec p () = showString "()"

  showsType a = showString "()"
