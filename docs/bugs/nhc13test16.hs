{- This should cause a complaint as IO and print should be qualified
with Prelude.  Note that () is special and should not be qualified
(HBC and GHC fail on this :-). -}

--import Prelude ()
import qualified Prelude

main :: IO ()
main = print Prelude.True
