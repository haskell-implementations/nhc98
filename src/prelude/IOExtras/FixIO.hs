module NHC.IOExtras where

import NHC.Internal (IO(..))

fixIO :: (a -> IO a) -> IO a
fixIO f = IO (\w -> let { IO f' = f a; r = f' w; Right a = r } in r)

{- The following implementation is incorrect.
-- fixIO f = let x = unsafePerformIO (f x) in return x
-}
