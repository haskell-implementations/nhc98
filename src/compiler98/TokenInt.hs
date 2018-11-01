{- ---------------------------------------------------------------------------
Contains lists for idKinds and tokenIds for identifiers that are hardcoded
in the compiler.
Creates an efficient mapping (based on trees) from tokenId and idKind to id
for these identifiers.
-}
module TokenInt(getInts,tokenMain,tokenAllways,tokenBounded,tokenEnum
               ,tokenEq,tokenIx,tokenOrd,tokenRead,tokenShow,tokenBinary
               ,tokenMonad,tokenInteger,tokenRational,tokenNplusK,tokenFFI
               ,tokenComprehension
               ) where

import IdKind
import TokenId
import qualified Data.Map as Map
import Info
import Id (Id)
import Debug.Trace
import Building

{-
Creates from a partial mapping from tokenIds and idKinds to ids
an efficient (based on trees) total (unsafe) and partial mapping.
Domain of result mappings is intersection of domain of input mapping
and the lists for hardcoded identifiers defined below.
-}
getInts :: ((TokenId,IdKind) -> Maybe Id)
        -> ((TokenId,IdKind) -> Id
           ,(TokenId,IdKind) -> Maybe Id
           )

getInts tidk2i =
  case length (Map.toList assocTree) of  -- force evaluation of tree
    0 -> error "What??? (in TokenInt)\n"
    _ -> (getIntsUnsafe assocTree, flip Map.lookup assocTree)
 where
   assocTree = foldr fix Map.empty
                (tokenList ++ tokenInteger ++ tokenRational ++ tokenAllways
                ++ tokenMain
                ++ tokenMonad ++ tokenBounded ++ tokenEnum
                ++ tokenEq ++ tokenEval ++ tokenIx
                ++ tokenOrd ++ tokenRead ++ tokenShow
                ++ tokenBinary ++ tokenNplusK ++ tokenFFI  --MALCOLM modified
                ++ tokenComprehension ++ tokenDynamic)

   fix :: (IdKind,TokenId)
       -> Map.Map (TokenId,IdKind) Id
       -> Map.Map (TokenId,IdKind) Id

   fix (k,tid) t =
      case tidk2i (tid,k) of
         Just u -> Map.insert (tid,k) u t
         Nothing -> t -- trace ("WARNING: ignoring tokenInt "++show tid) t

   getIntsUnsafe t  k =
     case Map.lookup k t of
       Nothing -> error ("Can't find int for " ++ show k ++"\n")
       Just i -> i


tokenMain,tokenList,tokenAllways,tokenBounded,tokenEnum,tokenEq,tokenEval,tokenIx,tokenOrd
  ,tokenRead,tokenShow,tokenBinary,tokenMonad,tokenInteger,tokenRational
  ,tokenNplusK,tokenFFI,tokenComprehension, tokenDynamic :: [(IdKind,TokenId)]

tokenMain =     [(TCon,tIO),(TCon,t_Tuple 0)]
tokenList =     [(TClass,tNum),(Var,tnegate)]
tokenInteger  = [(Var,tfromInteger)]
tokenRational = [(Var,tfromRational),(TSyn,tRational),(TCon,tRatio)
                ,(if compiler==Yhc then Con else Var,tRatioCon)
                ,(TClass,tFractional),(TClass,tIntegral)]
tokenAllways =  [(Var,t_undef)
                ,(TCon,tBool),(Con,tTrue),(Con,tFalse)
                ,(TCon,tInt),(TCon,tInteger),(TCon,tFloat),(TCon,tDouble)
                ,(TCon,tChar),(TCon,tString)
                ,(TCon,t_List),(Con,t_Colon),(Con,t_List)
                ,(TCon,t_Arrow),(TCon,t_Tuple 2),(Con,t_Tuple 2)
                ,(TCon,t_Tuple 0),(Con,t_Tuple 0),(TCon,tIO)
                ,(Var,t_eqInteger),(Var,t_eqFloat),(Var,t_eqDouble)
                ,(Con,t_otherwise)      -- actually `True', not `otherwise'
                ,(Var,terror)
                ,(Var,t_apply1),(Var,t_apply2),(Var,t_apply3),(Var,t_apply4)
                ,(Var,t_id),(Var,t_flip)
                ,(Var,t_noMethodError),(Var,t_patternMatchFail),(Var,t_recConError)
                ,(Var,t_recSelError),(Var,t_recConError),(Var,t_recUpdError)]
                ++ (if compiler==Yhc then tokenDynamic else [])
tokenMonad =    [(Var,t_gtgt),(Var,t_gtgteq),(Var,tfail)]
tokenBounded =  [(TClass,tBounded),(Var,tminBound),(Var,tmaxBound)]
tokenEnum =     [(TClass,tEnum)
                ,(Var,ttoEnum),(Var,tfromEnum),(Var,tenumFrom)
                ,(Var,tenumFromThen)
                ,(Var,t_toEnum),(Var,t_fromEnum),(Var,t_enumFromTo)
                ,(Var,t_enumFromThenTo)]
tokenEq =       [(TClass,tEq),(Var,t_fromEnum),(Var,t_equalequal)
                ,(Var,t_andand)]
tokenEval =     [(Var,tseq)]  -- seq is now standalone, without class Eval
tokenIx =       [(TClass,tIx)
                ,(Var,trange),(Var,tindex),(Var,tinRange)
                ,(Var,t_tupleRange),(Var,t_tupleIndex),(Var,t_andand)
                ,(Var,t_enumRange),(Var,t_enumIndex),(Var,t_enumInRange)]
tokenOrd =      [(TClass,tOrd),(Var,t_fromEnum),(Var,t_equalequal)
                ,(Var,t_lessthan),(Var,t_lessequal)
                ,(Var,t_andand),(Var,t_pipepipe),(Var,tcompare)
                ,(Con,tLT),(Con,tEQ),(Con,tGT)]
tokenRead =     [(TClass,tRead)
                ,(Var,treadsPrec),(Var,treadParen),(Var,t_append)
                ,(Var,t_greater)
                ,(Var,t_readCon0),(Var,t_readConInfix),(Var,t_readCon)
                ,(Var,t_readConArg),(Var,t_readField),(Var,t_readFinal)]
tokenShow =     [(TClass,tShow)
                ,(Var,tshowsType),(Var,tshowsPrec),(Var,tshowParen)
                ,(Var,tshowString),(Var,tshowChar),(Var,t_lessthan)
                ,(Var,t_dot)]
{- MALCOLM additions: -}
tokenBinary    = [(TClass,tBinary)
                ,(Var,t_put),(Var,t_get),(Var,t_getF),(Var,t_sizeOf)
                ,(Var,t_putBits),(Var,t_getBits),(Var,t_getBitsF)
                ,(Var,t_gtgt),(Var,t_gtgteq),(Var,t_return)
                ,(Var,t_ltlt),(Var,t_plus)]
tokenNplusK =   [(Var,t_lessequal),(Var,t_subtract)]
tokenFFI =      map (\n->(Var,t_mkIOok n)) [0..15] ++
                [(Var,tunsafePerformIO)]
tokenComprehension = [(Var,t_foldr),(Var,t_filter)]

{- typerep additions -}
tokenDynamic =   [(Var,tTyCon), (Var,tTyGeneric)]

{- End TokenInt -------------------------------------------------------------}
