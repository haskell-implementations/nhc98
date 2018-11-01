infix 4 :^:

data Tree a = Leaf a  |  Tree a  :^:  Tree a
	deriving (Show,Read)

main = print ((read (show ((Leaf True) :^: (Leaf False)))) :: Tree Bool)
--main = print ((Leaf True) :^: (Leaf False))
--main = print (read (show (Leaf True)))

