module Text.ParserCombinators.Poly.ByteString
  ( -- * The Parser datatype
    Parser(P)
  , Result(..)
  , runParser
    -- ** basic parsers
  , next
  , eof
  , satisfy
    -- ** re-parsing
  , reparse
    -- * Re-export all more general combinators
  , module Text.ParserCombinators.Poly.Base
  ) where


import Text.ParserCombinators.Poly.Base
import qualified Data.ByteString.Lazy.Char8 as BS
import Data.ByteString.Lazy.Char8 (ByteString)

-- | This @Parser@ datatype is a specialised parsing monad with error
--   reporting.  Whereas the standard version can be used for arbitrary
--   token types, this version is specialised to ByteString input only.
newtype Parser a = P (ByteString -> Result ByteString a)

-- | A return type like Either, that distinguishes not only between
--   right and wrong answers, but also has commitment, so that a failure
--   cannot be undone.  This should only be used for writing very primitive
--   parsers - really it is an internal detail of the library.
data Result z a = Success   z a
                | Failure   z String
                | Committed (Result z a)

instance Functor (Result z) where
    fmap f (Success z a) = Success z (f a)
    fmap _ (Failure z e) = Failure z e
    fmap f (Committed r) = Committed (fmap f r)

-- | Apply a parser to an input token sequence.
runParser :: Parser a -> ByteString -> (Either String a, ByteString)
runParser (P p) = resultToEither . p
  where
    resultToEither :: Result z a -> (Either String a, z)
    resultToEither (Success z a)  =  (Right a, z)
    resultToEither (Failure z e)  =  (Left e, z)
    resultToEither (Committed r)  =  resultToEither r

instance Functor Parser where
    fmap f (P p) = P (fmap f . p)

instance Monad Parser where
    return x     = P (\ts-> Success ts x)
    fail e       = P (\ts-> Failure ts e)
    (P f) >>= g  = P (continue . f)
      where
        continue (Success ts x)             = let (P g') = g x in g' ts
        continue (Committed (Committed r))  = continue (Committed r)
        continue (Committed r)              = Committed (continue r)
        continue (Failure ts e)             = Failure ts e

instance PolyParse Parser where
    commit (P p)         = P (Committed . p)
    (P p) `adjustErr` f  = P (adjust . p)
      where
        adjust (Failure z e) = Failure z (f e)
        adjust (Committed r) = Committed (adjust r)
        adjust  good         = good

    (P p) `onFail` (P q) = P (\ts-> continue ts $ p ts)
      where
        continue ts (Failure _ _) = q ts
    --  continue _  (Committed r) = r	-- no, remain Committed
        continue _  r             = r

    oneOf' = accum []
      where accum errs [] =
                fail ("failed to parse any of the possible choices:\n"
                            ++indent 2 (concatMap showErr (reverse errs)))
            accum errs ((e,P p):ps) =
                P (\ts-> case p ts of
                           Failure _ err ->
                                       let (P p') = accum ((e,err):errs) ps
                                       in p' ts
                           r@(Success _ _)    -> r
                           r@(Committed _)    -> r )
            showErr (name,err) = name++":\n"++indent 2 err

------------------------------------------------------------------------
next :: Parser Char
next = P (\bs-> case BS.uncons bs of
                Nothing -> Failure bs "Ran out of input (EOF)"
                Just (c, bs') -> Success bs' c )

eof :: Parser ()
eof = P (\bs -> if BS.null bs
                then Success bs ()
                else Failure bs "Expected end of input (EOF)" )

satisfy :: (Char -> Bool) -> Parser Char
satisfy f = do { x <- next
               ; if f x then return x else fail "Parse.satisfy: failed"
               }

------------------------------------------------------------------------
-- | Push some tokens back onto the front of the input stream and reparse.
--   This is useful e.g. for recursively expanding macros.  When the
--   user-parser recognises a macro use, it can lookup the macro
--   expansion from the parse state, lex it, and then stuff the
--   lexed expansion back down into the parser.
reparse    :: ByteString -> Parser ()
reparse ts  = P (\inp-> Success (ts `BS.append` inp) ())

------------------------------------------------------------------------
