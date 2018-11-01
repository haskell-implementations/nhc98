module Directory (Permissions(..),fromPerm,toPerm) where

data Permissions = Permissions {
    readable, writable, executable, searchable :: Bool
    } deriving (Eq, Ord, Read, Show)


fromPerm (Permissions r w x s) = (r, w, x, s)
toPerm   (r, w, x, s)          = (Permissions r w x s)
