module IO where

data BufferMode  =  NoBuffering | LineBuffering | BlockBuffering (Maybe Int)
                     deriving (Eq, Ord, Read, Show)
