module Main (main) where                      
                                                
import IO                                     
                                                
main :: IO()                                  
main = do _ <- foldl foo (return 14) ["qq\n", "ww\n", "ee\n"]
          putStr ""                           
                                                
foo :: IO Int -> String -> IO Int             
foo io_l s = do l <- io_l                     
                () <- putStr s                
                io_l                       

