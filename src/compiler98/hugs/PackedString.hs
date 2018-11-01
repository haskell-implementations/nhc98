{- ---------------------------------------------------------------------------
Pseudo-implementation of a packed string
-}

module PackedString(PackedString,packString,unpackPS) where


newtype PackedString = P String deriving (Eq, Ord, Show)

packString :: String -> PackedString
packString = P

unpackPS :: PackedString -> String
unpackPS (P s) = s


