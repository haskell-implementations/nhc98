module Complex(Show(..)) where

import DComplex
import RealPart

instance  (RealFloat a) => Show (Complex a)  where
    showsPrec p (r :+ i) = showParen (p >= 6) (showsPrec 6 r . showString ":+" . showsPrec 6 i)

    showsType a = showString " (Complex " .  (showsType . realPart) a . showChar ')'
