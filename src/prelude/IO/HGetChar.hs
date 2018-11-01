module IO (hGetChar,cHGetChar) where

import NHC.Internal (IO(..))
import DIOError
import DHandle

{-
The world ensures correct sequentialisation of IO-actions,
especially avoids sharing of input actions.
However, the world is not passed everywhere and the following
code relies on nhc not perform optimisations that could
change the evaluation order.
E.g., don't use `const' instead of the lambda abstraction of world.
-}

import PreludeBuiltin(_hGetChar)

hGetChar              :: Handle -> IO Char
hGetChar h    = IO (\world -> input h)
 where
  input h = let c = cHGetChar h
            in if c < 0 then
                 Left (EOFError "hGetChar" h)
               else
                 Right (toEnum c)

cHGetChar :: Handle -> Int
cHGetChar h = _hGetChar h		-- _hGetChar -> special bytecode


