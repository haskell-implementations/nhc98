module NHC.DErrNo where

{- Automatically generated from /usr/include/errno.h -}
{- Then stripped by hand to a core common to most machines. -}

data ErrNo =
    Edummy
  | EPERM
  | ENOENT
  | ESRCH
  | EINTR
  | EIO
  | ENXIO
  | E2BIG
  | ENOEXEC
  | EBADF
  | ECHILD
  | EAGAIN
  | ENOMEM
  | EACCES
  | EFAULT
  | ENOTBLK
  | EBUSY
  | EEXIST
  | EXDEV
  | ENODEV
  | ENOTDIR
  | EISDIR
  | EINVAL
  | ENFILE
  | EMFILE
  | ENOTTY
  | ETXTBSY
  | EFBIG
  | ENOSPC
  | ESPIPE
  | EROFS
  | EMLINK
  | EPIPE
  | EDOM
  | ERANGE
  deriving (Eq,Enum,Show)

eqErrNo :: ErrNo -> ErrNo -> Bool
eqErrNo a b = a==b

alreadyexists = [  EEXIST ]
doesnotexist  = [  ENOENT ]
alreadyinuse  = [  EBUSY  ]
full          = [  ENOSPC ]
illegalop     = [  EPERM  ]
nopermission  = [  EACCES ]

