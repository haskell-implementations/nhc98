module Main(main) where
import Numbers
import Vectors
import Hide
import MyIO
import EdgePlate	( Input(..) )  -- partain
import Postscript	( Output(..) ) -- partain
import IO       -- 1.3

{- OPTIONS_LINK -H8M -}

main = 
  do
   ls <- hGetContents stdin
   (getFilename $
      process (\viewdir -> hiddenline viewdir. map read. lines))
              ("objects/four.plate" : lines ls)
