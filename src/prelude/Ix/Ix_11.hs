module Ix(Ix(..)) where

import CIx

instance (Ix a1, Ix a2, Ix a3, Ix a4, Ix a5, Ix a6, Ix a7, Ix a8, Ix a9
	 ,Ix a10, Ix a11) =>
	 Ix (a1,a2,a3,a4,a5,a6,a7,a8,a9,a10,a11)  where
    range ((l1,l2,l3,l4,l5,l6,l7,l8,l9,l10,l11)
	  ,(u1,u2,u3,u4,u5,u6,u7,u8,u9,u10,u11)) =
          [(i1,i2,i3,i4,i5,i6,i7,i8,i9,i10,i11)
			 | i1 <- range (l1,u1),
                           i2 <- range (l2,u2),
                           i3 <- range (l3,u3),
                           i4 <- range (l4,u4),
                           i5 <- range (l5,u5),
                           i6 <- range (l6,u6),
                           i7 <- range (l7,u7),
                           i8 <- range (l8,u8),
                           i9 <- range (l9,u9),
                           i10 <- range (l10,u10),
                           i11 <- range (l11,u11)]

    index ((l1,l2,l3,l4,l5,l6,l7,l8,l9,l10,l11)
	  ,(u1,u2,u3,u4,u5,u6,u7,u8,u9,u10,u11))
          (i1,i2,i3,i4,i5,i6,i7,i8,i9,i10,i11) =
          index (l11,u11) i11 + rangeSize (l11,u11) * (
           index (l10,u10) i10 + rangeSize (l10,u10) * (
            index (l9,u9) i9 + rangeSize (l9,u9) * (
             index (l8,u8) i8 + rangeSize (l8,u8) * (
              index (l7,u7) i7 + rangeSize (l7,u7) * (
               index (l6,u6) i6 + rangeSize (l6,u6) * (
                index (l5,u5) i5 + rangeSize (l5,u5) * (
                 index (l4,u4) i4 + rangeSize (l4,u4) * (
                  index (l3,u3) i3 + rangeSize (l3,u3) * (
                   index (l2,u2) i2 + rangeSize (l2,u2) * (
                    index (l1,u1) i1))))))))))

    inRange ((l1,l2,l3,l4,l5,l6,l7,l8,l9,l10,l11)
	    ,(u1,u2,u3,u4,u5,u6,u7,u8,u9,u10,u11))
            (i1,i2,i3,i4,i5,i6,i7,i8,i9,i10,i11) =
         inRange (l1,u1) i1
           && inRange (l2,u2) i2
           && inRange (l3,u3) i3
           && inRange (l4,u4) i4
           && inRange (l5,u5) i5
           && inRange (l6,u6) i6
           && inRange (l7,u7) i7
           && inRange (l8,u8) i8
           && inRange (l9,u9) i9
           && inRange (l10,u10) i10
           && inRange (l11,u11) i11
