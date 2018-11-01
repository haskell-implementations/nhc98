module IO where

import qualified Ix

data IOMode      =  ReadMode | WriteMode | AppendMode | ReadWriteMode
                     deriving (Eq, Ord, Ix.Ix, Bounded, Enum, Read, Show)
