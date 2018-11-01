module Prelude (Show(..)) where

import NHC.Internal (IO(..),World(..))

instance (Show a) => Show (IO a) where
  showsPrec d a = showString "<<IO action>>"

  showsType a = showString "(IO " . showsType ta . showChar ')'
		   where (IO fta) = a
                         (Right ta) = fta World 
