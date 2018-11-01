module NHC.PackedString where

import Prelude hiding(concat,nil,append)
import DPackedString
import Nil
import Append

concat :: [PackedString] -> PackedString
concat [] = nil
concat (p:ps) = append p (concat ps)
