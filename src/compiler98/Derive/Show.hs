module Derive.Show (deriveShow) where

import List(intersperse,partition)
import Maybe(isNothing,fromJust)
import Syntax(Exp(ExpVar,ExpCon,ExpLit,ExpApplication,PatWildcard),Fun(Fun)
             ,Rhs(Unguarded),Alt(Alt),Decl(DeclFun,DeclInstance,DeclPat)
             ,Decls(DeclsParse),Boxed(Boxed),Lit(LitChar,LitString,LitInt))
import MkSyntax(mkInt)
import IntState
import IdKind
import NT
import State
import Derive.Lib(syntaxType,syntaxCtxs)
import TokenId(tTrue,tShow,tshowParen,tshowChar,tshowString
              ,tshowsType,tshowsPrec,t_lessthan,t_dot,dropM,isTidOp,visImport)
import Nice(showsOp,showsVar)
import Id(Id)

deriveShow :: ((TokenId,IdKind) -> Id)
           -> Id -> Id -> [Id] -> [(Id,Id)] -> Pos -> a -> IntState -> (Decl Id,IntState)
deriveShow tidFun cls typ tvs ctxs pos =
 getUnique >>>= \d ->
 let expD = ExpVar pos d
     ishowsPrec = tidFun (tshowsPrec,Method)
     ishowsType = tidFun (tshowsType,Method)

     expShowsPrec = ExpVar pos ishowsPrec
     expShowsType = ExpVar pos ishowsType

     expTrue = ExpCon pos (tidFun (tTrue,Con))
     expShowString = ExpVar pos (tidFun (tshowString,Var))
     expShowParen = ExpVar pos (tidFun (tshowParen,Var))
     expShowSpace = ExpApplication pos [ExpVar pos (tidFun (tshowChar,Var)),ExpLit pos (LitChar Boxed ' ')]
     expLessThan = ExpVar pos (tidFun (t_lessthan,Var))
     expDot = ExpVar pos (tidFun (t_dot,Var))
 in
  getInfo typ >>>= \ typInfo -> 
  mapS getInfo (constrsI typInfo) >>>= \ constrInfos ->
  addInstMethod tShow (tidI typInfo) tshowsPrec (NewType tvs [] ctxs [mkNTcons typ (map mkNTvar tvs)]) ishowsPrec >>>= \ fun ->
  addInstMethod tShow (tidI typInfo) tshowsType (NewType tvs [] ctxs [mkNTcons typ (map mkNTvar tvs)]) ishowsType >>>= \ funT ->
  mapS (mkShowFun expTrue expD expShowString expShowSpace expShowParen expShowsPrec expLessThan expDot pos) constrInfos >>>= \ funs ->
  mkShowFunTs expTrue expShowsType expShowParen expShowString expShowSpace expDot pos typInfo constrInfos >>>= \ funTs ->
  unitS $
    DeclInstance pos (syntaxCtxs pos ctxs) cls [syntaxType pos typ tvs] $
      DeclsParse [DeclFun pos fun funs
                 ,DeclFun pos funT funTs]



mkShowFun :: a -> Exp Id -> Exp Id -> Exp Id -> Exp Id -> Exp Id -> Exp Id -> Exp Id
          -> Pos -> Info -> b -> IntState -> (Fun Id,IntState)
mkShowFun expTrue expD expShowString expShowSpace expShowParen expShowsPrec expLessThan expDot pos constrInfo =
  let 
      fields = fieldsI constrInfo
      conTid = dropM (tidI constrInfo)
      con = ExpCon pos (uniqueI constrInfo)
      expShowsConOp = 
        ExpApplication pos 
          [expShowString,ExpLit pos (LitString Boxed (showsOp conTid ""))]
      expShowsConVar = 
        ExpApplication pos 
          [expShowString,ExpLit pos (LitString Boxed (showsVar conTid ""))]
  in case ntI constrInfo of
    NewType _ _ _ [nt] -> -- This constructor has no arguments
      unitS (Fun [expD,con] (Unguarded expShowsConVar) (DeclsParse []))

    NewType _ _ _ [a,b,r] | isTidOp conTid -> 
      -- Infix constructor with two arguments
      getUnique >>>= \ v1 ->
      getUnique >>>= \ v2 ->
      let (lp,p,rp) = case fixityI constrInfo of
                         (Infix,p)  -> (p,p,p)
                         (InfixR,p) -> (p+1,p,p)
                         (_,p)      -> (p,p,p+1)
          v1e = ExpVar pos v1
          v2e = ExpVar pos v2
      in unitS (
           Fun [expD,ExpApplication pos [con,v1e,v2e]]
             (Unguarded (ExpApplication pos 
               [expShowParen
               ,ExpApplication pos [expLessThan,mkInt pos p,expD]
               ,ExpApplication pos
                 [expDot
                 ,ExpApplication pos [expShowsPrec,mkInt pos lp,v1e] 
                 ,ExpApplication pos 
                   [expDot
                   ,expShowSpace
                   ,ExpApplication pos 
                     [expDot
                     ,expShowsConOp
                     ,ExpApplication pos 
                       [expDot
                       ,expShowSpace
                       ,ExpApplication pos [expShowsPrec,mkInt pos rp,v2e]]]]]]
             )) (DeclsParse []))

    NewType _ _ _ (_:nts) | any isNothing fields ->
      -- We only want a list with one element for each argument, the elements themselves are never used
      mapS ( \ _ -> unitS (ExpVar pos) =>>> getUnique) nts >>>= \ args ->
      let exp10 = ExpLit pos (LitInt Boxed 10)
          exp9 = ExpLit pos (LitInt Boxed 9)
          expShowsPrec10 arg = ExpApplication pos [expShowsPrec,exp10,arg]
      in unitS (
           Fun [expD,ExpApplication pos (con:args)]
             (Unguarded (ExpApplication pos 
               [expShowParen
               ,ExpApplication pos [expLessThan,exp9,expD]
               ,foldl ( \ acc arg -> 
                 ExpApplication pos 
                   [expDot
                   ,ExpApplication pos [expDot, acc ,expShowSpace]
                   ,expShowsPrec10 arg])
                 expShowsConVar
                 args
               ]))
             (DeclsParse []))

    NewType _ _ _ (_:nts) ->  -- named field labels must be shown
      mapS ( \ _ -> unitS (ExpVar pos) =>>> getUnique) nts >>>= \ args ->
      mapS (getInfo.fromJust) fields >>>= \ labels ->
      let exp10 = ExpLit pos (LitInt Boxed 10)
          exp9 = ExpLit pos (LitInt Boxed 9)
          expShowsPrec10 arg = ExpApplication pos [expShowsPrec,exp10,arg]
          expShowsLabel label = 
            ExpApplication pos 
              [expShowString
              ,ExpLit pos (LitString Boxed (showsVar (dropM (tidI label)) "="))]
          expShowsOpen  = 
            ExpApplication pos [expShowString,ExpLit pos (LitString Boxed "{")]
          expShowsClose = 
            ExpApplication pos [expShowString,ExpLit pos (LitString Boxed "}")]
          expShowsComma = 
            ExpApplication pos [expShowString,ExpLit pos (LitString Boxed ",")]
      in unitS (
           Fun [expD,ExpApplication pos (con:args)]
             (Unguarded 
               (ExpApplication pos 
                 [expShowParen
                 ,ExpApplication pos [expLessThan,exp9,expD]
                 ,( foldl (\acc item->
                   ExpApplication pos [expDot,acc,item]) expShowsConVar .
                   (expShowsOpen:) .
                   (++[expShowsClose]) .
                   intersperse expShowsComma .
                   zipWith (\label arg->
                              ExpApplication pos [expDot,expShowsLabel label,
                                                         expShowsPrec10 arg])
                           labels
                 ) args
                 ]))

--               ExpApplication pos [expDot,
--                 foldl ( \ acc (label,arg) ->
--                       ExpApplication pos [expDot,
--                         ExpApplication pos [expDot, acc ,
--                           ExpApplication pos [expDot, expShowSpace,
--                             expShowsLabel label]],
--                         expShowsPrec10 arg])
--                    (ExpApplication pos [expDot, expShowsConVar, expShowsOpen])
--                    (zip (map tidI labels) args),
--                  expShowsClose]])]

              (DeclsParse []))


mkShowFunTs :: Exp Id -> Exp Id -> Exp Id -> Exp Id -> Exp Id -> Exp Id 
            -> Pos -> Info -> [Info] 
            -> a -> IntState -> ([Fun Id],IntState)

mkShowFunTs expTrue expShowsType expShowParen expShowString expShowSpace expDot pos typInfo constrInfos =
  getUnique >>>= \ v ->
  let expA = ExpVar pos v
      expTypeStr = ExpApplication pos [expShowString,(ExpLit pos . LitString Boxed . show . dropM . tidI) typInfo]
  in
    case ntI typInfo of
      NewType [] [] [] _  ->
        unitS [Fun [expA] (Unguarded expTypeStr) (DeclsParse [])]
      NewType free exist _ _ ->
        mapS (\ f -> getUnique >>>= \ i -> unitS (f,i,ExpVar pos i)) 
          free >>>= \ fitypes ->
        mapS0 (\(f,i,ei)-> addNewLetBound i (visImport ('v':(show i)))) fitypes >>>
        mapS ( getType pos expA expShowsType expTrue expShowString constrInfos ) fitypes >>>= \ des ->
        case unzip des of
          (ds,es) ->
            unitS [Fun [expA]
                       (Unguarded (ExpApplication pos 
                         [expShowParen
                         ,expTrue
                         ,foldl ( \ acc e -> 
                           ExpApplication pos 
                             [expDot    
                             ,ExpApplication pos [expDot, acc ,expShowSpace]
                             ,e])
                           expTypeStr
                           es]))
                    (DeclsParse (concat ds))
                  ]      


getType :: Show a 
        => Pos -> Exp Id -> Exp Id -> b -> Exp Id -> [Info] -> (Id,a,Exp Id) 
        -> c -> d -> (([Decl Id],Exp Id),d)

getType pos expA expShowsType expTrue expShowString [] (f,i,iexp) =
  unitS ([],ExpApplication pos [expShowString,ExpLit pos (LitString Boxed ('?':'v':show i++"?"))])
getType pos expA expShowsType expTrue expShowString (info:infos) (f,i,iexp) =
  patConstr pos info f iexp >>>= \ qpat ->
  case qpat of
    Just pat -> 
      unitS ([DeclPat (Alt pat (Unguarded expA) (DeclsParse[]))]
            ,ExpApplication pos [expShowsType,iexp])
    Nothing -> 
      getType pos expA expShowsType expTrue expShowString infos (f,i,iexp)


patConstr :: Pos -> Info -> Id -> Exp Id -> a -> b -> (Maybe (Exp Id),b)

patConstr pos info f iexp =
  case ntI info of
    NewType free exist ctxs nts ->
      let ints =  (zip [0 .. ] . init) nts
      in case (partition (simpleNT . snd) .  filter (elem f . freeNT . snd)) ints of
          ([],[])      -> unitS Nothing
          ((i,nt):_,_) -> unitS (Just (ExpApplication pos (ExpCon pos (uniqueI info) : map (toExp i iexp) ints)))
          ([],xs)      -> unitS Nothing -- can do better here !!
 where
  toExp i iexp (i',_) = if i == i' then iexp else PatWildcard pos


simpleNT :: NT -> Bool
simpleNT (NTstrict nt) = simpleNT nt
simpleNT (NTvar v _) = True
simpleNT (NTany v) = True
simpleNT _ = False
