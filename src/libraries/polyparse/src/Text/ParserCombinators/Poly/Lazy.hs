module Text.ParserCombinators.Poly.Lazy
  ( -- * The Parser datatype
    Parser(P)	-- datatype, instance of: Functor, Monad, PolyParse
  , Result(..)	-- internal to the parser monad
  , runParser	-- :: Parser t a -> [t] -> (Either String a, [t])
    -- ** basic parsers
  , next	-- :: Parser t t
  , eof		-- :: Parser t ()
  , satisfy	-- :: (t->Bool) -> Parser t t

    -- ** re-parsing
  , reparse	-- :: [t] -> Parser t ()
    -- * Re-export all more general combinators
  , module Text.ParserCombinators.Poly.Base
  ) where


import Text.ParserCombinators.Poly.Base

#if __GLASGOW_HASKELL__
import Control.Exception hiding (bracket)
throwE :: String -> a
throwE msg = throw (ErrorCall msg)
#else
throwE :: String -> a
throwE msg = error msg
#endif


-- | This @Parser@ datatype is a fairly generic parsing monad with error
--   reporting.  It can be used for arbitrary token types, not just
--   String input.  (If you require a running state, use module PolyState
--   instead)
newtype Parser t a = P ([t] -> Result [t] a)

-- |  A return type like Either, that distinguishes not only between
--   right and wrong answers, but also has gradations of wrongness.
--   This should only be used for writing very primitive
--   parsers - really it is an internal detail of the library.
data Result z a = Success    z a
                | Failure    z String
                | Committed  (Result z a) -- still needed

instance Functor (Result z) where
    fmap f (Success z a)  = Success z (f a)
    fmap f (Failure z e)  = Failure z e
    fmap f (Committed r)  = Committed (fmap f r)

-- | Apply a parser to an input token sequence.
runParser :: Parser t a -> [t] -> (a, [t])
runParser (P p) = fromResult . p
  where
    fromResult :: Result z a -> (a, z)
    fromResult (Success z a)  =  (a, z)
    fromResult (Failure z e)  =  throwE e
    fromResult (Committed r)  =  fromResult r

instance Functor (Parser t) where
    fmap f (P p) = P (fmap f . p)

instance Monad (Parser t) where
    return x     = P (\ts-> Success ts x)
    fail e       = P (\ts-> Failure ts e)
    (P f) >>= g  = P (continue . f)
      where
        continue (Success ts x)             = let (P g') = g x in g' ts
        continue (Committed (Committed r))  = continue (Committed r)
        continue (Committed r)              = Committed (continue r)
        continue (Failure ts e)             = Failure ts e

instance PolyParse (Parser t) where
    commit (P p)         = P (Committed . p)
    (P p) `adjustErr` f  = P (adjust . p)
      where
        adjust (Failure z e)  = Failure z (f e)
        adjust (Committed r)  = Committed (adjust r)
        adjust  good          = good

    (P p) `onFail` (P q) = P (\ts-> continue ts $ p ts)
      where
        continue ts (Failure z e) = q ts
     -- continue _  (Committed r) = r	-- no, remain Committed
        continue _  r             = r

    oneOf' = accum []
      where accum errs [] =
                fail ("failed to parse any of the possible choices:\n"
                            ++indent 2 (concatMap showErr (reverse errs)))
            accum errs ((e,P p):ps) =
                P (\ts-> case p ts of
                           Failure _ err ->
                                       let (P p) = accum ((e,err):errs) ps
                                       in p ts
                           r@(Success z a)    -> r
                           r@(Committed _)    -> r )
            showErr (name,err) = name++":\n"++indent 2 err

    --   Apply a parsed function to a parsed value.  This version
    --   is strict in the result of the function parser, but
    --   lazy in the result of the argument parser.  (Argument laziness is
    --   the distinctive feature over other implementations.)
    (P pf) `apply` px = P (continue . pf)
      where
        continue (Success z f)  = let (x,z') = runParser px z
                                  in Success z' (f x)
        continue (Committed r)  = Committed (continue r)
        continue (Failure z e)  = Failure z e


------------------------------------------------------------------------
next :: Parser t t
next = P (\ts-> case ts of
                  []      -> Failure [] "Ran out of input (EOF)"
                  (t:ts') -> Success ts' t )

eof  :: Parser t ()
eof  = P (\ts-> case ts of
                  []      -> Success [] ()
                  (t:ts') -> Failure ts "Expected end of input (EOF)" )

satisfy :: (t->Bool) -> Parser t t
satisfy pred = do { x <- next
                  ; if pred x then return x else fail "Parse.satisfy: failed"
                  }

------------------------------------------------------------------------
-- | Push some tokens back onto the front of the input stream and reparse.
--   This is useful e.g. for recursively expanding macros.  When the
--   user-parser recognises a macro use, it can lookup the macro
--   expansion from the parse state, lex it, and then stuff the
--   lexed expansion back down into the parser.
reparse    :: [t] -> Parser t ()
reparse ts  = P (\inp-> Success (ts++inp) ())

------------------------------------------------------------------------