module Maybe where

isNothing                 :: Maybe a -> Bool
isNothing Nothing         =  True
isNothing _               =  False
