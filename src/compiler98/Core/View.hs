
module Core.View(viewCore) where

import Yhc.Core


viewCore :: FilePath -> IO ()
viewCore file = loadCore file >>= print

