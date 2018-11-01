module GcodeSpec(gcodeZCon,fixProfstatic,compilerProfstatic) where

import IntState 
import Gcode
import GcodeLow(con0,profstatic,profconstructor,profproducer,profmodule)
import Maybe

gcodeZCon prof state [] = []
gcodeZCon prof state (d:ccs) =
  let dataInfo = (fromJust . lookupIS state) d
      cons = map (\(c,n)-> (0==arityIS state c, fromEnum c, n))
                 (zip (constrsI dataInfo) [0::Int ..])
      label = let ie = expI dataInfo in
                 if ie `elem` [IEall,IEsome] then GLOBAL else LOCAL
      cnos = map (\(z,c,n)-> if z then label con0 c :
                                       DATA_CON 0 n :
                                       compilerProfstatic prof state c
                                  else [])
                 cons
  in
    cnos ++ (if prof then map (createProfs state) cons else [])
    ++ gcodeZCon prof state ccs

compilerProfstatic True state i  = [ DATA_GLB profstatic i
                                   , DATA_CREATE
                                   , DATA_W 0
                                   , DATA_W 0]
compilerProfstatic False state i = []

createProfs state (z,c,n) = -- !!! Need int for module/type
  [ GLOBAL profproducer c
  , GLOBAL profconstructor c
  , DATA_S (strIS state (toEnum c))
  , ALIGN
  , LOCAL profstatic c
  , DATA_GLB profproducer c
  , DATA_GLB profproducer c
  , DATA_GLB profconstructor c ]

fixProfstatic state ((p,c),i) = -- !!! Need int for module/type
  [ LOCAL profstatic i
  , DATA_GLB profmodule (fromEnum (miIS state))
  , DATA_GLB profproducer p
  , DATA_GLB profconstructor c ]

