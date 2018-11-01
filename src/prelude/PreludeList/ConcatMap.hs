module Prelude where

import Concat
import Map

concatMap  	:: (a->[b]) -> [a] -> [b]
concatMap f	= concat . map f
