data MachineInstruction = Test
                        deriving (Show, Read)
 

main = do
  putStrLn $ show $ Test
  print $ (read :: String->MachineInstruction) $ show $ Test

