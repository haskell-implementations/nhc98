module Prelude where

any		:: (a -> Bool) -> [a] -> Bool 
any p		= or . map p
