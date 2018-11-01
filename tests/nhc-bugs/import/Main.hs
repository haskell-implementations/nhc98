-- This trivial newtype causes a compiler crash in nhc98-1.18.  It is
-- only triggered when the import Control.Monad is present!

module Main (main) where
import Control.Monad (liftM2)
newtype A a = A a

main :: IO ()
main = return ()

-- It turns out that the type variable 'a' was being checked for
-- correctness as if it were a constructor, but if the constructor
-- did not exist there was silence.  Only when an actual constructor
-- (or in this case, class) shared the same internal identity number as
-- the variable, did the error become visible.
