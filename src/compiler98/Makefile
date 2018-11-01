include Makefile.inc

OBJDIR = ${BUILDDIR}/obj/compiler98
OBJDIRS = ${OBJDIR}/Derive ${OBJDIR}/Parse ${OBJDIR}/Type ${OBJDIR}/Util
TARGET = ${DST}/nhc98comp${EXE}

SRCS = \
	AssocTree.hs \
	Bind.hs \
	Building.hs \
	Case.hs \
	CaseHelp.hs \
	CaseLib.hs \
	CaseOpt.hs \
	Depend.hs \
	Derive/Binary.hs \
	Derive/Bounded.hs \
	Derive/Derive.hs \
	Derive/Enum.hs \
	Derive/Eq.hs \
	Derive/Eval.hs \
	Derive/Ix.hs \
	Derive/Lib.hs \
	Derive/Ord.hs \
	Derive/Read.hs \
	Derive/Show.hs \
	Derive/XML.hs \
	EmitState.hs \
	Error.hs \
	Export.hs \
	Extract.hs \
	FFITrans.hs \
	FSLib.hs \
	FixSyntax.hs \
	Fixity.hs \
	Flags.hs \
	Floats.hs \
	ForeignCode.hs \
	FreeVar.hs \
	Gcode.hs \
	GcodeFix.hs \
	GcodeLow.hs \
	GcodeLowC.hs \
	GcodeMem.hs \
	GcodeOpt1.hs \
	GcodeOpt2.hs \
	GcodeRel.hs \
	GcodeSpec.hs \
	IExtract.hs \
	Id.hs \
	IdKind.hs \
	Import.hs \
	ImportState.hs \
	Info.hs \
	IntState.hs \
	Lift.hs \
	Machine.hs \
	MainNhc98.hs \
	Memo.hs \
	MkSyntax.hs \
	NT.hs \
	Need.hs \
	NeedLib.hs \
	Nice.hs \
	NplusK.hs \
	Overlap.hs \
	Parse/Lex.hs \
	Parse/LexLow.hs \
	Parse/LexPre.hs \
	Parse/LexStr.hs \
	Parse/Lexical.hs \
	Parse/Parse.hs \
	Parse/Parse2.hs \
	Parse/ParseCore.hs \
	Parse/ParseI.hs \
	Parse/ParseLex.hs \
	Parse/ParseLib.hs \
	Parse/Pragma.hs \
	PosAtom.hs \
	PosCode.hs \
	PreImp.hs \
	PreImport.hs \
	PrettyLib.hs \
	PrettySyntax.hs \
	Prim.hs \
	PrimCode.hs \
	Reduce.hs \
	Remove1_3.hs \
	Rename.hs \
	RenameLib.hs \
	ReportImports.hs \
	RmClasses.hs \
	STGArity.hs \
	STGBuild.hs \
	STGGcode.hs \
	STGState.hs \
	Scc.hs \
	SccModule.hs \
	Setup.hs \
	State.hs \
	StateMonad.hs \
	StrPos.hs \
	Syntax.hs \
	SyntaxPos.hs \
	SyntaxUtil.hs \
	SysDeps.hs \
	TokenId.hs \
	TokenInt.hs \
	Tree234.hs \
	Type/Ctx.hs \
	Type/Data.hs \
	Type/Env.hs \
	Type/Lib.hs \
	Type/Subst.hs \
	Type/Type.hs \
	Type/Unify.hs \
	Type/Util.hs \
	Unlit.hs \
	Util/Extra.hs \
	Util/MergeSort.hs \
	Util/OsOnly.hs \
	Util/Text.hs \

USED_IN_YHC = \
	ByteCode/Analysis.hs \
	ByteCode/ByteCode.hs \
	ByteCode/Compile.hs \
	ByteCode/CompileLib.hs \
	ByteCode/Flatten.hs \
	ByteCode/Graph.hs \
	ByteCode/Metric.hs \
	ByteCode/Peep.hs \
	ByteCode/Relative.hs \
	ByteCode/Show.hs \
	ByteCode/Type.hs \
	ByteCode/Wrap.hs \
	ByteCode/Write.hs \
	Compile.lhs \
	Core/Convert.hs \
	Core/CoreType.hs \
	Core/Linker.hs \
	Core/Pretty.hs \
	Core/Reduce.hs \
	Core/View.hs \
	DotNet/Compile.hs \
	DotNet/IL.hs \
	DotNet/Show.hs \
	Front.lhs \
	MainYhc.hs \
	Make.lhs \
	Package.hs \
	Phase.hs \
	Util/Graph.lhs \

#FROMC = ../libraries/filepath/System/FilePath/Posix.$C

GCSRCS = NhcFloats.gc
CFILES = $(patsubst %.hs, %.$C, ${SRCS})
GCCFILES = $(patsubst %.gc, %.$C, ${GCSRCS}) 
OBJS = $(patsubst %.hs, $(OBJDIR)/%.$O, ${SRCS})
GCOBJS = $(patsubst %.gc, $(OBJDIR)/%.$O, ${GCSRCS}) $(patsubst %.gc,$(OBJDIR)/%_.$O,${GCSRCS})


HC = nhc98	# can be overridden by caller with 'make HC=...'

ifeq "hbc" "$(findstring hbc, ${HC})"
HMAKEFLAGS := -H32M
endif
ifeq "nhc98" "$(findstring nhc98, ${HC})"
HMAKEFLAGS := -H16M -K2M +CTS -H16M -CTS \
	-package containers -package filepath -package packedstring \
	-package base
endif
ifeq "ghc" "$(findstring ghc, ${HC})"
IMPROVE     = #-O
EXTRALINK   = $(OBJDIR)/ghc_floats.o
HMAKEFLAGS := $(shell $(LOCAL)fixghc $(GHCSYM) -package base -package filepath -package packedstring -package directory -package containers)  $(IMPROVE) $(EXTRALINK) -fno-warn-deprecations
$(TARGET): $(EXTRALINK)
endif

HMAKEFLAGS += $(shell echo $(BUILDOPTS))


all: ${TARGET}
objdir: ${OBJDIR} ${OBJDIRS}
cfiles: cleanHi cleanC #$(OBJDIR)/$(BASECOMP)
	$(HMAKE) -HC=$(LOCAL)nhc98 -K2M -C $(HMAKEFLAGS) MainNhc98.hs
fromC: $(OBJDIR) ${OBJDIRS}
	$(LOCAL)/nhc98 -o $(TARGET) -d $(OBJDIR) *.$C */*.$C $(FROMC) \
		-package containers -package filepath -package packedstring \
		-package base
#	cd $(OBJDIR); $(LOCAL)nhc98 -H8M -o $(TARGET) $(HMAKEFLAGS) *.$O */*.$O
	$(HOSTSTRIP) $(TARGET)
relink:
	cd $(OBJDIR); $(LOCAL)nhc98 -H8M -o $(TARGET) $(HMAKEFLAGS) *.$O */*.$O
	$(HOSTSTRIP) $(TARGET)
clean: cleanO cleanHi
cleanO:
	rm -rf $(OBJDIR)
cleanHi:
	rm -f *.hi */*.hi
cleanC:
	rm -f *.hc *.p.c *.z.c ghc_floats.c */*.hc */*.p.c */*.z.c
realclean: clean cleanC
	rm -f $(TARGET)

#ifeq "ghc" "$(findstring ghc, ${HC})"
#$(TARGET): ${OBJDIR} $(OBJDIR)/$(BASECOMP) $(SRCS)
#	$(HC) --make -cpp $(HMAKEFLAGS) -odir $(OBJDIR) MainNew
#	mv a.out $(TARGET)
#	$(STRIP) $(TARGET)
#else
$(TARGET): ${OBJDIR} ${OBJDIRS} $(OBJDIR)/$(BASECOMP) $(SRCS)
	$(HMAKE) -hc=$(HC) $(HMAKEFLAGS) -d $(OBJDIR) MainNhc98
	mv $(OBJDIR)/MainNhc98$(EXE) $(TARGET)
	$(HOSTSTRIP) $(TARGET)
#endif
${OBJDIR} ${OBJDIRS}:
	mkdir -p $@
$(OBJDIR)/$(BASECOMP):
	rm -f $(OBJDIR)/nhc98 $(OBJDIR)/hbc $(OBJDIR)/ghc*
	#$(MAKE) cleanC
	touch "$(OBJDIR)/$(BASECOMP)"
 
$(OBJDIR)/ghc_floats.o: ghc_floats.c
	$(HC) -c -o $@ $<
ghc_floats.c: ghc_floats.c.inst
	cp ghc_floats.c.inst ghc_floats.c


.SUFFIXES: .hs .o .c .gc

#${CFILES}: %.$C : %.hs
#	$(HC) -C $(HFLAGS) -package base -package filepath $<
${GCCFILES}: %.$C : %.gc
	$(HC) -C $(HFLAGS) $<

