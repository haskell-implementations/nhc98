%
% Copyright (C) 1997 Thomas Nordin and Alastair Reid
%
\begin{code}

module PrettyUtils
	( textline	
        , indent	
        , around	
	, joinedBy, sepdBy
	, vsep, hsepMap, hcatMap, vsepMap, vcatMap
        , commaList, semiList, ppList
	, ppParen

	-- Haskell constructs
	, ppTuple, ppApply, ppRecord
	, ppBind, ppReturn
	, ppCase, ppCases, ppIf

	-- C constructs
	, ppCIf, ppAssign, ppCDeclare, ppCDecl, ppCast, ppBlock, ppStruct
	) where

import Pretty
import List ( intersperse )
import Maybe ( maybeToList )


textline :: [String] -> Doc
textline = hsep . map text

indent :: Doc -> Doc
indent = nest 2

around :: (String, String) -> Doc -> Doc
(a, b) `around` d =  text a <> d <> text b

joinedBy :: [Doc] -> (Doc -> Doc -> Doc) -> Doc
[] `joinedBy` sep = empty
xs `joinedBy` sep = foldr1 sep xs

sepdBy :: [Doc] -> Doc -> Doc
ds `sepdBy` sep = hcat (intersperse sep ds)

hsepMap, hcatMap, vcatMap, vsepMap :: (a -> Doc) -> [a] -> Doc
hsepMap pp xs = hsep (map pp xs)
hcatMap pp xs = hcat (map pp xs)
vcatMap pp xs = vcat (map pp xs)
vsepMap pp xs = vsep (map pp xs)

vsep :: [Doc] -> Doc 
vsep ds = ds `joinedBy` ($+$)

--($+$) :: Doc -> Doc -> Doc
--d1 $+$ d2 = d1 $$ text "" $$ d2

commaList :: [Doc] -> Doc
commaList ds = ds `sepdBy` comma

semiList :: [Doc] -> Doc
semiList ds = ds `sepdBy` semi

ppList :: Doc -> Doc -> [Doc] -> Doc
ppList sep = foldr (\a as -> a <> sep <> as)

ppTuple :: [Doc] -> Doc
ppTuple ds = parens (commaList ds)

ppApply :: Doc -> [Doc] -> Doc
ppApply d ds = ppParen (not (null ds)) ((d:ds) `sepdBy` space)

ppRecord :: Doc -> [Doc] -> [Doc] -> Doc
ppRecord c fs vs 
  = c <> braces (commaList (zipWith (\f v -> f <> equals <> v) fs vs))

-- inspired by Prelude.showParen
ppParen :: Bool -> Doc -> Doc
ppParen True  = parens
ppParen False = id

ppBind :: Doc -> (Doc, Doc) -> Doc
ppBind m (pat, k) = m <> text " >>= \\ " <> pat <> text " ->" $$ k

ppReturn :: Doc -> Doc
ppReturn x = ppApply (text "return") [parens x]

\end{code}

\begin{code}

ppCase :: Doc -> Doc -> (Doc -> Doc)
ppCase v d b = text "case" <+> v <+> text "of {" <+> d <+> text "->" $$ b <> text "}"

ppIf :: Doc -> Doc -> Doc -> Doc
ppIf cond t e 
  =  text "if" <+> cond
  $$ text "then" <+> t
  $$ text "else" <+> e

\end{code}

\begin{code}

ppCases :: Doc -> [(Doc, Doc)] -> Doc
ppCases exp alts = 
  text "case" <+> exp <+> text "of" <+> 
  braces (semiList [ pat <+> text "->" <+> body | (pat, body) <- alts ])

\end{code}

Print:

  if (..) {..} 
  else if (..) {..}
  ..
  else if (..) {..}
  else {..}

\begin{code}

ppCIf :: [(Doc,Doc)] -> Maybe Doc -> Doc
ppCIf xs mbe = (map mkIf xs ++ map braces (maybeToList mbe)) `joinedBy` mkElse
 where
  mkIf (c,s) = text "if" <+> parens c <+> braces s
  d1 `mkElse` d2 = d1 $$ text "else" <+> d2
                  
\end{code}

Print a C assignment, C declaration (with initialisation), C cast, ...

\begin{code}

ppAssign :: String -> Doc -> Doc
ppAssign lhs rhs = text lhs <+> equals <+> rhs <> semi

ppCDeclare :: Doc -> Doc -> Doc -> Doc
ppCDeclare ty var init = ty <+> var <+> equals <+> init <> semi

ppCDecl :: String -> String -> Doc
ppCDecl t n = text t <+> text n <> semi

ppCast :: Doc -> Doc -> Doc
ppCast ty expr = parens (parens ty <+> expr)

ppBlock :: Doc -> Doc
ppBlock d = ("do {", "} while(0);") `around` (indent d)

ppStruct :: [Doc] -> Doc
ppStruct ds = braces (commaList ds)

\end{code}
