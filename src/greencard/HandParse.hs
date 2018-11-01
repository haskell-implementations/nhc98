module HandParse
  ( gcParse
  ) where

--import Data
import Name (Name)
import Type (Type(..), typeApply)
import DIS  (DIS(..), apply)
import Casm (BaseTy(..), lookupBaseTy)
import Decl
import HandLex
import ParseLib

gcParse :: [Token] -> [Decl]
gcParse = fst . head . papply decls

#define PARSEARG(tok)  P (\inp -> case inp of { \
                                      ((p,tok n):ts) -> [(n,ts)]; \
                                      ts -> [] } )

name, disname, baseTy, haskell, cexp, c :: Parser Name
name =    PARSEARG(TokName)
disname = PARSEARG(TokDisName)
baseTy =  PARSEARG(TokBaseTy)
haskell = PARSEARG(TokHaskell)
cexp =    PARSEARG(TokCExp)
c =       PARSEARG(TokC)

ccode :: Parser [String]
ccode =   PARSEARG(TokCCode)

----
decls :: Parser [Decl]
decls = many decl

decl :: Parser Decl
decl =
    procspec +++
    ( haskell >>= return . Haskell) +++
    ( c >>= return . C) +++
    ( tok TokDis `cut` (do
         n <- disname `elserror` "expected <disname> after %dis"
         v <- vars    `elserror` ("expected <vars> after %dis "++show n)
         tok TokEqual `elserror` "expected = in %dis definition"
         d <- dis     `elserror` "invalid rhs of %dis definition"
         return (DisDef n v d))) +++
    ( tok TokConst `cut` (do
         t <- tType   `elserror` "expected <type> after %const"
         cs <- bracket (tok TokSqOpen) constnames (tok TokSqClose)
         return (Constant t cs))) +++
    ( tok TokPrefix `cut` (do
         n <- nName   `elserror` "expected <name> after %prefix"
         return (Prefix n)))

vars :: Parser [Name]
vars = many disname

constnames :: Parser [(Name,Name)]
constnames =
    sepby1 constName (tok TokComma)

constName :: Parser (Name,Name)
constName =
    ( do h <- nName
         tok TokEqual
         c <- (nName+++cexp)
         return (h,c)) +++
    ( do n <- nName
         return (n,n))

nName :: Parser Name
nName =
    name +++ disname

procspec :: Parser Decl
procspec = do
    s <- sig
    c <- mbcall
    cc <- mbccode
    f <- mbfail
    r <- mbresult
    return (ProcSpec s c cc f r)

sig :: Parser Sig
sig =
    tok TokFun `cut` (do
    n <- nName  `elserror` "expected <function name> after %fun"
    tok TokCoCo `elserror` ("expected '::' after %fun "++show n)
    t <- tType  `elserror` "expected valid type in %fun declaration"
    return (n,t))

tType :: Parser Type
tType =
    ( do s <- simpletype
         tok TokArrow
         t <- tType
         return (Arrow s t)) +++
    simpletype

simpletype :: Parser Type
simpletype =
    ( bracket (tok TokOpen) tType (tok TokClose)) +++
    typetuple  +++
    ( do n <- nName
         a <- atypes
         return (typeApply (TypeVar n) a)) +++
    ( bracket (tok TokSqOpen) tType (tok TokSqClose) >>= return . TypeList)

atypes :: Parser [Type]
atypes = many atype

atype :: Parser Type
atype =
    ( bracket (tok TokOpen) tType (tok TokClose)) +++
    typetuple  +++
    ( nName >>= \n-> return (TypeVar n))

typetuple :: Parser Type
typetuple =
    ( tok TokOpen >>
      tok TokClose >> return (TypeTuple [])) +++
    ( bracket (tok TokOpen) typetuples (tok TokClose) >>= return . TypeTuple)

typetuples :: Parser [Type]
typetuples = do
    t <- tType
    tok TokComma
    ts <- sepby1 tType (tok TokComma)
    return (t:ts)

cCode :: Parser String
cCode =
    ( ccode >>= return . unlines) +++
    cexp

mbcall :: Parser (Maybe Call)
mbcall =
    ( tok TokCall `cut` (do
         a <- args   `elserror` "improperly formed %call section"
         return (Just a))) +++
    ( return Nothing )

mbccode :: Parser (Maybe CCode)
mbccode =
    ( ccode >>= return . Just) +++
    ( return Nothing )

mbfail :: Parser (Maybe Fail)
mbfail =
    ( fails >>= return . Just) +++
    ( return Nothing )

fails :: Parser [(String,String)]
fails =
    many1 ( tok TokFail `cut` (do
               c1 <- cCode   `elserror` "expected <Ccode> in %fail decl"
               c2 <- cCode   `elserror` "expected 2nd <Ccode> in %fail decl"
               return (c1,c2)))

mbresult :: Parser (Maybe Result)
mbresult =
    ( tok TokResult `cut` (do
         d <- dis `elserror` "improperly formed <dis> in %result decl"
         return (Just d))) +++
    ( return Nothing )

dis :: Parser DIS
dis =
    ( bracket (tok TokOpen) dis (tok TokClose)) +++
    ( do d <- disname
         as <- many1 arg
         return (apply (Var d) as)) +++
    ( do n <- name
         as <- many arg
         return (apply (Constructor n) as)) +++
    ( tok TokAngOpen `cut` (do
         n1 <- name	 `elserror` "need name inside <.../...>"
         tok TokSlash	 `elserror` "need / inside <.../...>"
         n2 <- name	 `elserror` "need name inside <.../...>"
         tok TokAngClose `elserror` "need closing > in <.../...>"
         as <- many1 arg `elserror` "need args after <.../...>"
         return (apply (UserDIS True n1 n2) as))) +++
    ( tok TokAng2Open `cut` (do
         n1 <- name	 `elserror` "need name inside <<.../...>>"
         tok TokSlash	 `elserror` "need / inside <<.../...>>"
         n2 <- name	 `elserror` "need name inside <<.../...>>"
         tok TokAng2Close`elserror` "need closing >> in <<.../...>>"
         as <- many1 arg `elserror` "need args after <<.../...>>"
         return (apply (UserDIS False n1 n2) as))) +++
    ( do b <- baseTy
         case b of
           "Foreign" -> do f <- (nName+++cexp) `elserror` "expected <freeing function> in %%Foreign"
                           a <- arg            `elserror` "expected <variable> in %%Foreign"
                           return (apply (BaseDIS (Foreign f)) [a])
           _         -> do a <- arg            `elserror` "expected <variable> in %%basetype decl"
                           return (apply (BaseDIS (lookupBaseTy b)) [a])) +++
    ( do n <- name
         f <- bracket (tok TokCurOpen) fieldDISs (tok TokCurClose)
         return (let (fs,ds) = unzip f in Apply (Record n fs) ds)) +++
    tuple +++
    ( cexp >>= \c-> return (Exp c)) +++
    ( tok TokDeclare `cut` (do
         cty <- cexp	`elserror` "expected \"ctype\" in <declare> block"
         d <- disname	`elserror` "expected variable name in <declare> block"
         tok TokIn	`elserror` "expected <in> in <declare ... in ...> block"
         v <- dis	`elserror` "expected <dis> in <declare> block"
         return (apply (Declare cty (Var d)) [v])))
 
arg :: Parser DIS
arg =
    ( bracket (tok TokOpen) dis (tok TokClose)) +++
    ( disname >>= \n-> return (Var n)) +++
    ( name >>= \n-> return (Constructor n)) +++
    ( cexp >>= \c-> return (Exp c)) +++
    tuple

args :: Parser [DIS]
args = many1 arg

tuple :: Parser DIS
tuple =
    ( tok TokOpen >>
      tok TokClose >> return Tuple) +++
    ( bracket (tok TokOpen) tuples (tok TokClose) >>= return . apply Tuple)

tuples :: Parser [DIS]
tuples = do
    d <- dis
    tok TokComma
    ds <- sepby1 dis (tok TokComma)
    return (d:ds)

fieldDISs :: Parser [(String,DIS)]
fieldDISs =
    sepby1 field_elt (tok TokComma)

field_elt :: Parser (String,DIS)
field_elt = do
    n <- nName
    tok TokEqual
    d <- dis
    return (n,d)

