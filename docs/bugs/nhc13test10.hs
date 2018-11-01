-- FIXED.

{- nhc13 should accept this and the export of Nhc13Test10 as it lists
all methods, all none of them.  "nhc14" should accept this for any
class at all. -}

import Nhc13Test10 (Class())

main = print True
