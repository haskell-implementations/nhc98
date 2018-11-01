import Directory
import List

main = do
  d <- getCurrentDirectory
  putStrLn ("Current Dir: "++lastdir 4 d)
  fs <- getDirectoryContents d
  mapM_ (\f-> putStrLn ("    "++f)) (sort fs)

splitWith :: (a -> Bool) -> [a] -> [[a]]
splitWith p s =
   let (l, s') = break p s
   in  l : case s' of
           [] -> []
           (_:rest) -> splitWith p rest

lastdir :: Int -> FilePath -> FilePath
lastdir n = concat . intersperse "/"
            . reverse . take n . reverse . splitWith (=='/')
