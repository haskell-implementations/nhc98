module ReportImports where

import qualified Data.Map as Map
import List(nub,groupBy,intersperse,sortBy)
import SysDeps(unpackPS)
import TokenId (extractM,extractV)
import IntState

reportImports :: String -> IntState -> [String]
reportImports m =
  map ("import "++) .
  nub .
  map moduleName .
  filter ((m/=).moduleName) .
  concatMap (possibleTid.snd) .
  Map.toList .
  getSymbolTable

reportFnImports :: String -> IntState -> [String]
reportFnImports m =
  map (\xs-> "import "++ fst (head xs) ++ "\t(" ++
             concat (intersperse ", " (map snd xs)) ++ ")") .
  groupBy (\(x,_) (y,_)-> x==y) .
  sortBy  (\(x,_) (y,_)-> compare x y) .
  map (\t-> (moduleName t, varName t)) .
  filter (("Prelude"/=).moduleName) .
  filter ((m/=).moduleName) .
  concatMap (possibleTid.snd) .
  Map.toList .
  getSymbolTable

moduleName :: TokenId -> String
moduleName = reverse . unpackPS . extractM

varName :: TokenId -> String
varName = reverse . unpackPS . extractV

possibleTid (InfoClear)                                     = []
possibleTid (InfoUsed   unique uses)                        = []
possibleTid (InfoUsedClass unique uses insts)               = []
possibleTid (InfoData   unique tid ie nt dk)                = [tid]
possibleTid (InfoClass  unique tid ie nt ms ds insts)       = [tid]
possibleTid (InfoVar    unique tid ie fix nt annot)         = [tid]
possibleTid (InfoConstr unique tid ie fix nt fields iType)  = []
possibleTid (InfoField  unique tid ie icon_offs iData iSel) = []
possibleTid (InfoMethod unique tid ie fix nt annot iClass)  = []
possibleTid (InfoIMethod unique tid nt annot iMethod)       = []
possibleTid (InfoDMethod unique tid nt annot iClass)        = []
possibleTid (InfoInstance unique mrps nt iClass)            = []
possibleTid (InfoName _ tid _ _ _)                          = [tid] --PHtprof

