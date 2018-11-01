module Maybe where

isJust                 :: Maybe a -> Bool
isJust (Just a)        =  True
isJust Nothing         =  False
