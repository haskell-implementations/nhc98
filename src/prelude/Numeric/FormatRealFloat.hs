module Numeric (formatRealFloat) where

import FFFormat
import FloatToDigits
import Char (intToDigit)

formatRealFloat :: (RealFloat a) => FFFormat -> Maybe Int -> a -> String
formatRealFloat fmt decs x 
  = s
  where 
    base = 10
    s = if isNaN x then 
            "NaN"
        else if isInfinite x then 
            if x < 0 then "-Infinity" else "Infinity"
        else if x < 0 || isNegativeZero x then 
            '-' : doFmt fmt (floatToDigits (toInteger base) (-x))
        else 
            doFmt fmt (floatToDigits (toInteger base) x)
    
    mk0 "" = "0"            -- Used to ensure we print 34.0, not 34.
    mk0 s  = s              -- and 0.34 not .34
    
    mkdot0 "" = ""          -- Used to ensure we print 34, not 34.
    mkdot0 s  = '.' : s     -- when the format specifies no digits
                            -- after the decimal point
    
    doFmt fmt (is, e)
      = let 
           ds = map intToDigit is
        in  
        case fmt of
          FFGeneric -> 
              doFmt (if e < 0 || e > 7 then FFExponent else FFFixed)
                    (is, e)
          FFExponent ->
            case decs of
              Nothing ->
                case ds of
                   []     -> "0.0e0"
                   [d]    -> d : ".0e" ++ show (e-1)
                   (d:ds) -> d : '.' : ds ++ 'e':show (e-1)
       
              Just dec ->
                let dec' = max dec 1 in
                case is of
                  [] -> '0':'.':take dec' (repeat '0') ++ "e0"
                  _ ->
                    let (ei, is') = roundTo base (dec'+1) is
                        (d:ds) = map intToDigit
                                     (if ei > 0 then init is' else is')
                    in d:'.':ds  ++ "e" ++ show (e-1+ei)
       

          FFFixed ->
            case decs of
        --     Nothing ->
        --         let f 0 s ds = mk0 s ++ "." ++ mk0 ds
        --             f n s "" = f (n-1) (s++"0") ""
        --             f n s (d:ds) = f (n-1) (s++[d]) ds
        --         in f e "" ds

               Nothing		-- always prints a decimal point
                 | e > 0     -> take e (ds ++ repeat '0')
                                ++ '.' : mk0 (drop e ds)
                 | otherwise -> "0." ++ mk0 (replicate (-e) '0' ++ ds)
              
               Just dec ->	-- print decimal point iff dec > 0
                 let dec' = max dec 0 in
                 if e >= 0 then
                   let (ei, is') = roundTo base (dec' + e) is
                       (ls, rs)  = splitAt (e+ei) 
                                              (map intToDigit is')
                   in  mk0 ls ++ mkdot0 rs
                 else
                   let (ei, is') = roundTo base dec' 
                                           (replicate (-e) 0 ++ is)
                       (d:ds) = map intToDigit 
                                    (if ei > 0 then is' else 0:is')
                   in  d : mkdot0 ds

roundTo :: Int -> Int -> [Int] -> (Int, [Int])
roundTo base d is = case f d is of
                (0, is) -> (0, is)
                (1, is) -> (1, 1 : is)
  where b2 = base `div` 2
        f n [] = (0, replicate n 0)
        f 0 (i:_) = (if i >= b2 then 1 else 0, [])
        f d (i:is) = 
            let (c, ds) = f (d-1) is
                i' = c + i
            in  if i' == base then (1, 0:ds) else (0, i':ds)


