import NHC.FFI

main = do
  buf <- mallocBytes 1
  pokeByteOff buf 0 'X'
  c <- peekByteOff buf 0
  putStrLn "free"
  free buf
  buf <- mallocBytes 1
  pokeByteOff buf 0 ' '
  print (c::Char)
