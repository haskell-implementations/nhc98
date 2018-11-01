module Prelude (Show(..)) where

--import Numeric(showSigned{-,showInt-})

instance Show Int where

 -- We don't want to use the generic showsPrec and showInt, as they use Integer
 --  showsPrec = showSigned showInt

  showsPrec p x =
    if x < 0 then showParen (p > 6)
      (showChar '-' . if x == minBound
                      then showString "2147483648" -- WARNING 32bit
                      else showPosInt (negate x))
    else 
      showPosInt x
   where
     showPosInt :: Int -> String -> String
     showPosInt n r =
	  let
	      quot10,rem10 :: Int -> Int   -- makes it easier for nhc98 to use byte code instructions
	      quot10 n = n `quot` 10
	      rem10 n = n `rem` 10
	      nr :: Int -> Char      -- the magic constant 48 is fromEnum '0'
	      nr d = toEnum (48 + d) -- nhc98 can only remove toEnum if it's in a strict context
	      n' = quot10 n
	      d' = rem10 n
	      r' :: [Char]
	      r' = nr d' : r
	  in if n' == 0 then r' else showPosInt n' r'

  showsType a = showString "Int"
