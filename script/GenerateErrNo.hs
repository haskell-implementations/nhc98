
main = do
  putStr cprogHeader
  mapM_ (putStr . cppify) possibleErrNos
  putStr cprogFooter

cprogHeader =
  "#include <errno.h>\n" ++
  "main() {\n" ++
  "  int i, j=0, max=0, noncontig=0, dup=0;\n" ++
  "  char *errs[2000];\n" ++
  "  char *dups[20];\n" ++
  "  int   dupi[20];\n" ++
  "  char  sep;\n" ++
  "  for (i=0; i<2000; i++) {\n" ++
  "    errs[i]=(char*)0;\n" ++
  "  }\n" ++
  "  for (i=0; i<20; i++) {\n" ++
  "    dups[i]=(char*)0;\n" ++
  "    dupi[i]=0;\n" ++
  "  }\n"

cppify symbol =
  "#ifdef "++symbol++"\n" ++
  "  if (errs["++symbol++"]) {\n" ++
  "    dups[dup]=\""++symbol++"\"; dupi[dup]="++symbol++"; dup++;\n" ++
  "  } else\n" ++
  "    errs["++symbol++"] = \""++symbol++"\";\n" ++
  "  if ("++symbol++">max) max="++symbol++";\n" ++
  "#endif\n"

cprogFooter =
  "  printf(\"module NHC.DErrNo where\\n\\n\");\n" ++
  "  printf(\"{- Automatically generated from /usr/include/errno.h -}\\n\\n\");\n" ++
  "  printf(\"data ErrNo =\\n\");\n" ++
  "  printf(\"    Edummy\\n\");\n" ++
  "  for (i=1; i<=max; i++) {\n" ++
  "    if (errs[i]) {\n" ++
  "      printf(\"  | %s\\n\",errs[i]);\n" ++
  "    } else if (j<dup) {\n" ++
  "      errs[i] = dups[j++];\n" ++
  "      printf(\"  | %s\\n\",errs[i]);\n" ++
  "    } else { noncontig=1; }\n" ++
  "  }\n" ++
  "  for (;j<dup;j++) {\n" ++
  "      errs[++max] = dups[j];\n" ++
  "      printf(\"  | %s\\n\",errs[max]);\n" ++
  "  }\n" ++
  "  if (1/*noncontig*/) {\n" ++
  "    printf(\"  deriving (Eq,Show)\\n\\n\");\n" ++
  "    printf(\"instance Enum ErrNo where\\n\");\n" ++
  "    for (i=1; i<=max; i++) {\n" ++
  "      if (errs[i])\n" ++
  "        printf(\"  toEnum %d = %s\\n\",i,errs[i]);\n" ++
  "    }\n" ++
  "    printf(\"  toEnum _ = Edummy\\n\");\n" ++
  "    for (i=1; i<=max; i++) {\n" ++
  "      if (errs[i])\n" ++
  "        printf(\"  fromEnum %s = %d\\n\",errs[i],i);\n" ++
  "    }\n" ++
  "    printf(\"\\n\");\n" ++
  "  } else printf(\"  deriving (Eq,Enum,Show)\\n\\n\");\n" ++
  "  printf(\"eqErrNo :: ErrNo -> ErrNo -> Bool\\n\");\n" ++
  "  for (j=0;j<dup;j++) {\n" ++
  "    printf(\"eqErrNo %s %s = True\\n\",dups[j],errs[dupi[j]]);\n" ++
  "    printf(\"eqErrNo %s %s = True\\n\",errs[dupi[j]],dups[j]);\n" ++
  "  }\n" ++
  "  printf(\"eqErrNo a b = a==b\\n\\n\");\n" ++
  ioErrors "alreadyexists" ["EEXIST", "EISDIR"] ++
  ioErrors "doesnotexist"  ["ENOENT", "ESRCH", "ENXIO", "ENODEV"] ++
  ioErrors "alreadyinuse"  ["EBUSY",  "ETXTBSY"] ++
  ioErrors "full"          ["ENOSPC", "EDQUOT"] ++
  ioErrors "illegalop"     ["EPERM",  "ESPIPE"] ++
  ioErrors "nopermission"  ["EPERM",  "EACCES", "EROFS"] ++
  "  printf(\"\\n\\n\");\n" ++
  "  exit(0);\n" ++
  "}\n"

ioErrors name symbols =
  "  sep = ' ';\n" ++
  "  printf(\""++name++" = [\");\n" ++
  concatMap (\symbol->
      "#ifdef "++symbol++"\n" ++
      "  printf(\"%c "++symbol++"\",sep);\n" ++
      "  sep = ',';\n" ++
      "#endif\n") symbols ++
  "  printf(\" ]\\n\");\n"

possibleErrNos =
-- beginning of linux symbols
  [ "EPERM"
  , "ENOENT"
  , "ESRCH"
  , "EINTR"
  , "EIO"
  , "ENXIO"
  , "E2BIG"
  , "ENOEXEC"
  , "EBADF"
  , "ECHILD"
  , "EAGAIN"
  , "ENOMEM"
  , "EACCES"
  , "EFAULT"
  , "ENOTBLK"
  , "EBUSY"
  , "EEXIST"
  , "EXDEV"
  , "ENODEV"
  , "ENOTDIR"
  , "EISDIR"
  , "EINVAL"
  , "ENFILE"
  , "EMFILE"
  , "ENOTTY"
  , "ETXTBSY"
  , "EFBIG"
  , "ENOSPC"
  , "ESPIPE"
  , "EROFS"
  , "EMLINK"
  , "EPIPE"
  , "EDOM"
  , "ERANGE"
  , "EDEADLK"
  , "ENAMETOOLONG"
  , "ENOLCK"
  , "ENOSYS"
  , "ENOTEMPTY"
  , "ELOOP"
  , "EWOULDBLOCK"
  , "ENOMSG"
  , "EIDRM"
  , "ECHRNG"
  , "EL2NSYNC"
  , "EL3HLT"
  , "EL3RST"
  , "ELNRNG"
  , "EUNATCH"
  , "ENOCSI"
  , "EL2HLT"
  , "EBADE"
  , "EBADR"
  , "EXFULL"
  , "ENOANO"
  , "EBADRQC"
  , "EBADSLT"
  , "EDEADLOCK"
  , "EBFONT"
  , "ENOSTR"
  , "ENODATA"
  , "ETIME"
  , "ENOSR"
  , "ENONET"
  , "ENOPKG"
  , "EREMOTE"
  , "ENOLINK"
  , "EADV"
  , "ESRMNT"
  , "ECOMM"
  , "EPROTO"
  , "EMULTIHOP"
  , "EDOTDOT"
  , "EBADMSG"
  , "EOVERFLOW"
  , "ENOTUNIQ"
  , "EBADFD"
  , "EREMCHG"
  , "ELIBACC"
  , "ELIBBAD"
  , "ELIBSCN"
  , "ELIBMAX"
  , "ELIBEXEC"
  , "EILSEQ"
  , "ERESTART"
  , "ESTRPIPE"
  , "EUSERS"
  , "ENOTSOCK"
  , "EDESTADDRREQ"
  , "EMSGSIZE"
  , "EPROTOTYPE"
  , "ENOPROTOOPT"
  , "EPROTONOSUPPORT"
  , "ESOCKTNOSUPPORT"
  , "EOPNOTSUPP"
  , "EPFNOSUPPORT"
  , "EAFNOSUPPORT"
  , "EADDRINUSE"
  , "EADDRNOTAVAIL"
  , "ENETDOWN"
  , "ENETUNREACH"
  , "ENETRESET"
  , "ECONNABORTED"
  , "ECONNRESET"
  , "ENOBUFS"
  , "EISCONN"
  , "ENOTCONN"
  , "ESHUTDOWN"
  , "ETOOMANYREFS"
  , "ETIMEDOUT"
  , "ECONNREFUSED"
  , "EHOSTDOWN"
  , "EHOSTUNREACH"
  , "EALREADY"
  , "EINPROGRESS"
  , "ESTALE"
  , "EUCLEAN"
  , "ENOTNAM"
  , "ENAVAIL"
  , "EISNAM"
  , "EREMOTEIO"
  , "EDQUOT"
  , "ENOMEDIUM"
  , "EMEDIATYPE"
-- end of linux symbols
-- beginning of SGI symbols
  , "EIORESID"
  , "EINIT"
  , "EREMDEV"
  , "ECANCELED"
  , "ENFSREMOTE"
  , "ETCP_EBASE"
  , "ETCP_ELIMIT"
  , "ENAMI_EBASE"
  , "ENAMI_ELIMIT"
  , "ENFS_EBASE"
  , "ENFS_ELIMIT"
  , "ELASTERRNO"
  , "ECKPT"
  , "ENOLIMFILE"
  , "EDISJOINT"
  , "ENOLOGIN"
  , "ELOGINLIM"
  , "EGROUPLOOP"
  , "ENOATTACH"
  , "ENOATTR"
  , "EFSCORRUPTED"
  , "EDIRCORRUPTED"
  , "EWRONGFS"
  , "ECONTROLLER"
  , "ENOTCONTROLLER"
  , "EENQUEUED"
  , "ENOTENQUEUED"
  , "EJOINED"
  , "ENOTJOINED"
  , "ENOPROC"
  , "EMUSTRUN"
  , "ENOTSTOPPED"
  , "ECLOCKCPU"
  , "EINVALSTATE"
  , "ENOEXIST"
  , "EENDOFMINOR"
  , "EBUFSIZE"
  , "EEMPTY"
  , "ENOINTRGROUP"
  , "EINVALMODE"
  , "ECANTEXTENT"
  , "EINVALTIME"
  , "EDESTROYED"
  , "EBDHDL"
  , "EDELAY"
  , "ENOBWD"
  , "EBADRSPEC"
  , "EBADTSPEC"
  , "EBADFILT"
  , "EMIGRATED"
  , "EMIGRATING"
  , "ECELLDOWN"
-- end of SGI symbols
-- beginning of Sun symbols
  , "ENOTSUP"
  , "EPROCLIM"
  , "ERREMOTE"
-- end of Sun symbols
-- beginning of HP symbols
  , "ENOSYM"
  , "EREFUSED"
  , "EREMOTERELEASE"
-- end of HP symbols
  ]
