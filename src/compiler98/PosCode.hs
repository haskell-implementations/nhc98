module PosCode(module Prim, module PosCode, Pos) where

import Util.Extra(noPos)
import Prim
import ForeignCode (ImpExp)
import Syntax (CallConv)
import SyntaxPos
import Id

type PosCode = [PosBinding]

type PosBinding     = (Id, PosLambda)

data LambdaFlags = LamFLNone | LamFLIntro | LamFLLambda deriving Eq

instance Show LambdaFlags where
  show LamFLNone = ""
  show LamFLIntro = "INT"
  show LamFLLambda = "LAMBDA"

data PosLambda
   = PosLambda Pos LambdaFlags [(Pos,Id)] [(Pos,Id)] PosExp
   | PosPrimitive Pos Id
   | PosForeign Pos Id Int String CallConv ImpExp

posExpApp :: Pos -> [PosExp] -> PosExp
posExpApp pos [a] = a
posExpApp pos as  = PosExpApp pos as

posExpLet :: Pos -> [PosBinding] -> PosExp -> PosExp
posExpLet pos [] exp = exp
posExpLet pos bindings exp = PosExpLet False pos bindings exp

data PosExp
    = PosExpDict PosExp -- ^ Hack to mark dictionaries
    | PosExpLet  Bool Pos [PosBinding] PosExp -- ^ True for recursive lets, false otherwise
    | PosExpCase Pos PosExp [PosAlt]
    | PosExpApp  Pos [PosExp]
    | PosExpThunk  Pos Bool [PosExp] -- ^ True if this is really \'apply\'
    | PosExpFatBar  Bool PosExp PosExp  -- ^ True if fail can escape fatbar
    | PosExpFail
    | PosExpIf   Pos Bool PosExp PosExp PosExp -- ^ True if this is really a guard
    | PosVar Pos Id
    | PosCon Pos Id
    | PosInt Pos Int
    | PosChar Pos Int
    | PosFloat   Pos Float
    | PosDouble  Pos Double
    | PosInteger Pos Integer
    | PosString  Pos String
    | PosPrim    Pos Prim Id
    -- | Only temporary !!
    | PosExpLambda  Pos Bool [(Pos,Id)] [(Pos,Id)] PosExp

-- In reality this data structure should have
-- PosAltChar and PosAltInteger
-- FIXME required
data PosAlt
    = PosAltCon Pos Id [(Pos,Id)] PosExp  -- ^ Constructor numbers, new variables, expression
    | PosAltInt Pos Int Bool      PosExp  -- ^ Is the Int an Integer{True} or a Char{False}

isPosAtom :: PosExp -> Bool
isPosAtom (PosVar _ _) = True
isPosAtom (PosCon _ _) = True
isPosAtom (PosInt _ _) = True
isPosAtom (PosChar _ _) = True
isPosAtom (PosFloat   _ _) = True
isPosAtom (PosDouble  _ _) = True
isPosAtom (PosInteger _ _) = True
isPosAtom (PosString  _ _) = True
isPosAtom (PosPrim    _ _ _) = True
isPosAtom (PosExpThunk  _ _ [atom]) = isPosAtom atom -- thunks representing zero arity functions and constructors are atoms
isPosAtom _ = False

instance HasPos PosExp where
  getPos (PosExpDict exp) = getPos exp
  getPos (PosExpLet  _ pos _ _) = pos
  getPos (PosExpCase pos _ _) = pos
  getPos (PosExpApp  pos _) = pos
  getPos (PosExpThunk pos _ _) = pos
  getPos (PosExpFatBar _ e _) = getPos e
  getPos (PosExpFail) = noPos
  getPos (PosExpIf   pos _ _ _ _) = pos
  getPos (PosVar pos _) = pos
  getPos (PosCon pos _) = pos
  getPos (PosInt pos _) = pos
  getPos (PosChar pos _) = pos
  getPos (PosFloat   pos _) = pos
  getPos (PosDouble  pos _) = pos
  getPos (PosInteger pos _) = pos
  getPos (PosString  pos _) = pos
  getPos (PosPrim    pos _ _) = pos
  getPos (PosExpLambda  pos _ _ _ _) = pos


class PlayPosExp a where
    mapPosExp :: (PosExp -> PosExp) -> a -> a


instance PlayPosExp a => PlayPosExp [a] where
    mapPosExp f xs = map (mapPosExp f) xs

-- since its not a Haskell 98 instance
mapPosExp_Binding :: PlayPosExp b => (PosExp -> PosExp) -> (a, b) -> (a, b)
mapPosExp_Binding f (a, b) = (a, mapPosExp f b)

instance PlayPosExp PosLambda where
    mapPosExp f (PosLambda p i a b x) = PosLambda p i a b (mapPosExp f x)
    mapPosExp f x = x

instance PlayPosExp PosExp where
    mapPosExp f y = f $ case y of
            (PosExpDict x) -> PosExpDict (g x)
            (PosExpLet a b c d) -> PosExpLet a b (map (mapPosExp_Binding f) c) (g d)
            (PosExpCase a b c) -> PosExpCase a (g b) (g c)
            (PosExpApp a b) -> PosExpApp a (g b)
            (PosExpThunk a b c) -> PosExpThunk a b (g c)
            (PosExpFatBar a b c) -> PosExpFatBar a (g b) (g c)
            (PosExpIf a b c d e) -> PosExpIf a b (g c) (g d) (g e)
            (PosExpLambda a b c d e) -> PosExpLambda a b c d (g e)
            x -> x
        where
            g x = mapPosExp f x

instance PlayPosExp PosAlt where
    mapPosExp f (PosAltCon a b c d) = PosAltCon a b c (mapPosExp f d)
    mapPosExp f (PosAltInt a b c d) = PosAltInt a b c (mapPosExp f d)
