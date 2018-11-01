module CabalParse2 where

import IO
import Char
import List
import System
import Text.ParserCombinators.Poly as Poly
import System.Info  -- from base package
import Data.Version  -- from base package
import Text.Show.Functions  -- from base package

{-
import Debug.Trace
x `debug` s = trace s x
-}
debug :: a -> String -> a
x `debug` _ = x

-- | "cabalLookup" parses any particular request field from an already-parsed
--   cabal file.
--   The first arg is the contents of the .cabal file, the second is the
--   field name to extract.  The third arg manipulates the result string
--   e.g. to translate module names from Haskell notation to filepaths.
cabalLookup :: CabalFile -> String -> (String->String) -> Either String String
cabalLookup cabal field munge = do
    case lookup field (foldr merge (general cabal) (library cabal)) of
      Just rhs -> case runParser (fieldtype field) rhs of
                    (Left e, _) -> Left e
                    (Right result, _) -> Right (munge result)
      Nothing  -> Left ("field "++field++" not present")
  where
    merge :: Property -> PropertyList -> PropertyList
    merge p [] = [p]
    merge i@(name,val) (kv@(key,val2):kvs) | name==key = (name,val2++val): kvs
                                           | otherwise = kv: merge i kvs

stop :: String -> IO a
stop s = do hPutStrLn stderr ("cabal-parse:\n"++indent 2 s)
            exitFailure
            return undefined
quiet :: String -> IO ()
quiet s = return ()

slash = map (\c -> if c=='.' then '/' else c)

-- Rough datatypes representing the structure of the Cabal file
type Property     = (String,[Token])
type PropertyList = [Property]
type Environment  = [(String,String)]
data RawFile      = RawFile { rawGeneral    :: PropertyList
                            , rawSections   :: [(String,String,PropertyList)]
                            }
data CabalFile    = CabalFile { general     :: PropertyList
                              , flags       :: [(String,PropertyList)]
                              , library     :: PropertyList
                              , executables :: [(String,PropertyList)]
                              , sourceRepos :: [(String,PropertyList)]
                              }
  deriving Show

-- Mapping from field-name to type of rhs
fieldtype :: String -> Parser Token String
fieldtype f = case f of
                "exposed-modules" -> unLines (list string)
                "other-modules"   -> unLines (list string)
                "c-sources"       -> unLines (list string)
                "hs-source-dirs"  -> unLines (list string)
                "hs-source-dir"   -> string
                "build-depends"   -> unLines (noVersion (list string))
                "extensions"      -> unLines (list string)
                "data-files"      -> unLines (list string)
                "extra-source-files" -> unLines (list string)
                "extra-tmp-files" -> unLines (list string)
                "homepage"        -> url
                "package-url"     -> url
                _                 -> freetext

-- Simple Lexer:
data Token = Word String | Colon | Comma | OpenBrace | CloseBrace
           | Newline | NewlineIndent Int
           | Error String | EOF
           deriving (Eq)
instance Show Token where
  show (Word s)   = s
  show Colon      = ":"
  show Comma      = ","
  show OpenBrace  = "{"
  show CloseBrace = "}"
  show Newline    = "\n"
  show (NewlineIndent n) = '\n': replicate n ' '
  show _          = ""
  showList ts s   = unwords (map show ts) ++ s

lexToken :: String -> [Token]
lexToken    []        = EOF : []
lexToken (':':ss)     = Colon : lexToken ss
lexToken ('{':ss)     = OpenBrace : lexToken ss
lexToken ('}':ss)     = CloseBrace : lexToken ss
lexToken ('\n':ss)    = case ss of
                          ('\t':cs)   -> -- Error "tab character at start of line"
                                         comment (NewlineIndent 8) cs
                          (' ':cs)    -> let n = length (takeWhile (==' ') ss)
                                         in comment (NewlineIndent n) cs
                          _           -> comment Newline ss
--lexToken ('-':'-':ss) = dropWhile (`notElem`[Newline,NewlineIndent])
--                                  (lexToken ss)
lexToken (',':c:ss)   | isSpace c = Comma : lexToken (c:ss)
lexToken (c:ss)       | isSpace c = lexToken ss
lexToken (c:ss)       = accumulate [c] ss

comment :: Token -> String -> [Token]
comment _ ('-':'-':ss)  = lexToken (dropWhile (/='\n') ss)
comment t (' ':ss)      = comment t ss
comment t ss            = t : lexToken ss

accumulate :: String -> String -> [Token]
accumulate acc []     =  []
accumulate acc (c:cs) | isSpace c || c `elem` ":,"
                      = Word (reverse acc) : lexToken (c:cs)
accumulate acc (c:cs) = accumulate (c:acc) cs


-- Simple Parsers:

-- parse a bunch of keyword/value bindings, without further
-- interpretation of the rhs
cabalFile  :: Parser Token CabalFile
cabalFile = do
    RawFile{rawGeneral=g, rawSections=ss} <- rawFile
    return CabalFile{ general     = g
                    , flags       = blocks "flag" ss
                    , library     = optional (blocks "library" ss)
                    , executables = blocks "executable" ss
                    , sourceRepos = blocks "source-repository" ss
                    }
  where optional [] = []
        optional [(_,props)] = props
        optional _  = error "only one library section is permitted"
        blocks n    = map (\ (_,a,p)->(a,p))
                     . filter (\ (m,_,_)-> map toLower m == n)

rawFile :: Parser Token RawFile
rawFile = do
    p  <- properties (error "conditional block not permitted before flag decls")
    many (has Newline)
    bs <- foldParse defaultEnv
                    (\env -> do s@(b,n,pl) <- sectionBlock env
                                many (has Newline)
                                if map toLower b == "flag"
                                  then return (addFlag n pl env, s)
                                  else return (env, s) )
    return RawFile{ rawGeneral=p, rawSections=bs }
  where
    foldParse :: a -> (a-> Parser t (a,b)) -> Parser t [b]
    foldParse init p = do
        (new,item) <- p init
        (item:) `fmap` foldParse new p
      `onFail`
        return []

properties :: Environment -> Parser Token PropertyList
properties env =
    concat `fmap` many1 (conditionalBlock env
                         `onFail`
                         ((:[]) `fmap` property) )

property :: Parser Token Property
property = do
    many (has Newline)
    (Word key) <- next
    Colon      <- next `adjustErr` (("Missing colon after "++key++"\n")++)
--  rhs        <- manyFinally (satisfy (/=Newline)) (has Newline)
    rhs        <- many (satisfy (/=Newline))
    return (map toLower key, rhs)

sectionBlock :: Environment -> Parser Token (String,String,PropertyList)
sectionBlock env = do
    (Word e) <- next
    n <- (do (Word name) <- next; return name
         `onFail`
          return "")
    props <- commit $ braces (properties env) `onFail` return []
    return (e,n,props)

conditionalBlock :: Environment -> Parser Token PropertyList
conditionalBlock env = do
    many (has Newline)
    (Word "if") <- next
    commit $ do
      cond <- many1 (satisfy isCondition)
      thenP <- braces (properties env)
      elseP <- (do many (has Newline)
                   (Word "else") <- next
                   commit (braces (properties env)))
               `onFail` return []
      return (evaluateCondition env cond thenP elseP)
  where
    isCondition OpenBrace = False
    isCondition Newline   = False
    isCondition (NewlineIndent _) = False
    isCondition _ = True

-- parse a block enclosed by braces
braces :: Parser Token a -> Parser Token a
--braces p = Poly.bracket (has OpenBrace) (has CloseBrace) (indented  p)
braces p = commitAfter OpenBrace ( do
              a <- indented p
              optional (has Newline)
              has CloseBrace
              return a )
           `onFail`
              indented p

-- parse an indented block with no braces
indented :: Parser Token a -> Parser Token a
indented p = do
    (NewlineIndent i) <- next
    interior   <- many (satisfy (\t-> case t of
                                        NewlineIndent n | n<i -> False
                                        Newline -> False
                                        _ -> True)
                       `onFail` do many (has Newline)
                                   t <- next
                                   case t of
                                     NewlineIndent n | n>=i -> return t
                                     _ -> fail "end of block"
                       )
    case runParser p (map (deindent i) interior) of
      (Right val, [])  -> return val
      (Right val, rem) -> fail ("Indented block not fully consumed: "++show rem)
      (Left msg, _)    -> fail msg
  where
    deindent :: Int -> Token -> Token
    deindent i (NewlineIndent n) -- remove a layer of indentation
        | i>n       = Error ("indentation wrong: "++show i++" > "++show n)
        | i==n      = Newline
        | otherwise = NewlineIndent (n-i)
    deindent _ other = other


-- parse a single definite token
has :: Token -> Parser Token ()
has t = do satisfy (==t); return ()

hasNewlineIndent :: Parser Token ()
hasNewlineIndent = do (NewlineIndent _) <- next
                      return ()

-- parse something whilst ignoring non-significant newlines
acrossLines p = do many (hasNewlineIndent)
                   x <- p
                   many (hasNewlineIndent)
                   return x

-- parse freeform text
freetext :: Parser Token String
freetext = free ""
  where free s = do n <- next
                    case n of
                      Word w        -> free (reverse w++" "++s)
                      Colon         -> free (':':s)
                      Comma         -> free (',':s)
                      OpenBrace     -> free ('{':s)
                      CloseBrace    -> free ('}':s)
                      NewlineIndent _ -> free ('\n':s)
                 `onFail` return (reverse s)

-- parse URL, like freeform text only all spaces squashed
url :: Parser Token String
url = freetext >>= return . filter (not.isSpace)

-- parse a comma-separated list of items
commalist :: Parser Token a -> Parser Token [a]
commalist item = acrossLines (item `sepBy` acrossLines (has Comma))

-- parse a (possibly) comma-separated list of items
list :: Parser Token a -> Parser Token [a]
list item = acrossLines (item `sepBy` acrossLines (optional (has Comma)))

-- parse a single module name, directory name, package name, etc
string :: Parser Token String
string = do (Word w) <- next; return w

-- convert a list of strings into a whitespace-separated string
unLines :: Parser Token [String] -> Parser Token String
unLines p = p >>= return . safeinit . unlines
  where safeinit [] = []
        safeinit xs = init xs

noVersion :: Parser Token [String] -> Parser Token [String]
noVersion = fmap (filter nonVer)
  where nonVer (x:xs) | isDigit x || x `elem` "<>=|&" = False
        nonVer _ = True

-- : now for some lexing-parsers that look at a finer grain of information :

-- parse a version string on its own
version :: Parser Char [Int]
version = do
    a <- digitsToInteger `fmap` many1 (satisfy isDigit)
    (do '.' <- next
        n <- version
        return (a:n))
     `onFail` return []

-- a full packagename is a string optionally followed by a hyphen then version
packageVersion :: Parser Char (String,[Int])
packageVersion = do
    name <- many1 (satisfy isAlphaNum)
    '-'  <- next
    vers <- version
    return (name,vers)

digitsToInteger :: Integral i => [Char] -> i
digitsToInteger = foldl' (\a b-> 10*a + (fromInteger.toInteger) (ord b - ord '0')) 0

foldl' :: (a -> b -> a) -> a -> [b] -> a
foldl' f a []     = a
foldl' f a (x:xs) = let a' = f a x in a' `seq` foldl' f a' xs

-- a useful combinator?
commitAfter :: (Eq t, Show t) => t -> Parser t a -> Parser t a
commitAfter t p = do
    x <- next
    if x==t then commit p else fail ("expected "++show t++" got "++show x)

-- parsing a conditional
data Condition = And  Condition Condition
               | Or   Condition Condition
               | Not  Condition
               | Cmp  String (String->String->Bool) String
               | Atom String
  deriving Show
condition, andExp, boolExp :: Parser Char Condition
condition = do a <- andExp;  (do { text "||"; c <- condition; return (Or a c) }
                             `onFail` return a)
andExp    = do n <- boolExp; (do { text "&&"; a <- andExp;    return (And n a) }
                             `onFail` return n)
boolExp   = do text "!"; n <- boolExp; return (Not n)
  `onFail`  do parens condition
  `onFail`  do text "true";  return (Atom "true")
  `onFail`  do text "false"; return (Atom "false")
  `onFail`  do text "True";  return (Atom "true")
  `onFail`  do text "False"; return (Atom "false")
  `onFail`  testOrComparison

text []     = return ()
text (c:cs) = do n <- next
                 if isSpace n then text (c:cs)
                    else if toLower n==c then text cs else fail ("text "++c:cs)

parens p = do (text "(")
              a <- p
              (text ")")
              return a

testOrComparison = do text "impl"; parens (wordOrCmp "impl")
          `onFail` do text "pkg";  parens (wordOrCmp "pkg")
          `onFail` do text "os";   parens (wrap "os")
          `onFail` do text "arch"; parens (wrap "arch")
          `onFail` do text "flag"; parens (do (Atom w) <- word
                                              return (Cmp w (==) "true"))
    --    `onFail` do (Atom w) <- word
    --                return (Cmp w (==) "true")

word  = do w <- many (do n <- next
                         if n `elem` "(),<>=!|&" then fail "" else return n)
           return (Atom w)
wrap k = do (Atom w) <- word; return (Atom (k++"("++w++")"))

wordOrCmp k = do (Atom w)  <- wrap k
                 op        <- operator
                 (Atom v)  <- word
                 return (Cmp w op v)
              `onFail`
                 wrap k

operator = do text "=="; return (==)
  `onFail` do text ">="; return (>=)
  `onFail` do text ">";  return (>)
  `onFail` do text "<="; return (<=)
  `onFail` do text "<";  return (<)


-- Environments

-- This defn probably needs some padding out to deal with os(), impl(),
-- and flag() conditions.
evaluateCondition :: Environment -> [Token] -> a -> a -> a
evaluateCondition env cond t e =
-- either error eval . fst . runParser condition . unwords . map show
    case runParser condition (unwords (map show cond)) of
      (Left e, rem) -> error e
      (Right c, rem) -> eval c t e
  where
    eval (And c1 c2)  t e = eval c1 (eval c2 t e) e `debug` "And"
    eval (Or  c1 c2)  t e = eval c1 t (eval c2 t e) `debug` "Or"
    eval (Not c)      t e = eval c e t              `debug` "Not"
    eval (Cmp k op v) t e = case lookup k env of
                              Just s | s `op` v -> t `debug` ("Cmp t "++k)
                              otherwise         -> e `debug` ("Cmp f "++k++"("++show (lookup k env)++")")
    eval (Atom w)     t e = case lookup w env of
                              Just _      -> t       `debug` ("Atom t "++w)
                              Nothing     -> e       `debug` ("Atom f "++w)

defaultEnv :: Environment
defaultEnv =
  [ ("os("++System.Info.os++")", "")
  , ("impl("++System.Info.compilerName++")"
          , concat (intersperse "." (map show (versionBranch System.Info.compilerVersion))))
  , ("arch("++System.Info.arch++")", "")
  , ("True", "true")	-- truth exists, falsity does not
  , ("true", "true")	-- truth exists, falsity does not
  ]

-- Apparently a flag that has no default setting is assumed to be True.
addFlag :: String -> PropertyList -> Environment -> Environment
addFlag name props env = case lookup "default" props of
                             Just s  -> (name, map toLower (show s)): env
                             Nothing -> (name, "true"): env
