class C a where

g = undefined


f x = let 
         h y = let
  p z = z
               in p
      in h

main = print (f ())
