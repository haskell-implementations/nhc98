{-
Besides other things it implements the MAGIC of some function definitions.
Occurrences of these functions (in specific contexts) are turned into
a respective bytecode.
-}
module PrimCode(primCode{-,rpsEval-},rpsseq) where

import Util.Extra(pair)
import State
import IntState
import TokenId
import PosCode
import SysDeps(PackedString,packString)
import IdKind
import Id(Id)
import Building (Compiler(..),compiler)

type PrimDown = ((Bool, Bool, Bool), Bool, Bool, Id)
type PrimMonad a b = State PrimDown
                           (IntState, [(a, PosLambda)])
                           b
                           (IntState, [(a, PosLambda)])



------- (true if bool == Int, true if && || not is primitives,true if )

primCode :: (Bool,Bool,Bool) -- ^ bool, logic, always [too cryptic!]
         -> Bool -- ^ magic: create byte code instructions for some functions
         -> ((TokenId,IdKind) -> Id)
         -> IntState
         -> [(a,PosLambda)]
         -> ([(a,PosLambda)],IntState)

primCode flags magic tidFun state code =
  case mapS primBindingTop code (flags,magic,True,tidFun (t_id,Var))
         (state,[]) of
    (bs,(state,_)) -> (concat bs,state)


primBindingTop :: (a,PosLambda)
               -> PrimMonad a [(a,PosLambda)]

primBindingTop (fun,lambda) =
    primStrict True >=>
    primLambda lambda >>>= \ lambda ->
    primTop >>>= \ bs ->
    unitS ((fun,lambda):bs)

primBinding :: (Id, PosLambda)
            -> PrimMonad a (Id, PosLambda)
primBinding (fun,lambda) =
  primLambda lambda >>>= \ lambda ->
    unitS (fun,lambda)

primBindings :: [PosBinding] -> PrimMonad a [PosBinding]
primBindings bindings =
  primBindings' [] (reverse bindings)
 where
  primBindings' acc [] = unitS (acc)
  primBindings' acc (b:bs) =
    primBinding b >>>= \ (b) ->
    primBindings' (b:acc) bs


primLambda :: PosLambda -> PrimMonad a PosLambda
primLambda (PosLambda pos int free args@(_:_) exp) =
  primStrict True >=>  -- will be lifted later
  primExp exp >>>= \ (exp) ->
  unitS (PosLambda pos int free args exp)
primLambda (PosLambda pos int free args exp) =
  primExp exp >>>= \ (exp) ->
  unitS (PosLambda pos int free args exp)
primLambda l@(PosPrimitive pos fun) =
  unitS l
primLambda l@(PosForeign pos fun ar t c ie) =
  unitS l

primExp :: PosExp -> PrimMonad a PosExp
primExp (PosExpLambda pos int envs args exp) =
  primStrict True >=>  -- will be lifted later
  primExp exp >>>= \ exp ->
  unitS (PosExpLambda pos int envs args exp)
primExp (PosExpLet rec pos bindings exp) =
  primExp exp >>>= \ exp ->
  (primStrict False >=> primBindings bindings) >>>= \ (bindings) ->
  unitS (PosExpLet rec pos bindings exp)
primExp (PosExpCase pos exp alts) =
  primStrict True >=> -- If a case is lazy then lift it
  mapS primAlt alts >>>= \ alts ->
  primExp exp >>>= \ exp ->
  unitS (PosExpCase pos exp alts)
primExp (PosExpFatBar b exp1 exp2) =
  primExp exp2 >>>= \ exp2 ->
  primExp exp1 >>>= \ exp1 ->
  unitS (PosExpFatBar b exp1 exp2)
primExp (PosExpFail) =
  unitS (PosExpFail)
primExp (PosExpIf  pos g exp1 exp2 exp3) =
  primStrict True >=> -- If an contitional is lazy then lift it
  primExp exp2 >>>= \ exp2 ->
  primExp exp3 >>>= \ exp3 ->
  primExp exp1 >>>= \ exp1 ->
  unitS (PosExpIf pos g exp1 exp2 exp3)
primExp (PosExpApp apos (PosVar pos fun:es)) =
--  (primStrict False >=> mapS primExp es) >>>= \ es ->
  primExpand pos fun es
primExp (PosExpApp pos (e:es)) =
  primExp e >>>= \ e ->
  (primStrict False >=> mapS primExp es) >>>= \ es ->
  unitS (PosExpApp pos (e:es))
primExp (PosVar pos fun) =
  primExpand pos fun []
primExp e =
  unitS e

primAlt :: PosAlt -> PrimMonad a PosAlt
primAlt (PosAltCon pos con args exp) =
  primExp exp >>>= \ (exp) ->
  unitS (PosAltCon pos con args exp)
primAlt (PosAltInt pos int b  exp) =
  primExp exp >>>= \ (exp) ->
  unitS (PosAltInt pos int b exp)

---

strictPrim :: Prim -> [Bool]
strictPrim SEQ = True : repeat False
strictPrim _ = repeat True


primPrimitive :: Pos -> Prim -> Id -> Int -> [PosExp]
              -> PrimMonad a PosExp
primPrimitive pos prim fun arity es =
  mapS ( \ (s,e) -> primStrict s >=> primExp e) (zip (strictPrim prim) es) >>>= \ es ->
  let need = arity - (length es)
  in
    if need <= 0 then
      case splitAt arity es of
        (args,eargs) -> unitS (posExpApp pos (PosExpThunk pos False (PosPrim pos prim fun:args) : eargs))
    else
      mapS ( \ _ -> primUnique ) (take need (repeat '_')) >>>= \ newargs ->
      unitS (PosExpLambda pos True [] (map (pair pos) newargs) (PosExpThunk pos False (PosPrim pos prim fun : es ++ map (PosVar pos)
             newargs)))


primApp :: Pos -> Id -> [PosExp]
        -> PrimMonad a PosExp
primApp pos fun es =
 (primStrict False >=> mapS primExp es) >>>= \ es ->
 unitS (posExpApp pos (PosVar pos fun:es))

-- All args are already processed

primExpand :: Pos -> Id -> [PosExp]
           -> PrimMonad a PosExp
primExpand pos fun es =
  primFlags >>>= \ ((bool,logic,always),magic,strict) ->
  primTidArity fun >>>= \ (arity,tid) ->
  if not magic || (arity < 0 || not (strict || always)) then
    -- this cannot be a primitive, or we don't translate unless strict
    primApp pos fun es
  else
    case tid of
      (Qualified3 _ (Qualified modcls cls) (Qualified modtyp typ) (Visible met))
                | modcls == rpsPrelude && modtyp == rpsPrelude ->
        if cls == rpsEq then
          case (primOp bool typ,eqPrim met) of
            (Just op,Just prim) -> primPrimitive pos (prim op) fun arity es
            _ -> primApp pos fun es
        else if cls == rpsOrd then
          case (primOp bool typ,ordPrim met) of
            (Just op,Just prim) -> primPrimitive pos (prim op) fun arity es
            _ -> primApp pos fun es
        else if cls == rpsNum then
          case (primOp bool typ,numPrim met) of
            (Just op,Just prim) -> primPrimitive pos (prim op) fun arity es
            _ -> primApp pos fun es
        else if cls == rpsIntegral then
          case (primOp bool typ,integralPrim met) of
            (Just op,Just prim) -> primPrimitive pos prim fun arity es
            _ -> primApp pos fun es
        else if cls == rpsEnum then
          if typ == rpsChar &&
             (met == rpstoEnum || met == rpsfromEnum) then
            case es of
              (f:[]) -> unitS f
              [] -> primIdent pos
          else
            primApp pos fun es
        else if cls == rpsFloating then
          case (primOp bool typ,floatingPrim met) of
            (Just op,Just prim) -> primPrimitive pos (prim op) fun arity es
            _ -> primApp pos fun es
        else if cls == rpsFractional then
          case (primOp bool typ,fractionalPrim met) of
            (Just op,Just prim) -> primPrimitive pos (prim op) fun arity es
            _ -> primApp pos fun es
     -- else if cls == rpsEval then
     --   case (evalPrim met) of
     --     (Just prim) -> primPrimitive pos prim 2 es
     --     _ -> primApp pos fun es
        else
          primApp pos fun es

      (Qualified3 _ (Visible modcls) underscore (Visible met))
          | modcls == rpsPrelude && underscore == t_underscore && met == rpsseq ->
        primPrimitive pos SEQ fun 2 (dropDicts es)

  --  (Qualified3 (Qualified modcls cls) (Qualified modtyp typ) (Visible met))
  --      | modcls == rpsPrelude && cls == rpsEval && met == rpsseq ->
  --    primPrimitive pos SEQ 2 (dropDicts es)

      (Qualified mod met) | mod == rpsPrelude ->
             if met == rps_eqFloat then
          primPrimitive pos (CMP_EQ OpFloat) fun 2 es
        else if met == rps_eqDouble then
          primPrimitive pos (CMP_EQ OpDouble) fun 2 es
        else if met == rps_hGetStr && compiler==Nhc98 then
          primPrimitive pos HGETS fun 1 es
        else if met == rps_hGetChar && compiler==Nhc98 then
          primPrimitive pos HGETC fun 1 es
        else if met == rps_hPutChar && compiler==Nhc98 then
          primPrimitive pos HPUTC fun 2 es
        else if met == rps_unpackString {- && compiler==Yhc -} then
          primPrimitive pos STRING fun 1 es
        else if met == rps_catch then
          primPrimitive pos CATCH fun 1 es
        else if met == rps_fromEnum then
          primPrimitive pos ORD fun 1 es
        else if met == rps_toEnum && compiler==Nhc98 then
          primPrimitive pos CHR fun 1 es
        else if met == rpsseq then
          primPrimitive pos SEQ fun 2 (dropDicts es)
        else if logic then
               if met == rpsAndAnd then
            primPrimitive pos AND fun 2 es
          else if met == rpsOrOr then
            primPrimitive pos OR fun 2 es
          else if met == rpsnot then
            primPrimitive pos NOT fun 1 es
          else
            primApp pos fun es
        else
          primApp pos fun es

      _ -> primApp pos fun es


-----------------

primTop :: PrimMonad a [(a,PosCode.PosLambda)]
primTop down up@(state,bs) =
    (bs,(state,[]))

primUnique :: PrimMonad a Id
primUnique down up@(state,bs) =
  case uniqueIS state of
    (u,state) -> (u,(state,bs))

primIdent :: Pos -> PrimMonad a PosExp
primIdent pos down@(flags,magic,strict,ident) up =
  (PosVar pos ident,up)

primFlags :: PrimMonad a ((Bool,Bool,Bool),Bool,Bool)
primFlags down@(flags,magic,strict,ident) up =
  ((flags,magic,strict),up)

primStrict :: Bool -> PrimMonad a PrimDown
primStrict s down@(flags,magic,strict,ident) up =
  ((flags,magic,s,ident),up)

primTidArity :: Id -> PrimMonad a (Int, TokenId)
primTidArity i down up@(state,bs) =
  case lookupIS state i of
    Just info -> ((arityIS state i,tidI info),up)       -- count ctx
    Nothing -> ((-1,error "arg"),up) -- It's an argument, don't look :-)

-- =============================================================

impRev :: String -> PackedString
impRev str = packString (reverse str)

--------------

rpsEq, rpsOrd, rpsNum, rpsFloating, rpsIntegral, rpsFractional, rpsEnum :: PackedString
rpsEq  = impRev "Eq"
rpsOrd = impRev "Ord"
rpsNum = impRev "Num"
rpsFloating   = impRev "Floating"
rpsIntegral   = impRev "Integral"
rpsFractional = impRev "Fractional"
rpsEnum = impRev "Enum"
--rpsEval = impRev "Eval"               -- Removed in Haskell 98

rps_eqFloat, rps_eqDouble :: PackedString
rps_eqFloat = impRev "_eqFloat"
rps_eqDouble = impRev "_eqDouble"

rpsAndAnd, rpsOrOr, rpsnot, rps_fromEnum, rps_toEnum, rps_hGetStr, rps_hGetChar, rps_hPutChar
 ,rps_unpackString :: PackedString
rpsAndAnd = impRev "&&"
rpsOrOr = impRev "||"
rpsnot = impRev "not"
rps_fromEnum = impRev "_fromEnum"
rps_toEnum = impRev "_toEnum"
rps_hGetStr  = impRev "_hGetStr"
rps_hGetChar = impRev "_hGetChar"
rps_hPutChar = impRev "_hPutChar"
rps_unpackString = impRev "_unpackString"
rps_catch = impRev "_catch"

--------------

eqPrim :: PackedString -> Maybe (PrimOp -> Prim)
eqPrim met =
       if met == rpseq then Just CMP_EQ
  else if met == rpsne then Just CMP_NE
  else Nothing

rpseq, rpsne :: PackedString
rpseq = impRev "=="
rpsne = impRev "/="

--------------

ordPrim :: PackedString -> Maybe (PrimOp -> Prim)
ordPrim met =
       if met == rpslt then Just CMP_LT
  else if met == rpsle then Just CMP_LE
  else if met == rpsgt then Just CMP_GT
  else if met == rpsge then Just CMP_GE
  else Nothing

rpslt, rpsle, rpsgt, rpsge :: PackedString
rpslt = impRev "<"
rpsle = impRev "<="
rpsgt = impRev ">"
rpsge = impRev ">="

--------------------

primOp :: Bool -> PackedString -> Maybe PrimOp
primOp bool typ =
       if typ == rpsInt    then Just OpWord
  else if typ == rpsChar   then Just OpWord
  else if bool && typ == rpsBool then Just OpWord
  else if typ == rpsDouble then Just OpDouble
  else if typ == rpsFloat  then Just OpFloat
  else Nothing

rpsInt, rpsChar, rpsBool, rpsDouble, rpsFloat :: PackedString
rpsInt    = impRev "Int"
rpsChar   = impRev "Char"
rpsBool   = impRev "Bool"
rpsDouble = impRev "Double"
rpsFloat  = impRev "Float"

-------------------

rpstoEnum, rpsfromEnum :: PackedString
rpstoEnum   = impRev "toEnum"
rpsfromEnum = impRev "fromEnum"

--------------------

numPrim :: PackedString -> Maybe (PrimOp -> Prim)
numPrim met =
       if met == rpssignum && compiler==Nhc98 then Just SIGNUM
  else if met == rpsabs    && compiler==Nhc98 then Just ABS
  else if met == rpsnegate then Just NEG
  else if met == rpsadd    then Just ADD
  else if met == rpssub    then Just SUB
  else if met == rpsmul    then Just MUL
  else Nothing

rpsadd, rpssub, rpsmul, rpsabs, rpssignum, rpsnegate :: PackedString
rpsadd    = impRev "+"
rpssub    = impRev "-"
rpsmul    = impRev "*"
rpsabs    = impRev "abs"
rpssignum = impRev "signum"
rpsnegate = impRev "negate"

--------------

integralPrim :: PackedString -> Maybe Prim
integralPrim met =
       if met == rpsquot then Just QUOT
  else if met == rpsrem  then Just REM
  else Nothing

rpsquot, rpsrem :: PackedString
rpsquot = impRev "quot"
rpsrem  = impRev "rem"

--------------


floatingPrim :: PackedString -> Maybe (PrimOp -> Prim)
floatingPrim met | compiler==Yhc   = Nothing
floatingPrim met | compiler==Nhc98 =
       if met == rpsexp  then Just EXP
  else if met == rpslog  then Just LOG
  else if met == rpssqrt then Just SQRT
  else if met == rpssin  then Just SIN
  else if met == rpscos  then Just COS
  else if met == rpstan  then Just TAN
  else if met == rpsasin then Just ASIN
  else if met == rpsacos then Just ACOS
  else if met == rpsatan then Just ATAN
  else if met == rpspow then  Just POW
  else Nothing

rpsexp,rpslog,rpssqrt,rpssin,rpscos,rpstan,rpsasin,rpsacos,rpsatan,rpspow :: PackedString
rpsexp = impRev "exp"
rpslog = impRev "log"
rpssqrt = impRev "sqrt"
rpssin = impRev "sin"
rpscos = impRev "cos"
rpstan = impRev "tan"
rpsasin = impRev "asin"
rpsacos = impRev "acos"
rpsatan = impRev "atan"
rpspow = impRev "**"

--------------

fractionalPrim :: PackedString -> Maybe (PrimOp -> Prim)
fractionalPrim met =
       if met == rpsslash then Just SLASH
  else Nothing

rpsslash :: PackedString
rpsslash = impRev "/"

--------------

rpsseq :: PackedString
rpsseq = impRev "_seq"

---- ======================================================

dropDicts :: [PosExp] -> [PosExp]
dropDicts (PosExpDict _:es) = dropDicts es
dropDicts es = es
