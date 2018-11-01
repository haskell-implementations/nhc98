module Text.ParserCombinators.Poly.State
  ( -- * The Parser datatype
    Parser(P)	-- datatype, instance of: Functor, Monad, PolyParse
  , Result(..)	-- internal to the parser monad
  , runParser	-- :: Parser s t a -> s -> [t] -> (Either String a, s, [t])
    -- ** basic parsers
  , next	-- :: Parser s t t
  , eof		-- :: Parser s t ()
  , satisfy	-- :: (t->Bool) -> Parser s t t
    -- ** State-handling
  , stUpdate    -- :: (s->s) -> Parser s t ()
  , stQuery     -- :: (s->a) -> Parser s t a
  , stGet       -- :: Parser s t s
    -- ** re-parsing
  , reparse	-- :: [t] -> Parser s t ()
    -- * Re-export all more general combinators
  , module Text.ParserCombinators.Poly.Base
  ) where


import Text.ParserCombinators.Poly.Base

-- | This @Parser@ datatype is a fairly generic parsing monad with error
--   reporting.  It can be used for arbitrary token types, not just
--   String input.  (If you require a running state, use module PolyState
--   instead)
newtype Parser s t a = P (s -> [t] -> Result [t] s a)

-- | A return type like Either, that distinguishes not only between
--   right and wrong answers, but also has gradations of wrongness.
--   This should only be used for writing very primitive
--   parsers - really it is an internal detail of the library.
data Result z s a = Success    z s a
                  | Failure    z s String
                  | Committed  (Result z s a)

instance Functor (Result z s) where
    fmap f (Success z s a) = Success z s (f a)
    fmap f (Failure z s e) = Failure z s e
    fmap f (Committed r)   = Committed (fmap f r)

-- | Apply a parser to an input token sequence.
runParser :: Parser s t a -> s -> [t] -> (Either String a, s, [t])
runParser (P p) = \s-> resultToEither . p s
  where
    resultToEither :: Result z s a -> (Either String a, s, z)
    resultToEither (Success z s a) =  (Right a, s, z)
    resultToEither (Failure z s e) =  (Left e,  s, z)
    resultToEither (Committed r)   =  resultToEither r

instance Functor (Parser s t) where
    fmap f (P p) = P (\s-> fmap f . p s)

instance Monad (Parser s t) where
    return x     = P (\s ts-> Success ts s x)
    fail e       = P (\s ts-> Failure ts s e)
    (P f) >>= g  = P (\s-> continue . f s)
      where
        continue (Success ts s x)          = let (P g') = g x in g' s ts
        continue (Committed (Committed r)) = continue (Committed r)
        continue (Committed r)             = Committed (continue r)
        continue (Failure ts s e)          = Failure ts s e

instance PolyParse (Parser s t) where
    commit (P p)         = P (\s-> Committed . p s)
    (P p) `adjustErr` f  = P (\s-> adjust . p s)
      where
        adjust (Failure z s e) = Failure z s (f e)
        adjust (Committed r)   = Committed (adjust r)
        adjust  good           = good

    (P p) `onFail` (P q) = P (\s ts-> continue s ts $ p s ts)
      where
        continue s ts (Failure _ _ _) = q s ts
    --  continue _ _  (Committed r)   = r	-- no, remain Committed
        continue _ _  r               = r

    oneOf' = accum []
      where accum errs [] =
                fail ("failed to parse any of the possible choices:\n"
                            ++indent 2 (concatMap showErr (reverse errs)))
            accum errs ((e,P p):ps) =
                P (\s ts-> case p s ts of
                           Failure _ _ err ->
                                       let (P p) = accum ((e,err):errs) ps
                                       in p s ts
                           r@(Success z _ a)    -> r
                           r@(Committed _)      -> r )
            showErr (name,err) = name++":\n"++indent 2 err

------------------------------------------------------------------------
next :: Parser s t t
next = P (\s ts-> case ts of
                  []      -> Failure [] s "Ran out of input (EOF)"
                  (t:ts') -> Success ts' s t )

eof  :: Parser s t ()
eof  = P (\s ts-> case ts of
                  []      -> Success [] s ()
                  (t:ts') -> Failure ts s "Expected end of input (eof)" )


satisfy :: (t->Bool) -> Parser s t t
satisfy pred = do { x <- next
                  ; if pred x then return x else fail "Parse.satisfy: failed"
                  }
------------------------------------------------------------------------
-- State handling

-- | Update the internal state.
stUpdate   :: (s->s) -> Parser s t ()
stUpdate f  = P (\s ts-> Success ts (f s) ())

-- | Query the internal state.
stQuery    :: (s->a) -> Parser s t a
stQuery f   = P (\s ts-> Success ts s (f s))

-- | Deliver the entire internal state.
stGet      :: Parser s t s
stGet       = P (\s ts-> Success ts s s)


------------------------------------------------------------------------
-- | Push some tokens back onto the front of the input stream and reparse.
--   This is useful e.g. for recursively expanding macros.  When the
--   user-parser recognises a macro use, it can lookup the macro
--   expansion from the parse state, lex it, and then stuff the
--   lexed expansion back down into the parser.
reparse    :: [t] -> Parser s t ()
reparse ts  = P (\s inp-> Success (ts++inp) s ())

------------------------------------------------------------------------
