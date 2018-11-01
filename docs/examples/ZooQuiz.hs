module Main where

import IO
import Binary
import qualified Binary
import Directory
import System

data ZooTree = ZT (Bin ZooTree) (Bin ZooTree) String
               deriving Binary

zero = int2BinPtr 0

main = do
  exists <- doesFileExist "zoo"
  zoo    <- openBin (File "zoo" RW)
  (root,eof) <- (if exists then
                     get zoo
                 else do
                     put zoo (zero,zero)
                     root <- put zoo (ZT zero zero "dog")
                     eof  <- tellBin zoo
                     putAt zoo zero (root,eof)
                     return (root,eof)
                 )
  (_,_,end)  <- untilCatch isEOFError 
                    ( \(p, z, end) -> do
                      ( if p==zero then
                          qanda "Have you thought of an animal"
                            (return ()) 
                            (finish zoo zero end)
                         else return ())
                      (ZT y n s) <- getAt zoo z
                      ( if (y == zero) then 
                          qanda ("Is it a "++s++"?")
                            ( do newroot <- getAt zoo zero
                                 return (zero, newroot, end) )
                            ( do putStrLn "What is it then?"
                                 t <- getLine
                                 putStrLn ("What question has answer yes for a "
                                           ++s++" but no for a "++t)
                                 q <- getLine
                                 putAt zoo end (ZT zero zero t)
                                 qpos <- put zoo (ZT z end q)
                                 newend <- tellBin zoo
                                 putAt zoo p qpos
                                 newroot <- getAt zoo zero
                                 return (zero, newroot, newend) )
                         else
                          qanda s
                            (return (unsafeShiftBinPtr 0            z, y, end))
                            (return (unsafeShiftBinPtr sizeofBinPtr z, n, end)))
                    ) (zero {-:: Bin (Bin ZooTree)-}, root, eof)
  finish zoo zero end

qanda :: String -> (IO a) -> (IO a) -> (IO a)
qanda q y n = do
  putStrLn q
  (a:_) <- getLine
  case a of
    'y' -> y
    'n' -> n 
    _   -> putStrLn "Start answer y or n." >> qanda q y n

finish zoo zero end = do
  putAt zoo (unsafeShiftBinPtr sizeofBinPtr zero) end
  closeBin zoo
  exitWith ExitSuccess

------
untilCatch  :: (IOError->Bool) -> (a->IO a) -> a -> IO a
untilCatch_ :: (IOError->Bool) ->     IO () ->      IO ()

untilCatch p f a =
  catch (f a >>= \x-> return (True,x))
        (\e-> if p e then return (False,a) else ioError e)
  >>= \(ok,a')->
  if ok then untilCatch p f a' else return a'

untilCatch_ p f =
  catch (f >> return True)
        (\e-> if p e then return False else ioError e)
  >>= \ok->
  if ok then untilCatch_ p f else return ()

------
