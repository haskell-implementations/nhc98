module Numeric (showFloat) where

import ShowGFloat

showFloat :: (RealFloat a) => a -> ShowS
showFloat = showGFloat Nothing

{-
-- All the code below is from a earlier version of the Numeric library.
-- It has now be replaced by the code above.

import Ratio(Ratio,Rational,(%))

-- The number of decimal digits m below is chosen to guarantee 
-- read (show x) = x.  See
--	Matula, D. W.  A formalization of floating-point numeric base
--	conversion.  IEEE Transactions on Computers C-19, 8 (1970 August),
--	681-692.

showFloat:: (RealFloat a) => a -> ShowS
showFloat x = if x < 0 then showChar '-' . showFloat' (negate x) else showFloat' x

showFloat' x =
{- !!! Lennart use the following lines, don't know if they are standard !!!
    if isNaN x then showString "NaN" else
    if isInfinite x then showString "Infinity" else
-}
    if x == 0 then showString ("0." ++ take (m-1) (repeat '0'))
	      else if e >= m-1 || e < 0 then showSci else showFix
    where
    showFix	= showString whole . showChar '.' . showString frac
		  where (whole,frac) = splitAt (e+1) (show sig)
    showSci	= showChar d . showChar '.' . showString frac
		      . showChar 'e' . shows e
    		  where (d:frac) = show sig

    (m, sig, e) = if b == 10 then (w,  	s,   n+w-1)
		  	     else (m', sig', e'   )
    m' :: Int
    m'		= ceiling
		      ((fromIntegral w * log (fromInteger b)) / log (fromInteger 10) :: Double)
		  + 1

    (sig', e')	= if	  sig1 >= (10::Integer)^m' then ((round (t/10))::Integer, e1+1)
		  else if sig1 <  (10::Integer)^(m'-1) then ((round (t*10))::Integer, e1-1)
		  			    else (sig1,		e1  )
    sig1 :: Integer
    sig1	= round t
    t  	 :: Rational
    t           = (s%1) * (b%1)^^n * 10^^(m'-e1-1)
    e1   :: Int
    e1		= floor (logBase 10 x)
    (s, n)	= decodeFloat x
    b		= floatRadix x
    w		= floatDigits x

-}
