module Main where


data T = T1 | T :++ T
  deriving (Eq,Show,Read)

-- infix 9 :++

t :: T
t = read "T1"

main = print t
