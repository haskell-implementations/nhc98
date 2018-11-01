#include <stdlib.h>
#include <stdio.h>
#include <errno.h>
main() {
  int i, j=0, max=0, noncontig=0, dup=0;
  char *errs[2000];
  char *dups[20];
  int   dupi[20];
  char  sep;
  for (i=0; i<2000; i++) {
    errs[i]=(char*)0;
  }
  for (i=0; i<20; i++) {
    dups[i]=(char*)0;
    dupi[i]=0;
  }
#ifdef EPERM
  if (errs[EPERM]) {
    dups[dup]="EPERM"; dupi[dup]=EPERM; dup++;
  } else
    errs[EPERM] = "EPERM";
  if (EPERM>max) max=EPERM;
#endif
#ifdef ENOENT
  if (errs[ENOENT]) {
    dups[dup]="ENOENT"; dupi[dup]=ENOENT; dup++;
  } else
    errs[ENOENT] = "ENOENT";
  if (ENOENT>max) max=ENOENT;
#endif
#ifdef ESRCH
  if (errs[ESRCH]) {
    dups[dup]="ESRCH"; dupi[dup]=ESRCH; dup++;
  } else
    errs[ESRCH] = "ESRCH";
  if (ESRCH>max) max=ESRCH;
#endif
#ifdef EINTR
  if (errs[EINTR]) {
    dups[dup]="EINTR"; dupi[dup]=EINTR; dup++;
  } else
    errs[EINTR] = "EINTR";
  if (EINTR>max) max=EINTR;
#endif
#ifdef EIO
  if (errs[EIO]) {
    dups[dup]="EIO"; dupi[dup]=EIO; dup++;
  } else
    errs[EIO] = "EIO";
  if (EIO>max) max=EIO;
#endif
#ifdef ENXIO
  if (errs[ENXIO]) {
    dups[dup]="ENXIO"; dupi[dup]=ENXIO; dup++;
  } else
    errs[ENXIO] = "ENXIO";
  if (ENXIO>max) max=ENXIO;
#endif
#ifdef E2BIG
  if (errs[E2BIG]) {
    dups[dup]="E2BIG"; dupi[dup]=E2BIG; dup++;
  } else
    errs[E2BIG] = "E2BIG";
  if (E2BIG>max) max=E2BIG;
#endif
#ifdef ENOEXEC
  if (errs[ENOEXEC]) {
    dups[dup]="ENOEXEC"; dupi[dup]=ENOEXEC; dup++;
  } else
    errs[ENOEXEC] = "ENOEXEC";
  if (ENOEXEC>max) max=ENOEXEC;
#endif
#ifdef EBADF
  if (errs[EBADF]) {
    dups[dup]="EBADF"; dupi[dup]=EBADF; dup++;
  } else
    errs[EBADF] = "EBADF";
  if (EBADF>max) max=EBADF;
#endif
#ifdef ECHILD
  if (errs[ECHILD]) {
    dups[dup]="ECHILD"; dupi[dup]=ECHILD; dup++;
  } else
    errs[ECHILD] = "ECHILD";
  if (ECHILD>max) max=ECHILD;
#endif
#ifdef EAGAIN
  if (errs[EAGAIN]) {
    dups[dup]="EAGAIN"; dupi[dup]=EAGAIN; dup++;
  } else
    errs[EAGAIN] = "EAGAIN";
  if (EAGAIN>max) max=EAGAIN;
#endif
#ifdef ENOMEM
  if (errs[ENOMEM]) {
    dups[dup]="ENOMEM"; dupi[dup]=ENOMEM; dup++;
  } else
    errs[ENOMEM] = "ENOMEM";
  if (ENOMEM>max) max=ENOMEM;
#endif
#ifdef EACCES
  if (errs[EACCES]) {
    dups[dup]="EACCES"; dupi[dup]=EACCES; dup++;
  } else
    errs[EACCES] = "EACCES";
  if (EACCES>max) max=EACCES;
#endif
#ifdef EFAULT
  if (errs[EFAULT]) {
    dups[dup]="EFAULT"; dupi[dup]=EFAULT; dup++;
  } else
    errs[EFAULT] = "EFAULT";
  if (EFAULT>max) max=EFAULT;
#endif
#ifdef ENOTBLK
  if (errs[ENOTBLK]) {
    dups[dup]="ENOTBLK"; dupi[dup]=ENOTBLK; dup++;
  } else
    errs[ENOTBLK] = "ENOTBLK";
  if (ENOTBLK>max) max=ENOTBLK;
#endif
#ifdef EBUSY
  if (errs[EBUSY]) {
    dups[dup]="EBUSY"; dupi[dup]=EBUSY; dup++;
  } else
    errs[EBUSY] = "EBUSY";
  if (EBUSY>max) max=EBUSY;
#endif
#ifdef EEXIST
  if (errs[EEXIST]) {
    dups[dup]="EEXIST"; dupi[dup]=EEXIST; dup++;
  } else
    errs[EEXIST] = "EEXIST";
  if (EEXIST>max) max=EEXIST;
#endif
#ifdef EXDEV
  if (errs[EXDEV]) {
    dups[dup]="EXDEV"; dupi[dup]=EXDEV; dup++;
  } else
    errs[EXDEV] = "EXDEV";
  if (EXDEV>max) max=EXDEV;
#endif
#ifdef ENODEV
  if (errs[ENODEV]) {
    dups[dup]="ENODEV"; dupi[dup]=ENODEV; dup++;
  } else
    errs[ENODEV] = "ENODEV";
  if (ENODEV>max) max=ENODEV;
#endif
#ifdef ENOTDIR
  if (errs[ENOTDIR]) {
    dups[dup]="ENOTDIR"; dupi[dup]=ENOTDIR; dup++;
  } else
    errs[ENOTDIR] = "ENOTDIR";
  if (ENOTDIR>max) max=ENOTDIR;
#endif
#ifdef EISDIR
  if (errs[EISDIR]) {
    dups[dup]="EISDIR"; dupi[dup]=EISDIR; dup++;
  } else
    errs[EISDIR] = "EISDIR";
  if (EISDIR>max) max=EISDIR;
#endif
#ifdef EINVAL
  if (errs[EINVAL]) {
    dups[dup]="EINVAL"; dupi[dup]=EINVAL; dup++;
  } else
    errs[EINVAL] = "EINVAL";
  if (EINVAL>max) max=EINVAL;
#endif
#ifdef ENFILE
  if (errs[ENFILE]) {
    dups[dup]="ENFILE"; dupi[dup]=ENFILE; dup++;
  } else
    errs[ENFILE] = "ENFILE";
  if (ENFILE>max) max=ENFILE;
#endif
#ifdef EMFILE
  if (errs[EMFILE]) {
    dups[dup]="EMFILE"; dupi[dup]=EMFILE; dup++;
  } else
    errs[EMFILE] = "EMFILE";
  if (EMFILE>max) max=EMFILE;
#endif
#ifdef ENOTTY
  if (errs[ENOTTY]) {
    dups[dup]="ENOTTY"; dupi[dup]=ENOTTY; dup++;
  } else
    errs[ENOTTY] = "ENOTTY";
  if (ENOTTY>max) max=ENOTTY;
#endif
#ifdef ETXTBSY
  if (errs[ETXTBSY]) {
    dups[dup]="ETXTBSY"; dupi[dup]=ETXTBSY; dup++;
  } else
    errs[ETXTBSY] = "ETXTBSY";
  if (ETXTBSY>max) max=ETXTBSY;
#endif
#ifdef EFBIG
  if (errs[EFBIG]) {
    dups[dup]="EFBIG"; dupi[dup]=EFBIG; dup++;
  } else
    errs[EFBIG] = "EFBIG";
  if (EFBIG>max) max=EFBIG;
#endif
#ifdef ENOSPC
  if (errs[ENOSPC]) {
    dups[dup]="ENOSPC"; dupi[dup]=ENOSPC; dup++;
  } else
    errs[ENOSPC] = "ENOSPC";
  if (ENOSPC>max) max=ENOSPC;
#endif
#ifdef ESPIPE
  if (errs[ESPIPE]) {
    dups[dup]="ESPIPE"; dupi[dup]=ESPIPE; dup++;
  } else
    errs[ESPIPE] = "ESPIPE";
  if (ESPIPE>max) max=ESPIPE;
#endif
#ifdef EROFS
  if (errs[EROFS]) {
    dups[dup]="EROFS"; dupi[dup]=EROFS; dup++;
  } else
    errs[EROFS] = "EROFS";
  if (EROFS>max) max=EROFS;
#endif
#ifdef EMLINK
  if (errs[EMLINK]) {
    dups[dup]="EMLINK"; dupi[dup]=EMLINK; dup++;
  } else
    errs[EMLINK] = "EMLINK";
  if (EMLINK>max) max=EMLINK;
#endif
#ifdef EPIPE
  if (errs[EPIPE]) {
    dups[dup]="EPIPE"; dupi[dup]=EPIPE; dup++;
  } else
    errs[EPIPE] = "EPIPE";
  if (EPIPE>max) max=EPIPE;
#endif
#ifdef EDOM
  if (errs[EDOM]) {
    dups[dup]="EDOM"; dupi[dup]=EDOM; dup++;
  } else
    errs[EDOM] = "EDOM";
  if (EDOM>max) max=EDOM;
#endif
#ifdef ERANGE
  if (errs[ERANGE]) {
    dups[dup]="ERANGE"; dupi[dup]=ERANGE; dup++;
  } else
    errs[ERANGE] = "ERANGE";
  if (ERANGE>max) max=ERANGE;
#endif
#ifdef EDEADLK
  if (errs[EDEADLK]) {
    dups[dup]="EDEADLK"; dupi[dup]=EDEADLK; dup++;
  } else
    errs[EDEADLK] = "EDEADLK";
  if (EDEADLK>max) max=EDEADLK;
#endif
#ifdef ENAMETOOLONG
  if (errs[ENAMETOOLONG]) {
    dups[dup]="ENAMETOOLONG"; dupi[dup]=ENAMETOOLONG; dup++;
  } else
    errs[ENAMETOOLONG] = "ENAMETOOLONG";
  if (ENAMETOOLONG>max) max=ENAMETOOLONG;
#endif
#ifdef ENOLCK
  if (errs[ENOLCK]) {
    dups[dup]="ENOLCK"; dupi[dup]=ENOLCK; dup++;
  } else
    errs[ENOLCK] = "ENOLCK";
  if (ENOLCK>max) max=ENOLCK;
#endif
#ifdef ENOSYS
  if (errs[ENOSYS]) {
    dups[dup]="ENOSYS"; dupi[dup]=ENOSYS; dup++;
  } else
    errs[ENOSYS] = "ENOSYS";
  if (ENOSYS>max) max=ENOSYS;
#endif
#ifdef ENOTEMPTY
  if (errs[ENOTEMPTY]) {
    dups[dup]="ENOTEMPTY"; dupi[dup]=ENOTEMPTY; dup++;
  } else
    errs[ENOTEMPTY] = "ENOTEMPTY";
  if (ENOTEMPTY>max) max=ENOTEMPTY;
#endif
#ifdef ELOOP
  if (errs[ELOOP]) {
    dups[dup]="ELOOP"; dupi[dup]=ELOOP; dup++;
  } else
    errs[ELOOP] = "ELOOP";
  if (ELOOP>max) max=ELOOP;
#endif
#ifdef EWOULDBLOCK
  if (errs[EWOULDBLOCK]) {
    dups[dup]="EWOULDBLOCK"; dupi[dup]=EWOULDBLOCK; dup++;
  } else
    errs[EWOULDBLOCK] = "EWOULDBLOCK";
  if (EWOULDBLOCK>max) max=EWOULDBLOCK;
#endif
#ifdef ENOMSG
  if (errs[ENOMSG]) {
    dups[dup]="ENOMSG"; dupi[dup]=ENOMSG; dup++;
  } else
    errs[ENOMSG] = "ENOMSG";
  if (ENOMSG>max) max=ENOMSG;
#endif
#ifdef EIDRM
  if (errs[EIDRM]) {
    dups[dup]="EIDRM"; dupi[dup]=EIDRM; dup++;
  } else
    errs[EIDRM] = "EIDRM";
  if (EIDRM>max) max=EIDRM;
#endif
#ifdef ECHRNG
  if (errs[ECHRNG]) {
    dups[dup]="ECHRNG"; dupi[dup]=ECHRNG; dup++;
  } else
    errs[ECHRNG] = "ECHRNG";
  if (ECHRNG>max) max=ECHRNG;
#endif
#ifdef EL2NSYNC
  if (errs[EL2NSYNC]) {
    dups[dup]="EL2NSYNC"; dupi[dup]=EL2NSYNC; dup++;
  } else
    errs[EL2NSYNC] = "EL2NSYNC";
  if (EL2NSYNC>max) max=EL2NSYNC;
#endif
#ifdef EL3HLT
  if (errs[EL3HLT]) {
    dups[dup]="EL3HLT"; dupi[dup]=EL3HLT; dup++;
  } else
    errs[EL3HLT] = "EL3HLT";
  if (EL3HLT>max) max=EL3HLT;
#endif
#ifdef EL3RST
  if (errs[EL3RST]) {
    dups[dup]="EL3RST"; dupi[dup]=EL3RST; dup++;
  } else
    errs[EL3RST] = "EL3RST";
  if (EL3RST>max) max=EL3RST;
#endif
#ifdef ELNRNG
  if (errs[ELNRNG]) {
    dups[dup]="ELNRNG"; dupi[dup]=ELNRNG; dup++;
  } else
    errs[ELNRNG] = "ELNRNG";
  if (ELNRNG>max) max=ELNRNG;
#endif
#ifdef EUNATCH
  if (errs[EUNATCH]) {
    dups[dup]="EUNATCH"; dupi[dup]=EUNATCH; dup++;
  } else
    errs[EUNATCH] = "EUNATCH";
  if (EUNATCH>max) max=EUNATCH;
#endif
#ifdef ENOCSI
  if (errs[ENOCSI]) {
    dups[dup]="ENOCSI"; dupi[dup]=ENOCSI; dup++;
  } else
    errs[ENOCSI] = "ENOCSI";
  if (ENOCSI>max) max=ENOCSI;
#endif
#ifdef EL2HLT
  if (errs[EL2HLT]) {
    dups[dup]="EL2HLT"; dupi[dup]=EL2HLT; dup++;
  } else
    errs[EL2HLT] = "EL2HLT";
  if (EL2HLT>max) max=EL2HLT;
#endif
#ifdef EBADE
  if (errs[EBADE]) {
    dups[dup]="EBADE"; dupi[dup]=EBADE; dup++;
  } else
    errs[EBADE] = "EBADE";
  if (EBADE>max) max=EBADE;
#endif
#ifdef EBADR
  if (errs[EBADR]) {
    dups[dup]="EBADR"; dupi[dup]=EBADR; dup++;
  } else
    errs[EBADR] = "EBADR";
  if (EBADR>max) max=EBADR;
#endif
#ifdef EXFULL
  if (errs[EXFULL]) {
    dups[dup]="EXFULL"; dupi[dup]=EXFULL; dup++;
  } else
    errs[EXFULL] = "EXFULL";
  if (EXFULL>max) max=EXFULL;
#endif
#ifdef ENOANO
  if (errs[ENOANO]) {
    dups[dup]="ENOANO"; dupi[dup]=ENOANO; dup++;
  } else
    errs[ENOANO] = "ENOANO";
  if (ENOANO>max) max=ENOANO;
#endif
#ifdef EBADRQC
  if (errs[EBADRQC]) {
    dups[dup]="EBADRQC"; dupi[dup]=EBADRQC; dup++;
  } else
    errs[EBADRQC] = "EBADRQC";
  if (EBADRQC>max) max=EBADRQC;
#endif
#ifdef EBADSLT
  if (errs[EBADSLT]) {
    dups[dup]="EBADSLT"; dupi[dup]=EBADSLT; dup++;
  } else
    errs[EBADSLT] = "EBADSLT";
  if (EBADSLT>max) max=EBADSLT;
#endif
#ifdef EDEADLOCK
  if (errs[EDEADLOCK]) {
    dups[dup]="EDEADLOCK"; dupi[dup]=EDEADLOCK; dup++;
  } else
    errs[EDEADLOCK] = "EDEADLOCK";
  if (EDEADLOCK>max) max=EDEADLOCK;
#endif
#ifdef EBFONT
  if (errs[EBFONT]) {
    dups[dup]="EBFONT"; dupi[dup]=EBFONT; dup++;
  } else
    errs[EBFONT] = "EBFONT";
  if (EBFONT>max) max=EBFONT;
#endif
#ifdef ENOSTR
  if (errs[ENOSTR]) {
    dups[dup]="ENOSTR"; dupi[dup]=ENOSTR; dup++;
  } else
    errs[ENOSTR] = "ENOSTR";
  if (ENOSTR>max) max=ENOSTR;
#endif
#ifdef ENODATA
  if (errs[ENODATA]) {
    dups[dup]="ENODATA"; dupi[dup]=ENODATA; dup++;
  } else
    errs[ENODATA] = "ENODATA";
  if (ENODATA>max) max=ENODATA;
#endif
#ifdef ETIME
  if (errs[ETIME]) {
    dups[dup]="ETIME"; dupi[dup]=ETIME; dup++;
  } else
    errs[ETIME] = "ETIME";
  if (ETIME>max) max=ETIME;
#endif
#ifdef ENOSR
  if (errs[ENOSR]) {
    dups[dup]="ENOSR"; dupi[dup]=ENOSR; dup++;
  } else
    errs[ENOSR] = "ENOSR";
  if (ENOSR>max) max=ENOSR;
#endif
#ifdef ENONET
  if (errs[ENONET]) {
    dups[dup]="ENONET"; dupi[dup]=ENONET; dup++;
  } else
    errs[ENONET] = "ENONET";
  if (ENONET>max) max=ENONET;
#endif
#ifdef ENOPKG
  if (errs[ENOPKG]) {
    dups[dup]="ENOPKG"; dupi[dup]=ENOPKG; dup++;
  } else
    errs[ENOPKG] = "ENOPKG";
  if (ENOPKG>max) max=ENOPKG;
#endif
#ifdef EREMOTE
  if (errs[EREMOTE]) {
    dups[dup]="EREMOTE"; dupi[dup]=EREMOTE; dup++;
  } else
    errs[EREMOTE] = "EREMOTE";
  if (EREMOTE>max) max=EREMOTE;
#endif
#ifdef ENOLINK
  if (errs[ENOLINK]) {
    dups[dup]="ENOLINK"; dupi[dup]=ENOLINK; dup++;
  } else
    errs[ENOLINK] = "ENOLINK";
  if (ENOLINK>max) max=ENOLINK;
#endif
#ifdef EADV
  if (errs[EADV]) {
    dups[dup]="EADV"; dupi[dup]=EADV; dup++;
  } else
    errs[EADV] = "EADV";
  if (EADV>max) max=EADV;
#endif
#ifdef ESRMNT
  if (errs[ESRMNT]) {
    dups[dup]="ESRMNT"; dupi[dup]=ESRMNT; dup++;
  } else
    errs[ESRMNT] = "ESRMNT";
  if (ESRMNT>max) max=ESRMNT;
#endif
#ifdef ECOMM
  if (errs[ECOMM]) {
    dups[dup]="ECOMM"; dupi[dup]=ECOMM; dup++;
  } else
    errs[ECOMM] = "ECOMM";
  if (ECOMM>max) max=ECOMM;
#endif
#ifdef EPROTO
  if (errs[EPROTO]) {
    dups[dup]="EPROTO"; dupi[dup]=EPROTO; dup++;
  } else
    errs[EPROTO] = "EPROTO";
  if (EPROTO>max) max=EPROTO;
#endif
#ifdef EMULTIHOP
  if (errs[EMULTIHOP]) {
    dups[dup]="EMULTIHOP"; dupi[dup]=EMULTIHOP; dup++;
  } else
    errs[EMULTIHOP] = "EMULTIHOP";
  if (EMULTIHOP>max) max=EMULTIHOP;
#endif
#ifdef EDOTDOT
  if (errs[EDOTDOT]) {
    dups[dup]="EDOTDOT"; dupi[dup]=EDOTDOT; dup++;
  } else
    errs[EDOTDOT] = "EDOTDOT";
  if (EDOTDOT>max) max=EDOTDOT;
#endif
#ifdef EBADMSG
  if (errs[EBADMSG]) {
    dups[dup]="EBADMSG"; dupi[dup]=EBADMSG; dup++;
  } else
    errs[EBADMSG] = "EBADMSG";
  if (EBADMSG>max) max=EBADMSG;
#endif
#ifdef EOVERFLOW
  if (errs[EOVERFLOW]) {
    dups[dup]="EOVERFLOW"; dupi[dup]=EOVERFLOW; dup++;
  } else
    errs[EOVERFLOW] = "EOVERFLOW";
  if (EOVERFLOW>max) max=EOVERFLOW;
#endif
#ifdef ENOTUNIQ
  if (errs[ENOTUNIQ]) {
    dups[dup]="ENOTUNIQ"; dupi[dup]=ENOTUNIQ; dup++;
  } else
    errs[ENOTUNIQ] = "ENOTUNIQ";
  if (ENOTUNIQ>max) max=ENOTUNIQ;
#endif
#ifdef EBADFD
  if (errs[EBADFD]) {
    dups[dup]="EBADFD"; dupi[dup]=EBADFD; dup++;
  } else
    errs[EBADFD] = "EBADFD";
  if (EBADFD>max) max=EBADFD;
#endif
#ifdef EREMCHG
  if (errs[EREMCHG]) {
    dups[dup]="EREMCHG"; dupi[dup]=EREMCHG; dup++;
  } else
    errs[EREMCHG] = "EREMCHG";
  if (EREMCHG>max) max=EREMCHG;
#endif
#ifdef ELIBACC
  if (errs[ELIBACC]) {
    dups[dup]="ELIBACC"; dupi[dup]=ELIBACC; dup++;
  } else
    errs[ELIBACC] = "ELIBACC";
  if (ELIBACC>max) max=ELIBACC;
#endif
#ifdef ELIBBAD
  if (errs[ELIBBAD]) {
    dups[dup]="ELIBBAD"; dupi[dup]=ELIBBAD; dup++;
  } else
    errs[ELIBBAD] = "ELIBBAD";
  if (ELIBBAD>max) max=ELIBBAD;
#endif
#ifdef ELIBSCN
  if (errs[ELIBSCN]) {
    dups[dup]="ELIBSCN"; dupi[dup]=ELIBSCN; dup++;
  } else
    errs[ELIBSCN] = "ELIBSCN";
  if (ELIBSCN>max) max=ELIBSCN;
#endif
#ifdef ELIBMAX
  if (errs[ELIBMAX]) {
    dups[dup]="ELIBMAX"; dupi[dup]=ELIBMAX; dup++;
  } else
    errs[ELIBMAX] = "ELIBMAX";
  if (ELIBMAX>max) max=ELIBMAX;
#endif
#ifdef ELIBEXEC
  if (errs[ELIBEXEC]) {
    dups[dup]="ELIBEXEC"; dupi[dup]=ELIBEXEC; dup++;
  } else
    errs[ELIBEXEC] = "ELIBEXEC";
  if (ELIBEXEC>max) max=ELIBEXEC;
#endif
#ifdef EILSEQ
  if (errs[EILSEQ]) {
    dups[dup]="EILSEQ"; dupi[dup]=EILSEQ; dup++;
  } else
    errs[EILSEQ] = "EILSEQ";
  if (EILSEQ>max) max=EILSEQ;
#endif
#ifdef ERESTART
  if (errs[ERESTART]) {
    dups[dup]="ERESTART"; dupi[dup]=ERESTART; dup++;
  } else
    errs[ERESTART] = "ERESTART";
  if (ERESTART>max) max=ERESTART;
#endif
#ifdef ESTRPIPE
  if (errs[ESTRPIPE]) {
    dups[dup]="ESTRPIPE"; dupi[dup]=ESTRPIPE; dup++;
  } else
    errs[ESTRPIPE] = "ESTRPIPE";
  if (ESTRPIPE>max) max=ESTRPIPE;
#endif
#ifdef EUSERS
  if (errs[EUSERS]) {
    dups[dup]="EUSERS"; dupi[dup]=EUSERS; dup++;
  } else
    errs[EUSERS] = "EUSERS";
  if (EUSERS>max) max=EUSERS;
#endif
#ifdef ENOTSOCK
  if (errs[ENOTSOCK]) {
    dups[dup]="ENOTSOCK"; dupi[dup]=ENOTSOCK; dup++;
  } else
    errs[ENOTSOCK] = "ENOTSOCK";
  if (ENOTSOCK>max) max=ENOTSOCK;
#endif
#ifdef EDESTADDRREQ
  if (errs[EDESTADDRREQ]) {
    dups[dup]="EDESTADDRREQ"; dupi[dup]=EDESTADDRREQ; dup++;
  } else
    errs[EDESTADDRREQ] = "EDESTADDRREQ";
  if (EDESTADDRREQ>max) max=EDESTADDRREQ;
#endif
#ifdef EMSGSIZE
  if (errs[EMSGSIZE]) {
    dups[dup]="EMSGSIZE"; dupi[dup]=EMSGSIZE; dup++;
  } else
    errs[EMSGSIZE] = "EMSGSIZE";
  if (EMSGSIZE>max) max=EMSGSIZE;
#endif
#ifdef EPROTOTYPE
  if (errs[EPROTOTYPE]) {
    dups[dup]="EPROTOTYPE"; dupi[dup]=EPROTOTYPE; dup++;
  } else
    errs[EPROTOTYPE] = "EPROTOTYPE";
  if (EPROTOTYPE>max) max=EPROTOTYPE;
#endif
#ifdef ENOPROTOOPT
  if (errs[ENOPROTOOPT]) {
    dups[dup]="ENOPROTOOPT"; dupi[dup]=ENOPROTOOPT; dup++;
  } else
    errs[ENOPROTOOPT] = "ENOPROTOOPT";
  if (ENOPROTOOPT>max) max=ENOPROTOOPT;
#endif
#ifdef EPROTONOSUPPORT
  if (errs[EPROTONOSUPPORT]) {
    dups[dup]="EPROTONOSUPPORT"; dupi[dup]=EPROTONOSUPPORT; dup++;
  } else
    errs[EPROTONOSUPPORT] = "EPROTONOSUPPORT";
  if (EPROTONOSUPPORT>max) max=EPROTONOSUPPORT;
#endif
#ifdef ESOCKTNOSUPPORT
  if (errs[ESOCKTNOSUPPORT]) {
    dups[dup]="ESOCKTNOSUPPORT"; dupi[dup]=ESOCKTNOSUPPORT; dup++;
  } else
    errs[ESOCKTNOSUPPORT] = "ESOCKTNOSUPPORT";
  if (ESOCKTNOSUPPORT>max) max=ESOCKTNOSUPPORT;
#endif
#ifdef EOPNOTSUPP
  if (errs[EOPNOTSUPP]) {
    dups[dup]="EOPNOTSUPP"; dupi[dup]=EOPNOTSUPP; dup++;
  } else
    errs[EOPNOTSUPP] = "EOPNOTSUPP";
  if (EOPNOTSUPP>max) max=EOPNOTSUPP;
#endif
#ifdef EPFNOSUPPORT
  if (errs[EPFNOSUPPORT]) {
    dups[dup]="EPFNOSUPPORT"; dupi[dup]=EPFNOSUPPORT; dup++;
  } else
    errs[EPFNOSUPPORT] = "EPFNOSUPPORT";
  if (EPFNOSUPPORT>max) max=EPFNOSUPPORT;
#endif
#ifdef EAFNOSUPPORT
  if (errs[EAFNOSUPPORT]) {
    dups[dup]="EAFNOSUPPORT"; dupi[dup]=EAFNOSUPPORT; dup++;
  } else
    errs[EAFNOSUPPORT] = "EAFNOSUPPORT";
  if (EAFNOSUPPORT>max) max=EAFNOSUPPORT;
#endif
#ifdef EADDRINUSE
  if (errs[EADDRINUSE]) {
    dups[dup]="EADDRINUSE"; dupi[dup]=EADDRINUSE; dup++;
  } else
    errs[EADDRINUSE] = "EADDRINUSE";
  if (EADDRINUSE>max) max=EADDRINUSE;
#endif
#ifdef EADDRNOTAVAIL
  if (errs[EADDRNOTAVAIL]) {
    dups[dup]="EADDRNOTAVAIL"; dupi[dup]=EADDRNOTAVAIL; dup++;
  } else
    errs[EADDRNOTAVAIL] = "EADDRNOTAVAIL";
  if (EADDRNOTAVAIL>max) max=EADDRNOTAVAIL;
#endif
#ifdef ENETDOWN
  if (errs[ENETDOWN]) {
    dups[dup]="ENETDOWN"; dupi[dup]=ENETDOWN; dup++;
  } else
    errs[ENETDOWN] = "ENETDOWN";
  if (ENETDOWN>max) max=ENETDOWN;
#endif
#ifdef ENETUNREACH
  if (errs[ENETUNREACH]) {
    dups[dup]="ENETUNREACH"; dupi[dup]=ENETUNREACH; dup++;
  } else
    errs[ENETUNREACH] = "ENETUNREACH";
  if (ENETUNREACH>max) max=ENETUNREACH;
#endif
#ifdef ENETRESET
  if (errs[ENETRESET]) {
    dups[dup]="ENETRESET"; dupi[dup]=ENETRESET; dup++;
  } else
    errs[ENETRESET] = "ENETRESET";
  if (ENETRESET>max) max=ENETRESET;
#endif
#ifdef ECONNABORTED
  if (errs[ECONNABORTED]) {
    dups[dup]="ECONNABORTED"; dupi[dup]=ECONNABORTED; dup++;
  } else
    errs[ECONNABORTED] = "ECONNABORTED";
  if (ECONNABORTED>max) max=ECONNABORTED;
#endif
#ifdef ECONNRESET
  if (errs[ECONNRESET]) {
    dups[dup]="ECONNRESET"; dupi[dup]=ECONNRESET; dup++;
  } else
    errs[ECONNRESET] = "ECONNRESET";
  if (ECONNRESET>max) max=ECONNRESET;
#endif
#ifdef ENOBUFS
  if (errs[ENOBUFS]) {
    dups[dup]="ENOBUFS"; dupi[dup]=ENOBUFS; dup++;
  } else
    errs[ENOBUFS] = "ENOBUFS";
  if (ENOBUFS>max) max=ENOBUFS;
#endif
#ifdef EISCONN
  if (errs[EISCONN]) {
    dups[dup]="EISCONN"; dupi[dup]=EISCONN; dup++;
  } else
    errs[EISCONN] = "EISCONN";
  if (EISCONN>max) max=EISCONN;
#endif
#ifdef ENOTCONN
  if (errs[ENOTCONN]) {
    dups[dup]="ENOTCONN"; dupi[dup]=ENOTCONN; dup++;
  } else
    errs[ENOTCONN] = "ENOTCONN";
  if (ENOTCONN>max) max=ENOTCONN;
#endif
#ifdef ESHUTDOWN
  if (errs[ESHUTDOWN]) {
    dups[dup]="ESHUTDOWN"; dupi[dup]=ESHUTDOWN; dup++;
  } else
    errs[ESHUTDOWN] = "ESHUTDOWN";
  if (ESHUTDOWN>max) max=ESHUTDOWN;
#endif
#ifdef ETOOMANYREFS
  if (errs[ETOOMANYREFS]) {
    dups[dup]="ETOOMANYREFS"; dupi[dup]=ETOOMANYREFS; dup++;
  } else
    errs[ETOOMANYREFS] = "ETOOMANYREFS";
  if (ETOOMANYREFS>max) max=ETOOMANYREFS;
#endif
#ifdef ETIMEDOUT
  if (errs[ETIMEDOUT]) {
    dups[dup]="ETIMEDOUT"; dupi[dup]=ETIMEDOUT; dup++;
  } else
    errs[ETIMEDOUT] = "ETIMEDOUT";
  if (ETIMEDOUT>max) max=ETIMEDOUT;
#endif
#ifdef ECONNREFUSED
  if (errs[ECONNREFUSED]) {
    dups[dup]="ECONNREFUSED"; dupi[dup]=ECONNREFUSED; dup++;
  } else
    errs[ECONNREFUSED] = "ECONNREFUSED";
  if (ECONNREFUSED>max) max=ECONNREFUSED;
#endif
#ifdef EHOSTDOWN
  if (errs[EHOSTDOWN]) {
    dups[dup]="EHOSTDOWN"; dupi[dup]=EHOSTDOWN; dup++;
  } else
    errs[EHOSTDOWN] = "EHOSTDOWN";
  if (EHOSTDOWN>max) max=EHOSTDOWN;
#endif
#ifdef EHOSTUNREACH
  if (errs[EHOSTUNREACH]) {
    dups[dup]="EHOSTUNREACH"; dupi[dup]=EHOSTUNREACH; dup++;
  } else
    errs[EHOSTUNREACH] = "EHOSTUNREACH";
  if (EHOSTUNREACH>max) max=EHOSTUNREACH;
#endif
#ifdef EALREADY
  if (errs[EALREADY]) {
    dups[dup]="EALREADY"; dupi[dup]=EALREADY; dup++;
  } else
    errs[EALREADY] = "EALREADY";
  if (EALREADY>max) max=EALREADY;
#endif
#ifdef EINPROGRESS
  if (errs[EINPROGRESS]) {
    dups[dup]="EINPROGRESS"; dupi[dup]=EINPROGRESS; dup++;
  } else
    errs[EINPROGRESS] = "EINPROGRESS";
  if (EINPROGRESS>max) max=EINPROGRESS;
#endif
#ifdef ESTALE
  if (errs[ESTALE]) {
    dups[dup]="ESTALE"; dupi[dup]=ESTALE; dup++;
  } else
    errs[ESTALE] = "ESTALE";
  if (ESTALE>max) max=ESTALE;
#endif
#ifdef EUCLEAN
  if (errs[EUCLEAN]) {
    dups[dup]="EUCLEAN"; dupi[dup]=EUCLEAN; dup++;
  } else
    errs[EUCLEAN] = "EUCLEAN";
  if (EUCLEAN>max) max=EUCLEAN;
#endif
#ifdef ENOTNAM
  if (errs[ENOTNAM]) {
    dups[dup]="ENOTNAM"; dupi[dup]=ENOTNAM; dup++;
  } else
    errs[ENOTNAM] = "ENOTNAM";
  if (ENOTNAM>max) max=ENOTNAM;
#endif
#ifdef ENAVAIL
  if (errs[ENAVAIL]) {
    dups[dup]="ENAVAIL"; dupi[dup]=ENAVAIL; dup++;
  } else
    errs[ENAVAIL] = "ENAVAIL";
  if (ENAVAIL>max) max=ENAVAIL;
#endif
#ifdef EISNAM
  if (errs[EISNAM]) {
    dups[dup]="EISNAM"; dupi[dup]=EISNAM; dup++;
  } else
    errs[EISNAM] = "EISNAM";
  if (EISNAM>max) max=EISNAM;
#endif
#ifdef EREMOTEIO
  if (errs[EREMOTEIO]) {
    dups[dup]="EREMOTEIO"; dupi[dup]=EREMOTEIO; dup++;
  } else
    errs[EREMOTEIO] = "EREMOTEIO";
  if (EREMOTEIO>max) max=EREMOTEIO;
#endif
#ifdef EDQUOT
  if (errs[EDQUOT]) {
    dups[dup]="EDQUOT"; dupi[dup]=EDQUOT; dup++;
  } else
    errs[EDQUOT] = "EDQUOT";
  if (EDQUOT>max) max=EDQUOT;
#endif
#ifdef ENOMEDIUM
  if (errs[ENOMEDIUM]) {
    dups[dup]="ENOMEDIUM"; dupi[dup]=ENOMEDIUM; dup++;
  } else
    errs[ENOMEDIUM] = "ENOMEDIUM";
  if (ENOMEDIUM>max) max=ENOMEDIUM;
#endif
#ifdef EMEDIATYPE
  if (errs[EMEDIATYPE]) {
    dups[dup]="EMEDIATYPE"; dupi[dup]=EMEDIATYPE; dup++;
  } else
    errs[EMEDIATYPE] = "EMEDIATYPE";
  if (EMEDIATYPE>max) max=EMEDIATYPE;
#endif
#ifdef EIORESID
  if (errs[EIORESID]) {
    dups[dup]="EIORESID"; dupi[dup]=EIORESID; dup++;
  } else
    errs[EIORESID] = "EIORESID";
  if (EIORESID>max) max=EIORESID;
#endif
#ifdef EINIT
  if (errs[EINIT]) {
    dups[dup]="EINIT"; dupi[dup]=EINIT; dup++;
  } else
    errs[EINIT] = "EINIT";
  if (EINIT>max) max=EINIT;
#endif
#ifdef EREMDEV
  if (errs[EREMDEV]) {
    dups[dup]="EREMDEV"; dupi[dup]=EREMDEV; dup++;
  } else
    errs[EREMDEV] = "EREMDEV";
  if (EREMDEV>max) max=EREMDEV;
#endif
#ifdef ECANCELED
  if (errs[ECANCELED]) {
    dups[dup]="ECANCELED"; dupi[dup]=ECANCELED; dup++;
  } else
    errs[ECANCELED] = "ECANCELED";
  if (ECANCELED>max) max=ECANCELED;
#endif
#ifdef ENFSREMOTE
  if (errs[ENFSREMOTE]) {
    dups[dup]="ENFSREMOTE"; dupi[dup]=ENFSREMOTE; dup++;
  } else
    errs[ENFSREMOTE] = "ENFSREMOTE";
  if (ENFSREMOTE>max) max=ENFSREMOTE;
#endif
#ifdef ETCP_EBASE
  if (errs[ETCP_EBASE]) {
    dups[dup]="ETCP_EBASE"; dupi[dup]=ETCP_EBASE; dup++;
  } else
    errs[ETCP_EBASE] = "ETCP_EBASE";
  if (ETCP_EBASE>max) max=ETCP_EBASE;
#endif
#ifdef ETCP_ELIMIT
  if (errs[ETCP_ELIMIT]) {
    dups[dup]="ETCP_ELIMIT"; dupi[dup]=ETCP_ELIMIT; dup++;
  } else
    errs[ETCP_ELIMIT] = "ETCP_ELIMIT";
  if (ETCP_ELIMIT>max) max=ETCP_ELIMIT;
#endif
#ifdef ENAMI_EBASE
  if (errs[ENAMI_EBASE]) {
    dups[dup]="ENAMI_EBASE"; dupi[dup]=ENAMI_EBASE; dup++;
  } else
    errs[ENAMI_EBASE] = "ENAMI_EBASE";
  if (ENAMI_EBASE>max) max=ENAMI_EBASE;
#endif
#ifdef ENAMI_ELIMIT
  if (errs[ENAMI_ELIMIT]) {
    dups[dup]="ENAMI_ELIMIT"; dupi[dup]=ENAMI_ELIMIT; dup++;
  } else
    errs[ENAMI_ELIMIT] = "ENAMI_ELIMIT";
  if (ENAMI_ELIMIT>max) max=ENAMI_ELIMIT;
#endif
#ifdef ENFS_EBASE
  if (errs[ENFS_EBASE]) {
    dups[dup]="ENFS_EBASE"; dupi[dup]=ENFS_EBASE; dup++;
  } else
    errs[ENFS_EBASE] = "ENFS_EBASE";
  if (ENFS_EBASE>max) max=ENFS_EBASE;
#endif
#ifdef ENFS_ELIMIT
  if (errs[ENFS_ELIMIT]) {
    dups[dup]="ENFS_ELIMIT"; dupi[dup]=ENFS_ELIMIT; dup++;
  } else
    errs[ENFS_ELIMIT] = "ENFS_ELIMIT";
  if (ENFS_ELIMIT>max) max=ENFS_ELIMIT;
#endif
#ifdef ELASTERRNO
  if (errs[ELASTERRNO]) {
    dups[dup]="ELASTERRNO"; dupi[dup]=ELASTERRNO; dup++;
  } else
    errs[ELASTERRNO] = "ELASTERRNO";
  if (ELASTERRNO>max) max=ELASTERRNO;
#endif
#ifdef ECKPT
  if (errs[ECKPT]) {
    dups[dup]="ECKPT"; dupi[dup]=ECKPT; dup++;
  } else
    errs[ECKPT] = "ECKPT";
  if (ECKPT>max) max=ECKPT;
#endif
#ifdef ENOLIMFILE
  if (errs[ENOLIMFILE]) {
    dups[dup]="ENOLIMFILE"; dupi[dup]=ENOLIMFILE; dup++;
  } else
    errs[ENOLIMFILE] = "ENOLIMFILE";
  if (ENOLIMFILE>max) max=ENOLIMFILE;
#endif
#ifdef EDISJOINT
  if (errs[EDISJOINT]) {
    dups[dup]="EDISJOINT"; dupi[dup]=EDISJOINT; dup++;
  } else
    errs[EDISJOINT] = "EDISJOINT";
  if (EDISJOINT>max) max=EDISJOINT;
#endif
#ifdef ENOLOGIN
  if (errs[ENOLOGIN]) {
    dups[dup]="ENOLOGIN"; dupi[dup]=ENOLOGIN; dup++;
  } else
    errs[ENOLOGIN] = "ENOLOGIN";
  if (ENOLOGIN>max) max=ENOLOGIN;
#endif
#ifdef ELOGINLIM
  if (errs[ELOGINLIM]) {
    dups[dup]="ELOGINLIM"; dupi[dup]=ELOGINLIM; dup++;
  } else
    errs[ELOGINLIM] = "ELOGINLIM";
  if (ELOGINLIM>max) max=ELOGINLIM;
#endif
#ifdef EGROUPLOOP
  if (errs[EGROUPLOOP]) {
    dups[dup]="EGROUPLOOP"; dupi[dup]=EGROUPLOOP; dup++;
  } else
    errs[EGROUPLOOP] = "EGROUPLOOP";
  if (EGROUPLOOP>max) max=EGROUPLOOP;
#endif
#ifdef ENOATTACH
  if (errs[ENOATTACH]) {
    dups[dup]="ENOATTACH"; dupi[dup]=ENOATTACH; dup++;
  } else
    errs[ENOATTACH] = "ENOATTACH";
  if (ENOATTACH>max) max=ENOATTACH;
#endif
#ifdef ENOATTR
  if (errs[ENOATTR]) {
    dups[dup]="ENOATTR"; dupi[dup]=ENOATTR; dup++;
  } else
    errs[ENOATTR] = "ENOATTR";
  if (ENOATTR>max) max=ENOATTR;
#endif
#ifdef EFSCORRUPTED
  if (errs[EFSCORRUPTED]) {
    dups[dup]="EFSCORRUPTED"; dupi[dup]=EFSCORRUPTED; dup++;
  } else
    errs[EFSCORRUPTED] = "EFSCORRUPTED";
  if (EFSCORRUPTED>max) max=EFSCORRUPTED;
#endif
#ifdef EDIRCORRUPTED
  if (errs[EDIRCORRUPTED]) {
    dups[dup]="EDIRCORRUPTED"; dupi[dup]=EDIRCORRUPTED; dup++;
  } else
    errs[EDIRCORRUPTED] = "EDIRCORRUPTED";
  if (EDIRCORRUPTED>max) max=EDIRCORRUPTED;
#endif
#ifdef EWRONGFS
  if (errs[EWRONGFS]) {
    dups[dup]="EWRONGFS"; dupi[dup]=EWRONGFS; dup++;
  } else
    errs[EWRONGFS] = "EWRONGFS";
  if (EWRONGFS>max) max=EWRONGFS;
#endif
#ifdef ECONTROLLER
  if (errs[ECONTROLLER]) {
    dups[dup]="ECONTROLLER"; dupi[dup]=ECONTROLLER; dup++;
  } else
    errs[ECONTROLLER] = "ECONTROLLER";
  if (ECONTROLLER>max) max=ECONTROLLER;
#endif
#ifdef ENOTCONTROLLER
  if (errs[ENOTCONTROLLER]) {
    dups[dup]="ENOTCONTROLLER"; dupi[dup]=ENOTCONTROLLER; dup++;
  } else
    errs[ENOTCONTROLLER] = "ENOTCONTROLLER";
  if (ENOTCONTROLLER>max) max=ENOTCONTROLLER;
#endif
#ifdef EENQUEUED
  if (errs[EENQUEUED]) {
    dups[dup]="EENQUEUED"; dupi[dup]=EENQUEUED; dup++;
  } else
    errs[EENQUEUED] = "EENQUEUED";
  if (EENQUEUED>max) max=EENQUEUED;
#endif
#ifdef ENOTENQUEUED
  if (errs[ENOTENQUEUED]) {
    dups[dup]="ENOTENQUEUED"; dupi[dup]=ENOTENQUEUED; dup++;
  } else
    errs[ENOTENQUEUED] = "ENOTENQUEUED";
  if (ENOTENQUEUED>max) max=ENOTENQUEUED;
#endif
#ifdef EJOINED
  if (errs[EJOINED]) {
    dups[dup]="EJOINED"; dupi[dup]=EJOINED; dup++;
  } else
    errs[EJOINED] = "EJOINED";
  if (EJOINED>max) max=EJOINED;
#endif
#ifdef ENOTJOINED
  if (errs[ENOTJOINED]) {
    dups[dup]="ENOTJOINED"; dupi[dup]=ENOTJOINED; dup++;
  } else
    errs[ENOTJOINED] = "ENOTJOINED";
  if (ENOTJOINED>max) max=ENOTJOINED;
#endif
#ifdef ENOPROC
  if (errs[ENOPROC]) {
    dups[dup]="ENOPROC"; dupi[dup]=ENOPROC; dup++;
  } else
    errs[ENOPROC] = "ENOPROC";
  if (ENOPROC>max) max=ENOPROC;
#endif
#ifdef EMUSTRUN
  if (errs[EMUSTRUN]) {
    dups[dup]="EMUSTRUN"; dupi[dup]=EMUSTRUN; dup++;
  } else
    errs[EMUSTRUN] = "EMUSTRUN";
  if (EMUSTRUN>max) max=EMUSTRUN;
#endif
#ifdef ENOTSTOPPED
  if (errs[ENOTSTOPPED]) {
    dups[dup]="ENOTSTOPPED"; dupi[dup]=ENOTSTOPPED; dup++;
  } else
    errs[ENOTSTOPPED] = "ENOTSTOPPED";
  if (ENOTSTOPPED>max) max=ENOTSTOPPED;
#endif
#ifdef ECLOCKCPU
  if (errs[ECLOCKCPU]) {
    dups[dup]="ECLOCKCPU"; dupi[dup]=ECLOCKCPU; dup++;
  } else
    errs[ECLOCKCPU] = "ECLOCKCPU";
  if (ECLOCKCPU>max) max=ECLOCKCPU;
#endif
#ifdef EINVALSTATE
  if (errs[EINVALSTATE]) {
    dups[dup]="EINVALSTATE"; dupi[dup]=EINVALSTATE; dup++;
  } else
    errs[EINVALSTATE] = "EINVALSTATE";
  if (EINVALSTATE>max) max=EINVALSTATE;
#endif
#ifdef ENOEXIST
  if (errs[ENOEXIST]) {
    dups[dup]="ENOEXIST"; dupi[dup]=ENOEXIST; dup++;
  } else
    errs[ENOEXIST] = "ENOEXIST";
  if (ENOEXIST>max) max=ENOEXIST;
#endif
#ifdef EENDOFMINOR
  if (errs[EENDOFMINOR]) {
    dups[dup]="EENDOFMINOR"; dupi[dup]=EENDOFMINOR; dup++;
  } else
    errs[EENDOFMINOR] = "EENDOFMINOR";
  if (EENDOFMINOR>max) max=EENDOFMINOR;
#endif
#ifdef EBUFSIZE
  if (errs[EBUFSIZE]) {
    dups[dup]="EBUFSIZE"; dupi[dup]=EBUFSIZE; dup++;
  } else
    errs[EBUFSIZE] = "EBUFSIZE";
  if (EBUFSIZE>max) max=EBUFSIZE;
#endif
#ifdef EEMPTY
  if (errs[EEMPTY]) {
    dups[dup]="EEMPTY"; dupi[dup]=EEMPTY; dup++;
  } else
    errs[EEMPTY] = "EEMPTY";
  if (EEMPTY>max) max=EEMPTY;
#endif
#ifdef ENOINTRGROUP
  if (errs[ENOINTRGROUP]) {
    dups[dup]="ENOINTRGROUP"; dupi[dup]=ENOINTRGROUP; dup++;
  } else
    errs[ENOINTRGROUP] = "ENOINTRGROUP";
  if (ENOINTRGROUP>max) max=ENOINTRGROUP;
#endif
#ifdef EINVALMODE
  if (errs[EINVALMODE]) {
    dups[dup]="EINVALMODE"; dupi[dup]=EINVALMODE; dup++;
  } else
    errs[EINVALMODE] = "EINVALMODE";
  if (EINVALMODE>max) max=EINVALMODE;
#endif
#ifdef ECANTEXTENT
  if (errs[ECANTEXTENT]) {
    dups[dup]="ECANTEXTENT"; dupi[dup]=ECANTEXTENT; dup++;
  } else
    errs[ECANTEXTENT] = "ECANTEXTENT";
  if (ECANTEXTENT>max) max=ECANTEXTENT;
#endif
#ifdef EINVALTIME
  if (errs[EINVALTIME]) {
    dups[dup]="EINVALTIME"; dupi[dup]=EINVALTIME; dup++;
  } else
    errs[EINVALTIME] = "EINVALTIME";
  if (EINVALTIME>max) max=EINVALTIME;
#endif
#ifdef EDESTROYED
  if (errs[EDESTROYED]) {
    dups[dup]="EDESTROYED"; dupi[dup]=EDESTROYED; dup++;
  } else
    errs[EDESTROYED] = "EDESTROYED";
  if (EDESTROYED>max) max=EDESTROYED;
#endif
#ifdef EBDHDL
  if (errs[EBDHDL]) {
    dups[dup]="EBDHDL"; dupi[dup]=EBDHDL; dup++;
  } else
    errs[EBDHDL] = "EBDHDL";
  if (EBDHDL>max) max=EBDHDL;
#endif
#ifdef EDELAY
  if (errs[EDELAY]) {
    dups[dup]="EDELAY"; dupi[dup]=EDELAY; dup++;
  } else
    errs[EDELAY] = "EDELAY";
  if (EDELAY>max) max=EDELAY;
#endif
#ifdef ENOBWD
  if (errs[ENOBWD]) {
    dups[dup]="ENOBWD"; dupi[dup]=ENOBWD; dup++;
  } else
    errs[ENOBWD] = "ENOBWD";
  if (ENOBWD>max) max=ENOBWD;
#endif
#ifdef EBADRSPEC
  if (errs[EBADRSPEC]) {
    dups[dup]="EBADRSPEC"; dupi[dup]=EBADRSPEC; dup++;
  } else
    errs[EBADRSPEC] = "EBADRSPEC";
  if (EBADRSPEC>max) max=EBADRSPEC;
#endif
#ifdef EBADTSPEC
  if (errs[EBADTSPEC]) {
    dups[dup]="EBADTSPEC"; dupi[dup]=EBADTSPEC; dup++;
  } else
    errs[EBADTSPEC] = "EBADTSPEC";
  if (EBADTSPEC>max) max=EBADTSPEC;
#endif
#ifdef EBADFILT
  if (errs[EBADFILT]) {
    dups[dup]="EBADFILT"; dupi[dup]=EBADFILT; dup++;
  } else
    errs[EBADFILT] = "EBADFILT";
  if (EBADFILT>max) max=EBADFILT;
#endif
#ifdef EMIGRATED
  if (errs[EMIGRATED]) {
    dups[dup]="EMIGRATED"; dupi[dup]=EMIGRATED; dup++;
  } else
    errs[EMIGRATED] = "EMIGRATED";
  if (EMIGRATED>max) max=EMIGRATED;
#endif
#ifdef EMIGRATING
  if (errs[EMIGRATING]) {
    dups[dup]="EMIGRATING"; dupi[dup]=EMIGRATING; dup++;
  } else
    errs[EMIGRATING] = "EMIGRATING";
  if (EMIGRATING>max) max=EMIGRATING;
#endif
#ifdef ECELLDOWN
  if (errs[ECELLDOWN]) {
    dups[dup]="ECELLDOWN"; dupi[dup]=ECELLDOWN; dup++;
  } else
    errs[ECELLDOWN] = "ECELLDOWN";
  if (ECELLDOWN>max) max=ECELLDOWN;
#endif
#ifdef ENOTSUP
  if (errs[ENOTSUP]) {
    dups[dup]="ENOTSUP"; dupi[dup]=ENOTSUP; dup++;
  } else
    errs[ENOTSUP] = "ENOTSUP";
  if (ENOTSUP>max) max=ENOTSUP;
#endif
#ifdef EPROCLIM
  if (errs[EPROCLIM]) {
    dups[dup]="EPROCLIM"; dupi[dup]=EPROCLIM; dup++;
  } else
    errs[EPROCLIM] = "EPROCLIM";
  if (EPROCLIM>max) max=EPROCLIM;
#endif
#ifdef ERREMOTE
  if (errs[ERREMOTE]) {
    dups[dup]="ERREMOTE"; dupi[dup]=ERREMOTE; dup++;
  } else
    errs[ERREMOTE] = "ERREMOTE";
  if (ERREMOTE>max) max=ERREMOTE;
#endif
#ifdef ENOSYM
  if (errs[ENOSYM]) {
    dups[dup]="ENOSYM"; dupi[dup]=ENOSYM; dup++;
  } else
    errs[ENOSYM] = "ENOSYM";
  if (ENOSYM>max) max=ENOSYM;
#endif
#ifdef EREFUSED
  if (errs[EREFUSED]) {
    dups[dup]="EREFUSED"; dupi[dup]=EREFUSED; dup++;
  } else
    errs[EREFUSED] = "EREFUSED";
  if (EREFUSED>max) max=EREFUSED;
#endif
#ifdef EREMOTERELEASE
  if (errs[EREMOTERELEASE]) {
    dups[dup]="EREMOTERELEASE"; dupi[dup]=EREMOTERELEASE; dup++;
  } else
    errs[EREMOTERELEASE] = "EREMOTERELEASE";
  if (EREMOTERELEASE>max) max=EREMOTERELEASE;
#endif
  printf("module NHC.DErrNo where\n\n");
  printf("{- Automatically generated from /usr/include/errno.h -}\n\n");
  printf("data ErrNo =\n");
  printf("    Edummy\n");
  for (i=1; i<=max; i++) {
    if (errs[i]) {
      printf("  | %s\n",errs[i]);
    } else if (j<dup) {
      errs[i] = dups[j++];
      printf("  | %s\n",errs[i]);
    } else { noncontig=1; }
  }
  for (;j<dup;j++) {
      errs[++max] = dups[j];
      printf("  | %s\n",errs[max]);
  }
  if (1/*noncontig*/) {
    printf("  deriving (Eq,Show)\n\n");
    printf("instance Enum ErrNo where\n");
    for (i=1; i<=max; i++) {
      if (errs[i])
        printf("  toEnum %d = %s\n",i,errs[i]);
    }
    printf("  toEnum _ = Edummy\n");
    for (i=1; i<=max; i++) {
      if (errs[i])
        printf("  fromEnum %s = %d\n",errs[i],i);
    }
    printf("\n");
  } else printf("  deriving (Eq,Enum,Show)\n\n");
  printf("eqErrNo :: ErrNo -> ErrNo -> Bool\n");
  for (j=0;j<dup;j++) {
    printf("eqErrNo %s %s = True\n",dups[j],errs[dupi[j]]);
    printf("eqErrNo %s %s = True\n",errs[dupi[j]],dups[j]);
  }
  printf("eqErrNo a b = a==b\n\n");
  sep = ' ';
  printf("alreadyexists = [");
#ifdef EEXIST
  printf("%c EEXIST",sep);
  sep = ',';
#endif
#ifdef EISDIR
  printf("%c EISDIR",sep);
  sep = ',';
#endif
  printf(" ]\n");
  sep = ' ';
  printf("doesnotexist = [");
#ifdef ENOENT
  printf("%c ENOENT",sep);
  sep = ',';
#endif
#ifdef ESRCH
  printf("%c ESRCH",sep);
  sep = ',';
#endif
#ifdef ENXIO
  printf("%c ENXIO",sep);
  sep = ',';
#endif
#ifdef ENODEV
  printf("%c ENODEV",sep);
  sep = ',';
#endif
  printf(" ]\n");
  sep = ' ';
  printf("alreadyinuse = [");
#ifdef EBUSY
  printf("%c EBUSY",sep);
  sep = ',';
#endif
#ifdef ETXTBSY
  printf("%c ETXTBSY",sep);
  sep = ',';
#endif
  printf(" ]\n");
  sep = ' ';
  printf("full = [");
#ifdef ENOSPC
  printf("%c ENOSPC",sep);
  sep = ',';
#endif
#ifdef EDQUOT
  printf("%c EDQUOT",sep);
  sep = ',';
#endif
  printf(" ]\n");
  sep = ' ';
  printf("illegalop = [");
#ifdef EPERM
  printf("%c EPERM",sep);
  sep = ',';
#endif
#ifdef ESPIPE
  printf("%c ESPIPE",sep);
  sep = ',';
#endif
  printf(" ]\n");
  sep = ' ';
  printf("nopermission = [");
#ifdef EPERM
  printf("%c EPERM",sep);
  sep = ',';
#endif
#ifdef EACCES
  printf("%c EACCES",sep);
  sep = ',';
#endif
#ifdef EROFS
  printf("%c EROFS",sep);
  sep = ',';
#endif
  printf(" ]\n");
  printf("\n\n");
  exit(0);
}
