module Text.ParserCombinators.Poly.Stream
  ( -- * The Parser datatype
    Parser(P)	-- datatype, instance of: Functor, Monad, PolyParse
  , runParser	-- :: Parser t a -> [t] -> (Either String a, [t])
    -- ** basic parsers
  , next	-- :: Parser t t
  , satisfy	-- :: (t->Bool) -> Parser t t

    -- ** re-parsing
--  , reparse	-- :: [t] -> Parser t ()
    -- * Re-export all more general combinators
  , module Text.ParserCombinators.Poly.Base
  ) where


import Text.ParserCombinators.Poly.Base
-------------------------------------------------
-- import Data.Stream

data Pump seed a
    = Done
    | Yield a seed
    | Skip    seed

data Stream a = forall s . Stream s (s->Pump s a)

-------------------------------------------------

-- | This @Parser@ datatype is a fairly generic parsing monad with error
--   reporting.  It can be used for arbitrary token types, not just
--   String input.  (If you require a running state, use module PolyState
--   instead)
newtype Parser t a = P (Stream t -> (EitherE String a, Stream t))

--   A return type like Either, that distinguishes not only between
--   right and wrong answers, but also has gradations of wrongness.
type EitherE a b = Either (Bool,a) b

-- | Apply a parser to an input token sequence.
runParser :: Parser t a -> Stream t -> (Either String a, Stream t)
runParser (P p) =
    (\ (e,ts)-> (case e of {Left (_,m)->Left m; Right m->Right m}, ts) )
    . p

instance Functor (Parser t) where
    fmap f (P p) = P (\ts-> case p ts of
                                (Left msg, ts') -> (Left msg,    ts')
                                (Right x,  ts') -> (Right (f x), ts'))
instance Monad (Parser t) where
    return x     = P (\ts-> (Right x, ts))
    (P f) >>= g  = P (\ts-> case f ts of
                                (Left msg, ts') -> (Left msg, ts')
                                (Right x,  ts') -> let (P g') = g x in g' ts')
    fail e       = P (\ts-> (Left (False,e), ts))

instance PolyParse (Parser t) where
    commit (P p)         = P (\ts-> case p ts of
                                      (Left (_,e), ts') -> (Left (True,e), ts')
                                      right             -> right )
    (P p) `adjustErr` f  = P (\ts-> case p ts of
                                 (Left (b,msg), ts') -> (Left (b,(f msg)), ts')
                                 right               -> right )
    (P p) `onFail` (P q) = P (\ts-> case p ts of
                                      r@(Left (True,_), _) -> r
                                      (Left _, _) -> q ts
                                      right       -> right )
    oneOf' = accum []
      where accum errs [] =
              case filter isBad errs of
                [] ->  fail ("failed to parse any of the possible choices:\n"
                            ++indent 2 (concatMap showErr (reverse errs)))
                [(_,(_,e))] -> failBad e
                es -> failBad ("one of the following failures occurred:\n"
                              ++indent 2 (concatMap showErr (reverse es)))
            accum errs ((e,P p):ps) =
                P (\ts-> case p ts of
                           (Left err,_) -> let (P p) = accum ((e,err):errs) ps
                                           in p ts
                           right        -> right )
            showErr (name,(_,err)) = name++":\n"++indent 2 err
            isBad (_,(b,_)) = b

------------------------------------------------------------------------
next :: Parser t t
next = P (\ (Stream s pump) ->
         let one seed = case pump seed of
                          Done   -> (Left (False,"Ran out of input (EOF)")
                                    , Stream seed (const Done))
                          Skip s -> one s
                          Yield t s -> (Right t, Stream s pump)
         in one s )
         
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
--reparse    :: [t] -> Parser t ()
--reparse ts  = P (\inp-> (Right (), ts++inp))

------------------------------------------------------------------------
