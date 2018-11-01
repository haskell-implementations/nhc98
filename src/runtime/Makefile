include Makefile.inc

OBJDIR=${BUILDDIR}/${OBJ}/runtime

KERNEL = Kernel
# KERNEL = LiterateKernel

SUBDIRS = ${KERNEL} Mk Builtin Integer
OBJDIRS=$(patsubst %,${OBJDIR}/%,${SUBDIRS})

RUNTIME = Runtime

ifeq "${CFG}" ""
  SUF=
else
  SUF=.${CFG}
endif

LDFLAGS = -r
ARFLAGS = r


all: links ofiles afile nhc98heap$(EXE)
	${INSTALL} ${OBJDIR}/${KERNEL}/$(RUNTIME)$(SUF).a ${DST}
	$(AR) $(ARFLAGS) ${DST}/$(RUNTIME)$(SUF).a ${OBJDIR}/Integer/*.o ${OBJDIR}/Builtin/*.o ${OBJDIR}/Mk/*.o
	-ranlib ${DST}/$(RUNTIME)$(SUF).a
	${INSTALL} ${OBJDIR}/${KERNEL}/mutator.o ${DST}/mutator$(SUF).o
	${INSTALL} ${OBJDIR}/${KERNEL}/mutlib.o ${DST}/mutlib$(SUF).o
	${INSTALL} ${OBJDIR}/${KERNEL}/main.o ${DST}/main$(SUF).o
ofiles: ${OBJDIR} ${OBJDIRS}
	cd ${KERNEL}; $(MAKE) all
afile: ${OBJDIR} ${OBJDIRS}
	cd Integer; $(MAKE) all
	cd Builtin; $(MAKE) all
	cd Mk;      $(MAKE) all
nhc98heap$(EXE): $(DST)/nhc98heap$(EXE) ;
clean:
	cd ${KERNEL}; $(MAKE) clean
	cd Integer;   $(MAKE) clean
	cd Builtin;   $(MAKE) clean
	cd Mk;        $(MAKE) clean
links:
	cd ${KERNEL}; $(MAKE) links
	cd Integer;   $(MAKE) links
	cd Builtin;   $(MAKE) links
	cd Mk;        $(MAKE) links
nolinks:
	cd ${KERNEL}; $(MAKE) nolinks
	cd Integer;   $(MAKE) nolinks
	cd Builtin;   $(MAKE) nolinks
	cd Mk;        $(MAKE) nolinks
realclean: clean
	rm -f $(DST)/nhc98heap$(EXE) $(DST)/$(RUNTIME)$(SUF).a


${OBJDIR}:
	mkdir -p ${OBJDIR}

${OBJDIRS}: ${OBJDIR}/% :
	mkdir -p $@ || $(TRUE)

objdir: ${OBJDIR}
	cd ${KERNEL}; $(MAKE) objdir
	cd Integer;   $(MAKE) objdir
	cd Builtin;   $(MAKE) objdir
	cd Mk;        $(MAKE) objdir

$(DST)/nhc98heap$(EXE): nhc98heap.c
	$(HOSTCC) $(ARCH) $(shell echo ${COPTS}) -o $@ $<
	$(HOSTSTRIP) $@

