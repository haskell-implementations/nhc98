### Configurable variables:

OPT = -O3
#ARCH = -m32
ARCH = 

# CC, STRIP = actually sourced from LIBDIR/MACHINE/config
INSTALL = cp
AR = ar
LD = ld

VERSION = 1.22
# When incrementing the nhc98 version number, don't forget to change the
# corresponding version in the configure script!
#   (odd minor number = CVS/darcs version;  even minor number = release version)

HMAKEVERSION = 3.14
# HMAKEVERSION is the separate version number for hmake.
#   (odd/even minor number is irrelevant - all are release versions)


### End of configurable variables

ifeq "" "${MKDIR}"
MKDIR:=$(shell pwd)
#MKDIR:=$(PWD)
endif

TOPDIR := $(MKDIR)
MACHINE = $(shell $(TOPDIR)/script/harch)
export MACHINE

CYG = $(findstring CYGWIN, $(MACHINE))
ifeq "CYGWIN" "${CYG}"
  TOPDIR := $(shell cygpath -w $(TOPDIR) | tr '\\\\' '/' )
  CYGFLAG = -D__CYGWIN32__
endif
export CYGFLAG


OBJ=obj$(CFG)
INCDIR=$(TOPDIR)/include
SRCDIR=$(TOPDIR)/src
LIBDIR=$(TOPDIR)/lib
DST=$(LIBDIR)/$(MACHINE)

### This is a very important step: get the local configuration
include $(DST)/config
###

ifeq "" "${BUILDBASEDIR}"
BUILDBASEDIR:=/tmp
endif
# ifeq "CYGWIN" "${CYG}"
#   BUILDDIR = $(shell echo `cygpath -w $(BUILDBASEDIR)/$(MACHINE)` | tr '\\' '/')
# else
BUILDDIR = $(BUILDBASEDIR)/$(MACHINE)
# endif

LOCAL = $(TOPDIR)/script/
export LOCAL
HC = $(LOCAL)nhc98
export HC
HMAKE = $(LOCAL)hmake
export HMAKE

BASECOMP := $(shell basename $(BUILDWITH))
BUILDCOMP := $(shell basename $(BUILDWITH) | cut -c1-3 )
CPP = $(CC) -E -x c

DCFG:=
PROFILING=$(findstring p,${CFG})
TPROF=$(findstring z,${CFG})

ifeq "p" "${PROFILING}"
DCFG:=${DCFG} -DPROFILE=2
endif

ifeq "z" "${TPROF}"
DCFG:=${DCFG} -DTPROF
endif

ifeq "1" "${USINGRTS}"
NHEAP = +RTS -H8M -RTS
endif


ifeq "p" "${PROFILING}"
  HISUFFIX=hi
  O=p.o
  C=p.c
  A=p.a
else
ifeq "z" "${TPROF}"
  HISUFFIX=hi
  O=z.o
  C=z.c
  A=z.a
else
  HISUFFIX=hi
  O=o
  C=hc
  A=a
endif
endif

GCCVERSION := $(shell cat $(TOPDIR)/targets/$(MACHINE)/gccversion )
