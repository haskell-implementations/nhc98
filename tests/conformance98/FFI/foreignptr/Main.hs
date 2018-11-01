import NHC.FFI
import Monad (when)

newtype FILE = FILE (ForeignPtr FILE)

foreign import noproto "fopen"  fopenC  :: CString -> CString -> IO (Ptr FILE)
foreign import noproto "fwrite" fwriteC :: CString -> Int -> Int -> FILE -> IO Int
foreign import noproto "fclose" fcloseC :: FILE -> IO Int
foreign import ccall "&fclose" fcloseImmediate :: FunPtr (Ptr FILE -> IO ())

fopen :: String -> IO FILE
fopen name = do
    n <- newCString name
    m <- newCString "w+"
--  a <- withCString name (\n-> withCString "w+" (\m-> fopenC n m))
    a <- fopenC n m
    when (a==nullPtr)
         (do putStrLn "fopen failed")
    f <- newForeignPtr fcloseImmediate a -- (putStrLn "finalised!")
    destruct n
    destruct m
    return (FILE f)

fwrite :: String -> Int -> FILE -> IO ()
fwrite str n f = do
    s <- newCString str
    err <- fwriteC s 1 n f
    destruct s
    if n/=err then
      putStrLn ("fwrite: succeeded in writing only "++show err
                ++" of "++show n++" bytes requested.")
      else return ()

fclose :: FILE -> IO ()
fclose f = do
    err <- fcloseC f
    if err/=0 then
      putStrLn ("fclose: failed to close file.")
      else return ()

main = do
    putStrLn "f <- fopen temporary"
    f <- fopen "temporary"
    putStrLn "fwrite \"hello world\\n\" 7 f"
    fwrite "hello world\n" 7 f
    putStrLn "fwrite \"orld\\n\" 5 f"
    fwrite "orld\n" 5 f
--  putStrLn "fclose f"
--  fclose f
    putStrLn "f <- fopen /dev/null"
    f <- fopen "/dev/null"
    putStrLn "mapM_ (\\n-> fwrite (show n) 1 f) [1..1000]"
    mapM_ (\n-> fwrite (show n) 1 f) [1..1000]
    putStrLn "done"
