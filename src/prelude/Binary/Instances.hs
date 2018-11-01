module NHC.Binary
  ( {-class-} Binary
  ) where

--import SizedBin    ({-type-}Size(..), {-type-}SizedBin(..))

import BinHandle   ({-type-}BinHandle)
import BinPtr      ({-type-}BinPtr(..), unsafeShiftBinPtr)
import Bin         ({-type-}Bin(..))
import BinLocation ({-type-}BinLocation(..))
import CBinary     ({-class-}Binary(..))
import OpenBin     (openBin)
import TellBin     (tellBin)
import AlignBin    (alignBin)
import PutBits     (putBits)
import GetBits     (getBits)
import GetBitsF    (getBitsF)
import FreezeBin   (freezeBin)
--import DirectPut   (directPut)

import LeftLeft    ((<<), castFst)

-----------------instances-------------------

instance Binary () where
    put bh () = putBits bh 0 0
    get bh    = return ()
    getF bh   = castFst (\_->()) . getBitsF bh 0
    sizeOf x  = 0

instance Binary Bool where
    put bh b = putBits bh 1 (fromEnum b)
    get bh   = getBits bh 1 >>= return . toEnum
    getF bh  = castFst toEnum . getBitsF bh 1
    sizeOf x = 1

instance Binary Char where
    put bh c = putBits bh 8 (fromEnum c)
    get bh   = getBits bh 8 >>= return . toEnum
    getF bh  = castFst toEnum . getBitsF bh 8
    sizeOf x = 8


instance Binary Int where
    put bh i = putBits bh 32 i
    get bh   = getBits bh 32
    getF bh  = getBitsF bh 32
    sizeOf x = 32

instance Binary a => Binary [a] where
    put bh []     = putBits bh 1 0
    put bh (x:xs) = putBits bh 1 1 >>= \pos->
                    put bh x >> put bh xs >>
                    return pos
--  get bh        = getBits bh 1 >>= \h ->
--                   [ return []
--                   , get bh >>= \x-> get bh >>= \xs-> return (x:xs)
--                   ]!!h
    get bh        = getBits bh 1 >>= \h ->
                    case h of
                      0 -> return []
                      1 -> get bh >>= \x-> get bh >>= \xs-> return (x:xs)
--  getF bh p = let (h,p1) = getBitsF bh 1 p
--                     in [ let (_,p2) = getBitsF bh 0 p1
--                          in ([],p2)
--                        , (\x-> (\xs-> ((fst x: fst xs), snd xs)
--                                ) (getF bh (snd x))
--                          ) (getF bh p1)
--                        ]!!h
--  getF bh p = let (h,p1) = getBitsF bh 1 p
--                     in [ ([],p1)
--                        , ((:),p1) << getF bh << getF bh
--                        ]!!h
    getF bh p = let (h,p1) = getBitsF bh 1 p
                in case h of
                     0-> ([],p1)
                     1-> ((:),p1) << getF bh << getF bh
    sizeOf []     = 1
    sizeOf (x:xs) = 1 + sizeOf x + sizeOf xs

instance (Binary a, Binary b) => Binary (a,b) where
    put bh (a,b) = putBits bh 0 0 >>= \pos-> put bh a >> put bh b >> return pos
    get bh       = get bh >>= \a-> get bh >>= \b-> return (a,b)
--  getF bh p = (\x-> (\y-> ((fst x, fst y), snd y)
--                           ) (getF bh (snd x)
--                     ) (getF bh (snd (getBitsF bh 0 p)))
    getF bh p = let (_,p1) = getBitsF bh 0 p
                       in ((,),p1) << getF bh << getF bh
    sizeOf (a,b) = sizeOf a + sizeOf b

instance (Binary a, Binary b, Binary c) => Binary (a,b,c) where
    put bh (a,b,c) = putBits bh 0 0 >>= \pos->
                     put bh a >> put bh b >> put bh c >> return pos
    get bh         = get bh >>= \a->
                     get bh >>= \b->
                     get bh >>= \c->
                     return (a,b,c)
--  getF bh p = (\x-> (\y-> (\z-> ((fst x, fst y, fst z), snd z)
--                                 ) (getF bh (snd y))
--                           ) (getF bh (snd x))
--                     ) (getF bh (snd (getBitsF bh 0 p)))
    getF bh p = let (_,p1) = getBitsF bh 0 p
                       in ((,,),p1) << getF bh << getF bh
                                    << getF bh
    sizeOf (a,b,c) = sizeOf a + sizeOf b + sizeOf c

instance Binary a => Binary (Maybe a) where
    put bh Nothing  = putBits bh 1 0
    put bh (Just a) = putBits bh 1 1 >>= \pos -> put bh a >> return pos
--  get bh          = getBits bh 1 >>= \h->
--                     [ return Nothing
--                     , get bh >>= return . Just
--                     ]!!h
    get bh          = getBits bh 1 >>= \h->
                      case h of
                        0-> return Nothing
                        1-> get bh >>= return . Just
--  getF bh p = let (h,p1) = getBitsF bh 1 p
--                     in [ (Nothing,p1)
--                        , (Just,p1) << getF bh
--                        ]!!h
    getF bh p = let (h,p1) = getBitsF bh 1 p
                in case h of
                     0-> (Nothing,p1)
                     1-> (Just,p1) << getF bh
    sizeOf Nothing  = 1
    sizeOf (Just x) = 1 + sizeOf x

instance (Binary a, Binary b) => Binary (Either a b) where
    put bh (Left a)  = putBits bh 1 0 >>= \pos-> put bh a >> return pos
    put bh (Right b) = putBits bh 1 1 >>= \pos-> put bh b >> return pos
--  get bh           = getBits bh 1 >>= \h->
--                     [ get bh >>= return . Left
--                     , get bh >>= return . Right
--                     ]!!h
    get bh           = getBits bh 1 >>= \h->
                       case h of
                         0-> get bh >>= return . Left
                         1-> get bh >>= return . Right
--  getF bh p = let (h,p1) = getBitsF bh 1 p
--                     in [ (Left,p1) << getF bh
--                        , (Right,p1) << getF bh
--                        ]!!h
    getF bh p = let (h,p1) = getBitsF bh 1 p
                in case h of
                     0-> (Left,p1) << getF bh
                     1-> (Right,p1) << getF bh
    sizeOf (Left a)  = 1 + sizeOf a
    sizeOf (Right b) = 1 + sizeOf b

instance Binary BinPtr where
    put bh (BP i) = putBits bh 0 0 >>= \pos-> put bh i >> return pos
    get bh = get bh >>= return . BP
    getF bh p = let (_,p1) = getBitsF bh 0 p
                       in (BP,p1) << getF bh
    sizeOf (BP i) = sizeOf i

{-
instance Binary Size where
    put bh (Size n)
        | n<=0              = putBits bh 1 0  >>= \pos->
                              putBits bh 7 0  >> return pos
        | 0<n && n<128      = putBits bh 1 0  >>= \pos->
                              putBits bh 7 n  >> return pos
        | 128<=n && n<16384 = putBits bh 2 2  >>= \pos->
                              putBits bh 14 n >> return pos
        | otherwise         = putBits bh 2 3  >>= \pos->
                              putBits bh 30 n >> return pos
    get bh = getBits bh 1 >>= \h0->
             [ getBits bh 7 >>= return . Size
             , getBits bh 1 >>= \h1->
               [  getBits bh 14 >>= return . Size
               ,  getBits bh 30 >>= return . Size
               ]!!h1
             ]!!h0
    getF bh p = let (h,p1) = getBitsF bh 1 p
                       in [ (Size,p1) << getBitsF bh 7
                          , let (j,p2) = getBitsF bh 1 p1
                            in [ (Size,p2) << getBitsF bh 14
                               , (Size,p2) << getBitsF bh 30
                               ]!!j
                          ]!!h
    sizeOf (Size n)
        | n<=0              = 8
        | 0<n && n<128      = 8
        | 128<=n && n<16384 = 16
        | otherwise         = 32


instance Binary a => Binary (SizedBin a) where
    put dbh (SB n sbh p) = alignBin dbh    >>
                           putBits dbh 0 0 >>= \pos->
                           put dbh n       >>
                           directPut dbh n sbh p >>
                           return pos
    get sbh          = alignBin sbh    >>           -- align source
                       get sbh         >>= \n->
                       tellBin sbh     >>= \p->
                       openBin Memory  >>= \dbh->  -- prepare destination
                       directPut dbh n sbh p >>
                       freezeBin dbh  >>
                       return (SB n dbh 0)
    getF bh p = let (_,p1) = getBitsF bh 0 p
                       in (\(Size s,p2)-> ((SB (Size s) bh p2), toEnum (s+ fromEnum p2))
                          ) (getF bh p1)
    sizeOf (SB n sbh p) = sizeOf n
-}
