module IO where

import qualified Ix

data SeekMode    =  AbsoluteSeek | RelativeSeek | SeekFromEnd
                     deriving (Eq, Ord, Ix.Ix, Bounded, Enum, Read, Show)
