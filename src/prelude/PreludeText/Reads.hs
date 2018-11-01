module Prelude where

import TReadS

reads 	        :: (Read a) => ReadS a

reads		=  readsPrec 0
