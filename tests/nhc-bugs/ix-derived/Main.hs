module Main where

import Array
import List
import Ix

data GMLOp
   = ConsOne
   | ConsTwo
    deriving (Show,Eq,Ord,Bounded,Enum,Ix)

{-
-- This is a dummy Ix (which leaverges Enum)
instance Ix GMLOp where
    range (a,b) = [a..b]
    index (ConsOne,ConsTwo) i = fromEnum i
    inRange (a,b) c = inRange (fromEnum a,fromEnum b) (fromEnum c)
-}

default (Int)

main = do
        print $ (minBound :: GMLOp)
        print $ (maxBound :: GMLOp)
        print $ (fromEnum (maxBound :: GMLOp))
        print $ range (minBound :: GMLOp,maxBound::GMLOp)
        print $ sort (range (minBound :: GMLOp,maxBound::GMLOp))
        print $ rangeSize (minBound :: GMLOp,maxBound::GMLOp)
        print $ inRange (minBound :: GMLOp,maxBound::GMLOp) ConsOne
        print $ inRange (minBound :: GMLOp,maxBound::GMLOp) ConsTwo

        print ((minBound :: GMLOp,maxBound::GMLOp) ,
              [ (i,()) | i <- [(minBound::GMLOp)..maxBound] ])

