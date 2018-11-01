ifeq "" "${MKDIR}"
MKDIR:=$(shell pwd)
#MKDIR:=$(PWD)
else
MKDIR:=$(patsubst %/$(notdir ${MKDIR}),%, ${MKDIR})
endif
include ${MKDIR}/Makefile.inc

#ifeq "sparc-solaris2" "${MACHINE}"
#BUGFIX = -D__EXTENSIONS__ -D__STDC__=0
#else
BUGFIX = 
#endif

#TRACEOBJDIR=${RUNTIMEDIR}/obj${CFG}
