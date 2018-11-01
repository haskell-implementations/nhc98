-- FIXED.

{- nhc13 seems to print doubles less than 0.1 incorrectly.  The
following is printed as

(1.0000000000000001e-1, 9.00000000000000, 1.00000000000000)

-}

main = print (0.1,0.09,0.01)

