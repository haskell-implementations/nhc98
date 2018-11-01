module Prelude(Integral(..)) where

import PrimIntegerFromInt

instance Integral Int  where
    n `quot`    d   	= n `quot` d			-- MAGIC 
    n `rem`     d   	= n `rem`  d			-- MAGIC
    n `quotRem` d 	= (n `quot` d, n `rem` d) 	-- er, not so MAGIC!

    toInteger n 	= primIntegerFromInt n

