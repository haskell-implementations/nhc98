import NHC.Binary
import NHC.BinArray

main = do
  let ws = words "This is a simple test."

  putStrLn (head ws)

  ba <- newBinArray 42 "unused"

  indices <- mapM (intoBinArray ba) ws
  check "BinArray 1 " (indices == [0 .. length ws - 1])

  putBinArray "test2.dat" ba
  ba2 <- getBinArray "test2.dat"
  ws2 <- mapM (fromBinArray ba2) (reverse [0 .. length ws - 1])

  putStrLn (head (reverse ws2))

  check "BinArray 2 " (reverse ws2 == ws)

 where
  check m b = putStrLn (m ++ if b then "ok" else "broken")
