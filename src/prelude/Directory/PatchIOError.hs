module Directory
  ( patchIOError
  , patchIOErrorVal
  , patchIOErrorF
  , patchIOErrorFVal) where

import NHC.FFI

returnEither :: String -> Maybe String -> Int -> a -> IO a
returnEither cmd file err val =
  if err == -1 then do errno <- getErrNo
                       throwIOError cmd file Nothing errno
               else return val

patchIOError :: String -> IO Int -> IO ()
patchIOError cmd comp = do
  err <- comp
  returnEither cmd Nothing err ()

patchIOErrorVal :: String -> IO (Int,a) -> IO a
patchIOErrorVal cmd comp = do
  (err,val) <- comp
  returnEither cmd Nothing err val

----
 
patchIOErrorF :: String -> String -> (String -> IO Int) -> IO ()
patchIOErrorF cmd f comp = do
  err <- comp f
  returnEither cmd (Just f) err ()

patchIOErrorFVal :: String -> String -> (String -> IO (Int,a)) -> IO a
patchIOErrorFVal cmd f comp = do
  (err,val) <- comp f
  returnEither cmd (Just f) err val

