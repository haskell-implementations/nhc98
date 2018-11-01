-- Choose whether you are building the Yhc or Nhc98 compilers.
-- The value of the global constant (Building.compiler) switches certain
-- behaviours, e.g. which internal module some pre-defined functions are
-- imported from, + whether certain primitives are enabled or not.
module Building where

data Compiler = Yhc | Nhc98
  deriving Eq

compiler = Nhc98
