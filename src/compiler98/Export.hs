{- ---------------------------------------------------------------------------
Builds the contents of the interface file
-}
module Export(Flags,PackedString,IntState,buildInterface) where

import List
import NT
import IntState hiding (InfixClass)
import Scc
import qualified Data.Map as Map
import qualified Data.Set as Set
import Util.Extra
import TokenId
import SysDeps(PackedString,unpackPS)
import Syntax(InfixClass(..))
import Nice
import IExtract(defFixity)
import Flags(Flags, sPrelude)
import Maybe
import Building (Compiler(..),compiler)

--import NonStdProfile -- only for debugging the compiler
profile a b = b


{- Build the contents of the interface file -}
buildInterface :: Flags -> PackedString -> IntState -> String
buildInterface flags modidl state =
  strExport modidl state (export flags state)


{- Collect the information that has to go into the interface file.  -}
export :: Flags 
       -> IntState 
       -> ([(TokenId,(InfixClass TokenId,Int))],[(Bool,[Info])])
export flags state =
  let symbols = map snd . Map.toList . getSymbolTable
      infoExport = (filter (isExported . expI) . symbols) state
      insts = let hereCls = filter isClass (symbols state)
                  usedCls = filter isUsedClass (symbols state)
              in
              foldr (\(InfoClass  unique tid exp nt ms ds insts) r -> 
                        foldr (fixInst state (sPrelude flags || notPrelude tid)
                                       unique) 
                              r (Map.toList insts))
                    [] hereCls
              ++
              foldr (\(InfoUsedClass  unique _ insts) r -> 
                        foldr (fixInst state (sPrelude flags) unique) 
                              r (Map.toList insts))
                    [] usedCls
  in case uniqueISs state insts of
    (insts,state) ->
      let 
      (infoInst,depInst) = 
        unzip (map (\((mrps,cls,nt,dep),i) -> (InfoInstance i mrps nt cls,(i,dep))) 
                   insts)
      depExport = map infoDepend infoExport

      depExtra = profile "getAll start" 
                   (getAll state 
                           (foldr (Set.insert) Set.empty (map fst depExport))
                           (concatMap snd depExport ++ concatMap snd depInst))

      depend = reverse $ profile "start sccDepend" 
                 $ sccDepend (depExport ++ depExtra ++ depInst)
      expTree = foldr (\info tree -> Map.insert (uniqueI info) info tree)
                      Map.empty 
                      (infoInst++infoExport)

      declExport = (map (\xs -> if all isLeft xs
                                  then (False,map dropLeft xs)
                                  else (True,map dropEither xs)    
                       -- !!! Not good, more is exported than should have been 
                          )
                     . filter (not . null) 
                     . map (fixInfo (sPrelude flags) state expTree)
                     ) depend

      infExport = filter ( (/=defFixity) . snd)
                         (concatMap (concatMap getFixity . snd) 
                                    (filter fst declExport))

      getFixity :: Info -> [(TokenId,(InfixClass TokenId,Int))]
      getFixity (InfoData unique tid IEall nt dk) =
        case dk of
          Data unboxed constrs -> 
            map ( (\info-> (tidI info, fixityI info)) 
                . fromJust . lookupIS state)
                constrs
          _ -> []
      getFixity (InfoData unique tid IEsome nt dk) =
        case dk of
          Data unboxed constrs -> 
            concatMap ( (\info-> case expI info of
                                   IEsel -> [(tidI info,fixityI info)]
                                   _     -> [] )
                      . fromJust . lookupIS state)
                constrs
          _ -> []
      getFixity (InfoData  unique tid _  nt dk) = []
      getFixity (InfoClass unique tid ie nt ms ds insts) = 
        map ( (\info -> (tidI info,fixityI info)) . fromJust . lookupIS state) 
            ms
      getFixity (InfoVar unique tid ie fix nt annot) = [(tid,fix)]
      getFixity (InfoInstance unique mrps nt iClass) = []
      getFixity (InfoConstr unique tid ie fix nt fields iType) = []
      getFixity x = error ("getFixity = " ++ show x)

      in 
        (infExport,declExport)

 where

  getAll state found [] = profile "getAll end" []
  getAll state found (u:us) =
    if u `Set.member` found
    then getAll state found us
    else 
      case (infoDepend . fromJust . lookupIS state) u of
        depend@(u,dep) -> depend : getAll state (Set.insert u found) (dep ++ us)


  infoDepend (InfoData unique tid exp nt dk) =
      case dk of
        (DataTypeSynonym unboxed depth)    -> (unique, useNewType nt)
        (DataNewType unboxed constructors) -> dataDepend exp nt constructors
        (DataPrimitive size)               -> (unique, useNewType nt)
        (Data unboxed constrs)             -> dataDepend exp nt constrs
    where
      dataDepend exp nt constrs =
        if exp == IEabs then
             (unique, useNewType nt) 
        else (unique, snub (useNewType nt
                           ++ concatMap (useConstr . lookupIS state) constrs))

  infoDepend (InfoClass unique tid ie nt ms ds insts)
      | ie==IEall || ie==IEsome =
          (unique, snub (useNewType nt
                         ++ concatMap (useMethod . lookupIS state) ms))
  infoDepend (InfoClass unique tid _     nt ms ds insts) =
          (unique, snub (useNewType nt))
  infoDepend (InfoUsedClass unique _ insts) =   -- MW
          (unique, [])                          -- MW
  infoDepend (InfoVar unique tid ie fix nt annot) =
          (unique, useNewType nt)
  infoDepend (InfoConstr unique tid ie fix nt fields iType) =
          (unique, useNewType nt)
  infoDepend (InfoUsed unique _) =
          (unique, [])
  infoDepend info = error ("infoDepend " ++ show info)

fixInst state keep unique (con,(rps,free,ctxs)) r =
  if keep || (notPrelude . tidI . fromJust . lookupIS state) con then
    ( rps
    , unique
    , NewType free [] ctxs [mkNTcons con (map mkNTvar free)]
    , snub (con:map fst ctxs)
    ):r
  else
    r

fixInfo keep state ds (NoRec n) = fixInfo' keep state ds n
fixInfo keep state ds (Rec ns) = concatMap (fixInfo' keep state ds) ns

fixInfo' keep state ds n =
  case Map.lookup n ds of
    Just info -> [Right info]
    Nothing ->
      case lookupIS state n of
        Just info ->
          if (keep || notPrelude (tidI info))
          then [Left info]
          else []


useNewType (NewType free exist ctxs nts) =
  snub (map fst ctxs ++ (concatMap useNT nts))

useConstr (Just (InfoConstr unique tid ie fix nt fields iType)) = useNewType nt

useMethod (Just (InfoMethod unique tid ie fix nt annot iClass)) = useNewType nt
useMethod x = error ("No match in useMethod:" ++ show x)


{- Create content of interface file. -}
strExport :: PackedString -- module name
          -> IntState 
          -> ([(TokenId,(InfixClass TokenId,Int))],[(Bool,[Info])]) 
          -> String

strExport modidl state (fixs,exps) =
  ( showString ("interface " ++ reverse (unpackPS modidl) ++ " where {\n")
  . foldr ((.).showsFix modrps) id fixs
  . foldr ((.).showsHide modrps) id 
          (optExport False Nothing (map preExport exps))
  ) "}\n"

  where
  modrps = mrpsIS state

  preExport (visible,infos@(InfoInstance u mrps nt iClass:_)) =
    ((visible,Nothing),infos)
  preExport (visible,infos@(info:_)) = 
    case (extractM . tidI) info of
      rps -> ((visible,Just rps),infos)

  optExport preV preRps [] = []
  optExport preV preRps (((v,rps),infos):xs) =
    (preV == v && preRps == rps,v,rps,infos) : optExport v rps xs


  showsFix :: PackedString 
           -> (TokenId,(InfixClass TokenId,Int)) 
           -> String -> String

  showsFix mrps (tid,(InfixPre i,l)) =
    showString "prefix ". niceTid state i . showChar ' ' . shows l 
    . showChar ' ' . showsOp (fixTid mrps tid) . showString ";\n"
  showsFix mrps (tid,(InfixDef ,l)) = id
  showsFix mrps (tid,(inf,l)) =  
    shows inf . showChar ' ' . shows l 
    . showChar ' ' . showsOp (fixTid mrps tid) . showString ";\n"

  showsHide :: a 
            -> (Bool,Bool,Maybe PackedString,[Info]) 
            -> String -> String

  showsHide mrps (prev,visible,rps,infos) =  
    -- Would have prefered not to use qualified names, but have to
    (if prev || isNothing rps 
       then id
       else (if visible 
               then showString "interface ! " 
               else showString "interface ") 
            . (showString . reverse . unpackPS . fromJust) rps)
    . showString "\n{-# NEED" 
    . foldr ((.).showsNeed (fromJust rps)) id infos 
    . showString " #-}\n" 
        -- need does not need to be qualified
    . foldr ((.).showsInfo (fromJust rps)) id infos                     
        -- but the definitions must


        -- Hack for tuples
  showsNeed mrps (InfoData unique (TupleId n) exp nt dk) = 
      showString " {" . pat . showChar ' ' . pat . showChar '}'
      where
      pat    = showChar '(' . commas . showChar ')'
      commas = if n == 0 then id 
                         else foldr (.) id (replicate (n-1) (showChar ','))
    -- Always look in tuple definitions
  showsNeed mrps (InfoData unique tid exp nt dk) =
      case dk of
        (DataNewType unboxed constructors) -> 
                                   groupNeed mrps exp tid constructors
        (Data unboxed  constrs) -> groupNeed mrps exp tid constrs
        _ ->  showChar ' ' . showsVar (fixTid mrps tid) 
  showsNeed mrps (InfoClass  unique tid exp nt ms ds insts) = 
    groupNeed mrps exp tid ms
  showsNeed mrps (InfoVar unique tid exp fix nt annot) = 
    showChar ' '.showsVar (fixTid mrps tid)
  showsNeed mrps (InfoConstr unique tid ie fix nt fields iType)
    | ie==IEsel = showChar ' '. showsVar (fixTid mrps tid) 
                  . foldr ((.) . showsField mrps) id fields
    | otherwise =   foldr ((.) . showsField mrps) id fields
  showsNeed mrps (InfoMethod unique tid ie fix nt annot iClass)
    | ie==IEsel = showChar ' ' . showsVar (fixTid mrps tid)
    | otherwise = id
  showsNeed mrps (InfoInstance _ _ _ _) = id
  showsNeed mrps (InfoUsedClass _ _ _) = id
  showsNeed mrps (InfoUsed _ _) = id

  groupNeed mrps ie group parts
    | (ie==IEall || ie==IEsome) && not (null parts) =
          showString " {" . showsVar (fixTid mrps group) 
          . foldr ((.) . showsNeed mrps . fromJust . lookupIS state)
                  id parts 
          . showChar '}'
  groupNeed mrps ie group parts =
          showChar ' ' . showsVar (fixTid mrps group) 

  showsField mrps Nothing = id
  showsField mrps (Just i) = showChar ' ' . shows (fixTid mrps (tidIS state i))

        -- Hack for tuples
  showsInfo mrps (InfoData unique (TupleId nargs) exp
                           nt@(NewType free exist ctxs nts) dk) =
      let arg = mkAL free
          al = arg ++ zip (map snd ctxs) (map (('_':).(:[])) ['a'..'z'])
                                                         -- a-z is too short!
          strNewType = niceCtxs Nothing state al ctxs
                       ++ mixSpace (map (niceNT Nothing state al) nts)
          strArgs = concatMap ((' ':).snd) arg
          strTuple = if nargs > 0 then take nargs ('(':repeat ',') ++ ")"
                                  else "()"
      in
        case dk of
          (DataTypeSynonym unboxed depth) ->
            showString "type {-# " . shows depth
            . (if unboxed then showString " !" else id) . showString " #-} "
            . showString strTuple . showString strArgs . showString  " = "
            . showString strNewType . showString ";\n"
          (DataNewType unboxed constrs) ->
            showString "newtype {-# "
            . (if unboxed then showChar '!' else id) . showString " #-} "
            . showString (niceCtxs Nothing state al ctxs)
            . showString strTuple . showString strArgs
            . (if exp==IEall && not (null constrs) then
                 showString "\n = "
                 . showString (mix "\n  | "
                                   (map (expConstr mrps al . lookupIS state)
                                        constrs))
               else id)
                . showString ";\n"
          (DataPrimitive size) ->
            if nargs == 0 then
              showString "data primitive () = " . shows size . showString ";\n"
            else
              error ("showsInfo in Export cannot handle primitive TupleID with "
                     ++ show nargs ++ " arguments.")
          (Data unboxed constrs) ->
            showString ("data " ++ (if unboxed then "unboxed " else "")
                        ++ niceCtxs (Just mrps) state al ctxs)
            . showString strTuple . showString strArgs
            . (if exp == IEall && not (null constrs) then
                 showString "\n = "
                 . showString (mix "\n  | "
                                   (map (expConstr mrps al . lookupIS state)
                                        constrs))
               else id)
            . showString ";\n"
  showsInfo mrps (InfoData unique tid exp nt@(NewType free exist ctxs nts) dk) =
      let arg = mkAL free
          al = arg ++ zip (map snd ctxs) (map (('_':).(:[])) ['a'..'z'])
                                                        -- a-z is too short!
          strNewType = niceCtxs (Just mrps) state al ctxs
                       ++ mixSpace (map (niceNT (Just mrps) state al) nts)
          strArgs = concatMap ((' ':).snd) arg
      in
        case dk of
          (DataTypeSynonym unboxed depth) ->
             showString "type {-# " . shows depth
             . (if unboxed then showString " !" else id) . showString " #-} "
             . showsVar (fixTid mrps tid) . showString (strArgs ++ " = ")
             . showString strNewType . showString ";\n"
          (DataNewType unboxed constrs) ->
             showString "newtype {-# "
             . (if unboxed then showChar '!' else id) . showString " #-} "
             . showString (niceCtxs Nothing state al ctxs)
             . showsVar (fixTid mrps tid) . showString strArgs
             . (if (exp==IEall || exp==IEsome) && not (null constrs) then
                  showString "\n  = "
                  . showString  (mix "\n  | "
                                     (map (expConstr mrps al . lookupIS state)
                                          constrs))
                else id)
             . showString ";\n"
          (DataPrimitive size) ->
             showString "data primitive "
             . showsVar (fixTid mrps tid) . showString " = " . shows size
             . showString ";\n"
          (Data unboxed constrs) ->
             showString ("data " ++ (if unboxed then "unboxed " else "")
                         ++ niceCtxs (Just mrps) state al ctxs)
             . showsVar (fixTid mrps tid) . showString strArgs 
             . (if (exp==IEall || exp==IEsome) && not (null constrs) then
                   (showString "\n  = "
                   . showString  (mix "\n  | "
                                      (map (expConstr mrps al . lookupIS state)
                                           constrs)))
                else id)
             . showString ";\n"

  showsInfo mrps (InfoClass unique tid exp (NewType free exist ctxs nts)
                            ms ds insts) = 
    let al = mkAL free
    in showString "class " . showString (niceCtxs Nothing state al ctxs)
       . showsVar (fixTid mrps tid) . showString (concatMap ((' ':).snd) al)
       . (if (exp==IEall || exp==IEsome) && not (null ms) then
            showString " where {\n"
            . showString (concatMap (expMethod mrps . lookupIS state) ms)
            . showString "};\n"
          else showString ";\n")

----
  showsInfo mrps (InfoUsedClass unique ((_,tid,_,_):_) insts) =   -- MW
        showString "class " . showsVar (fixTid mrps tid) . showString (" a;\n")
  showsInfo mrps (InfoUsed unique ((_,tid,_,_):_)) = id

--        showString "used " . showsVar (fixTid mrps tid) . showString (";\n")
----

  showsInfo mrps (InfoVar unique tid exp fix nt annot) =
        showsVar (fixTid mrps tid) . showsAnnot annot . showString "::"
        . showString (niceNewType state nt) . showString ";\n"
  showsInfo mrps (InfoInstance unique imrps (NewType free exist ctxs [nt]) iClass) =
      let al = mkAL free
          im = reverse $ unpackPS imrps
      in showString "instance " 
         . ( if compiler==Yhc then showString im . showString " @ " else id )
         . showString (niceCtxs Nothing state al ctxs)
         . niceInt Nothing state iClass .  showChar ' '
         . showString (niceNT Nothing state al nt) 
         . showString ";\n"
  showsInfo mrps (InfoConstr unique tid ie fix nt fields iType) = id

  showsAnnot Nothing = id
  showsAnnot (Just a) = showString "{-# " . shows a . showString " #-}"

  expConstr mrps al (Just (InfoConstr unique (TupleId nargs) ie fix
                                   (NewType free exist ctxs nts) field iType)) =
       (showString (if nargs > 0 then take nargs ('(':repeat ',') ++ ") "
                                      else "()"))
       (mixSpace (map (niceField state al) (zip field (init nts))))
  expConstr mrps al (Just (InfoConstr unique tid ie fix
                             (NewType free exist ctxs ectxs_nts) field iType)) =
        -- al contains type variables to string mapping
        -- exist contains existential type variables not in al
     let exist' = zip exist (map (:"_fa") ['a'..'z']) -- a-z is too short!
         al' = al ++ exist'
         ectxs = map ntContext2Pair (filter contextNT ectxs_nts)
         nts = filter (not . contextNT) ectxs_nts
     in
          (if null exist then ""
                         else "forall " ++ mixSpace (map snd exist') ++ " . ")
          ++ niceCtxs Nothing state al' ectxs
          ++ (showsVar (fixTid mrps tid) . showChar ' ')
             (mixSpace (map (niceField state al') (zip field (init nts))))

  expMethod :: PackedString -> Maybe Info -> String
  expMethod mrps (Just (InfoMethod  unique tid ie fix nt annot iClass)) =
    (showString "  " . showsVar (fixTid mrps tid) . showsAnnot annot 
     . showString "::" . showString (niceNewType state nt))  
    ";\n"


