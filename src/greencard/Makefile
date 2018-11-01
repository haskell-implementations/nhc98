include Makefile.inc

OBJDIR = $(BUILDDIR)/$(OBJ)/greencard
TARGET = $(DST)/greencard-nhc98$(EXE)

ifeq "nhc98" "$(findstring nhc98, ${HC})"
  HFLAGS = $(shell echo $(BUILDOPTS)) +CTS -H4Mb -CTS
endif
ifeq "ghc" "$(findstring ghc, ${HC})"
  HFLAGS = $(shell echo $(BUILDOPTS)) $(shell $(LOCAL)fixghc $(GHCSYM) -package lang)
endif


SRCS =	Casm GetOptSOF GreenCard ListUtils Name Package \
	PrettyUtils Target Type NHCBackend DIS Decl  \
	FillIn NameSupply Pretty Proc Process \
	HandLex HandParse ParseLib
CFILES =  $(patsubst %, %.$C, ${SRCS})
OBJS   =  $(patsubst %, ${OBJDIR}/%.$O, ${SRCS})


all: $(TARGET)
cfiles:
	$(HMAKE) -HC=$(LOCAL)nhc98 -C GreenCard.lhs
fromC: $(OBJDIR)
	$(HC) -c -d $(OBJDIR) ${CFILES}
	$(HC) -H4Mb -o $(TARGET) $(OBJS)
	$(HOSTSTRIP) $(TARGET)
clean:
	rm -f $(OBJS) *.hi
realclean: clean
	rm -f $(CFILES) $(TARGET)


$(OBJDIR):
	mkdir -p $(OBJDIR) || $(TRUE)
$(TARGET): $(OBJDIR) $(OBJDIR)/GreenCard$(EXE)
	mv $(OBJDIR)/GreenCard$(EXE) $(TARGET)
	$(HOSTSTRIP) $(TARGET)
$(OBJDIR)/GreenCard$(EXE):
	$(HMAKE) -hc=$(HC) $(HFLAGS) -d $(OBJDIR) GreenCard



## C-files deps
#
#Casm.c:        Pretty.c PrettyUtils.c Target.c
#DIS.c:         Name.c Pretty.c PrettyUtils.c Casm.c
#Decl.c:        Name.c DIS.c Type.c Pretty.c
#FillIn.c:      Decl.c Proc.c Name.c DIS.c Type.c Casm.c Pretty.c PrettyUtils.c ListUtils.c NameSupply.c
#GreenCard.c:   Package.c GetOptSOF.c Process.c Target.c ListUtils.c
#HandParse.c:   HandLex.c Name.c Type.c DIS.c Decl.c ParseLib.c
#NameSupply.c:  Name.c
#NHCBackend.c:  Pretty.c PrettyUtils.c Decl.c DIS.c Casm.c FillIn.c NameSupply.c
#ParseLib.c:    HandLex.c
#PrettyUtils.c: Pretty.c
#Proc.c:        Pretty.c PrettyUtils.c Name.c Type.c DIS.c Decl.c Casm.c NameSupply.c Target.c #NHCBackend.c
#Process.c:     ListUtils.c Pretty.c PrettyUtils.c HandParse.c HandLex.c Name.c DIS.c Decl.c Proc.c FillIn.c Target.c NHCBackend.c
#Type.c:        Pretty.c PrettyUtils.c

