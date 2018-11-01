module UnboxedArray
  ( {-type-} UnboxedArray
  , allocUBA
  , wUBA
  , rUBA
  , getUBAFree
  , getUBAEnd
  ) where

import DUnboxedArray
import AllocUBA
import WUBA
import RUBA
import GetUBAFree
import GetUBAEnd

import CBinary		-- need import to ensure instances are exported
import Binary_UBA

