{- ---------------------------------------------------------------------------
Three functions for removing some syntactic sugar:
removeDecls: create selectors for record fields
  mkSel: create a single selector for a named field
removeDo: remove do notation
translateExpRecord: remove record expressions
  (patternmatching, construction and updating)
-}
module Remove1_3(removeDecls,mkSel,removeDo,translateExpRecord) where

import Syntax
import State
import IntState
import TokenId(t_gtgt,t_gtgteq,tfail,t_recConError)
import TokenInt
import Type.Lib(getState,newIdent,getIdent)
import SyntaxPos
import Type.Data(TypeMonad)
import IdKind
import Util.Extra(strPos,mixCommaAnd,noPos,dropRight,isRight)
import List
import Id(Id)
import Maybe


{- ---------------------------------------------------------------------------
Create selectors for record fields.
Done before strongly connected components analysis.
-}

type SelectorMonad a = State () ([Id],IntState,TidFun) a ([Id],IntState,TidFun)
-- () -> ([Id],IntState) -> (a,([Id],IntState))

type TidFun = (TokenId,IdKind) -> Id

{-
Replace DeclConstrs in the declarations by definitions for selectors.
Also collect identifiers of all field names.
-}
removeDecls :: Decls Id -> ((TokenId,IdKind) -> Id) -> IntState
            -> (Decls Id   -- modified declarations
               ,[Id]       -- identifiers of all data constructors
               ,IntState)

removeDecls (DeclsParse decls) tidFun state =
  case mapS removeDecl decls () ([],state,tidFun) of
    (decls,(zcons,state,_)) -> (DeclsParse (concat decls),zcons,state)


{-
Replace a single DeclConstrs by definitions for selectors.
-}
removeDecl :: Decl Id -> SelectorMonad [Decl Id]

removeDecl (DeclConstrs pos zcon cs) =
  remember zcon >>>= \_ ->
  mapS mkSel cs
removeDecl d = unitS [d]


{-
Create the definition for a given selector identfier.
-}
mkSel :: (Pos -- point of definition of selector, i.e in type definition
         ,Id  -- field name id
         ,Id) -- selector name id
         -> SelectorMonad (Decl Id)

mkSel (pos,field,selector) =
  r13Info field >>>= \  (InfoField unique tid ie icon_offs iData iSel) ->
  mapS (mkFun pos) icon_offs >>>= \ alts ->
  unitS (DeclFun pos selector alts)

{-
Make one equation of a selector for given data constructor and offset
-}
mkFun :: Pos
      -> (Id,Int) -- (data constructor, offset)
      -> SelectorMonad (Fun Id)

mkFun pos (c,i) =
  r13Info c >>>= \ conInfo ->
  r13Unique >>>= \ v ->
  r13ModId >>>= \ mi ->
  r13TidFun >>>= \ tidFun ->
  let wildcard = PatWildcard pos {- ExpApplication pos [ExpVar noPos $ tidFun (t_recConError,Var),
                                     ExpLit pos $
                                        LitString Boxed $
                                            mi ++ ": record field was never given a value " ++ strPos pos ++ "." ] -}
      var = ExpVar pos v
      vars = take (arityI conInfo) (repeat wildcard)
               -- arityI safe for constructors :-)
  in
    unitS (Fun [ExpApplication pos (ExpCon pos c : onePos var i vars)]
             (Unguarded var) (DeclsParse []))


{-
Replace list element at given index by given new element.
-}
onePos :: a -> Int -> [a] -> [a]

onePos v 1 (x:xs) = v:xs
onePos v n (x:xs) = x: onePos v (n-1 ::Int) xs


r13Info :: Id -> SelectorMonad Info
r13Info    i down thread@(zcon,state,_) = (fromJust (lookupIS state i),thread)


{- get a new unique id -}
r13Unique :: SelectorMonad Id

r13Unique  down  thread@(zcon,state,tf) =
  case uniqueIS state of
   (u,state) -> (u,(zcon,state,tf))

r13ModId :: SelectorMonad String
r13ModId down thread@(zcon,state,_) = (getModuleId state,thread)

r13TidFun :: SelectorMonad TidFun
r13TidFun down thread@(_,_,tf) = (tf,thread)

remember :: Id -> SelectorMonad ()
remember zcon down thread@(zcons,state,tf) = ((),(zcon:zcons,state,tf))



{- ---------------------------------------------------------------------------
Remove syntactic sugar of do notation.
Done after strongly connected components analysis,
more precisely: called by type checker
-}

{-
Remove syntactic sugar of do notation.
-}
removeDo :: [Stmt Id] -> TypeMonad (Exp Id)

removeDo [StmtExp exp] = unitS exp
removeDo (StmtExp exp:r) =
  let pos = getPos exp
  in
    getIdent (t_gtgt,Var) >>>= \ gtgt ->
    removeDo r >>>= \ exp2 ->
    unitS (ExpApplication pos [ExpVar pos gtgt, exp, exp2])
removeDo (StmtLet decls :r) =
  let pos = getPos decls
  in
    removeDo r >>>= \ exp2 ->
    unitS (ExpLet pos decls exp2)
removeDo (StmtBind pat exp:r) =
  getIdent (t_gtgteq,Var) >>>= \ gtgteq ->
  getState >>>= \ state ->
  removeDo r >>>= \ exp2 ->
  let pos = getPos exp
  in
    if nofail state pat
    then
      -- this is only an optimisation; the else-case is never wrong
      unitS (ExpApplication pos [ExpVar pos gtgteq, exp, ExpLambda pos [pat] exp2])
    else
      getIdent (tfail,Var) >>>= \ fail ->
      newIdent >>>= \ x ->
      let eX = ExpVar pos x
          eFail = ExpApplication pos [ExpVar pos fail
                                     ,ExpLit pos (LitString Boxed "pattern-match failure in do expression")]
      in unitS
           (ExpApplication pos
             [ExpVar pos gtgteq
             ,exp
             ,ExpLambda pos [eX]
               (ExpCase pos eX
                 [Alt pat (Unguarded exp2) (DeclsScc [])
                 ,Alt (PatWildcard pos) (Unguarded eFail) (DeclsScc [])
                 ])])


{-
Test if matching the given pattern cannot fail.
-}
nofail :: IntState -> Pat Id -> Bool

nofail state (ExpCon pos con) =
  case lookupIS state con of
    Just (InfoConstr unique tid ie fix nt fields iType) ->
      case lookupIS state iType of
        Just (InfoData   unique tid exp nt dk) ->
          case dk of
            (DataNewType unboxed constructors) -> True
            (Data unboxed  constrs) -> length constrs == 1
nofail state (ExpVar _ _) = True
nofail state (ExpApplication pos es) = all (nofail state) es
nofail state (PatWildcard _) = True
nofail state (PatAs _ _ pat) = nofail state pat
nofail state (PatIrrefutable pos pat) = True
nofail state _ = False


{- ---------------------------------------------------------------------------
Remove record expressions.
Done after strongly connected components analysis,
more precisely: called by type checker
-}

fieldInfo :: IntState
          -> Field Id
          -> (Id  -- type constructor
             ,([(Id,Int)] -- data constructors with offsets for field
             ,Exp Id))   -- expressions from "field=exp"

fieldInfo state (FieldExp pos field exp) =
  case lookupIS state field of
    Just (InfoField unique tid ie icon_offs idata iSel) -> (idata,(icon_offs,exp))


{- lookup value in association list; if not there, then return default value -}
fixArg :: Eq a => [(a,b)] -> (a,b) -> b

fixArg given (i,def) =
  case lookup i given of
    Just e -> e
    Nothing -> def


{- construct alternative for record updating for one data constructor -}
fixAlt :: Pos
       -> [Exp Id]   -- arguments for offsets
       -> (Id,[Int]) -- (data constructor, offsets)
       -> IntState
       -> (Alt Id,IntState)

fixAlt pos exps (con,offsets) state =
  (Alt (ExpApplication pos (econ:vars))
       (Unguarded
         (ExpApplication pos
           (econ : map (fixArg (zip offsets exps)) (zip nargs vars))))
       (DeclsScc [])
  ,state')
  where
  nargs = [1 .. arityIS state con]
  (newNIds,state') = uniqueISs state nargs
  vars = map (ExpVar noPos . snd) newNIds
  econ = ExpCon pos con


getOffsets :: [[(Id,Int)]] -> Id -> Either (Id,[Maybe Int]) (Id,[Int])

getOffsets icon_offs con =
  let offsets   = map (\ icon_off -> lookup con icon_off) icon_offs
  in if all isJust offsets
     then Right (con,map fromJust offsets)
     else Left (con,offsets)


{-
Replace record expression exp{field1=exp1,...} by a non-record expression.
Used for record patterns as well.
(in fact, undefined constructor arguments are filled with wildcard patterns)
-}
translateExpRecord :: Exp Id -> [Field Id] -> IntState
                -> (Either String (Exp Id),IntState)

translateExpRecord e@(ExpRecord exp' fields') fields state =
  translateExpRecord exp' (fields ++ fields') state
translateExpRecord e@(ExpCon pos con) fields state =
  let coes = map (fieldInfo state) fields
  in  if firstIsEqual coes
      then
        let (icon_offs,exps) = unzip (map snd coes)
        in case getOffsets icon_offs con of
            Right (con,offsets) ->
              (Right (ExpApplication pos (e:map (fixArg (zip offsets exps))
                                             (zip [1 .. arityIS state con]
                                                (repeat (PatWildcard  pos))
                                             ) ))
              ,state)
            Left (con,offsets) ->
              (Left (errField1 state pos con offsets fields)
              ,state)
      else (Left (errField2 state fields),state)
translateExpRecord exp [] state =
  (Left (errField4 (getPos exp)),state)
translateExpRecord exp fields state =
  let coes@((t,_):_) = map (fieldInfo state) fields
  in  if firstIsEqual coes -- all fields belong to same data type
      then
        let (icon_offs,exps) = unzip (map snd coes)
            pos = getPos exp
        in case (partition isRight . map (getOffsets icon_offs) .
                 constrsI  . fromJust . lookupIS state) t of
          ([],_)  -> (Left (errField3 state fields),state)
          (rps,_) -> let consFixAlt rps (alts,state) =
                           case fixAlt pos exps rps state of
                             (alt,state') -> (alt:alts,state')
                         (alts,state') = foldr consFixAlt ([],state)
                                           (map dropRight rps)
                     in (Right (ExpCase (getPos exp) exp alts), state')
      else (Left (errField2 state fields),state)


{- Test if all first components are equal. -}
firstIsEqual :: Eq a => [(a,b)] -> Bool

firstIsEqual [] = True
firstIsEqual ((k,_):kvs) = all (k==) (map fst kvs)


errField1 :: IntState -> Pos -> Id -> [Maybe a] -> [Field Id] -> String

errField1 state pos con offsets fields =
  "The field(s)" ++
  mixCommaAnd (map (\(_,FieldExp pos field exp) -> ' ':show (tidIS state field)
                    ++ " at " ++ strPos pos)
                   (filter (isNothing.fst) (zip offsets fields)))
  ++ " do(es) not belong to constructor " ++ show (tidIS state con) ++
  " used at " ++ strPos pos ++ "."


errField2 :: IntState -> [Field Id] -> String

errField2 state fields =
  "The fields" ++
  mixCommaAnd (map (\(FieldExp pos field exp) -> ' ': show (tidIS state field)
                      ++ " at " ++ strPos pos)
                   fields)
  ++ " do not belong to the same type."


errField3 :: IntState -> [Field Id] -> String

errField3 state fields =
  "The fields " ++
  mixCommaAnd (map (\(FieldExp pos field exp) -> ' ':show (tidIS state field)
                    ++ " at " ++ strPos pos)
               fields)
  ++ " do not belong to the same constructor."


errField4 :: Pos -> [Char]

errField4 pos =
  "The update of the expression at " ++ strPos pos ++
  " uses an empty list of fields."

{- End Remove1_3 ------------------------------------------------------------}
