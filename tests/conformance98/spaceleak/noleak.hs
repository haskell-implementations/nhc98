main    = let local _ = repeat ""
          in mapM_ putStr (local ())
