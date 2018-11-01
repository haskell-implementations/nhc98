
-- for information see:
-- http://www.haskell.org/ghc/docs/6.4.2/html/users_guide/using-ghc.html#source-file-options

module Parse.Pragma(parsePragmas) where

import Data.Char
import Util.Text


-- | Takes the source file
--   Returns a list of the pragma's that are YHC specific
parsePragmas :: String -> [String]
parsePragmas src = f $ lines src
    where
        f (x:xs) = case parsePragma x of
                     Nothing -> []
                     Just (a,b) -> [b | a == "OPTIONS_YHC"] ++ f xs
        

-- Example:
-- {-# OPTIONS_GHC -fglasgow-exts #-}

-- either a line isn't a pragma (Nothing)
-- or it is, with a pragma type and value Just (OPTIONS_YHC, -cpp)
parsePragma :: String -> Maybe (String, String)
parsePragma x = p1 x
    where
        p1 ('>':xs) = p2 xs
        p1 xs = p2 xs
        
        p2 xs = p3 $ trimLeft xs
        
        p3 ('{':'-':'#':xs) = p4 xs
        p3 _ = Nothing
        
        p4 xs | end == "#-}" = p5 $ trim body
            where
                (body,end) = splitAt (length xs2 - 3) xs2
                xs2 = trimRight xs
        p4 _ = Nothing
        
        p5 xs = Just (a, trimLeft b)
            where (a,b) = break isSpace xs
