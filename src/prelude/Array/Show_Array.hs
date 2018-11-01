module Array(Show(..)) where

import Ix
import DArray
import Assocs
import Bounds
import Elems
import ArrPrec

instance  (Ix a, Show a, Show b) => Show (Array a b)  where
    showsPrec p a = showParen (p > arrPrec)
                      ( showString "array "
                      . showsPrec (arrPrec+1) (bounds a) . showChar ' '
                      . showsPrec (arrPrec+1) (assocs a)
                      )

    showsType a = showString " (Array " .  (showsType . fst . bounds) a
                  . showChar ' ' . (showsType . head . elems) a . showChar ')'
