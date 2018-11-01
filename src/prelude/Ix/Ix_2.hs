module Ix(Ix(..)) where

import CIx

instance  (Ix a, Ix b)  => Ix (a,b) where
         range ((l,l'),(u,u'))
                 = [(i,i') | i <- range (l,u), i' <- range (l',u')]
         index ((l,l'),(u,u')) (i,i')
                 =  index (l,u) i * rangeSize (l',u') + index (l',u') i'
         inRange ((l,l'),(u,u')) (i,i')
                 = inRange (l,u) i && inRange (l',u') i'

