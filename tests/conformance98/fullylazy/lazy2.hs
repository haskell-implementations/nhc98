
main = do
  mapM print (map func ['a'..'z'])

func n = nfib 20

nfib 0 = 1
nfib 1 = 1
nfib x = nfib (x-1) + nfib (x-2)

