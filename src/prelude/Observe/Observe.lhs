This module produces an XML based observation log of Haskell objects,
including base types, constructors and functions.

It is part of the HOOD (Haskell Object Observation Debugger)
toolchain. The toolchain also includes an observation XML 
viewer, written in Java.

WARNING: unrestricted use of unsafePerformIO below.

TODO: 
 o The overloading of observe over functions has a strange
   behaviour for PAP's, look into this and fix.
 o Add capture of ^C, etc.
 o Use QuickCheck to test that observe "label" x = x

\begin{code}
module NHC.Observe 
	( observe	 -- observe :: (Observable a) => String -> a -> a
	, observe_	 -- observe_ :: (Observable a) => Int -> String -> a -> a
	, Observing(..)	 -- a -> a
	, Observable(..) -- Class
	, runO		 -- IO a -> IO a
	, printO	 -- a -> IO ()
	, putStrO	 -- String -> IO ()

	-- advanced users, that want to render their own datatypes.
	, thunk		 -- (Observable a) => a -> MonadObserver a
	, sendObservePacket
	) where	

import IO
import Maybe
import Monad
import Array
import qualified Array
import System
import NHC.IOExtras
\end{code}


\begin{code}
infixl 9 <$<
\end{code}

Our principle function and class

\begin{code}
{-# NOINLINE observe #-}
{- We do not call observe_, because observe generated
 - its own enter node (in XML, observe has an implicit entry aspect).
 -}

observe :: (Observable a) => String -> a -> a
observe name a = generateContext name maxBound a 

observe_ :: (Observable a) => Int -> String -> a -> a
observe_ depth name a = generateContext name depth a 

{- This gets called before observer, allowing us to mark
 - we are entering a, before we do case analysis on
 - our object.
 -}

{-# NOINLINE observer_ #-}
observer_ :: (Observable a) => a -> ObserveContext -> a 
observer_ a context = sendEnterPacket a context

class Observable a where
	{-
	 - This reveals the name of a specific constructor.
	 - and gets ready to explain the sub-components.
         -
         - We put the context second so we can do eta-reduction
	 - with some of our definitions.
	 -}
	observer :: a -> ObserveContext -> a 

type Observing a = a -> a
\end{code}

\begin{code}
-- The Haskell Base types
instance Observable Int 	where { observer = observeLit }
instance Observable Bool 	where { observer = observeLit }
instance Observable Integer 	where { observer = observeLit }
instance Observable Float 	where { observer = observeLit }
instance Observable Double	where { observer = observeLit }
instance Observable Char 	where { observer = observeLit }
instance Observable ()		where { observer = observeLit }

-- utility
observeLit :: (Show a) => a -> ObserveContext -> a
observeLit lit cxt =
	seq lit $
	sendObservePacket (show lit) (return lit) cxt
\end{code}

\begin{code}
instance (Observable a,Observable b) => Observable (a,b) where
	observer (a,b) = sendObservePacket "," 
		(return (,) <$< thunk a <$< thunk b)

instance (Observable a,Observable b,Observable c) => Observable (a,b,c) where
	observer (a,b,c) = sendObservePacket "," (do
		a <- thunk a
		b <- thunk b
		c <- thunk c
		return (a,b,c))

instance (Observable a,Observable b,Observable c,Observable d) => Observable (a,b,c,d) where
	observer (a,b,c,d) = sendObservePacket "," (do
		a <- thunk a
		b <- thunk b
		c <- thunk c
		d <- thunk d
		return (a,b,c,d))

instance (Observable a,Observable b,Observable c,Observable d,Observable e) 
		=> Observable (a,b,c,d,e) where
	observer (a,b,c,d,e) = sendObservePacket "," (do
		a <- thunk a
		b <- thunk b
		c <- thunk c
		d <- thunk d
		e <- thunk e
		return (a,b,c,d,e))

instance (Observable a) => Observable [a] where
	observer (a:as) = sendObservePacket ":" (do
		a <- thunk a
		as <- thunk as
		return (a:as))
	observer [] = sendObservePacket "[]" (return [])

instance (Observable a) => Observable (Maybe a) where
	observer (Just a) = sendObservePacket "Just" (do
		a <- thunk a
		return (Just a))
	observer Nothing = sendObservePacket "Nothing" (return Nothing)

instance (Ix a,Observable a,Observable b) => Observable (Array.Array a b) where
	observer arr = sendObservePacket "array" (
		do ul <- thunk (Array.bounds arr)
		   pr <- thunk (Array.assocs arr)
		   return (Array.array ul pr))

--observerM :: (Observe a,Monad m) => m a -> 
observerM fn cxt = 
		do res <- fn
		   sendObservePacket "<return>" (
			do res' <- thunk res
			   return (return res')) cxt

instance (Observable a) => Observable (IO a) where
	observer fn cxt = 
		do res <- fn
		   sendObservePacket "<IO>" (
			do res' <- thunk res
			   return (return res')) cxt

instance (Observable a,Observable b) => Observable (a -> b) where
	observer fn cxt arg = sendObserveFnPacket (do
		arg <- thunk arg
		fn <- thunk (fn arg)
		return fn) cxt
\end{code}




\begin{code}
data ObserveContext = ObserveContext
	{ observeParent :: !Int	-- my parent
	, observePort   :: !Int	-- my branch number
	, observeDepth  :: !Int -- how much deeper will we go?
	}
\end{code}

The Global Context

\begin{code}
data ObserveGlobal 
   = ObserveGlobal
	{ observeUniq   :: !Int
	, observeHandle :: !Handle
	}
   | NoObserveGlobal

openObserveGlobal :: IO ()
openObserveGlobal =
     do { txt <- getEnv "OBSERVELOG" `catch` (\ _ -> return "observe.xml")
	; putStrLn ("txt = " ++ txt)
	; handle <- openFile txt WriteMode
	; hPutStrLn handle "<?xml version=\"1.0\"?>"
	; hPutStrLn handle "<observations hoodversion=\"0.1\">"
	; writeIORef observeGlobal
		(ObserveGlobal 
			{ observeUniq   = 1
			, observeHandle = handle
			})
	}

closeObserveGlobal :: IO ()
closeObserveGlobal =
     do { g <- readIORef observeGlobal
	; let handle = observeHandle g
	; try (do { hPutStrLn handle "</observations>"
		  ; hClose handle
		  }
	      )
	; writeIORef observeGlobal NoObserveGlobal
	; return ()
	}

{-# NOINLINE observeGlobal #-}
observeGlobal :: IORef ObserveGlobal
observeGlobal = unsafePerformIO $ newIORef NoObserveGlobal
\end{code}

Observer monad
 - a simple state monad, for placing numbers on sub-observations

\begin{code}
data MonadObserver a = MonadObserver { runMO :: Int -> Int -> Int -> (a,Int) }

(<$<) :: MonadObserver (a -> b) -> MonadObserver a -> MonadObserver b
(<$<) = ap

instance Monad MonadObserver where
	return a = MonadObserver (\ d c i -> (a,i))
	fn >>= k = MonadObserver (\ d c i ->
		case runMO fn d c i of
		  (r,i2) -> runMO (k r) d c i2
		)

thunk :: (Observable a) => a -> MonadObserver a
thunk a = MonadObserver $ \ depth parent port ->
		( observer_ a (ObserveContext
				{ observeParent = parent
				, observePort   = port
				, observeDepth  = depth
				}) 
		, port+1 )
\end{code}

The functions that output the data. Both are dirty.

\begin{code}
generateContext :: (Observable a) => String -> Int -> a -> a
generateContext label depth orig
  = unsafePerformIO $
     do	{ g <- readIORef observeGlobal
	; case g of
	   NoObserveGlobal 
	     -> return orig
	   _ -> do { let node = observeUniq g
		   ; writeIORef observeGlobal (g { observeUniq = node + 1 })
		   ; hPutStrLn (observeHandle g) (xmlObserve node 
						    (showXmlString label))
		   ; return (observer orig (ObserveContext
				{ observeParent = node
				, observePort   = 0
				, observeDepth  = depth
				}))
		   }
	}

sendObservePacket :: String -> MonadObserver a -> ObserveContext -> a
sendObservePacket consLabel fn context = unsafePerformIO $ 
     do	{ g <- readIORef observeGlobal
	; case g of
	   NoObserveGlobal
	     -> error "The global observe state is not enabled"
	   _ -> return ()
	; let node = observeUniq g
	; writeIORef observeGlobal (g { observeUniq = node + 1 })
	; let (r,portCount) = runMO fn (observeDepth context - 1) node 0
	; hPutStrLn (observeHandle g)
		    (xmlCons node context (showXmlString consLabel) portCount)
	; return r
	}

sendEnterPacket :: (Observable a) => a -> ObserveContext -> a
sendEnterPacket r context = unsafePerformIO $ 
     do	{ g <- readIORef observeGlobal
	; case g of
	   NoObserveGlobal
	     -> error "The global observe state is not enabled"
	   _ -> return ()
	; let node = observeUniq g
	; writeIORef observeGlobal (g { observeUniq = node + 1 })
	; hPutStrLn (observeHandle g)
		    (xmlEnter node context)
	; ourCatchAll (observer r) context
	}

sendObserveFnPacket :: MonadObserver a -> ObserveContext -> a
sendObserveFnPacket fn context = unsafePerformIO $ 
     do	{ g <- readIORef observeGlobal
	; case g of
	   NoObserveGlobal
	     -> error "The global observe state is not enabled"
	   _ -> return ()
	; let node = observeUniq g
	; writeIORef observeGlobal (g { observeUniq = node + 1 })
	; let (r,portCount) = runMO fn (observeDepth context - 1) node 0
	; hPutStrLn (observeHandle g)
		    (xmlFun node context)
	; return r
	}
\end{code}


\begin{code}
ourCatchAll fn context = return (fn context)
\end{code}


Trival XML output functions

\begin{code}
mkXmlNode :: String -> [(String,String)] -> String
mkXmlNode tag attrs =
	"<" ++ tag ++ " " ++ showAttrs attrs ++ "/>"
     where
	showAttrs [] = ""
	showAttrs attrs = unwords [ attr ++ "=\"" ++ value ++ "\""
			          | (attr,value) <- attrs ]

showXmlString = concatMap fixChar
	   where
	      fixChar '<' = "&lt;"
	      fixChar '>' = "&gt;"
	      fixChar '&' = "&amp;"
	      fixChar '"' = "&quot;"
	      fixChar '\'' = "&apos;"
	      fixChar c   = [c]               

xmlObserve :: Int -> String -> String
xmlObserve node label = 
	mkXmlNode "observe" 
		[("node",show node)
		,("text",label)
		]
	

xmlCons :: Int -> ObserveContext -> String -> Int -> String
xmlCons node context consLabel portCount =
	mkXmlNode "cons" 
		[ ("node",show node)
		, ("pnode",show (observeParent context))
		, ("pport",show (observePort   context))
		, ("ports",show portCount)
		, ("cons",consLabel)
		]

xmlEnter :: Int -> ObserveContext -> String
xmlEnter node context =
	mkXmlNode "enter" 
		[ ("node",show node)
		, ("pnode",show (observeParent context))
		, ("pport",show (observePort   context))
		]

xmlFun :: Int -> ObserveContext -> String
xmlFun node context =
	mkXmlNode "fun"
		[ ("node",show node)
		, ("pnode",show (observeParent context))
		, ("pport",show (observePort   context))
		-- always have two ports: 0 and 1
		]
\end{code}


Run the observe ridden code


\begin{code}
runO :: IO a -> IO ()
runO program = 
     do { openObserveGlobal
	; program >> return ()
	; closeObserveGlobal
	; return ()
	}
\end{code}


\begin{code}
printO :: (Show a) => a -> IO ()
printO expr = runO (print expr)

putStrO :: String -> IO ()
putStrO expr = runO (putStr expr)
\end{code}
