{- ---------------------------------------------------------------------------
Monad and dictionary type for type checking.
Also used in Remove1_3 for removing fields.
-}
module Type.Data(TypeMonad,TypeDown(TypeDown),TypeState(TypeState)
               ,TypeDict(TypeDict)) where

import IntState(IntState)
import Id(Id)
import TokenId(TokenId)
import NT(NT)
import IdKind(IdKind)
import Util.Extra(Pos)
import Syntax (Exp)
import qualified Data.Map as Map

data TypeDown =
      TypeDown
        [(Id,NT)]               -- env
        ((TokenId,IdKind)->Id)  -- tidFun
        [Id]                    -- defaults
        [(Id,Exp Id)]           -- ctxDict
        [(Id,[Exp Id])]         -- envDict

data TypeState =
      TypeState
        IntState                -- state
        (Map.Map Id NT)         -- phi
        [TypeDict]              -- ctxs
        [((Id,NT),Id)]          -- ctxs introduced due to pattern matching 
                                -- on existential NT is either NTvar or NTexist

type TypeMonad a = TypeDown -> TypeState -> (a,TypeState)

data TypeDict =
      TypeDict
        Id NT
        [(Id,Pos)]
        deriving (Show)

instance Eq TypeDict where
  (TypeDict c nt ip) == (TypeDict c' nt' ip') = c == c' && nt == nt'

instance Ord TypeDict where
  (TypeDict c nt ip) <= (TypeDict c' nt' ip') = 
    c < c' || (c == c' && nt <= nt')
  compare (TypeDict c nt ip) (TypeDict c' nt' ip') =
    case compare c c' of
      LT -> LT
      EQ -> compare nt nt'
      GT -> GT

{- TypeData -----------------------------------------------------------------}
