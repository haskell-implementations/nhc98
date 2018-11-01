import NHC.FFI

main = do
  print v1
  print v2
  print v3
  print v4
  print (fromIntegral v1)
  print (fromIntegral v2)
  print (fromIntegral v3)
  print (fromIntegral v4)

v1,v2,v3,v4 :: Word64
v1 = 0xffffffffffff
v2 = 0xffffffff
v3 = 0xfffff
v4 = 0xfff

