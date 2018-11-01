module LexModule (lexmodule, nestcomment) where

import Char
import List

#if !defined(__HASKELL98__)
#define isAlphaNum isAlphanum
#endif


-- lexmodule takes a string (file content), removes any module header,
-- and renames any function beginning in the left-most column called
-- "main" to "_ain".

lexmodule :: String -> String
lexmodule =
    renameFn "main" "_ain" . rmheader . nestcomment 0


-- nestcomment removes all Haskell comments from the given string,
-- both nested {- -} style comments and -- line comments,
-- dealing correctly with comment characters inside strings, string
-- quote marks inside comments, and all sorts of nastiness like that.

nestcomment :: Int -> String -> String
nestcomment n ('{':'-':cs) | n>=0 = nestcomment (n+1) cs
nestcomment n ('-':'}':cs) | n>0  = nestcomment (n-1) cs
nestcomment n (c:cs)       | n>0  = nestcomment n cs

nestcomment 0 ('-':'}':cs)        = error ("found close comment -} but no matching open {-")
nestcomment 0 ('-':'-':cs)        =
    if null munch
      || isSpace nextchr
      || nextchr `elem` ",()[]{};\"'`"
      || isAlphaNum nextchr
    then nestcomment 0 (dropWhile (/='\n') munch)
    else '-':'-': nestcomment 0 cs
  where munch = dropWhile (=='-') cs
        nextchr = head munch
nestcomment 0 ('\'':'"':'\'':cs)  = '\'':'"':'\'': nestcomment 0 cs
nestcomment 0 ('\\':'"':cs)       = '\\':'"': nestcomment 0 cs
nestcomment 0 ('"':cs)            = '"': endstring cs
nestcomment 0 (c:cs)              = c: nestcomment 0 cs
nestcomment 0 []                  = []
nestcomment n []                  = error ("found "++show n++" open comments {- but no matching close -}")

endstring ('\\':'"':cs) = '\\':'"': endstring cs
endstring ('"':cs) = '"': nestcomment 0 cs
endstring (c:cs)   = c  : endstring cs
endstring []       = []


-- rmheader simply removes a "module Name (exports) where" header
-- (if present) from the beginning of the given string.

rmheader :: String -> String
rmheader file =
    let text = dropWhile isSpace file
    in if "module" `isPrefixOf` text then stripUntil1 "where" text else text

stripUntil s (c:file) = if not (isAlphaNum c)
                        && s `isPrefixOf` file
                        then let rest = drop (length s) file
                             in if null rest || not (isAlphaNum (head rest))
                                then rest
                                else stripUntil s file
                        else stripUntil s file

-- stripUntil1 is intended to be a more efficient version of the basic
-- stripUntil, but this has not yet been verified by profiling.
stripUntil1 pat (x:xs) | not (isAlphaNum x) = stripUntil2 pat [] xs []
                       | otherwise          = stripUntil1 pat xs
-- stripUntil2 pattern storedpat searchstring storedstring
stripUntil2  []    ds   []   ys = []
stripUntil2  []    ds (x:xs) ys | not (isAlphaNum x) = x:xs
                                | otherwise = stripUntil1 (reverse ds)
                                                    (reverse ys++x:xs)
stripUntil2 (c:cs) ds   []   ys = []
stripUntil2 (c:cs) ds (x:xs) ys
        | c==x  = stripUntil2 cs (c:ds) xs (x:ys)
        | c/=x  = stripUntil1 (reverse ds++c:cs) (reverse ys++x:xs)


-- renameFn assumes that all fn definitions begin in the leftmost column.

renameFn old new = unlines . rename . lines
  where
    rename [] = []
    rename (s:ss) | old `isPrefixOf` s  = (new ++ drop (length old) s) : ss
                  | otherwise           = s: rename ss
