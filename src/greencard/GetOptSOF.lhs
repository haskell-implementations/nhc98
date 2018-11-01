--A command-line options library - sof 1/97

> module GetOptSOF
>        (
>         Opt(..),  -- instance Functor, Monad, MonadZero, MonadPlus (in 1.3)
>
>         -- The Opt monad primitives:
>
>          -- add another item (to the front)
>         pushArg,   -- :: String -> Opt a ()
>          -- transform the threaded state
>         updState,  -- :: (a -> a) -> Opt a ()
>          -- aka zero
>         failed,    -- :: Opt a b
>          -- Opt try
>         catchOpt,  -- :: Opt a b -> Opt a b -> Opt a b
>
>         -- useful Opt matchers
>
>         -- match if string is prefix of current element.
>
>         prefixMatch, -- :: String -> Opt a String
>         prefixed,    -- :: String -> Opt a b -> Opt a b
>           -- if current option matches pred, try Opt argument.
>         matches,     -- :: (String -> Bool) -> (String -> Opt a b) -> Opt a b
>          -- test if flag is set
>         flag,        -- :: String -> (a -> a) -> Opt a ()
>         flags,       -- :: [(String,a->a)] -> Opt a ()
>          -- n-way disjunction
>         opts,        -- :: [Opt a b] -> Opt a b
>         orOpt,       -- :: Opt a b -> Opt a b -> Opt a b
>          -- `seqOpt`, really.
>         thenOpt,     -- :: Opt a b -> Opt a b -> Opt a b

>           -- try matching --{disable,enable}-foo
>         toggle,      -- :: String 
>                      -- -> String 
>                      -- -> String 
>                      -- -> (Bool -> a -> a) 
>                      -- -> Opt a ()
>         toggles,     -- :: String 
>                      -- -> String 
>                      -- -> [(String,Bool -> a->a)] 
>                      -- -> Opt a ()
>
>          -- try matching -ifoo (where -i is the prefix)
>         prefixArg,   -- :: String -> (String -> a -> a) -> Opt a ()
>          -- rey matching -o foo
>         optionArg,        -- :: String -> (String -> Opt a b) -> Opt a b
>         optionWithOptArg, -- :: String -> Opt a b -> Opt a b
>          -- exact string match
>         string,           -- :: String -> Opt a ()

>       -- useful combinators for when using attribute-lists
>       -- to gather options
>       (-=),    -- :: String -> a -> Opt [a] ()
>       (-==),   -- :: String -> (String -> a) -> Opt [a] ()
>       (-===),  -- :: String -> (String -> a) -> Opt [a] ()
>       (-====), -- :: String -> (Maybe String -> a) -> Opt [a] ()
>       (-?),   -- :: (String -> Bool) -> (String -> a) -> Opt [a] ()

>        -- Do the actual matching.
>
>       getOpts,    -- :: Opt a b -> a -> [String] -> ([String],a)
>
>       Maybe(..)
>        ) where

> import System
> infixr 1  `bindOpt`, `seqOpt`

-- Use a monad to encode the matching operations we want
-- to do on the command line contents, threading a value
-- that will record what we've seen so far plus the remainder
-- of the command-line.
--

> -- 1.2 does not have this
> --data Maybe a = Nothing | Just a
> 
> data Opt a b = Opt ([String] -> a -> Maybe ([String],a,b))
>
>  -- bind & return over Opt
>
> bindOpt :: Opt a b -> (b -> Opt a c) -> Opt a c
> bindOpt (Opt opt_a) fopt =
>  Opt
>   (\ args st ->
>      case opt_a args st of
>       Nothing -> Nothing
>       Just (args',st',v) -> 
>          case fopt v of
>           Opt opt_b -> opt_b args' st')
>
> seqOpt :: Opt a b -> Opt a c -> Opt a c
> seqOpt a b = a `bindOpt` (\ _ -> b)
>
> returnOpt :: b -> Opt a b
> returnOpt v = Opt (\ args st -> Just (args,st,v))
>
>  -- The Opt primitives for pop and push of cmd line options, plus
>  -- primitive for updating the threaded state.
>  -- 
>
> pushArg :: String -> Opt a ()
> pushArg str = Opt (\ args st -> Just (str:args,st,()))
>
> popArg :: Opt a String
> popArg =
>  Opt 
>   (\ args st ->
>      case args of
>        []     -> Nothing
>        (x:xs) -> Just (xs,st,x))
>
> updState :: (a -> a) -> Opt a ()
> updState f = Opt (\ args st -> Just (args, f st, ()))
>
> result :: a -> Opt a ()
> result v = updState (\ _ -> v)
>  
>  -- a not-that-useful operation on Opt.
> mapOpt :: (b -> c) -> Opt a b -> Opt a c
> mapOpt f (Opt opt) =
>  Opt (\ args st ->
>         case opt args st of
>           Nothing -> Nothing
>           Just (args',st',v) -> Just (args',st',f v))
>
>  -- Let's overload!
>  {-
> instance Monad (Opt s) where
>   a >>= b = bindOpt a b
>   return  = returnOpt
>
> instance Functor (Opt s) where
>   map = mapOpt
>               
> instance MonadZero (Opt s) where
>   zero = failed
>
> instance MonadPlus (Opt s) where
>   (++) = thenOpt    
> -}
>  -- no match.
> failed :: Opt a b
> failed = Opt (\ _ _ -> Nothing)
>
>  -- try left, if not successful, give right a spin.
> catchOpt :: Opt a b -> Opt a b -> Opt a b
> catchOpt (Opt opt_a) (Opt opt_b) =
>  Opt 
>   (\ args st ->
>       case opt_a args st of
>         Nothing -> opt_b args st
>         Just x  -> Just x)
>
>

{-
  Scanning a list of command-line options using
  an Opt action that encodes what's interesting and
  worth noting.

  ToDo: add error support (in the monad?)

-}


> getOpts :: Opt a b -> a -> [String] -> ([String],a)
> getOpts _ st []                    = ([],st)
> getOpts o@(Opt opt) st args@(x:xs) =
>  case opt args st of
>   Nothing            -> let (args',st') = getOpts o st xs in (x:args',st')
>   Just (args',st',_) -> getOpts o st' args'
>

{-
 A number of useful matching combinators for command-line
 options follow:
-}

>
> prefixMatch :: String -> Opt a String
> prefixMatch str =
>  popArg `bindOpt` \ arg ->
>  case prefix str arg of
>    Nothing   -> failed
>    Just arg' -> returnOpt arg'
>
> prefixed :: String -> Opt a b -> Opt a b
> prefixed pre n_opt =
>  prefixMatch pre `bindOpt` \ arg ->
>   -- push back what's left of the option, and continue.
>  pushArg arg     `seqOpt` 
>  n_opt
>
>
> matches :: (String -> Bool) -> (String -> Opt a b) -> Opt a b
> matches matcher opt =
>  popArg `bindOpt` \ arg ->
>  if matcher arg then
>     opt arg
>  else
>     failed

> flag :: String -> (a -> a) -> Opt a ()
> flag str f =
>   popArg `bindOpt` \ arg ->
>   case prefix str arg of
>     Nothing   -> failed
>     Just arg' -> updState f
>
> opts :: [Opt a b] -> Opt a b
> opts ls = foldl1 (orOpt) ls


> orOpt :: Opt a b -> Opt a b -> Opt a b
> orOpt = catchOpt
>  
> thenOpt :: Opt a b -> Opt a b -> Opt a b
> thenOpt opt_a opt_b = opt_a `seqOpt` opt_b
>

> flags :: [(String,a->a)] -> Opt a ()
> flags ls = opts (map (\ (str,f) -> flag str f) ls)
>
> toggle :: String -> String -> String -> (Bool -> a -> a) -> Opt a ()
> toggle on off str f =
>  ((prefixed on  (returnOpt True))   `orOpt`
>   (prefixed off (returnOpt False))) `bindOpt` \ flg ->
>  prefixed str (popArg `seqOpt` updState (f flg))
>
> toggles :: String -> String -> [(String,Bool -> a->a)] -> Opt a ()
> toggles on off ls = opts (map (\ (str,f) -> toggle on off str f) ls)
>
> prefixArg :: String -> (String -> a -> a) -> Opt a ()
> prefixArg str f = 
>  popArg `bindOpt` \arg ->
>  case prefix str arg of
>    Nothing   -> failed
>    Just arg' -> updState (f arg')
>
> optionArg :: String -> (String -> Opt a b) -> Opt a b
> optionArg str f =
>    -- get current option
>   popArg `bindOpt` \ arg ->
>   case prefix str arg of
>     Nothing   -> failed
>     Just arg' -> 
>         -- get option value
>        popArg `bindOpt` \ arg -> 
>        f arg

>
> optionWithOptArg :: String -> Opt a b -> Opt a b
> optionWithOptArg str f =
>  popArg `bindOpt` \ arg ->
>  case prefix str arg of
>   Nothing   -> failed
>   Just arg' -> f
>
> string :: String  -> Opt a ()
> string str = 
>  prefixMatch str `bindOpt` \ rest ->
>  case rest of
>    [] -> returnOpt ()
>    _  -> failed
>  

> (-=) :: String -> a -> Opt [a] ()
> (-=) str v = flag str (v:)
>
> (-==) :: String -> (String -> a) -> Opt [a] ()
> (-==) str f = prefixArg str (\ ls -> ((f ls):))
>
> (-===) :: String -> (String -> a) -> Opt [a] ()
> (-===) str f = optionArg str (\ val -> updState ((f val):))
>
> (-====) :: String -> (Maybe String -> a) -> Opt [a] ()
> (-====) str f = 
>  optionWithOptArg 
>    str 
>    (popArg `bindOpt` \ val -> updState ((f (Just val)):))
> 
> (-?) :: (String -> Bool) -> (String -> a) -> Opt [a] ()
> (-?) matcher f = matches matcher (\ ls -> updState ((f ls):))
>   


-- Utils

>
> prefix :: Eq a => [a] -> [a] -> Maybe [a] -- what's left
> prefix [] ls = Just ls
> prefix ls [] = Nothing
> prefix (x:xs) (y:ys)
>  | x == y    = prefix xs ys
>  | otherwise = Nothing
>
>
> split :: Char -> String -> [String]
> split ch [] = []
> split ch ls = 
>  case break (==ch) ls of
>    (xs,[])   -> [xs]
>    (xs,_:ys) -> xs:split ch ys
>
