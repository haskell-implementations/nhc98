-- FIXED

{- On parsing "'ab'", nhc13 fails as it should but with an obscure
error message:
-------------------------------------------------------------------------------
/u/gem/hscr/nhc13test$ nhc13test9 "'ab'"
Prelude: No match in function at 8:1.
-------------------------------------------------------------------------------
when it should report a "no parse" error.  Further, it even fails on "'a'":
-------------------------------------------------------------------------------
/u/gem/hscr/nhc13test$ nhc13test9 "'a'"
Prelude: No match in function at 8:1.
-------------------------------------------------------------------------------
hbc and hugs1.4 both comply. -}

import System (getArgs)

main = do argv <- getArgs
          print ((read (argv!!0))::Char)
