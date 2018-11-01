module Text.ParserCombinators.Poly.Base
  ( -- * The PolyParse class
    PolyParse(..)	-- class of all monadic two-level-error parsers

    -- * Combinators general to all parser types.
    -- ** Simple combinators
  , discard	-- :: PolyParse p => p a -> p b -> p a
    -- ** Error-handling
  , failBad	-- :: PolyParse p => String -> p a
  , adjustErrBad-- :: PolyParse p => p a -> (String->String) -> p a
  , indent	-- :: Int -> String -> String
    -- ** Choices
  , oneOf	-- :: PolyParse p => [p a] -> p a
  , optional	-- :: PolyParse p => p a -> p (Maybe a)
    -- ** Sequences
  , exactly	-- :: PolyParse p => Int -> p a -> p [a]
  , many	-- :: PolyParse p => p a -> p [a]
  , many1	-- :: PolyParse p => p a -> p [a]
  , sepBy	-- :: PolyParse p => p a -> p sep -> p [a]
  , sepBy1	-- :: PolyParse p => p a -> p sep -> p [a]
  , bracketSep	-- :: PolyParse p => p bra -> p sep -> p ket -> p a -> p [a]
  , bracket	-- :: PolyParse p => p bra -> p ket -> p a -> p a
  , manyFinally -- :: PolyParse p => p a -> p z -> p [a]
  ) where

#ifdef __NHC__
default (Integer,Double,[])	-- hack to avoid bizarre type defaulting error
instance PolyParse []
#endif

-- | The @PolyParse@ class is an abstraction over all the current
--   concrete representations of monadic parser combinators in this
--   package.  The common feature is two-level error-handling.
--   Some primitives must be implemented specific to each parser type
--   (e.g. depending on whether the parser has a running state, or
--   whether it is lazy).  But given those primitives, large numbers of
--   combinators do not depend any further on the internal structure of
--   the particular parser.
--
--   There are two additional basic combinators that we expect to be implemented
--   afresh for every concrete type, but which (for technical reasons)
--   cannot be class methods.  They are @next@ and @satisfy@.
class (Functor p, Monad p) => PolyParse p where
    -- | Commit is a way of raising the severity of any errors found within
    --   its argument.  Used in the middle of a parser definition, it means that
    --   any operations prior to commitment fail softly, but after commitment,
    --   they fail hard.
    commit    :: p a -> p a
    -- | @p `adjustErr` f@ applies the transformation @f@ to any error message
    --   generated in @p@, having no effect if @p@ succeeds.
    adjustErr :: p a -> (String -> String) -> p a
    -- | @p `onFail` q@ means parse p, unless p fails, in which case
    --   parse q instead.
    --   Can be chained together to give multiple attempts to parse something.
    --   (Note that q could itself be a failing parser, e.g. to change the error
    --   message from that defined in p to something different.)
    --   However, a severe failure in p cannot be ignored.
    onFail    :: p a -> p a -> p a
    -- | Parse the first alternative that succeeds, but if none succeed,
    --   report only the severe errors, and if none of those, then report
    --   all the soft errors.
    oneOf'    :: [(String, p a)] -> p a
    -- | Apply a parsed function to a parsed value.
    --   Rather like ordinary function application lifted into parsers.
    apply     :: p (a->b) -> p a -> p b
    pf `apply` px = do { f <- pf; x <- px; return (f x) }
      -- note: the Poly.Lazy variants override this defn with a lazier one.

infixl 6 `onFail`	-- not sure about precedence 6?
infixl 3 `apply`
infixl 3 `discard`

{-
-- Combinators we expect most concrete parser types to implement.
--   For technical reasons, they cannot be class members.

-- | Yield the next token
next      :: PolyParse p => p t
  --  where t is constrained to be the input token type

-- | One token satisfying a predicate.
satisfy :: PolyParse p => (t->Bool) -> p t t
satisfy p = do{ x <- next
              ; if p x then return x else fail "Parse.satisfy: failed"
              }
  -- note: must be re-defined for each implementation because
  --       its type cannot be expressed otherwise.
-}

-- | When a simple fail is not strong enough, use failBad for emphasis.
--   An emphasised (severe) error cannot be overridden by choice
--   operators.
failBad :: PolyParse p => String -> p a
failBad e = commit (fail e)

-- | @x `discard` y@ parses both x and y, but discards the result of y.
--   Rather like @const@ lifted into parsers.
discard :: PolyParse p => p a -> p b -> p a
px `discard` py = do { x <- px; py; return x; }

-- | @adjustErrBad@ is just like @adjustErr@ except it also raises the
--   severity of the error.
adjustErrBad :: PolyParse p => p a -> (String->String) -> p a
p `adjustErrBad` f = commit (p `adjustErr` f)

-- | Parse the first alternative in the list that succeeds.
oneOf :: PolyParse p => [p a] -> p a
oneOf []     = fail ("failed to parse any of the possible choices")
oneOf (p:ps) = p `onFail` oneOf ps
--oneOf :: Show t => [Parser t a] -> Parser t a
--oneOf []     = do { n <- next
--                  ; fail ("failed to parse any of the possible choices"
--                         ++"\n  next token is "++show n)
--                  }
--oneOf (p:ps) = p `onFail` oneOf ps

-- | Helper for formatting error messages: indents all lines by a fixed amount.
indent :: Int -> String -> String
indent n = unlines . map (replicate n ' ' ++) . lines

-- | 'optional' indicates whether the parser succeeded through the Maybe type.
optional :: PolyParse p => p a -> p (Maybe a)
optional p = fmap Just p `onFail` return Nothing

-- | 'exactly n p' parses precisely n items, using the parser p, in sequence.
exactly :: PolyParse p => Int -> p a -> p [a]
exactly 0 p = return []
exactly n p = return (:) `apply`  (p `adjustErr` (("When expecting exactly "
                                                    ++show n++" more items")++))
                         `apply`  exactly (n-1) p

-- | 'many p' parses a list of elements with individual parser p.
--   Cannot fail, since an empty list is a valid return value.
many :: PolyParse p => p a -> p [a]
many p = many1 p `onFail` return []

-- | Parse a non-empty list of items.
many1 :: PolyParse p => p a -> p [a]
many1 p = do { x <- p `adjustErr` (("In a sequence:\n"++). indent 2)
             ; return (x:) `apply` many p
             }
--       `adjustErr` ("When looking for a non-empty sequence:\n\t"++)

-- | Parse a list of items separated by discarded junk.
sepBy :: PolyParse p => p a -> p sep -> p [a]
sepBy p sep = do sepBy1 p sep `onFail` return []

-- | Parse a non-empty list of items separated by discarded junk.
sepBy1 :: PolyParse p => p a -> p sep -> p [a]
sepBy1 p sep = do { x <- p
                  ; return (x:) `apply` many (do {sep; p})
                  }
         `adjustErr` ("When looking for a non-empty sequence with separators:\n\t"++)
 
-- | Parse a list of items, discarding the start, end, and separator
--   items.
bracketSep :: PolyParse p => p bra -> p sep -> p ket -> p a -> p [a]
bracketSep open sep close p =
    do { open; close; return [] }
       `onFail`
    do { open    `adjustErr` ("Missing opening bracket:\n\t"++)
       ; x <- p  `adjustErr` ("After first bracket in a group:\n\t"++)
       ; return (x:)
           `apply` manyFinally (do {sep; p})
              (close `adjustErrBad` ("When looking for closing bracket:\n\t"++))
       }

-- | Parse a bracketed item, discarding the brackets.
bracket :: PolyParse p => p bra -> p ket -> p a -> p a
bracket open close p = do
    do { open    `adjustErr` ("Missing opening bracket:\n\t"++)
       ; p `discard` (close `adjustErrBad` ("Missing closing bracket:\n\t"++))
       }

-- | 'manyFinally e t' parses a possibly-empty sequence of e's,
--   terminated by a t.  The final t is discarded.  Any parse failures
--   could be due either to a badly-formed terminator or a badly-formed
--   element, so it raises both possible errors.
manyFinally :: PolyParse p => p a -> p z -> p [a]
manyFinally p t =
    (many p `discard` t)
      `onFail`
    oneOf' [ ("sequence terminator", do { t; return [] } )
           , ("item in a sequence",  do { p; return [] } )
           ]
{-
manyFinally p t =
    do { xs <- many p
       ; oneOf' [ ("sequence terminator", do { t; return () } )
                , ("item in a sequence",  do { p; return () } )
                ]
       ; return xs
       }
-}
------------------------------------------------------------------------
