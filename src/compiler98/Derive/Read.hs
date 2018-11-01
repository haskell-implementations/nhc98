module Derive.Read(deriveRead) where

import Syntax
import MkSyntax(mkInt)
import IntState
import Id
import IdKind
import NT
import State
import Derive.Lib
import TokenId(tFalse,tTrue,tRead,treadParen,treadsPrec
              ,t_greater,t_append,t_readCon0,t_readCon,t_readConArg
              ,t_readConInfix,t_readField,t_readFinal,isTidOp,dropM)
import Nice(showsOp,showsVar)
import Maybe

deriveRead :: ((TokenId, IdKind) -> Id)
              -> Id -> Id -> [Id] -> [(Id, Id)] -> Pos
              -> State d IntState (Decl Id) IntState
deriveRead tidFun cls typ tvs ctxs pos =
 getUnique >>>= \ d ->
 getUnique >>>= \ r ->
 let expD = ExpVar pos d
     expR = ExpVar pos r
     ireadsPrec = tidFun (treadsPrec,Method)
     expAppend = ExpVar pos (tidFun (t_append,Var))
 in
  getInfo typ >>>= \ typInfo -> 
  mapS getInfo (constrsI typInfo) >>>= \ constrInfos ->
  addInstMethod tRead (tidI typInfo) treadsPrec (NewType tvs [] ctxs [mkNTcons typ (map mkNTvar tvs)]) ireadsPrec >>>= \ fun ->
  mapS (mkReadExp expD expR tidFun pos) constrInfos >>>= \ (e:es) ->
  unitS $
    DeclInstance pos (syntaxCtxs pos ctxs) cls [syntaxType pos typ tvs] $
      DeclsParse [DeclFun pos fun 
        [Fun [expD,expR]
          (Unguarded 
            (foldr (\ e1 e2 -> ExpApplication pos [expAppend, e1, e2]) e es)) 
          (DeclsParse [])]
                ]



mkReadExp :: Exp Id -> Exp Id
          -> ((TokenId, IdKind) -> Id)
          -> Pos -> Info
          -> State d IntState (Exp Id) IntState
mkReadExp expD expR tidFun pos constrInfo =
  let 
      conTid = dropM (tidI constrInfo)      
      con = ExpCon pos (uniqueI constrInfo)
      fields = fieldsI constrInfo
  in
    if isTidOp conTid then
      let expConOp = ExpLit pos (LitString Boxed (showsOp conTid ""))
          expTrue = ExpCon pos (tidFun (tTrue,Con))
      in 
        case ntI constrInfo of
          NewType _ _ _ [nt] -> -- This constructor has no arguments
            unitS (ExpApplication pos [ExpVar pos (tidFun (t_readCon0,Var)), expTrue, con, expConOp, expR])
          NewType _ _ _ [a,b,r] -> -- Infix constructor with two arguments
            let (p,lp,rp) = case fixityI constrInfo of
                               (Infix,p)  -> (p,p+1,p+1)
                               (InfixR,p) -> (p,p+1,p)
                               (_,p)      -> (p,p,p+1)
            in unitS (ExpApplication pos [ExpVar pos (tidFun (t_readConInfix,Var)) ,expD ,(mkInt pos p) ,(mkInt pos lp) ,(mkInt pos rp) ,con ,expConOp, expR])
          NewType _ _ _ (_:nts) ->  -- We only want a list with one element for each argument, the elements themselves are never used
            let readConArg = ExpVar pos (tidFun (t_readConArg,Var))
            in unitS $
                 ExpApplication pos [ExpVar pos (tidFun (treadParen,Var))
                                      ,ExpApplication pos [ExpVar pos (tidFun (t_greater,Var)), expD, mkInt pos 9]
                                      ,foldr (\ _ a -> ExpApplication pos [readConArg,a])
                                             (ExpApplication pos [ExpVar pos (tidFun (t_readCon0,Var)), expTrue, con, expConOp]) 
                                             nts
                                      ,expR]

    else if null fields || any isNothing fields -- ordinary constructor
    then
      let expConVar = ExpLit pos (LitString Boxed (showsVar conTid ""))
          expFalse = ExpCon pos (tidFun (tFalse,Con))
      in
        case ntI constrInfo of
          NewType _ _ _ [nt] -> -- This constructor has no arguments
            unitS (ExpApplication pos [ExpVar pos (tidFun (t_readCon0,Var)), expFalse, con, expConVar, expR])
          NewType _ _ _ (_:nts) ->  -- We only want a list with one element for each argument, the elements themselves are never used
            let readConArg = ExpVar pos (tidFun (t_readConArg,Var))
            in unitS $
                 ExpApplication pos [ExpVar pos (tidFun (treadParen,Var))
                                      ,ExpApplication pos [ExpVar pos (tidFun (t_greater,Var)), expD, mkInt pos 9]
                                      ,foldr (\ _ a -> ExpApplication pos [readConArg,a])
                                             (ExpApplication pos [ExpVar pos (tidFun (t_readCon,Var)), con, expConVar]) 
                                             nts
                                      ,expR]

    else        -- constructor with named fields
      let expConVar = ExpLit pos (LitString Boxed (showsVar conTid ""))
          expReadField = ExpVar pos (tidFun (t_readField,Var))
          expReadFinal k = ExpApplication pos
              [ExpVar pos (tidFun (t_readFinal,Var))
              ,ExpLit pos (LitString Boxed "}")
              ,k]
          expLabel prefix label k = ExpApplication pos
              [expReadField
              ,ExpLit pos (LitString Boxed prefix)
              ,ExpLit pos (LitString Boxed (showsVar (dropM (tidI label)) ""))
              ,k]
          (NewType _ _ _ (_:nts)) = ntI constrInfo -- get list, 1 elem per arg
          prefixes = "{": replicate (length nts - 1) ","
      in
        mapS (getInfo.fromJust) fields >>>= \labels->
        unitS $
          ExpApplication pos
              [ExpVar pos (tidFun (treadParen,Var))
              ,ExpApplication pos
                  [ExpVar pos (tidFun (t_greater,Var)), expD, mkInt pos 9]
              ,expReadFinal
                  (foldr (\(p,l) a -> expLabel p l a)
                         (ExpApplication pos
                             [ExpVar pos (tidFun (t_readCon,Var))
                             ,con ,expConVar])
                         (reverse (zip prefixes labels)))
              ,expR]

