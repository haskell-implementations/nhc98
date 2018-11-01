%
% Copyright (C) 1997 Thomas Nordin and Alastair Reid
%

\begin{code}

module NameSupply
	( NameSupply	
        , NSM		
        , getNewName	
        , getNewNames	
        , initNS		
	, nameSupply	
	) where

import Name( Name )

#if !defined(__HASKELL98__)
#define fmap map
#endif

\end{code}

%************************************************************************
%*									*
\subsection{Monadic plumbing for Name Supply}
%*									*
%************************************************************************

\begin{code}

type NameSupply = [Name]

newtype NSM a = NSM (NameSupply -> (a, NameSupply))

instance Functor NSM where
  fmap f (NSM g) = NSM (\ns -> let (a, ns') = g ns 
                               in  (f a, ns'))

instance Monad NSM where
  (NSM f) >>= g	= 
    NSM (\ns -> let (result1, ns1)	= f ns
                    (NSM h)		= g result1 
                in h ns1)
  return a	= NSM (\ns -> (a, ns))

getNewNames :: Int -> NSM [Name]
getNewNames i = NSM (\ns -> splitAt i ns)

getNewName :: NSM Name
getNewName = NSM (\ns -> (head ns, tail ns))

initNS :: NSM a -> NameSupply -> (a, NameSupply)
initNS (NSM f) ns = f ns

-- A good source of names, functions depend on this particular
-- implementations so don't change unless you know what you are doing.

nameSupply :: Name -> NameSupply
nameSupply foo = [foo ++ show n | n <- [1..]]

\end{code}



