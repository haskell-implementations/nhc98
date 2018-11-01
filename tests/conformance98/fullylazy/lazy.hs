import System

main =  do
  ~[arg] <- getArgs
  mapM print (func (read arg))
  return ()

func n = map (func' n) [1..10]
func' x y = nfib x

nfib 0 = 1
nfib 1 = 1
nfib x = nfib (x-1) + nfib (x-2)

