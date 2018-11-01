module System where

import NHC.FFI

foreign import ccall cGetArg      :: IO (Ptr Char)
foreign import cast  ptrToCString :: (Ptr Char) -> IO PackedString

getArgs  :: IO [String]
getArgs =
-- The use of unsafePerformIO followed by return is a slightly bizarre
-- way of ensuring that the stateful computation gets executed once
-- and once only.
  let args = unsafePerformIO (getThem ())
  in return args
 where
  getThem () = do
    a <- cGetArg
    if (a==nullPtr) then return []
      else do arg  <- ptrToCString a
              args <- getThem ()
              return (fromCString arg:args)
