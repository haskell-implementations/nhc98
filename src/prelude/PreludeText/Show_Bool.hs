module Prelude(Show(..)) where

instance Show Bool where
  showsPrec p False = showString "False"
  showsPrec p True = showString "True"

  showsType a = showString "Bool"
