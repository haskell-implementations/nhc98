module NHC.Binary
  ( {-type-} BinIOMode(..)
  ) where

data BinIOMode = RO | WO | RW deriving (Eq, Ord, Enum)
