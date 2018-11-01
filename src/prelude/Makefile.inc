ifeq "" "${MKDIR}"
MKDIR:=$(shell pwd)
#MKDIR:=$(PWD)
else
MKDIR:=$(patsubst %/$(notdir ${MKDIR}),%, ${MKDIR})
endif
include ${MKDIR}/Makefile.inc


ifeq "p" "${PROFILING}"
HC := $(LOCAL)nhc98 -p
else
HC := $(LOCAL)nhc98
endif

ifeq "z" "${TPROF}"
HC += -z
endif

LOW = ../LowB/

