import NHC.FFI

main = do
  print value1
  print value2
  print value3
  print value4
  print (fromIntegral value1)
  print (fromIntegral value2)
  print (fromIntegral value3)
  print (fromIntegral value4)

value1,value2,value3,value4 :: Int64
value1 =  0xffffffffffff
value2 = -0xffffffff
value3 =  0xfffff
value4 = -0xfff

