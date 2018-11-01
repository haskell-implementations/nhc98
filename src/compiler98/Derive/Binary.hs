module Derive.Binary (deriveBinary) where

import List
import Syntax
import MkSyntax(mkInt)
import IntState
import Id
import IdKind
import NT
import State
import Derive.Lib
import TokenId(t_Tuple,t_Colon,t_List,
               tBinary,t_get,t_put,t_getF,t_sizeOf,
               t_putBits,t_getBits,t_getBitsF,
               t_gtgt,t_gtgteq,t_return,t_ltlt,t_plus)

deriveBinary :: ((TokenId, IdKind) -> Id)
             -> Id -> Id -> [Id] -> [(Id, Id)] -> Pos
             -> State d IntState (Decl Id) IntState
deriveBinary tidFun cls typ tvs ctxs pos =
 getUnique >>>= \d ->
 let iPut  = tidFun (t_put,Method)
     iGet  = tidFun (t_get,Method)
     iFGet = tidFun (t_getF,Method)
     iSize = tidFun (t_sizeOf,Method)

     expPut  = ExpVar pos iPut
     expGet  = ExpVar pos iGet
     expFGet = ExpVar pos iFGet
     expSize = ExpVar pos iSize

     expPair   = ExpCon pos (tidFun (t_Tuple 2,Con))
     expCons   = ExpCon pos (tidFun (t_Colon,Con))
     expNil    = ExpCon pos (tidFun (t_List,Con))
     expPutBits = ExpVar pos (tidFun (t_putBits,Var))
     expGetBits = ExpVar pos (tidFun (t_getBits,Var))
     expGetBitsF  = ExpVar pos (tidFun (t_getBitsF,Var))
     expLtLt   = ExpVar pos (tidFun (t_ltlt,Var))
     expGtGt   = ExpVar pos (tidFun (t_gtgt,Var))
     expGtGtEq = ExpVar pos (tidFun (t_gtgteq,Var))
     expReturn = ExpVar pos (tidFun (t_return,Var))
     expPlus   = ExpVar pos (tidFun (t_plus,Var))
 in
  getInfo typ >>>= \ typInfo -> 
  mapS getInfo (constrsI typInfo) >>>= \ constrInfos ->
  let sizeC = ((ceiling . logBase 2 . fromIntegral . length) constrInfos)::Int
  in
    addInstMethod tBinary (tidI typInfo) t_put (NewType tvs [] ctxs [mkNTcons typ (map mkNTvar tvs)]) iPut >>>= \ funP ->
    addInstMethod tBinary (tidI typInfo) t_get (NewType tvs [] ctxs [mkNTcons typ (map mkNTvar tvs)]) iGet >>>= \ funG ->
    addInstMethod tBinary (tidI typInfo) t_getF (NewType tvs [] ctxs [mkNTcons typ (map mkNTvar tvs)]) iFGet >>>= \ funF ->
    addInstMethod tBinary (tidI typInfo) t_sizeOf (NewType tvs [] ctxs [mkNTcons typ (map mkNTvar tvs)]) iSize >>>= \ funS ->
    mapS (mkPutFun expPutBits expPut expGtGt expGtGtEq expReturn sizeC pos) (zip [0..] constrInfos) >>>= \ funPs ->
    mkGetFuns expGetBits expGet expGtGtEq expReturn expCons expNil sizeC pos typInfo constrInfos >>>= \ funGs ->
    mkFGetFuns expGetBitsF expFGet expLtLt expPair expCons expNil sizeC pos typInfo constrInfos >>>= \ funFs ->
    mapS (mkSizeFun sizeC expSize expPlus pos) constrInfos >>>= \ funSs ->
    unitS $
      DeclInstance pos (syntaxCtxs pos ctxs) cls [syntaxType pos typ tvs] $
        DeclsParse [DeclFun pos funP funPs
                   ,DeclFun pos funG funGs
                   ,DeclFun pos funF funFs 
                   ,DeclFun pos funS funSs]



mkPutFun :: Exp Id -> Exp Id -> Exp Id -> Exp Id -> Exp Id
            -> Int -> Pos -> (Int, Info)
            -> State d IntState (Fun Id) IntState
mkPutFun expPutBits expPut expGtGt expGtGtEq expReturn sizeC pos (numC,constrInfo) =
  getUnique >>>= \bh->
  let 
    --conTid = dropM (tidI constrInfo)
      con = ExpCon pos (uniqueI constrInfo)
      expBH = ExpVar pos bh
      expPutCon = ExpApplication pos [expPutBits, expBH, mkInt pos sizeC, mkInt pos numC]
  in case ntI constrInfo of
     NewType _ _ _ [nt] -> -- This constructor has no arguments
       unitS (Fun [expBH,con] (Unguarded expPutCon) (DeclsParse []))
     NewType _ _ _ (_:nts) ->  -- We only want a list with one element for each argument, the elements themselves are never used
       mapS ( \ _ -> unitS (ExpVar pos) =>>> getUnique) nts >>>= \(fstarg:args) ->
       getUnique >>>= \ h ->
       let expH = ExpVar pos h
           expPutArg arg = ExpApplication pos [expPut,expBH,arg]
       in unitS 
            (Fun [expBH,ExpApplication pos (con:fstarg:args)]
              (Unguarded 
                (ExpApplication pos
                  [expGtGtEq
                  ,expPutCon
                  ,ExpLambda pos [expH]
                    (ExpApplication pos 
                      [expGtGt
                      ,(foldl (\z arg -> 
                         ExpApplication pos [expGtGt,z,expPutArg arg])
                         (expPutArg fstarg)
                         args)
                      ,ExpApplication pos [expReturn,expH]])]))
              (DeclsParse []))


-- this code is modified from *showType*, not from *readsPrec*.
mkGetFuns :: Exp Id -> Exp Id -> Exp Id -> Exp Id -> Exp Id -> Exp Id
          -> Int -> Pos -> Info -> [Info]
          -> State d IntState [Fun Id] IntState
mkGetFuns expGetBits expGet expGtGtEq expReturn expCons expNil sizeC pos typInfo constrInfos =
  getUnique >>>= \ i ->
  getUnique >>>= \ bh ->
  let expI      = ExpVar pos i
      expBH     = ExpVar pos bh
      expGetCon = ExpApplication pos [expGetBits, expBH, mkInt pos sizeC]
  in
   --mkListExp pos expCons expNil expGtGtEq expGet expBH expReturn constrInfos >>>= \listExp->
     mkAltList pos (mkGetExp pos expGtGtEq expGet expBH expReturn) constrInfos >>>= \altList->
     unitS [Fun [expBH]
             (Unguarded 
               (ExpApplication pos
                 [expGtGtEq
                 ,expGetCon
                 ,ExpLambda pos [expI] (ExpCase pos expI altList)
                 ]))
             (DeclsParse [])]

mkGetExp :: Pos -> Exp id -> Exp id -> Exp id -> Exp id -> Exp id
         -> [Exp id] -> Info
         -> Exp id
mkGetExp pos expGtGtEq expGet expBH expReturn expCon args constrInfo =
  foldr (\ arg z -> ExpApplication pos [expGtGtEq, (ExpApplication pos [expGet,expBH]), ExpLambda pos [arg] z])
        (ExpApplication pos [expReturn,
                             ExpApplication pos (expCon:args)])
        args


mkAltList :: Pos
             -> (Exp Id -> [Exp Id] -> Info -> Exp id)
             -> [Info]
             -> State d IntState [Alt id] IntState
mkAltList pos mkExpFun constrInfos =
  mapS (\(n,constrInfo) ->
         let expCon = ExpCon pos (uniqueI constrInfo)
             expN   = mkInt pos n
         in
         case ntI constrInfo of
           NewType _ _ _ (_:nts) ->
             mapS ( \ _ -> unitS (ExpVar pos) =>>> getUnique) nts >>>= \args ->
             unitS (Alt expN
                     (Unguarded (mkExpFun expCon args constrInfo))
                     (DeclsParse []))
       )
       (zip [0..] constrInfos)



-- this code is modified from *showType*, not from *readsPrec*.
mkFGetFuns :: Exp Id -> Exp Id -> Exp Id -> Exp Id -> Exp Id -> Exp Id
           -> Int -> Pos -> Info -> [Info]
           -> State d IntState [Fun Id] IntState
mkFGetFuns expGetBitsF expFGet expLtLt expPair expCons expNil sizeC pos typInfo constrInfos =
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
     mkAltList pos (mkGetFExp pos expLtLt expFGetBH expPair expP') constrInfos >>>= \altList->
     unitS [Fun [expBH,expP]
             (Unguarded 
               (ExpLet pos 
                 (DeclsParse 
                   [DeclPat 
                     (Alt (ExpApplication pos [expPair,expN,expP'])
                        (Unguarded expInit) (DeclsParse []))])
                 (ExpCase pos expN altList)
               ))
              (DeclsParse [])]

mkGetFExp :: Pos -> Exp id -> Exp id -> Exp id -> Exp id -> Exp id
          -> [b] -> Info
          -> Exp id
mkGetFExp pos expLtLt expFGetBH expPair expP' expCon args constrInfo =
    foldl (\ acc arg -> ExpApplication pos [expLtLt, acc, expFGetBH])
          (ExpApplication pos [expPair,expCon,expP'])
          args


mkSizeFun :: Int -> Exp Id -> Exp Id -> Pos -> Info
          -> State d IntState (Fun Id) IntState
mkSizeFun sizeC expSize expPlus pos constrInfo =
  let
      con           = ExpCon pos (uniqueI constrInfo)
      expCsize      = mkInt pos sizeC
      expSizeOf arg = ExpApplication pos [expSize,arg]
  in case ntI constrInfo of
     NewType _ _ _ (_:nts) ->
       mapS ( \_ -> unitS (ExpVar pos) =>>> getUnique) nts >>>= \args ->
       unitS (
         Fun [ExpApplication pos (con:args)]
           (Unguarded 
             (foldl (\z arg-> 
               ExpApplication pos [expPlus,expSizeOf arg,z]) 
               expCsize args))
           (DeclsParse []))

