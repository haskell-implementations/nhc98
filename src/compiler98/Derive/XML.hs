module Derive.XML (deriveXML) where

import List
import Syntax
import MkSyntax(mkInt)
import IntState
import IdKind
import NT
import State
import Derive.Lib
import TokenId(TokenId,tTrue,t_Tuple,t_Colon,t_List
              ,tShowXml,t_toHType,t_showsElem
              ,t_stagparen,t_showConstr,t_compose,t_Defined,t_Constr
              ,dropM)
import Nice(showsOp,showsVar)

deriveXML tidFun cls typ tvs ctxs pos =
 getUnique >>>= \d ->
 let expD = ExpVar pos d
     iToHType    = tidFun (t_toHType,Method)
     iShowsElem  = tidFun (t_showsElem,Method)

     expToHType  = ExpVar pos iToHType
     expShowsElem  = ExpVar pos iShowsElem

     expTrue   = ExpCon pos (tidFun (tTrue,Con))
     expPair   = ExpCon pos (tidFun (t_Tuple 2,Con))
     expCons   = ExpCon pos (tidFun (t_Colon,Con))
     expNil    = ExpCon pos (tidFun (t_List,Con))
     expDefined= ExpCon pos (tidFun (t_Defined,Con))
     expConstr = ExpCon pos (tidFun (t_Constr,Con))
     expDot    = ExpVar pos (tidFun (t_compose,Var))
     expId     = ExpVar pos (tidFun (t_id,Var))
     expStagparen  = ExpVar pos (tidFun (t_stagparen,Var))
     expShowConstr = ExpVar pos (tidFun (t_showConstr,Var))
 in
  getInfo typ >>>= \ typInfo -> 
  mapS getInfo (constrsI typInfo) >>>= \ constrInfos ->
  let sizeC = ((ceiling . logBase 2 . fromIntegral . length) constrInfos)::Int
  in
    addInstMethod tShowXml (tidI typInfo) t_toHType (NewType tvs [] ctxs [mkNTcons typ (map mkNTvar tvs)]) iToHType >>>= \ funH ->
    addInstMethod tShowXml (tidI typInfo) t_showsElem (NewType tvs [] ctxs [mkNTcons typ (map mkNTvar tvs)]) iShowsElem >>>= \ funS ->
    mapS (mkShowsFun expTrue expShowsElem expToHType expStagparen expShowConstr expDot expId pos) (zip [0..] constrInfos) >>>= \ funSs ->
    mkHTypeFuns expTrue expToHType expDefined expConstr expCons expNil pos typInfo constrInfos >>>= \ funHs ->
    unitS $
      DeclInstance pos (syntaxCtxs pos ctxs) cls [syntaxType pos typ tvs] $
        DeclsParse [DeclFun pos funH funHs
                   ,DeclFun pos funS funSs]



mkShowsFun expTrue expShowsElem expToHType expStagparen expShowConstr expDot expId pos (numC,constrInfo) =
  getUnique >>>= \v ->
  let 
    --conTid = dropM (tidI constrInfo)
      con    = ExpCon pos (uniqueI constrInfo)
      expV   = ExpVar pos v
      expTag = ExpApplication pos [expShowConstr, mkInt pos numC,
                                     ExpApplication pos [expToHType, expV]]
      expStag x = ExpApplication pos [expStagparen, expTag, x]
  in case ntI constrInfo of
     NewType _ _ _ [nt] -> -- This constructor has no arguments
       unitS (Fun [PatAs pos v con] [(expTrue,expStag expId)] (DeclsParse []))
     NewType _ _ _ (_:nts) ->  -- We want a list with one element for each arg
       mapS ( \ _ -> unitS (ExpVar pos) =>>> getUnique) nts >>>= \args ->
       let expShowsArg arg = ExpApplication pos [expShowsElem,arg]
       in unitS (
          Fun [PatAs pos v (ExpApplication pos (con:args))]
              [(expTrue, expStag (foldr1
                                    (\arg z-> ExpApplication pos [expDot,arg,z])
                                    (map expShowsArg args)))]
              (DeclsParse []))


-- this code is modified from *showType*, not from *readsPrec*.
mkHTypeFuns expTrue expToHType expDefined expConstr expCons expNil pos typInfo constrInfos =
  getUnique >>>= \ v ->
  let expV      = ExpVar pos v
      expGetCon = ExpApplication pos [expGetBits, expBH, mkInt pos sizeC]
  in
   --mkListExp pos expCons expNil expGtGtEq expGet expBH expReturn constrInfos >>>= \listExp->
     mkAltList pos expTrue (mkGetExp pos expGtGtEq expGet expBH expReturn) constrInfos >>>= \altList->
     unitS [Fun [expBH]
                [(expTrue, ExpApplication pos
                             [expGtGtEq,
                              expGetCon,
                              ExpLambda pos [expI]
                                 (ExpCase pos expI altList)
                             ])]
                (DeclsParse [])]

mkGetExp pos expGtGtEq expGet expBH expReturn expCon args constrInfo =
  foldr (\ arg z -> ExpApplication pos [expGtGtEq, (ExpApplication pos [expGet,expBH]), ExpLambda pos [arg] z])
        (ExpApplication pos [expReturn,
                             ExpApplication pos (expCon:args)])
        args


mkAltList pos expTrue mkExpFun constrInfos =
  mapS (\(n,constrInfo) ->
         let expCon = ExpCon pos (uniqueI constrInfo)
             expN   = mkInt pos n
         in
         case ntI constrInfo of
           NewType _ _ _ (_:nts) ->
             mapS ( \ _ -> unitS (ExpVar pos) =>>> getUnique) nts >>>= \args ->
             unitS (Alt expN
                        [(expTrue, mkExpFun expCon args constrInfo)]
                        (DeclsParse []))
       )
       (zip [0..] constrInfos)



-- this code is modified from *showType*, not from *readsPrec*.
mkFGetFuns expTrue expGetBitsF expFGet expLtLt expPair expCons expNil sizeC pos typInfo constrInfos =
  getUnique >>>= \ bh ->
  getUnique >>>= \ p ->
  getUnique >>>= \ p' ->
  getUnique >>>= \ n ->
  let expBH = ExpVar pos bh
      expP  = ExpVar pos p
      expP' = ExpVar pos p'
      expN  = ExpVar pos n
      expInit   = ExpApplication pos [expGetBitsF, expBH, mkInt pos sizeC, expP]
      expFGetBH = ExpApplication pos [expFGet, expBH]
  in
     mkAltList pos expTrue (mkGetFExp pos expLtLt expFGetBH expPair expP') constrInfos >>>= \altList->
     unitS [Fun [expBH,expP]
                [(expTrue, ExpLet pos (DeclsParse [DeclPat (Alt (ExpApplication pos [expPair,expN,expP'])
                                                                [(expTrue,expInit)]
                                                                (DeclsParse []))])
                                      (ExpCase pos expN altList)
                )]
                (DeclsParse [])]

mkGetFExp pos expLtLt expFGetBH expPair expP' expCon args constrInfo =
    foldl (\ acc arg -> ExpApplication pos [expLtLt, acc, expFGetBH])
          (ExpApplication pos [expPair,expCon,expP'])
          args


mkSizeFun sizeC expTrue expSize expPlus pos constrInfo =
  let
      con           = ExpCon pos (uniqueI constrInfo)
      expCsize      = mkInt pos sizeC
      expSizeOf arg = ExpApplication pos [expSize,arg]
  in case ntI constrInfo of
     NewType _ _ _ (_:nts) ->
       mapS ( \_ -> unitS (ExpVar pos) =>>> getUnique) nts >>>= \args ->
       unitS (
          Fun [ExpApplication pos (con:args)]
              [(expTrue, foldl (\z arg-> ExpApplication pos [expPlus,expSizeOf arg,z]) expCsize args)]
              (DeclsParse []))

