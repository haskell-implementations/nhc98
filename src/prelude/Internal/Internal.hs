module NHC.Internal
  ( _apply1
  , _apply2
  , _apply3
  , _apply4
  , _id
  , _eqInteger
  , _eqFloat
  , _eqDouble

  -- IO stuff
  , World(..)
  , IO(..)
  , IOError(..)
  , _mkIOok0
  , _mkIOok1
  , _mkIOok2
  , _mkIOok3
  , _mkIOok4
  , _mkIOok5
  , _mkIOok6
  , _mkIOok7
  , _mkIOok8
  , _mkIOok9
  , _mkIOok10
  , _mkIOok11
  , _mkIOok12
  , _mkIOok13
  , _mkIOok14
  , _mkIOok15
  , unsafePerformIO
  , unsafeInterleaveIO

  -- Rational stuff
  , Ratio(..)
  , Rational
  , (%)

  -- error messages
  , _patternMatchFail
  , _noMethodError
  , _recUpdError
  , _recSelError
  , _recConError

  -- List syntax is un-rebindable, so always refers to Prelude lists
{-, []((:),[])-}

  ) where

import NHC.Internal	-- Yes, it's circular!  (needs a .hi to bootstrap)
import Prelude	(($!),flip,id,error,undefined
		,Char,String,Bool,Int,Integer,Float,Double
		,(++),Either(..),(,),[](..),(),Show(show)
		,Integral(..),gcd,Eq(..),Num(..))
import Ratio (Ratio(..),Rational,(%))

_apply1 f x = f x
_apply2 f x y = f x y
_apply3 f x y z = f x y z
_apply4 f x y z u = f x y z u

_id x = x

foreign import ccall "primIntegerEqC" _eqInteger :: Integer -> Integer -> Bool
foreign import ccall "primFloatEqC"   _eqFloat   :: Float   -> Float   -> Bool
foreign import ccall "primDoubleEqC"  _eqDouble  :: Double  -> Double  -> Bool


-- IO things
data World = World
newtype IO a = IO (World -> Either IOError a)

-- mkIOok functions lift any non-failing pure function to become a
--        monadic IO action, eliminating sharing of results etc.
-- These are intended to be applied by machine-generated code only.
-- Arities: 0-12
_mkIOok0 :: (()->a) -> IO a     -- Note: no CAFs allowed!
_mkIOok1 :: (b->a) -> (b->IO a)
_mkIOok2 :: (c->b->a) -> (c->b->IO a)
_mkIOok3 :: (d->c->b->a) -> (d->c->b->IO a)
_mkIOok4 :: (e->d->c->b->a) -> (e->d->c->b->IO a)
_mkIOok5 :: (f->e->d->c->b->a) -> (f->e->d->c->b->IO a)
_mkIOok6 :: (g->f->e->d->c->b->a) -> (g->f->e->d->c->b->IO a)
_mkIOok7 :: (h->g->f->e->d->c->b->a) -> (h->g->f->e->d->c->b->IO a)
_mkIOok8 :: (i->h->g->f->e->d->c->b->a) -> (i->h->g->f->e->d->c->b->IO a)
_mkIOok9 :: (j->i->h->g->f->e->d->c->b->a) -> (j->i->h->g->f->e->d->c->b->IO a)

_mkIOok10 :: (k->j->i->h->g->f->e->d->c->b->a)
          -> (k->j->i->h->g->f->e->d->c->b->IO a)
_mkIOok11 :: (l->k->j->i->h->g->f->e->d->c->b->a)
          -> (l->k->j->i->h->g->f->e->d->c->b->IO a)
_mkIOok12 :: (m->l->k->j->i->h->g->f->e->d->c->b->a)
          -> (m->l->k->j->i->h->g->f->e->d->c->b->IO a)
_mkIOok13 :: (n->m->l->k->j->i->h->g->f->e->d->c->b->a)
          -> (n->m->l->k->j->i->h->g->f->e->d->c->b->IO a)
_mkIOok14 :: (o->n->m->l->k->j->i->h->g->f->e->d->c->b->a)
          -> (o->n->m->l->k->j->i->h->g->f->e->d->c->b->IO a)
_mkIOok15 :: (p->o->n->m->l->k->j->i->h->g->f->e->d->c->b->a)
          -> (p->o->n->m->l->k->j->i->h->g->f->e->d->c->b->IO a)


_mkIOok0  fn = IO (\_->Right $! fn ())
_mkIOok1  fn = \a-> IO (\_->Right $! fn a)
_mkIOok2  fn = \a b-> IO (\_->Right $! fn a b)
_mkIOok3  fn = \a b c-> IO (\_->Right $! fn a b c)
_mkIOok4  fn = \a b c d-> IO (\_->Right $! fn a b c d)
_mkIOok5  fn = \a b c d e-> IO (\_->Right $! fn a b c d e)
_mkIOok6  fn = \a b c d e f-> IO (\_->Right $! fn a b c d e f)
_mkIOok7  fn = \a b c d e f g-> IO (\_->Right $! fn a b c d e f g)
_mkIOok8  fn = \a b c d e f g h-> IO (\_->Right $! fn a b c d e f g h)
_mkIOok9  fn = \a b c d e f g h i-> IO (\_->Right $! fn a b c d e f g h i)
_mkIOok10 fn = \a b c d e f g h i j->
               IO (\_->Right $! fn a b c d e f g h i j)
_mkIOok11 fn = \a b c d e f g h i j k->
               IO (\_->Right $! fn a b c d e f g h i j k)
_mkIOok12 fn = \a b c d e f g h i j k l->
               IO (\_->Right $! fn a b c d e f g h i j k l)
_mkIOok13 fn = \a b c d e f g h i j k l m->
               IO (\_->Right $! fn a b c d e f g h i j k l m)
_mkIOok14 fn = \a b c d e f g h i j k l m n->
               IO (\_->Right $! fn a b c d e f g h i j k l m n)
_mkIOok15 fn = \a b c d e f g h i j k l m n o->
               IO (\_->Right $! fn a b c d e f g h i j k l m n o)

-- unsafePerformIO relies on the internal representation of the IO monad.
unsafePerformIO :: IO a -> a
unsafePerformIO (IO f) =
  case f World of
    Left err -> error ("unsafePerformIO: "++show err)
    Right a  -> a

-- make the result of the IO action lazy
unsafeInterleaveIO :: IO a -> IO a
unsafeInterleaveIO (IO f) =
  IO (\world -> Right (case f world of
                         Left err -> error ("unsafeInterleaveIO: "++show err)
                         Right a  -> a))

{-
-- Rational stuff, required in the Prelude because of literal numbers.
data Ratio a = a :% a
type Rational = Ratio Integer

infixl 7 %
(%)                     :: (Integral a) => a -> a -> Ratio a
x % 0                   =  error "Ratio.%: zero denominator"
x % y                   =  let top = x * signum y
                               bot = abs y
                               d   = gcd top bot
                           in (top`quot`d) :% (y`quot`d)
-}

-- some error messages
_patternMatchFail s  = error ("Pattern-match failure: "++s)
_noMethodError    s  = error ("No class method defined: "++s)
_recUpdError      s  = error ("Record update failed: "++s)
_recSelError      s  = error ("Record selection failed: "++s)
_recConError      s  = error ("Record construction failed: "++s)

