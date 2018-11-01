module Prelude(Show(..)) where

instance  (Show a) => Show (Maybe a)  where
  showsPrec p Nothing  = showString "Nothing"
  showsPrec p (Just a) = showParen (p >= 10)
                                 (showString "Just " . showsPrec 10 a)

  showsType a = showString "(Maybe " . showsType ta . showChar ')'
		  where (Just ta) = a

