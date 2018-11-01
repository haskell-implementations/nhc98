module Prelude(Show(..)) where

import DIOError
import IO
import NHC.DErrNo
import StrError

instance  Show IOError  where
	showsPrec p (IOError cmd mbfilename mbhandle errno) =
		showString "I/O error:\n  action :  " .
		showString cmd .
		(case mbfilename of
		    Just fn -> showString "\n  on file:  " . showString fn
		    Nothing ->
		        (case mbhandle of
		            Nothing -> id
		            Just handle ->
		                (case hGetFileName handle of
		                    Nothing -> id
		                    Just fn ->
					showString "\n  on file:  " .
					showString fn))) .
		showString "\n  gave   :  " .
		shows errno . showString " (" .
		showString (strError errno) .
		showString ")"
	showsPrec p (EOFError op handle) =
		showString "End of file detected in " .
		showString op . showString " on " .
		(case hGetFileName handle of
			    Nothing -> showString "un-named handle"
			    Just fn -> showString fn) . showChar '.'
	showsPrec p (PatternError "") =
		showString "Pattern match failure in do statement"
	showsPrec p (PatternError str) =
		showString "Pattern match failure in do statement (" .
		showString str . showString ")"
	showsPrec p (UserError "" str) =
		showString "I/O error (user-defined):\n  "  . showString str
	showsPrec p (UserError loc str) =
		showString "I/O error (user-defined), " . showString loc .
		showString ":\n  " . showString str

	showsType a = showString "IOError"

