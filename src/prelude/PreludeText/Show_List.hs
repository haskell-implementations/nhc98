module Prelude(Show(..)) where

instance (Show a) => Show [a] where
  showsPrec p = showList

  showsType a = showChar '[' . (showsType . head) a . showChar ']'
