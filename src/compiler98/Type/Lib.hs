{- ---------------------------------------------------------------------------
Various functions for type checking:
- error messages
...
-}
module Type.Lib (typeUnify,typeUnifyMany,typeUnifyApply,typePatCon,typeExpCon
               ,typeIdentDict,getIdent,getTypeErrors,typeError
               ,typeNewTVar,typeIdentDef,checkExist,funType,extendEnv,getEnv
               ,msgFun,msgPat,msgLit,msgBool,msgGdExps,msgAltExps,msgCase
               ,msgAltPats,msgIf,msgApply,msgList,msgExpType,msgAs,msgNK
               ,newIdent,getState,setState,typeOfMain
               ,msgPatGdExps,msgPatGd) where

import NT
import Type.Env(lookupEnv)
import Util.Extra(assocDef,strPos,snub,mapSnd)
import Id(Id)
import Syntax
import IdKind
import TokenId(t_Arrow,tmain,tIO,t_Tuple)
import Flags
import SyntaxPos
import Type.Subst
import Type.Unify
import Type.Data
import IntState
import Type.Util
import Info
import IO
import Error
import Nice

msgPat :: Pat id -> String -> String
msgPat pat err =
  "Type error " ++ err ++ "\nwhen unifying pattern at " ++ strPos (getPos pat) ++ " with its expression.\n"

msgFun :: Rhs id -> String -> String
msgFun gdexps err =
  "Type error " ++ err ++ "\nwhen binding final type to function at " ++ strPos (getPos gdexps) ++ ".\n"

msgExpType :: Pos -> String -> String
msgExpType pos err =
  "Type error " ++ err ++ "\nwhen unifying explicit type at " ++ strPos pos ++ ".\n"

msgGdExps :: [(Exp id, Exp id)] -> String -> String
msgGdExps gdexps err =
  "Type error " ++ err ++ "\nwhen unifying multiple guarded expressions at " ++ (strPos . getPos . head) gdexps ++ ".\n"

msgPatGdExps gdexps err =
  "Type error " ++ err ++ "\nwhen unifying pattern guarded expressions at " ++ (strPos . getPos . head) gdexps ++ ".\n"

msgBool :: Exp id -> String -> String
msgBool exp err =
  "Type error " ++ err ++ "\nwhen trying to unify expressions at " ++ strPos (getPos exp) ++ " with Bool.\n"

msgPatGd pat exp err =
  "Type error " ++ err ++ "\nwhen trying to unify expression at " ++ strPos (getPos exp) ++ "\nwith pattern at "++ strPos (getPos pat) ++ "\nin pattern guard.\n"

msgAltPats :: [Alt id] -> String -> String
msgAltPats alts err =
  "Type error " ++ err ++ "\nwhen trying to unify pattern part of alternatives at " ++ (strPos . getPos . head) alts ++ ".\n"

msgAltExps :: [Alt id] -> String -> String
msgAltExps alts err =
  "Type error " ++ err ++ "\nwhen trying to unify expression part of alternatives at " ++  (strPos . getPos . head) alts ++ ".\n"

msgCase :: Exp id -> String -> String
msgCase exp err =
  "Type error " ++ err ++ "\nwhen trying to unify expression at " ++ strPos (getPos exp) ++ " with patterns.\n"

msgIf :: Exp id -> Exp id -> String -> String
msgIf exp1 exp2 err =
  "Type error " ++ err ++ "\nwhen trying to unify then-expressions at " ++ strPos (getPos exp1)
                                          ++ " and else-expression at " ++ strPos (getPos exp2) ++ ".\n"

msgLit :: Pos -> String -> String -> a -> String
msgLit pos typ err no =
  "Type error " ++ err ++ "\nwhen processing overloaded " ++ typ ++ " at " ++ strPos pos ++ ".\n"


msgApply :: HasPos a => [a] -> String -> Int -> String

msgApply es err no =
  "Type error " ++ err ++ "\nwhen trying to apply function at " ++  (strPos . getPos . head) es ++ " to its " 
        ++ showEnum no ++ " argument at " ++ (strPos . getPos . (es !!)) no ++ ".\n"

showEnum :: Int -> String
showEnum 1 = "1st"
showEnum 2 = "2nd"
showEnum 3 = "3rd"
showEnum n = show n ++ "th"

msgList :: [Exp id] -> String -> String
msgList es err =
  "Type error " ++ err ++ "\nwhen trying to unify items in a list at " ++  (strPos . getPos . head) es ++ ".\n"

msgAs :: Pos -> String -> String
msgAs pos err =
  "Type error " ++ err ++ "\nwhen trying to unify variable at " ++ strPos pos ++ " with pattern.\n"

msgNK :: Pos -> String -> String
msgNK pos err =
  "Type error " ++ err ++ "\nwhen trying to check (n+k) pattern at " ++ strPos pos ++ ".\n"


typeOfMain :: Flags -> ((TokenId, IdKind) -> Id) -> Decls Id -> IntState -> IO IntState
typeOfMain flags tidFun (DeclsScc depends) state =
  case findMain (concatMap stripDepend depends) of
    Nothing -> hPutStr stderr "Warning: Can not find main in module Main.\n" >>
               return state
    Just imain ->
      if sShowType flags then
        case ntIS state imain of
          (NewType free [] [] [nt],state) -> do
            hPutStr stderr (niceNT Nothing state (mkAL free) nt++"\n")
            exit
          (nt,state) -> do
            hPutStr stderr (niceNewType state nt++"\n")
            exit
      else
        case ntIS state imain of
          (NewType free [] [] [nt],state) ->
            let mainType = mkNTcons (tidFun (tIO,TCon)) 
                                 [mkNTvar (tidFun (t_Tuple 0,TCon))]
            in
            case unify state idSubst (nt, mainType) of
              Right phi -> return state
              Left (phi,str) -> 
                hPutStr stderr ("Function main has the type "++
                                niceNT Nothing state (mkAL free) nt ++
                                " instead of IO ().\n") >>
                exit
          (nt,state) ->
            hPutStr stderr ("Function main has the type "++
                            niceNewType state nt ++ " instead of IO ().\n") >>
            exit
 where
   stripDepend (DeclsNoRec d) = [d]
   stripDepend (DeclsRec ds) = ds

   findMain [] = Nothing
   findMain (DeclFun pos i funs:ds) = if tidIS state i == tmain then Just i else findMain ds
   findMain (d:ds) = findMain ds


typeUnify :: ShowS -> NT -> NT -> TypeDown -> TypeState -> (NT,TypeState)

typeUnify errFun t1 t2  
  down@(TypeDown env tidFun defaults ctxDict envDict) 
  up@(TypeState state phi ctxs ectxsi) =
    {-
    trace ("\n\n1: " ++ 
           niceNT Nothing state (map (\x -> (x, 'a':show x)) [1..]) t1) $
    trace ("\n\n2: " ++ 
           niceNT Nothing state (map (\x -> (x, 'a':show x)) [1..]) t2) $
    -}
    case unify state phi (t1,t2) of
      Right phi' -> let t1' = subst phi t1 in 
                      {-
                      trace ("\n\n3: " ++ 
                             niceNT Nothing state 
                               (map (\x -> (x, 'a':show x)) [1..]) t1') $
                      -}
                      seq t1' (t1',TypeState state phi' ctxs ectxsi)
      Left  (phi',str) ->
        case uniqueIS state of
          (unique,state) -> 
             (NTany unique  -- new type variable as result to continue
                            -- despite error
             ,TypeState (addError state (errFun str)) phi' ctxs ectxsi)


typeUnifyMany :: ShowS -> [NT] -> TypeDown -> TypeState -> (NT,TypeState)

typeUnifyMany errFun []  down@(TypeDown env tidFun defaults ctxDict envDict) up@(TypeState state phi ctxs ectxsi) =
  case uniqueIS state of
    (unique,state) -> (NTany unique,TypeState state phi ctxs ectxsi)
typeUnifyMany errFun ts@(t:_) down@(TypeDown env tidFun defaults ctxDict envDict) up@(TypeState state phi ctxs ectxsi) =
      case unifyr state phi ts of
        Right phi -> let t' = subst phi t in seq t'  (t',TypeState state phi ctxs ectxsi)
        Left  (phi,str) ->
          case uniqueIS state of
            (unique,state) -> (NTany unique,TypeState (addError state (errFun str)) phi ctxs ectxsi)


typeUnifyApply :: (String -> Int -> String) 
               -> [NT] 
               -> TypeDown -> TypeState -> (NT,TypeState)

typeUnifyApply errFun (f:xs)  down@(TypeDown env tidFun defaults ctxDict envDict) up@(TypeState state phi ctxs ectxsi) =
  seq nextTvar (unifyApply state phi f (zip [1 .. ] xs))
 where
  (nextTvar,_) = uniqueIS state

  arrow = tidFun (t_Arrow,TCon)

  unifyApply state phi f [] = 
      let f' = subst phi f
      in seq f' (f',TypeState state phi ctxs ectxsi)
  unifyApply state phi f ((no,x):xs) = 
    case subst phi f of
      NTcons c _ [a,r] | c == arrow ->
        case unify state phi (a,x) of
          Right phi -> unifyApply state phi r xs
          Left (phi,str) ->
            case uniqueIS state of
              (unique,state) -> (NTany unique,TypeState (addError state (errFun str no)) phi ctxs ectxsi)
      phif ->
        case uniqueIS state of
          (a,state) ->
            case uniqueIS state of
              (r,state) ->
                case unify state phi (phif,mkNTcons arrow [NTany a,NTany r]) of
                  Right phi ->
                    case unify state phi (NTany a,x) of
                      Right phi -> unifyApply state phi (NTany r) xs
                      Left (phi,str) ->
                        case uniqueIS state of
                          (unique,state) -> (NTany unique,TypeState (addError state (errFun str no)) phi ctxs ectxsi)
                  Left (phi,str) ->
                    case uniqueIS state of
                      (unique,state) -> (NTany unique,TypeState (addError state (errFun str no)) phi ctxs ectxsi)
          
typeNewTVar :: t
               -> Type.Data.TypeState
               -> (NT.NT, Type.Data.TypeState)
typeNewTVar down up@(TypeState state phi ctxs ectxsi) = 
  case uniqueIS state of
    (unique,state) -> (NTany unique,TypeState state phi ctxs ectxsi)

newIdent :: t
            -> Type.Data.TypeState
            -> (Id.Id, Type.Data.TypeState)
newIdent down up@(TypeState state phi ctxs ectxsi) = 
  case uniqueIS state of
    (unique,state) -> (unique,TypeState state phi ctxs ectxsi)

getState :: t
            -> Type.Data.TypeState
            -> (IntState.IntState, Type.Data.TypeState)
getState down up@(TypeState state phi ctxs ectxsi) = 
    (state,up)

setState :: IntState.IntState
            -> t
            -> Type.Data.TypeState
            -> Type.Data.TypeState
setState state down up@(TypeState _ phi ctxs ectxsi) = 
  TypeState state phi ctxs ectxsi


extendEnv :: [(Id, NT)] -> TypeDown -> b -> (TypeDown, b)
extendEnv ext down@(TypeDown env tidFun defaults ctxDict envDict) up =
  (TypeDown (ext++env) tidFun defaults ctxDict envDict,up)

getEnv :: TypeDown -> b -> ([(Id, NT)], b)
getEnv down@(TypeDown env tidFun defaults ctxDict envDict) up =
  (env,up)

getIdent :: (TokenId, IdKind) -> TypeDown -> b -> (Id, b)
getIdent key down@(TypeDown env tidFun defaults ctxDict envDict) up =
  (tidFun key,up)

-- Drop dictionaries if it is seq, this is used in PrimCode
qDict :: t -> Exp id -> [Exp id] -> Exp id
qDict state exp [] = exp
qDict state exp dict = ExpApplication (getPos exp) (exp:map ExpDict dict)

-- Dictionaries done at call site!

typeIdentDef :: (Id -> a) -> t -> Id -> TypeDown -> TypeState -> ((a, NT), TypeState)
typeIdentDef convar pos ident down@(TypeDown env tidFun defaults ctxDict envDict) up@(TypeState state phi ctxs ectxsi) =
   case lookupEnv ident env of
     Just t ->                             -- Type under construction
          let t' = subst phi t
          in seq t' ((convar ident,t'),up)  -- Only let-bound identifiers in envDict
                                -- Otherwise internal error!

typeExpCon :: Pos -> Id -> TypeDown -> TypeState -> ((Exp Id, NT), TypeState)
typeExpCon pos ident down up@(TypeState state phi ctxs ectxsi) = 
  case typeExpCon' pos ident down up of
    ((exp,expT,ctxs,eTVar),up) -> ((qDict state exp ctxs,expT),up)

typeExpCon' :: Pos -> Id -> TypeDown -> TypeState -> ((Exp Id, NT, [Exp Id], [Id]), TypeState)
typeExpCon' pos ident down@(TypeDown env tidFun defaults ctxDict envDict) up@(TypeState state phi ctxs ectxsi) =
  case ntIS state ident of  -- Be strict!
    (NoType,state) -> -- Not possible for constructors!
          case uniqueIS state of -- Fake answer, there should be an error reported somewhere else
            (u,state) -> ((ExpCon pos ident,mkNTvar u,[],[]),TypeState state phi ctxs ectxsi)
    (nt''@(NewType _ eTVar _ _),state) -> 
     case extractCtxs nt'' of
      (nt',ctxs'') ->
        case dictAndArrows (tidFun (t_Arrow,TCon)) pos state ctxs'' nt' of
            (ictxs,nt,state) -> 
              let ctxsStripped' = map snd ictxs
                  is = map fst $ filter ((`elem` eTVar) . ( \ (TypeDict i nt intpos) -> stripNT nt) . snd) ictxs
                  ctxs' = map ( \ (TypeDict i nt intpos) -> TypeDict i (mkNTvar (stripNT nt)) intpos) ctxsStripped'
                  nt' = subst phi nt
              in seq nt' ((ExpCon pos ident,nt',map (\ i -> assocDef ctxDict 
                                                                  (error "TypeLib:204")
                                                                  i) is,eTVar),TypeState state phi (ctxs'++ctxs) ectxsi)



typePatCon :: Pos -> Id -> TypeDown -> TypeState -> ((Exp Id, NT, [Id]), TypeState)
typePatCon pos ident down up@(TypeState state phi ctxs ectxsi) = 
  case typePatCon' pos ident down up of
    ((exp,expT,ctxs,eTVar),up) -> ((qDict state exp ctxs,existNT eTVar expT,eTVar),up)

typePatCon' :: Pos -> Id -> TypeDown -> TypeState -> ((Exp Id, NT, [Exp Id], [Id]), TypeState)
typePatCon' pos ident down@(TypeDown env tidFun defaults ctxDict envDict) up@(TypeState state phi ctxs inEctxsi) =
  case ntIS state ident of  -- Be strict!
    (NoType,state) -> -- Not possible for constructors!
          case uniqueIS state of -- Fake answer, there should be an error reported somewhere else
            (u,state) -> ((ExpCon pos ident,mkNTvar u,[],[]),TypeState state phi ctxs inEctxsi)
    (nt''@(NewType _ exist _ _),state) -> 
     case extractCtxs nt'' of
      (nt',ectxs') ->
       case uniqueISs state (map (mapSnd ( \ v -> if v `elem` exist then mkNTexist v else mkNTvar v)) ectxs') of
         (ectxsi,state) ->
           let eictxs = cvi2typedict pos exist ectxsi
           in
             case dictAndArrows (tidFun (t_Arrow,TCon)) pos state [] nt' of
               (ictxs,nt,state) -> 
                  let (_,ctxs') = unzip (ictxs ++ eictxs)
                      nt' = subst phi nt
                  in seq nt' ((ExpCon pos ident,nt',map (ExpVar pos . fst) eictxs,exist),TypeState state phi (ctxs'++ctxs) (ectxsi ++ inEctxsi))

existNT :: [Id] -> NT -> NT
existNT tv t@(NTany  a) = t
existNT tv t@(NTvar  a k) = if a `elem` tv then NTexist a k else t
existNT tv t@(NTexist  a _) = t
existNT tv (NTstrict t) = NTstrict (existNT tv t)
existNT tv (NTapp t1 t2) =  NTapp (existNT tv t1) (existNT tv t2)
existNT tv (NTcons a k tas) =  NTcons a k (map (existNT tv) tas)


typeIdentDict :: (Id -> Exp Id) -> Pos -> Id -> TypeDown -> TypeState -> ((Exp Id, NT), TypeState)
typeIdentDict convar pos ident down up@(TypeState state phi ctxs ectxsi) = 
  case typeIdentDict' convar pos ident down up of
    ((exp,expT,ctxs,eTVar),up) -> ((qDict state exp ctxs,expT),up)

typeIdentDict' :: (Id -> Exp Id) -> Pos -> Id -> TypeDown -> TypeState 
                            -> ((Exp Id, NT, [Exp Id], [Id]), TypeState)
typeIdentDict' convar pos ident down@(TypeDown env tidFun defaults ctxDict envDict) up@(TypeState state phi ctxs ectxsi) =
  case ntIS state ident of  -- Be strict!
    (NoType,state) ->
      case lookupEnv ident env of
        Just t -> -- Type still under construction
          let t' = subst phi t
          in seq t' ((convar ident,t',assocDef envDict [] ident,[]),up)  -- Only let-bound identifiers in envDict
        Nothing -> -- This is an identifier bound inside a pattern that need dictionaries, i.e, an error reported elsewhere
          case uniqueIS state of
            (u,state) -> ((convar ident,mkNTvar u,[],[]),TypeState state phi ctxs ectxsi)
    (nt'@(NewType _ eTVar _ _),state) -> 
        case dictAndArrows (tidFun (t_Arrow,TCon)) pos state [] nt' of
            (ictxs,nt,state) -> 
              let (is,ctxs') = unzip ictxs
                  nt' = subst phi nt
              in seq nt' ((convar ident,nt',map (\ i -> assocDef ctxDict 
                                                                  (error "TypeLib:162")
                                                                  i) is,eTVar),TypeState state phi (ctxs'++ctxs) ectxsi)


checkExist :: [(Id, NT)] -> [Id] -> t -> TypeState -> TypeState
checkExist oldEnv eTVars down up@(TypeState state phi ctxs ectxsi) =
 case foldr (cE phi eTVars) state oldEnv of
   state -> TypeState state phi ctxs ectxsi
 where
   cE phi eTVars (v,nt) state =
      let tvars =  (snub . freeNT . subst phi) nt
      in case filter (`elem` eTVars) tvars of
        [] -> state
        _  -> case lookupIS state v of
                 Just info -> addError state ("Existential type escaped with " ++ show (tidI info))
                 Nothing ->   addError state ("Existential type escaped (internal name " ++ show v ++ ")")

      

---- ======

extractCtxs :: NewType -> (NewType, [(Id, Id)])
extractCtxs (NewType free exist ctxs nts) = 
  (NewType free exist ctxs (filter (not . contextNT) nts), map ntContext2Pair (filter contextNT nts))


dictAndArrows :: Id -> Pos -> IntState -> [(Id, Id)] -> NewType -> ([(Id, TypeDict)], NT, IntState)
dictAndArrows arrow pos state ectxs (NewType free exist ctxs nts) = 
  case uniqueISs state (map (mapSnd ( \ v -> if v `elem` exist then mkNTexist v else mkNTvar v)) (ctxs ++ ectxs)) of
    (ctxsi,state) ->
            (cvi2typedict pos exist ctxsi
            ,funType arrow nts
            ,state
            )


funType :: Id -> [NT] -> NT
funType arrow [x] = x
funType arrow (x:xs) = mkNTcons arrow [x , funType arrow xs]


typeError :: [Char] -> t -> TypeState -> a
typeError err down  up@(TypeState state phi ctxs ectxsi) =
   error err
-- (PatWildcard noPos,TypeState (addError state err) phi ctxs ectxsi) 

getTypeErrors :: t -> TypeState -> ([String], TypeState)
getTypeErrors down  up@(TypeState state phi ctxs ectxsi) =
   let (st,errs) = getErrors state in
   (errs, TypeState st phi ctxs ectxsi) 

