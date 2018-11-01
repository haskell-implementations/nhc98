module List where

-- transpose is lazy in both rows and columns, and works for
--    non-rectangular 'matrices'
-- Note that [h | (h:t) <- xss] is not the same as (map head xss)
--    because the former discards empty sublists inside xss

transpose       :: [[a]] -> [[a]]
transpose []            =  []
transpose ([]:    xss)  =  transpose xss
transpose ((x:xs):xss)  =  (x: [h | (h:t)<-xss]) :
                           transpose (xs: [t | (h:t) <- xss])
