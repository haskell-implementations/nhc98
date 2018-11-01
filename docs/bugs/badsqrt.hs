-- Test program that tickles suspected bug in nhc98's Integer div/mod code.
-- Should output all the decimal places of sqrt(2): 1414..
--	Martin Guy, Newcastle, October 2004.

module Main where

import IO	-- for hSetBeffering & friends

main :: IO ()
main = hSetBuffering stdout NoBuffering >> putStr (concat (map show (m_sqrt [0,2])))

base :: Int
base = 10

-- Square root by Mr C. Woo's abacus algorithm
-- See http://freaknet.org/martin/tape -> "Algorithms" -> "Square root"
-- for details of the algorithm.

m_sqrt :: [Int] -> [Int]
m_sqrt [] = []			-- sqrt(0)
m_sqrt m = m_sqrt' (0, (toInteger a,x))
	   where
	   (a:x) = m_sqrbase m	-- prime sqrt engine with first digit

-- Convert mantissa in base n to mantissa in base n^2.
m_sqrbase :: [Int] -> [Int]
m_sqrbase (a:b:m) = (a * base + b) : m_sqrbase m
m_sqrbase [a] = [a * base]
m_sqrbase [] = []

m_sqrt' :: (Integer,(Integer,[Int])) -> [Int]
m_sqrt' (r1,(hd_o1,tl_o1))
	| (hd_o1 == 0 && m_is_zero tl_o1) = []
	| otherwise = ( fromInteger (r2 `mod` ibase)) : m_sqrt' (r2 * ibase, m_sqrt_shiftin (hd_o2,tl_o1))
	  where
	  (r2,hd_o2) = m_sqrt_loop (r1,hd_o1)
	  ibase = toInteger base

-- Is the value of a mantissa equal to zero
m_is_zero [] = True
m_is_zero (a:x) = if a /= 0 then False else m_is_zero x

-- Shift another term of the operand into the calculation.
m_sqrt_shiftin :: (Integer, [Int]) -> (Integer, [Int])
m_sqrt_shiftin (a,b:x) = (a * sqr_base + toInteger b, x)
m_sqrt_shiftin (a,[]) = (a * sqr_base, [])

sqr_base = toInteger (base * base)

m_sqrt_loop :: (Integer,Integer) -> (Integer,Integer)
m_sqrt_loop ro
	= until sqrt_loop_done sqrt_loop_body ro
	  where
	  sqrt_loop_done (r, o) = 2*r >= o	-- was: 2*r+1 > o
	  sqrt_loop_body (r, o) = (r+1, o - (2*r+1))
