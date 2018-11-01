module IO where

import DIOError
import NHC.DErrNo

isAlreadyExistsError  :: IOError -> Bool
isAlreadyExistsError (IOError _ _ _ errno) = errno `elem` alreadyexists

isDoesNotExistError   :: IOError -> Bool
isDoesNotExistError (IOError _ _ _ errno)  = errno `elem` doesnotexist

isAlreadyInUseError   :: IOError -> Bool
isAlreadyInUseError (IOError _ _ _ errno)  = errno `elem` alreadyinuse

isFullError           :: IOError -> Bool
isFullError         (IOError _ _ _ errno)  = errno `elem` full

isIllegalOperation    :: IOError -> Bool
isIllegalOperation  (IOError _ _ _ errno)  = errno `elem` illegalop

isPermissionError     :: IOError -> Bool
isPermissionError  (IOError _ _ _ errno)   = errno `elem` nopermission

