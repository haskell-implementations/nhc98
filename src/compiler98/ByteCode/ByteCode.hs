-- | This module declares all the data structures necessary for generating and writing
--   bytecode.
module ByteCode.ByteCode(bcOutput) where

import ByteCode.Show
import ByteCode.Graph
import ByteCode.Analysis
import ByteCode.Flatten
import ByteCode.Relative
import ByteCode.Write
import ByteCode.Peep
import ByteCode.Wrap

import IntState
import Id
import Flags
import TokenId


bcOutput flags fileflags state bcode = do
        pF (sBcodeCompile flags) "BCode after compilation"
           (strBCode (strISBC state) bcode)
      
        {- Do analysis on BCode -}
        bcode <- return (bcGraph bcode)
        bcode <- return (bcAnalysis flags bcode)
      
        pF (sBcodeMem flags) "BCode after memory analysis:"
                (strBCode (strISBC state) bcode)
 
        {- Flatten and optimise BCode -}
        bcode <- return (bcFlatten bcode)    
        bcode <- return (bcPeep bcode) 
 
        pF (sBcodeFlatten flags) "BCode after flattening:"
           (strBCode (strISBC state) bcode) 
 
        {- Convert to relative jumps -}
        bcode <- return (bcRelative bcode)

        pF (sBcodeRel flags) "BCode after relativising"
           (strBCode (strISBC state) bcode)
  
        {- Write to file -}
        bcWrite state flags fileflags bcode
 
        {- Generate FFI wrapper -}
        if sBcodeWrapper flags then
          bcWrap state flags fileflags bcode
         else
          return ()



-- FIXME, duped with Compile.lhs
strISBC :: IntState -> Id -> String
strISBC state v = case lookupIS state v of
                      Just info -> let (md,id) = splitM (tidI info)
                                   in md ++ ";"++id
                      Nothing   -> "v" ++ show v

