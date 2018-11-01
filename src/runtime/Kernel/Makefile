include Makefile.inc

#VPATH = $(INCDIR)

DIR=Kernel
OBJDIR=${BUILDDIR}/${OBJ}/runtime/${DIR}

OSRCS = mutator.c mutlib.c main.c
SSRCS = newtables.c newbuiltin.c
ASRCS = haskellInit.c dump.c inscount.c collector.c mark.c \
	 cdata.c timeUnix.c xlib_debug.c stableptr.c closureval.c ffiexport.c

ifneq "${PROFILING}" ""
ASRCS += profile.c remark.c xmem.c retainer.c timer.c
endif
ifneq "${TPROF}" ""
ASRCS += tprof.c timer.c
TPLOBJS = $(patsubst %,${OBJDIR}/tpl%Builtin.o,1 2 3)
endif

OOBJS = $(patsubst %.c,${OBJDIR}/%.o,${OSRCS})
SOBJS = $(patsubst %.c,${OBJDIR}/%.o,${SSRCS})
AOBJS = $(patsubst %.c,${OBJDIR}/%.o,${ASRCS})

ifeq "$(CFG)" ""
  ARCHIVE=${OBJDIR}/Runtime.a 
else
  ARCHIVE=${OBJDIR}/Runtime.${CFG}.a 
endif

OBJS = ${AOBJS} ${SOBJS} ${OOBJS}

CFLAGSNOOPT = ${DCFG} ${BUGFIX} ${ENDIAN} ${ARCH} -I${INCDIR} \
         -DVERSION="\"$(VERSION)\"" $(shell echo ${COPTS}) #-DBYTECODE_PROF
CFLAGS = ${CFLAGSNOOPT} ${OPT}
CPP = $(CC) ${DCFG} ${ENDIAN} -E 
LDFLAGS = -r
AS = $(CC) -c

${AOBJS} ${OOBJS}: ${OBJDIR}/%.o: %.c
	${CC} -c ${CFLAGS} -o $@ $<
${SOBJS}: ${OBJDIR}/%.o: %.c
	${CC} -S ${CFLAGSNOOPT} -o - $< |\
		sed -e '/.align 32/s/32/4/' -e '/.p2align 5/s/5/2/' |\
		${CC} -c -x assembler-with-cpp ${CFLAGSNOOPT} -o $@ -

LINKS = bytecode.h cinterface.h mutlib.h newmacros.h \
	node.h runtime.h stableptr.h newbytecode.h bytecode_o.h

links:
	@cd ${INCDIR}; \
	for f in ${LINKS}; do \
        ln -s ../src/runtime/${DIR}/$$f >/dev/null 2>&1 || \
            echo "Link ${INCDIR}/$$f already exists."; \
    done
nolinks:
	@for f in ${LINKS}; do \
        rm -f ${INCDIR}/$$f; \
    done

xxx: 
	echo ${BUILDDIR}

ifeq "${TPROF}" ""

${ARCHIVE}: ${AOBJS} ${SOBJS}
	cd ${OBJDIR}; \
		$(AR) $(ARFLAGS) $@ $(patsubst ${OBJDIR}/%,%,${AOBJS} ${SOBJS})
else

${ARCHIVE}: ${AOBJS} ${SOBJS} ${TPLOBJS}
	cd ${OBJDIR}; $(AR) $(ARFLAGS) $@ \
		$(patsubst ${OBJDIR}/%,%,${TPLOBJS} ${AOBJS} ${SOBJS})
	rm -f ${TPLOBJS}

${TPLOBJS}:
	echo "int TMIP_$(patsubst ${OBJDIR}/tpl%.o,%,$@)[] = {0};" \
	> ${OBJDIR}/tpltmp.c
	${CC} -c ${CFLAGS} -o $@ ${OBJDIR}/tpltmp.c
	rm ${OBJDIR}/tpltmp.c
endif

all: links bytecode_o.h ${OOBJS} ${ARCHIVE}

${OBJDIR}:
	mkdir -p ${OBJDIR}

objdir: ${OBJDIR}

codemacros.h: bytecode.h macros.h
	touch codemacros.h

cinterface.h: runtime.h
	touch cinterface.h

node.h: runtime.h newmacros.h     # newmacros was formerly: codemacros.h
	touch node.h

clean:
	rm -f ${OBJDIR}/*.o ${OBJDIR}/*.a   #tables.s builtin.s
	
newtables.o: newtables.c newmacros.h
newbuiltin.o: newbuiltin.c newmacros.h
dump.o: dump.c runtime.h bytecode.h node.h
inscount.o: inscount.c runtime.h bytecode.h node.h
fake.o: fake.c cinterface.h node.h
haskellInit.o: haskellInit.c runtime.h mutlib.h node.h ../../../Makefile.inc
main.o: main.c runtime.h mutlib.h node.h
mutator.o: mutator.c runtime.h bytecode.h node.h mutlib.h cinterface.h
mutlib.o: mutlib.c runtime.h mutlib.h newmacros.h
collector.o: collector.c node.h newmacros.h runtime.h mark.h
mark.o: mark.c runtime.h node.h newmacros.h bytecode.h
cdata.o: cdata.c runtime.h
timeUnix.o: timeUnix.c runtime.h
remark.o: remark.c runtime.h node.h newmacros.h mark.h
profile.o: profile.c runtime.h xmem.h profile.h
xmem.o: xmem.c xmem.h
retainer.o: retainer.c profile.h xmem.h
stableptr.o: stableptr.c mark.h runtime.h node.h
closureval.o: closureval.c mutlib.h runtime.h newmacros.h
ffiexport.o: ffiexport.c mutlib.h runtime.h newmacros.h
timer.o: timer.c runtime.h
tprof.o: tprof.c runtime.h newmacros.h

bytecode_o.h: newbytecode.h
	$(LOCAL)mangler newbytecode.h bytecode_o.h

#all: prof0 $(OBJS)
#	#$(LD) $(LDFLAGS) -o Runtime0.o $(OBJS_O)
#	cp mutlib.o mutlib0.o
#	cp mutator.o mutator0.o
#	$(AR) $(ARFLAGS) Runtime0.a $(OBJS_A)
#
#all1: prof1 $(OBJS) $(POBJS)
#	#$(LD) $(LDFLAGS) -o Runtime1.o $(OBJS_O)
#	cp mutlib.o mutlib1.o
#	cp mutator.o mutator1.o
#	$(AR) $(ARFLAGS) Runtime1.a $(OBJS_A) $(POBJS)
#
#allt: prof0t $(OBJS)
#	#$(LD) $(LDFLAGS) -o Runtime0t.o $(OBJS_O)
#	cp mutlib.o mutlib0t.o
#	cp mutator.o mutator0t.o
#	$(AR) $(ARFLAGS) Runtime0t.a $(OBJS_A)
#
#all1t: prof1t $(OBJS) $(POBJS)
#	#$(LD) $(LDFLAGS) -o Runtime1t.o $(OBJS_O)
#	cp mutlib.o mutlib1t.o
#	cp mutator.o mutator1t.o
#	$(AR) $(ARFLAGS) Runtime1t.a $(OBJS_A) $(POBJS)

#prof0:
#	$(MAKE) clean
#	rm -f prof?
#	rm -f prof??
#	touch prof0
#
#prof1:
#	$(MAKE) clean
#	rm -f prof?
#	rm -f prof??
#	touch prof1
#
#prof0t:
#	$(MAKE) clean
#	rm -f prof?
#	rm -f prof??
#	touch prof0t
#
#prof1t:
#	$(MAKE) clean
#	rm -f prof?
#	rm -f prof??
#	touch prof1t

#tables.s: tables.c codemacros.h
#	$(CPP) $(OPT) tables.c > tables.s
#
#builtin.s: builtin.c codemacros.h
#	$(CPP) $(OPT) builtin.c > builtin.s
#
#tables.o: tables.s
#	$(AS) tables.s
#
#builtin.o: builtin.s
#	$(AS) builtin.s

