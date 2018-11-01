-----------------------------------------------------------------------------
-- |
-- Module      :  MacroPass
-- Copyright   :  2004 Malcolm Wallace
-- Licence     :  LGPL
--
-- Maintainer  :  Malcolm Wallace <Malcolm.Wallace@cs.york.ac.uk>
-- Stability   :  experimental
-- Portability :  All
--
-- Perform a cpp.second-pass, accumulating \#define's and \#undef's,
-- whilst doing symbol replacement and macro expansion.
-----------------------------------------------------------------------------

module Language.Preprocessor.Cpphs.MacroPass
  ( macroPass
  , preDefine
  , defineMacro
  ) where

import Language.Preprocessor.Cpphs.HashDefine (HashDefine(..), expandMacro)
import Language.Preprocessor.Cpphs.Tokenise   (tokenise, WordStyle(..)
                                              , parseMacroCall)
import Language.Preprocessor.Cpphs.SymTab     (SymTab, lookupST, insertST
                                              , emptyST)
import Language.Preprocessor.Cpphs.Position   (Posn, newfile, filename, lineno)
import Language.Preprocessor.Cpphs.Options    (BoolOptions(..))
import System.IO.Unsafe (unsafeInterleaveIO)
import Control.Monad    ((=<<))
import Time       (getClockTime, toCalendarTime, formatCalendarTime)
import Locale     (defaultTimeLocale)

noPos :: Posn
noPos = newfile "preDefined"

-- | Walk through the document, replacing calls of macros with the expanded RHS.
macroPass :: [(String,String)]	-- ^ Pre-defined symbols and their values
          -> BoolOptions	-- ^ Options that alter processing style
          -> [(Posn,String)]	-- ^ The input file content
          -> IO String		-- ^ The file after processing
macroPass syms options =
    fmap (safetail		-- to remove extra "\n" inserted below
         . concat)
    . macroProcess (pragma options) (layout options) (lang options)
                   (preDefine options syms)
    . tokenise (stripEol options) (stripC89 options)
               (ansi options) (lang options)
    . ((noPos,""):)	-- ensure recognition of "\n#" at start of file
  where
    safetail [] = []
    safetail (_:xs) = xs


-- | Turn command-line definitions (from @-D@) into 'HashDefine's.
preDefine :: BoolOptions -> [(String,String)] -> SymTab HashDefine
preDefine options defines =
    foldr (insertST . defineMacro options . (\ (s,d)-> s++" "++d))
          emptyST defines

-- | Turn a string representing a macro definition into a 'HashDefine'.
defineMacro :: BoolOptions -> String -> (String,HashDefine)
defineMacro opts s =
    let (Cmd (Just hd):_) = tokenise True True (ansi opts) (lang opts)
                                     [(noPos,"\n#define "++s++"\n")]
    in (name hd, hd)


-- | Trundle through the document, one word at a time, using the WordStyle
--   classification introduced by 'tokenise' to decide whether to expand a
--   word or macro.  Encountering a \#define or \#undef causes that symbol to
--   be overwritten in the symbol table.  Any other remaining cpp directives
--   are discarded and replaced with blanks, except for \#line markers.
--   All valid identifiers are checked for the presence of a definition
--   of that name in the symbol table, and if so, expanded appropriately.
--   (Bool arguments are: keep pragmas?  retain layout?  haskell language?)
macroProcess :: Bool -> Bool -> Bool -> SymTab HashDefine -> [WordStyle]
             -> IO [String]
macroProcess _ _ _ _         []          = return []
macroProcess p y l st (Other x: ws)      = emit x    $ macroProcess p y l st ws
macroProcess p y l st (Cmd Nothing: ws)  = emit "\n" $ macroProcess p y l st ws
macroProcess p y l st (Cmd (Just (LineDrop x)): ws)
                                         = emit "\n" $
                                           emit x    $ macroProcess p y l st ws
macroProcess pragma y l st (Cmd (Just (Pragma x)): ws)
               | pragma    = emit "\n" $ emit x $ macroProcess pragma y l st ws
               | otherwise = emit "\n" $          macroProcess pragma y l st ws
macroProcess p layout lang st (Cmd (Just hd): ws) =
    let n = 1 + linebreaks hd in
    emit (replicate n '\n') $
    macroProcess p layout lang (insertST (name hd, hd) st) ws
macroProcess pr layout lang st (Ident p x: ws) =
    case x of
      "__FILE__" -> emit (show (filename p))$ macroProcess pr layout lang st ws
      "__LINE__" -> emit (show (lineno p))  $ macroProcess pr layout lang st ws
      "__DATE__" -> do w <- return .
                            formatCalendarTime defaultTimeLocale "\"%d %b %Y\""
                            =<< toCalendarTime =<< getClockTime
                       emit w $ macroProcess pr layout lang st ws
      "__TIME__" -> do w <- return .
                            formatCalendarTime defaultTimeLocale "\"%H:%M:%S\""
                            =<< toCalendarTime =<< getClockTime
                       emit w $ macroProcess pr layout lang st ws
      _ ->
        case lookupST x st of
            Nothing -> emit x $ macroProcess pr layout lang st ws
            Just hd ->
                case hd of
                    AntiDefined {name=n} -> emit n $
                                            macroProcess pr layout lang st ws
                    SymbolReplacement {replacement=r} ->
                        let r' = if layout then r else filter (/='\n') r in
                        -- one-level expansion only:
                        -- emit r' $ macroProcess layout st ws
                        -- multi-level expansion:
                        macroProcess pr layout lang st
                                     (tokenise True True False lang [(p,r')]
                                      ++ ws)
                    MacroExpansion {} ->
                        case parseMacroCall p ws of
                            Nothing -> emit x $
                                       macroProcess pr layout lang st ws
                            Just (args,ws') ->
                                if length args /= length (arguments hd) then
                                     emit x $ macroProcess pr layout lang st ws
                                else do args' <- mapM (fmap concat .
                                                       macroProcess pr layout
                                                                       lang st)
                                                      args
                                        -- one-level expansion only:
                                        -- emit (expandMacro hd args' layout) $
                                        --         macroProcess layout st ws'
                                        -- multi-level expansion:
                                        macroProcess pr layout lang st
                                            (tokenise True True False lang
                                               [(p,expandMacro hd args' layout)]
                                            ++ ws')

-- | Useful helper function.
emit :: a -> IO [a] -> IO [a]
emit x io = do xs <- unsafeInterleaveIO io
               return (x:xs)
