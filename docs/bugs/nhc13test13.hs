{- nhc13 complains with:

/grp/haskell/york-nhc//lib/IRIX/nhc13comp: Error: No match in _isUnBoxedNT

If the import declaration is commented out and the first newtype
definition restored (which is the exact definition given in the
imported module) then no such error is given.

As of 20/11/97, we get:

/grp/haskell/york-nhc/lib/IRIX/nhc13comp: Error: nhc13 needs a fix here, but I don't know how

:-)

-}

import Nhc13Test13 (Set)

--newtype Set a = Set [a]

newtype Subset a = Subset (Set a)

main = print True
