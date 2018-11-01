{- Haskell 1.3 specifies Latin-ISO-8859-1 as the character set, with
which ¡ (amongst others) is given as a valid symbol constituent.
nhc13 fails with: `Found (:) expect {-EOF-}' or `Found ;' expect
{-EOF-}'. -}

main :: IO ()
main = print True

data NonAsciiCon = Int :¡ Int

(ÿ) :: Int
(ÿ) = 1
