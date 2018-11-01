{-
Used in nhc to replace data constructors from newtype definitions,
where simple removal is not possible (no argument).
This definition is not modified by the tracing transformation.
-}
module Prelude where

_id		:: a -> a
_id x 		= x
