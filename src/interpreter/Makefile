include Makefile.inc

OBJDIR = ${BUILDDIR}/obj/interpreter
TARGET = ${DST}/HInteractive$(EXE)

SRCS   = HInteractive.hs HiConfig.hs SimpleLineEditor.hs LexModule.hs
OTHERS = Unlit.hs Compiler.hs Config.hs	Platform.hs RunAndReadStdout.hs # from src/hmake

CHFILES = $(patsubst %.hs, ../hmake/%.$C, $(OTHERS))


ifeq "${BUILDCOMP}" "ghc"
HFLAGS = $(shell $(LOCAL)fixghc $(GHCSYM) \
      -package lang -package util -package base $(READLINE) )
export HFLAGS
endif
ifeq "${BUILDCOMP}" "hbc"
HFLAGS =
export HFLAGS
endif
ifeq "${BUILDCOMP}" "nhc98"
HFLAGS = -package base
export HFLAGS
endif

all: $(TARGET)
cfiles: cleanC $(SRCS)
	$(HMAKE) -hc=$(LOCAL)nhc98 -I../hmake -C HInteractive.hs
clean: cleanO cleanHi
cleanO:
	-rm -rf *.o $(OBJDIR)
cleanHi:
	-rm -f *.hi
cleanC: clean
	-rm -f *.hc *.c
realclean: clean cleanC
	-rm -f $(OBJDIR)/HInteractive$(EXE)

$(TARGET): $(OBJDIR) $(SRCS)
	$(HMAKE) -hc=$(HC) HInteractive -d$(OBJDIR) \
		$(shell echo "${BUILDOPTS}") -i../hmake $(HFLAGS)
	mv $(OBJDIR)/HInteractive$(EXE) $(TARGET)
	$(HOSTSTRIP) $(TARGET)

$(OBJDIR):
	mkdir -p $(OBJDIR)

fromC: $(OBJDIR)
	cp $(CHFILES) .
	$(LOCAL)nhc98 -cpp -o $(TARGET) -d$(OBJDIR) *.$C
	rm $(notdir ${CHFILES})
	$(HOSTSTRIP) $(TARGET)


paper.ps: paper.dvi
	#dvips paper.dvi -O -1.0cm,-2.6cm -o paper.ps
	dvips paper.dvi -o paper.ps
paper.dvi: paper.tex
	latex paper.tex
