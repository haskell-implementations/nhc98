import Random

rollDie :: IO Int
rollDie = randomRIO (1, 6)

rollTwoDice :: IO (Int, Int)
rollTwoDice = do
	r1 <- rollDie
	r2 <- rollDie
	return (r1, r2)

main = do
	putStr "Sum of two dice: "
	(r1, r2) <- rollTwoDice
	print (r1 + r2)

