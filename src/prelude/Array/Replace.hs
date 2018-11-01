module Array where

import Ix
import DArray
import LowVector
import _E
import NHC.Internal (unsafePerformIO)

infixl 9  //

(//)                  :: (Ix a) => Array a b -> [(a,b)] -> Array a b
(MkArray b v) // us   =	unsafePerformIO (do
			  v' <- primCopyVectorC v
			  mapM_ (\(ix,elt)-> primUpdateVectorC (index b ix)
                                                               (_E elt)
                                                               v')
                                us
			  return (MkArray b v')
			)
