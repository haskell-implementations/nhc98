module State where

-- | Wow, this stuff is positively ancient! Was this from before newtypes were invented? --SamB

infixl 5 >>>,>>>=,=>>> -- Use >>> and >>>= instead of >> and >>= to avoid problems with 1.3 prelude
infixr 4 >=>


type State0  d s   s' = d -> s -> s'
type State   d s u s' = d -> s -> (u,s')


unitS :: u -> State d s u s
unitS u = (\d s -> (u,s))

unitS0 :: State0 d s   s
unitS0 = (\d s -> s)

(>>>) :: State0 d a b -> State0 d b c -> State0 d a c
f >>> g = \d s -> g d (f d s)

(=>>>) :: State d s (a->b) s' -> State d s' a s'' -> State d s b s''
f =>>> g = \d s -> case f d s of (h,s) -> case g d s of (x,s) -> let hx = h x in seq hx (hx,s)
-- f =>>> g = \d s -> case f d s of (h,s) -> case g d s of (x,s) -> (h x,s)

(>>>=) :: State d s a s' -> (a -> State0 d s' s'') -> State0 d s s''
f >>>= g = \d s -> case f d s of (x,s) -> g x d s

(>=>) :: State d s d' s' -> State0 d' s' s'' -> State0 d s s''
f >=> g = \d s -> case f d s of (d,s) -> (g d s)

mapS :: (a->State d s b s) -> [a] -> State d s [b] s
mapS f []     = unitS []
mapS f (x:xs) = unitS (:) =>>> f x =>>> mapS f xs

mapS0 :: (a->State0 d s s) -> [a] -> State0 d s s
mapS0 f []     = unitS0
mapS0 f (x:xs) = f x >>> mapS0 f xs

zipWithS :: (a -> b -> State d s c s) -> [a] -> [b] -> State d s [c] s
zipWithS f [] [] = unitS []
zipWithS f (x:xs) (y:ys) = unitS (:) =>>> f x y =>>> zipWithS f xs ys
zipWithS _ _ _ = error "zipWithS: lists of different lengths"
