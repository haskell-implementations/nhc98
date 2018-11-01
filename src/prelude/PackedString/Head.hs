module NHC.PackedString where

import Prelude hiding(head,Ix(..))
import DPackedString
import Index

head :: PackedString -> Char
head p = index p 0
