module HandLex
  ( gcLex	-- :: String -> [Token]
  , Posn(..)
  , TokenT(..)
  , Token
  ) where

import Char

#if !defined(__HASKELL98__)
#define isAlphaNum isAlphanum
#endif

type Token = (Posn, TokenT)

data Posn = Pn Int Int		-- line and column
        deriving Eq

instance Show Posn where
      showsPrec p (Pn l c) = showString "line " . shows l .
                             showString " col " . shows c

data TokenT = TokFun
      | TokCall
      | TokResult
      | TokFail
      | TokConst
      | TokDis
      | TokPrefix
      | TokOpen
      | TokClose
      | TokCurOpen
      | TokCurClose
      | TokSqOpen
      | TokSqClose
      | TokAngOpen
      | TokAngClose
      | TokAng2Open
      | TokAng2Close
      | TokSlash
      | TokComma
      | TokEqual
      | TokArrow
      | TokCoCo
      | TokDeclare
      | TokIn
      | TokName     String
      | TokDisName  String
      | TokBaseTy   String
      | TokHaskell  String
      | TokC        String
      | TokCExp     String
      | TokCCode   [String]
      deriving (Eq,Show)

trim, revtrim :: String -> String
trim    = f . f         where f = reverse . dropWhile isSpace
revtrim = f.reverse.f   where f = dropWhile isSpace

emit :: TokenT -> Posn -> Token
emit tok p = (p,tok)

lexerror :: Posn -> String -> a
lexerror p s = error ("Lexical error: "++s++" at "++show p++"\n")

addcol :: Int -> Posn -> Posn
addcol n (Pn r c) = Pn r (c+n)

newline, tab :: Posn -> Posn
newline (Pn r c) = Pn (r+1) 0
tab     (Pn r c) = Pn r (((c`div`8)+1)*8)

----
gcLex :: String -> [Token]
gcLex = lextop gcAny (Pn 1 0) . lines

lextop :: (Posn->String->[String]->[Token]) -> Posn -> [String] -> [Token]
lextop k p     []        = []
lextop k p (('%':s):ss)  = gcStart k (addcol 1 p) s ss
lextop k p (s:ss)        = emit (TokHaskell s) p :
                           lextop k (newline p) ss

gcStart :: (Posn->String->[String]->[Token]) ->
            Posn -> String -> [String] -> [Token]
gcAny, gcConst               :: Posn ->  String  -> [String] -> [Token]
gcUser             :: String -> Posn ->  String  -> [String] -> [Token]
gcLine :: ([String]->TokenT) -> Posn ->  String  -> [String] -> [Token]

gcStart k p s ss
    | take 1 s == "-"        =                     skip 1 p s ss gcC
    | take 1 s == "C"        =                     skip 1 p s ss (blank gcC)
    | take 3 s == "fun"      = emit TokFun p:      skip 3 p s ss gcAny
    | take 3 s == "dis"      = emit TokDis p:      skip 3 p s ss gcAny
    | take 4 s == "call"     = emit TokCall p:     skip 4 p s ss gcAny
    | take 4 s == "fail"     = emit TokFail p:     skip 4 p s ss gcAny
    | take 4 s == "code"     =                   skip 4 p s ss (gcLine TokCCode)
    | take 5 s == "const"    = emit TokConst p:    skip 5 p s ss gcConst
    | take 6 s == "result"   = emit TokResult p:   skip 6 p s ss gcAny
    | take 6 s == "prefix"   = emit TokPrefix p:   skip 6 p s ss gcAny
    | otherwise              = k p s ss

skip :: Int -> Posn -> String -> [String] ->
                                 (Posn->String->[String]->[Token]) -> [Token]
skip n p s ss k = k (addcol n p) (drop n s) ss

blank :: (Posn->String->[String]->[Token]) ->
          Posn -> String -> [String] -> [Token]
blank k p    []    ss  = lextop (blank k) (newline p) ss
blank k p ['\^M']  ss  = lextop (blank k) (newline p) ss
blank k p (' ': s) ss  = blank k (addcol 1 p) s ss
blank k p ('\t':s) ss  = blank k (tab p) s ss
blank k p    s     ss  = k p s ss

gcC p s ss  = emit (TokC s) p : lextop gcAny (newline p) ss

gcAny = blank gcAny'
  where
    gcAny' p ('"':s)  ss  =                      gcCExp "" (addcol 1 p) s ss
    gcAny' p ('{':s)  ss  = emit TokCurOpen p:   gcAny (addcol 1 p) s ss
    gcAny' p ('}':s)  ss  = emit TokCurClose p:  gcAny (addcol 1 p) s ss
    gcAny' p ('(': s) ss  = emit TokOpen p:      gcAny (addcol 1 p) s ss
    gcAny' p (')': s) ss  = emit TokClose p:     gcAny (addcol 1 p) s ss
    gcAny' p ('[': s) ss  = emit TokSqOpen p:    gcAny (addcol 1 p) s ss
    gcAny' p (']': s) ss  = emit TokSqClose p:   gcAny (addcol 1 p) s ss
    gcAny' p ('<': s) ss
      | take 1 s == "<"   = emit TokAng2Open p:  skip 1 p s ss (gcUser [])
      | otherwise         = emit TokAngOpen p:   gcUser [] (addcol 1 p) s ss
    gcAny' p ('>': s) ss  = emit TokAngClose p:  gcAny (addcol 1 p) s ss
    gcAny' p (',': s) ss  = emit TokComma p:     gcAny (addcol 1 p) s ss
    gcAny' p ('=': s) ss  = emit TokEqual p:     gcAny (addcol 1 p) s ss
    gcAny' p s ss
      | take 2 s == "->"      = emit TokArrow p:   skip 2 p s ss gcAny
      | take 2 s == "::"      = emit TokCoCo p:    skip 2 p s ss gcAny
      | take 3 s == "in "     = emit TokIn p:      skip 3 p s ss gcAny
      | take 7 s == "declare" = emit TokDeclare p: skip 7 p s ss gcAny
      | take 2 s == "%%"      = ident TokBaseTy (addcol 2 p) (drop 2 s) ss gcAny
      | ('A'<=h && h<='Z') ||
        ('0'<=h && h<='9') ||
         '_'==h || h=='\'' ||
         '`'==h               = ident TokName    p s ss gcAny
      | ('a'<=h && h<='z')    = ident TokDisName p s ss gcAny
      | otherwise             = lexerror p "unrecognised input"
      where h = head s

gcCExp acc = blank (lit acc)
  where lit acc p ('"':s)     ss = emit (TokCExp (reverse acc)) p:
                                   gcAny (addcol 1 p) s ss
        lit acc p ('%':'"':s) ss = lit ('"':acc) (addcol 2 p) s ss
        lit acc p (h:s)       ss = lit (h:acc) (addcol 1 p) s ss
        lit acc p  []         ss = lexerror p "missing \""
      --lit acc p  []         ss = lextop (lit ('\n':acc)) p ss

gcLine tok p s ss  = multiline tok (p,[trim s]) (newline p) ss

gcConst = blank gcConst1
  where
    gcConst1 p s ss
      | ('A'<=h && h<='Z') ||
        ('0'<=h && h<='9') ||
         '_'==h || h=='\'' ||
         '`'==h            = ident TokName    p s ss gcConst2
      | ('a'<=h && h<='z') = ident TokDisName p s ss gcConst2
      | otherwise          = lexerror p "%const not followed by type or DISname"
      where h = head s
    gcConst2 = blank gcConst3
    gcConst3 p ('[':s) ss = emit TokSqOpen p:  gcAny (addcol 1 p) s ss
    gcConst3 p     s   ss = lexerror p "%const type/DISname not followed by ["


gcUser acc = blank (gcUser' acc)
  where gcUser' acc p ('/':s) ss = emit (TokName (revtrim acc)) p:
                                   emit TokSlash p: gcUser [] (addcol 1 p) s ss
        gcUser' acc p ('>':'>':s) ss
                                 = emit (TokName (revtrim acc)) p:
                                   emit TokAng2Close p: gcAny (addcol 1 p) s ss
        gcUser' acc p ('>':s) ss = emit (TokName (revtrim acc)) p:
                                   emit TokAngClose p:  gcAny (addcol 1 p) s ss
        gcUser' acc p ('-':'>':s) ss = gcUser' ('>':'-':acc) (addcol 2 p) s ss
        gcUser' acc p (h:s)   ss = gcUser' (h:acc) (addcol 1 p) s ss
        gcUser' acc p  []     ss = lextop (gcUser acc) p ss



ident :: (String->TokenT) ->
          Posn -> String -> [String] ->
         (Posn->String->[String]->[Token]) -> [Token]
ident tok p s ss k =
    let (name,s0) = span (\c-> isAlphaNum c || c `elem` "`-_#.'/\\") s
    in emit (tok name) p: skip (length name) p s ss k

multiline :: ([String]->TokenT) ->
             (Posn,[String]) -> Posn -> [String] -> [Token]
multiline tok (p0,s0) p (('%':h:s):ss)
    | isSpace h    = multiline tok (p0, ({-trim-} s):s0) (newline p) ss
    | otherwise    = emit (tok (reverse s0)) p0:  gcStart gcAny (addcol 1 p) (h:s) ss
multiline tok (p0,s0) p ss =
                     emit (tok (reverse s0)) p0:  lextop gcAny p ss

