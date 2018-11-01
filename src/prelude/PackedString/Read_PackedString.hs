module NHC.PackedString(Read(..)) where

import DPackedString
import PackString

instance Read PackedString where
    readsPrec l s = [(packString x, y) | (x, y) <- readsPrec l s]
