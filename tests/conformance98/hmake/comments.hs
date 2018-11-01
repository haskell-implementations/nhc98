module Comments where

  import
    qualified
      Prelude (thing)
  import {-tricky{-nested-}-} H98
  import {-tricky-} -- comment to end of line
    H13
 
  comment = id

  foreign import hello :: Int -> IO String
  foreign
    import		-- This one still breaks hmake 1.6
      helloagain :: Int -> String
