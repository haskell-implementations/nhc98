module Ix(Ix(..)) where

import CIx

instance  (Ix a1, Ix a2, Ix a3) => Ix (a1,a2,a3)  where
    range ((l1,l2,l3),(u1,u2,u3)) =
          [(i1,i2,i3) | i1 <- range (l1,u1),
                        i2 <- range (l2,u2),
                        i3 <- range (l3,u3)]

    index ((l1,l2,l3),(u1,u2,u3)) (i1,i2,i3) =
        index (l3,u3) i3 + rangeSize (l3,u3) * (
         index (l2,u2) i2 + rangeSize (l2,u2) * (
           index (l1,u1) i1))

    inRange ((l1,l2,l3),(u1,u2,u3)) (i1,i2,i3) =
         inRange (l1,u1) i1
           && inRange (l2,u2) i2
           && inRange (l3,u3) i3
