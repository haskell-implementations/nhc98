{- ---------------------------------------------------------------------------
Mini-interpreter for pretty-printing bytecodes into C array declarations 
-}
module EmitState where

import Char (isLower)
import GcodeLow (foreignfun)
import List (nub,isPrefixOf)
import Tree234

--  , {-type-} EmitState
--  , emitState
--  , startEmitState

-- accumulators:
--   (1) current absolute word offset
--   (2) current relative byte offset
--   (3) current incomplete word
--   (4) label defns
--   (5) bytecode in C

-- This module, as originally written, had 2 enormous space leaks.
--  1. The EmitState was originally built in a single pass, but we used
--     one part of it early, and another part late.  The late part hung
--     around as big closures for a long time.  So, we separated out the
--     two phases into Labels (early) and Code (late).  The Code closures
--     are now very much smaller.
--  2. When the Code closure was finally evaluated, it spiked, because
--     the large number of small closures inside it were all being built
--     suddenly before any of them were actually evaluated.  These closures
--     were compositions of 'shows'.  We now keep a list of Strings instead,
--     (in reverse order) and 'concat' them afterwards.  It still spikes,
--     but the spike is about half the size.

infixl >|>


data EmitState  = ES !Int !Int Incomplete [Label] [String]
type Incomplete = (String,String,String,String)
data Label = Define GL String Int | Use String Int
data GL = Global | Local
data Pass = Labels | Code	-- to avoid space leaks, we build the
	deriving Eq		-- state value in two passes

instance Eq Label where
    -- only used to eliminate duplicate extern decls, so not real equality.
    (Use s _) == (Use t _)  = s==t
    _ == _                  = error "Misuse of equality in compiler/EmitState"

eszero = "0"

empty :: Incomplete
empty = (eszero,eszero,eszero,eszero)

first :: String -> Incomplete
first x = (x,eszero,eszero,eszero)

preSym :: String
preSym = "startLabel"

startEmitState :: Pass -> EmitState
startEmitState Labels = ES 0 0 empty [] []
startEmitState Code   = ES 0 0 empty [] [begin]
  where begin = "\nstatic Node " ++ preSym ++ "[] = {\n "
                

emitByte :: Pass -> String -> EmitState -> EmitState
emitByte Labels a (ES n 0  word     labs code) = ES n 1 word labs code
emitByte Labels a (ES n 1  word     labs code) = ES n 2 word labs code
emitByte Labels a (ES n 2  word     labs code) = ES n 3 word labs code
emitByte Labels a (ES n 3  word     labs code) = ES n 4 word labs code
emitByte Labels a (ES n 4  word     labs code) = ES (n+1) 1 word labs code
emitByte Code   a (ES n 0  word     labs code) = ES n 1 (first a) labs code
emitByte Code   a (ES n 1 (w,x,y,z) labs code) = ES n 2 (w,a,y,z) labs code
emitByte Code   a (ES n 2 (w,x,y,z) labs code) = ES n 3 (w,x,a,z) labs code
emitByte Code   a (ES n 3 (w,x,y,z) labs code) = ES n 4 (w,x,y,a) labs code
emitByte Code   a (ES n 4  word     labs code) = ES (n+1) 1 (first a) labs
                                                            (outBytes word code)

emitWord :: Pass -> String -> EmitState -> EmitState
emitWord Labels a (ES n 0 word labs code) = ES (n+1) 0 empty labs code
emitWord Code   a (ES n 0 word labs code) = ES (n+1) 0 empty labs
                                                               (outWord a code)
emitWord Labels a (ES n b word labs code) = ES (n+2) 0 empty labs code
emitWord Code   a (ES n b word labs code) = ES (n+2) 0 empty labs
                                               (outWord a (outBytes word code))

emitString :: Pass -> String -> EmitState -> EmitState
emitString pass = foldr (>|>) (emitByte pass ("0"))
                  . map (emitByte pass.show.fromEnum)

emitAlign :: Pass -> EmitState -> EmitState
emitAlign _   es@(ES n 0 word labs code) = es
emitAlign Labels (ES n b word labs code) = ES (n+1) 0 empty labs code
emitAlign Code   (ES n b word labs code) = ES (n+1) 0 empty labs
                                                           (outBytes word code)

emitAlignDouble :: Pass -> EmitState -> EmitState
emitAlignDouble pass es@(ES n 0 word labs code)
    | n `div` 2 == 0               = es
    | otherwise && pass==Labels    = ES (n+1) 0 word labs code
    | otherwise && pass==Code      = ES (n+1) 0 word labs (outBytes empty code)
emitAlignDouble Labels (ES n b word labs code) =
    emitAlignDouble Labels (ES (n+1) 0 empty labs code)
emitAlignDouble Code   (ES n b word labs code) =
    emitAlignDouble Code   (ES (n+1) 0 empty labs (outBytes word code))

defineLabel :: Pass -> GL -> String -> EmitState -> EmitState
defineLabel Labels Local  sym (ES n b word labs code) =
    ES n b word (Define Local  (sym) (n*4+b): labs) code
defineLabel Code   Local  sym (ES n b word labs code) =
    ES n b word labs (comment:code)
  where comment = "\t/* " ++ sym ++ ": (byte " ++ show b ++ ") */\n "
defineLabel Labels Global sym (ES n 0 word labs code) =
    ES n 0 word (Define Global (sym) (n*4): labs) code
defineLabel Code   Global sym (ES n 0 word labs code) =
    ES n 0 word labs (newlab:code)
  where newlab = "};\nNode " ++ sym ++ "[] = {\n "
defineLabel pass Global ss es = defineLabel pass Global ss (emitAlign pass es)

useLabel :: Pass -> String -> EmitState -> EmitState
useLabel Labels sym (ES n b word labs code) =
    emitWord Labels (wrapUse sym)
                    (ES n b word (Use (sym) (n*4+b): labs) code)
useLabel Code   sym es@(ES n b word labs code) =
    emitWord Code   (wrapUse sym) es

mentionLabel :: Pass -> String -> EmitState -> EmitState
mentionLabel Labels sym (ES n b word labs code) =
    ES n b word (Use (sym) (n*4+b): labs) code
mentionLabel Code   sym es@(ES n b word labs code) = es

wrapUse :: String -> String
wrapUse sym = "useLabel(" ++ sym ++ ")"

outBytes :: Incomplete -> [String] -> [String]
outBytes (w,x,y,z) code = four:code
  where four = " bytes2word(" ++
               w ++ ',' :
               x ++ ',' :
               y ++ ',' :
               z ++ ")\n,"

outWord :: String -> [String] -> [String]
outWord x code = wx:code
  where wx = ' ': x ++ "\n,"

(>|>) :: (a->a) -> (a->a) -> (a->a)
left >|> right = right . left

emit :: Pass -> EmitState -> [String]
emit Labels (ES _ _ _ rlabs _) =
  let labs    = reverse rlabs
      locals  = filter isLocal labs
      uses    = filter isUse labs
      externs = nub $ filter (not . definedLabel) uses
      defines = treeFromList min cmp (map defAt (filter isDefine labs))
        where cmp (k, _) (k', _) = compare k k'
              defAt (Define Local  sym _)   = (sym, minBound) -- Before any use
              defAt (Define Global sym def) = (sym, def)
      definedLabel (Use s u) = treeSearch False (\(_, d) -> u >= d) cmp defines
        where cmp (k, _) = compare s k
      isLocal (Define Local _ _) = True
      isLocal  _                 = False
      isDefine (Define _ _ _)    = True
      isDefine _                 = False
      isUse (Use _ _)            = True
      isUse    _                 = False
      doLocal (Define Local sym def) = showString "#define " . showString sym .
                                       showString "\t((void*)" .
                                       showString preSym . showChar '+' .
                                       shows def .  showString ")\n"
      doExtern (Use sym _)
	-- This is a dreadful hack for distinguishing primitives from bytecode!
        | isLower (head sym) = showString "extern void *" . showString sym .
                               showString "();\n"
	-- It is somewhat easier to distinguish foreign imports.
        | foreignfun `isPrefixOf` sym = showString "void " . showString sym .
                               showString "(void);\n"
	-- If nothing else, it must be bytecode.
        | otherwise          = showString "extern Node " . showString sym .
                               showString "[];\n"
  in
  map ($"") (map doLocal locals ++ map doExtern externs)

emit Code es =
  let (ES _ _ _ _ code) = emitAlign Code es
  in
  reverse ("};\n":code)

{- End EmitState -------------------------------------------------------------}
