module Main where

#if defined(__HASKELL98__) || __HASKELL1__ > 4
import H98
#else
import H13
#endif

main = undefined
