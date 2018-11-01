module Prelude(Show(..)) where

instance  (Show a, Show b) => Show (Either a b)  where
  showsPrec p (Left a) = showParen (p >= 10) (showString "Left " . showsPrec 10 a)
  showsPrec p (Right a) = showParen (p >= 10) (showString "Right " . showsPrec 10 a)

  showsType a = showString "(Either " . (showsType . getLeft)  a . showChar ' ' 
				      . (showsType . getRight) a . showChar ')'
	where getLeft  (Left a)  = a
	      getRight (Right b) = b
