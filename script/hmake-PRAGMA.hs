module Main where
import List
import Char

#if !defined(__HASKELL98__)
#define isAlphaNum isAlphanum
#endif

{- This is a simple-minded program, to get compiler options out of a source
   file pragma, so we can give them to the compiler proper *before* parsing.
   (The options might affect how the parser proper works!)
  
   We expect the input to have already been processed by 'grep' such that
    it contains only single lines of the form
      {-# PRAGMA text text text #-}
   Both open and close brackets must be present on the same line.
   We return only the text, with the brackets and PRAGMA name stripped.
   Multiple lines, each with a separate pragma, are dealt with by
    concatenation of the contents (separated by whitespace).
-}

pragma = reverse . space . ket . space . reverse
         . space . name . space . bra . space

bra xs | "{-#" `isPrefixOf` xs = drop 3 xs
       | otherwise             = ""
ket xs | "}-#" `isPrefixOf` xs = drop 3 xs
       | otherwise             = ""
space = dropWhile isSpace
name  = dropWhile (\x-> isAlphaNum x || (x=='_'))

main = interact (concat . intersperse " " . map pragma . lines)
