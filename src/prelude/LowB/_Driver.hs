module _Driver where

import NHC.Internal (IO(..),World(..))
import System
import Main

_toplevel = World

_driver w =
  case (main >> exitWith ExitSuccess) of 
    IO wf ->
      case wf _toplevel of
	Left err -> error  (show (err :: IOError))
	Right _  -> error "Default exit never done!"

