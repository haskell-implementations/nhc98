module NHC.Bit(
  Bits(..)
) where

infixl 8 ^<<, ^>>, `asr`, `rol`, `ror`
infixl 7 ^&
infixl 6 ^|
infixl 5 `xor`

class (Integral a) => Bits a where
    (^&), (^|), xor	:: a -> a -> a
    compl		:: a -> a
    (^<<), (^>>), asr, rol, ror	:: a -> Int -> a
    test		:: Int -> a -> Bool
    set, clear		:: Int -> a -> a
    bitSize		:: a -> Int


primIntAnd   primitive 2 :: Int -> Int -> Int
primIntOr    primitive 2 :: Int -> Int -> Int
primIntXor   primitive 2 :: Int -> Int -> Int
primIntCompl primitive 1 :: Int -> Int
primIntLsh   primitive 2 :: Int -> Int -> Int
primIntRsh   primitive 2 :: Int -> Int -> Int

instance Bits Int where
    (^&)  = primIntAnd
    (^|)  = primIntOr
    xor   = primIntXor
    compl = primIntCompl
    (^<<) = primIntLsh
    (^>>) = primIntRsh
    bitSize _ = 32

    asr   n b  | n<0 || bitSize b<=n   = 0
               | test (bitSize b -1) b = (b^>>n) ^| (compl 0 ^<< (bitSize b -n))
               | otherwise             = b ^>> n
    rol   n b  | n<0 || bitSize b<=n   = 0
               | otherwise             = (b^<<n) ^| (b ^>> (bitSize b - n))
    ror   n b  | n<0 || bitSize b<=n   = 0
               | otherwise             = (b^>>n) ^| (b ^<< (bitSize b - n))
    test  n b  | 0<=n && n<bitSize b   = (b ^& (set n 0)) /= 0
               | otherwise             = False
    set   n b  | 0<=n && n<bitSize b   = b ^| (1^<<n)
               | otherwise             = b
    clear n b  | 0<=n && n<bitSize b   = b ^& compl (1^<<n)
               | otherwise             = b
