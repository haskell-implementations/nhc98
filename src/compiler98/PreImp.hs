{- |
Define selectors for tuples with elements of complicated type
-}
module PreImp where

import ImportState(ImportState)
import TokenId(TokenId)
import Syntax(Simple,Type,Context,Constr)
import Util.Extra(Pos)

type HideDeclType = ImportState
                    -> (Int,Bool)               -- depth annotation
                    -> Simple TokenId           -- LHS of synonym
                    -> Type TokenId             -- RHS of synonym
                    -> ImportState
type HideDeclData = ImportState
                    -> Either Bool Bool         -- unboxed?
                    -> [Context TokenId]        -- class contexts
                    -> Simple TokenId           -- LHS of data decl
                    -> [Constr TokenId]         -- constructors
                    -> [[TokenId]]              -- `needs' = actually exported
                    -> [(Pos,TokenId)]          -- `deriving' classes
                    -> ImportState
type HideDeclDataPrim = ImportState
                        -> (Pos,TokenId)
                        -> Int
                        -> ImportState
type HideDeclClass = ImportState
                     -> [Context TokenId]       -- class contexts
                     -> (Pos,TokenId)           -- class name
                     -> [(Pos,TokenId)]         -- type variables
                     -> [([((Pos,TokenId),Maybe Int)]
                         ,[Context TokenId]
                         ,Type TokenId
                         )]                     -- methods
                     -> [[TokenId]]             -- `needs' = actually exported
                     -> ImportState
type HideDeclInstance = ImportState
                        -> (Pos,TokenId)        -- parent module
                        -> [Context TokenId]    -- class contexts
                        -> (Pos,TokenId)        -- class name
                        -> [Type TokenId]       -- types of this instance
                        -> ImportState
type HideDeclVarsType = ImportState
                        -> [((Pos,TokenId),Maybe Int)] 
                        -> [Context TokenId]
                        -> Type TokenId
                        -> ImportState
type HideDeclIds = (HideDeclType,HideDeclData,HideDeclDataPrim
                   ,HideDeclClass,HideDeclInstance,HideDeclVarsType)


-- Keep these selectors in sync with the tuple built by mkNeed in PreImport  

hType :: HideDeclIds -> HideDeclType
hType (hideDeclType,_,_,_,_,_) = hideDeclType

hData :: HideDeclIds -> HideDeclData
hData (_,hideDeclData,_,_,_,_) = hideDeclData

hDataPrim :: HideDeclIds -> HideDeclDataPrim
hDataPrim (_,_,hideDeclDataPrim,_,_,_) = hideDeclDataPrim

hClass :: HideDeclIds -> HideDeclClass
hClass (_,_,_,hideDeclClass,_,_) = hideDeclClass

hInstance :: HideDeclIds -> HideDeclInstance
hInstance (_,_,_,_,hideDeclInstance,_) = hideDeclInstance

hVarsType :: HideDeclIds -> HideDeclVarsType
hVarsType (_,_,_,_,_,hideDeclVarsType) = hideDeclVarsType


-- Keep these selectors in sync with the tuple built by is2rs in RenameLib

sLG   :: (a, b, c, d) -> a
sQual :: (a, b, c, d) -> b
sExp  :: (a, b, c, d) -> c
sFix  :: (a, b, c, d) -> d
sLG   (localGlobal,qualFun,expFun,fixFun) = localGlobal
sQual (localGlobal,qualFun,expFun,fixFun) = qualFun
sExp  (localGlobal,qualFun,expFun,fixFun) = expFun
sFix  (localGlobal,qualFun,expFun,fixity) = fixity

