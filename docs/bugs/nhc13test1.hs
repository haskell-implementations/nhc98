-- FIXED.

{- nhc13 does not allow import of qualified restricted entities,
neither does hugs1.4, but hbc does. -}

import qualified Nhc13Test1 as N (add1)
--import qualified Nhc13Test1 as N

main = print (N.add1 2)
