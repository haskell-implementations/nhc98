# Default definitions filled in by config script, included from Makefile.inc
include Makefile.inc
.SUFFIXES: 		# To remove default rules like .cpp -> C++

BASIC = Makefile.inc Makefile README INSTALL COPYRIGHT configure

PRELUDEA = \
	src/prelude/Main.hi src/prelude/Makefile* \
	src/prelude/Array/Makefile* src/prelude/Array/*.hs \
	src/prelude/Bit/Makefile* src/prelude/Bit/*.hs \
	src/prelude/Binary/Makefile* src/prelude/Binary/*.hs \
	src/prelude/Binary/*.gc src/prelude/Binary/cLowBinary.[ch] \
	src/prelude/BinArray/Makefile* src/prelude/BinArray/*.hs \
	src/prelude/BinArray/*.gc src/prelude/BinArray/cLowUnboxedArray.[ch] \
	src/prelude/CPUTime/Makefile* src/prelude/CPUTime/*.hs \
	src/prelude/CPUTime/*.gc \
	src/prelude/Char/Makefile* src/prelude/Char/*.hs \
	src/prelude/Complex/Makefile* src/prelude/Complex/*.hs \
	src/prelude/DErrNo.hs \
	src/prelude/Directory/Makefile* src/prelude/Directory/*.hs \
	src/prelude/Directory/*.gc \
	src/prelude/FFI/Makefile* src/prelude/FFI/*.hs \
	src/prelude/FFI/*.h src/prelude/FFI/*.cpp \
	src/prelude/GreenCard/Makefile* src/prelude/GreenCard/*.gc \
	src/prelude/IO/Makefile* src/prelude/IO/*.hs \
	src/prelude/IOExtras/Makefile* src/prelude/IOExtras/*.hs \
	src/prelude/Internal/Makefile* src/prelude/Internal/*.hs \
	src/prelude/Ix/Makefile* src/prelude/Ix/*.hs
PRELUDEB = \
	src/prelude/List/Makefile* src/prelude/List/*.hs \
	src/prelude/Locale/Makefile* src/prelude/Locale/*.hs \
	src/prelude/LowB/Makefile* src/prelude/LowB/*.hs \
	src/prelude/Maybe/Makefile* src/prelude/Maybe/*.hs \
	src/prelude/Monad/Makefile* src/prelude/Monad/*.hs \
	src/prelude/NonStd/Makefile* src/prelude/NonStd/*.hs \
	src/prelude/NonStd/*.gc \
	src/prelude/Numeric/Makefile* src/prelude/Numeric/*.hs \
	src/prelude/Observe/Makefile* src/prelude/Observe/*.lhs \
	src/prelude/PackedString/Makefile* src/prelude/PackedString/*.hs \
	src/prelude/Prelude/Makefile* src/prelude/Prelude/*.hs \
	src/prelude/PreludeIO/Makefile* src/prelude/PreludeIO/*.hs \
	src/prelude/PreludeList/Makefile* src/prelude/PreludeList/*.hs \
	src/prelude/PreludeText/Makefile* src/prelude/PreludeText/*.hs \
	src/prelude/Random/Makefile* src/prelude/Random/*.hs \
	src/prelude/Ratio/Makefile* src/prelude/Ratio/*.hs \
	src/prelude/System/Makefile* src/prelude/System/*.hs \
	src/prelude/Time/Makefile* src/prelude/Time/*.hs \
	src/prelude/Time/*.gc \
	src/prelude/Vector/Makefile* src/prelude/Vector/*.hs
PRELUDEC = \
	src/prelude/Array/*.hc         src/prelude/Array/*.c \
	src/prelude/Bit/*.hc           src/prelude/Bit/*.c \
	src/prelude/Binary/*.hc        src/prelude/Binary/*.c \
	src/prelude/CPUTime/*.hc       src/prelude/CPUTime/*.c \
	src/prelude/Char/*.hc          src/prelude/Char/*.c \
	src/prelude/Complex/*.hc       src/prelude/Complex/*.c \
	src/prelude/DErrNo.hc          src/prelude/DErrNo.?.c \
	src/prelude/Directory/*.hc     src/prelude/Directory/*.c \
	src/prelude/GreenCard/*.hc     src/prelude/GreenCard/*.c \
	src/prelude/IO/*.hc            src/prelude/IO/*.c \
	src/prelude/IOExtras/*.hc      src/prelude/IOExtras/*.c \
	src/prelude/Internal/*.hc      src/prelude/Internal/*.c \
	src/prelude/Ix/*.hc            src/prelude/Ix/*.c \
	src/prelude/List/*.hc          src/prelude/List/*.c \
	src/prelude/Locale/*.hc        src/prelude/Locale/*.c \
	src/prelude/LowB/*.hc          src/prelude/LowB/*.c \
	src/prelude/Maybe/*.hc         src/prelude/Maybe/*.c \
	src/prelude/Monad/*.hc         src/prelude/Monad/*.c \
	src/prelude/NonStd/*.hc        src/prelude/NonStd/*.c \
	src/prelude/Numeric/*.hc       src/prelude/Numeric/*.c \
	src/prelude/Observe/*.hc       src/prelude/Observe/*.c \
	src/prelude/PackedString/*.hc  src/prelude/PackedString/*.c \
	src/prelude/Prelude/*.hc       src/prelude/Prelude/*.c \
	src/prelude/PreludeIO/*.hc     src/prelude/PreludeIO/*.c \
	src/prelude/PreludeList/*.hc   src/prelude/PreludeList/*.c \
	src/prelude/PreludeText/*.hc   src/prelude/PreludeText/*.c \
	src/prelude/Random/*.hc        src/prelude/Random/*.c \
	src/prelude/Ratio/*.hc         src/prelude/Ratio/*.c \
	src/prelude/System/*.hc        src/prelude/System/*.c \
	src/prelude/Time/*.hc          src/prelude/Time/*.c \
	src/prelude/FFI/*.hc           src/prelude/FFI/*.c \
	src/prelude/Vector/*.hc        src/prelude/Vector/*.c
#	src/prelude/BinArray/*.hc      src/prelude/BinArray/*.c \

PACKAGES      = $(shell for pkg in `cat src/libraries/default-packages`; do basename $$pkg; done)
PACKAGEBUILD  = haskell98 base polyparse
PACKAGECABAL  = array containers old-locale old-time filepath directory pretty \
		process random bytestring HaXml Cabal packedstring
PACKAGES_MISSING = \
		getopt haskell-src html xhtml parsec \
		HUnit QuickCheck
PACKAGES_UNTESTED = \
		arrows fgl hpc monadLib mtl network \
		readline time unix

LIBRARIES = src/libraries/Makefile.common src/libraries/Makefile.inc \
	    src/libraries/Makefile.cabal src/libraries/nhc98-pkg.hs \
	    src/libraries/CabalParse2.hs src/libraries/cabal-parse2.hs \
	    src/libraries/default-packages \
	    $(patsubst %, src/libraries/%, ${PACKAGEBUILD}) \
	    $(patsubst %, src/libraries/%, ${PACKAGECABAL})
LIBRARIESC = \
	    src/libraries/CabalParse2.hc src/libraries/cabal-parse2.hc \
	    src/libraries/nhc98-pkg.hc

COMPILER = src/compiler98/Makefile*  src/compiler98/*.hs src/compiler98/*/*.hs \
	   src/compiler98/*.gc src/compiler98/*.c.inst src/compiler98/*.h
COMPILERC = src/compiler98/*.hc src/compiler98/*/*.hc
DATA2C = src/data2c/Makefile* src/data2c/*.hs
SCRIPT = script/hmake.inst script/greencard.inst script/nhc98.inst \
	 script/hmake-config.inst script/hi.inst script/config-errno.c \
         script/nhc98heap.c script/harch.inst script/confhc script/map \
	 script/mangler script/errnogen.c script/GenerateErrNo.hs \
	 script/fixghc script/echo.c script/hood.inst script/tprofprel \
	 script/fixcygwin script/hmake-PRAGMA.hs script/hmake-PRAGMA.hc \
	 script/hsc2hs.inst src/hsc2hs/template-hsc.h \
	 nhc98.spec lib/hood.jar script/nhc98-pkg.inst
GREENCARD = src/greencard/*.lhs src/greencard/*.hs \
	    src/greencard/Makefile*
GREENCARDC = src/greencard/*.hc
HSC2HS = src/hsc2hs/Main.hs src/hsc2hs/Makefile*
HSC2HSC = src/hsc2hs/Main.hc
HP2GRAPH = src/hp2graph/Makefile* src/hp2graph/README \
	   src/hp2graph/doc src/hp2graph/*.[hc1]
HMAKE = src/hmake/Makefile* src/hmake/*.hs src/hmake/README* \
	src/hmake/HISTORY src/hmake/Summary* \
	src/interpreter/Makefile* src/interpreter/*.hs
HMAKEC = src/hmake/*.hc src/interpreter/*.hc
CPPHS  = src/cpphs/Makefile* src/cpphs/cpphs.* src/cpphs/Language src/cpphs/Text
CPPHSC = src/cpphs/*.hc src/cpphs/docs src/cpphs/tests \
	 src/cpphs/README src/cpphs/CHANGELOG src/cpphs/LICENCE*
RUNTIME = \
	src/Makefile.inc \
	src/runtime/Makefile* \
	src/runtime/Builtin/Makefile* \
	src/runtime/Builtin/*.c \
	src/runtime/Builtin/*.h \
	src/runtime/Integer/Makefile* \
	src/runtime/Integer/*.c \
	src/runtime/Integer/*.h \
	src/runtime/Kernel/Makefile* \
	src/runtime/Kernel/*.c \
	src/runtime/Kernel/*.h \
	src/runtime/Mk/Makefile* \
	src/runtime/Mk/*.c \
	src/runtime/Mk/*.h
TESTS = tests/README tests/runtests \
	tests/conformance98 tests/nofib tests/nhc-bugs

PRAGMA  = lib/$(MACHINE)/hmake-PRAGMA
HOODUI  = src/hoodui/Makefile* src/hoodui/*.java \
	  src/hoodui/com/microstar/xml/*
INCLUDE = include/*.hi include/*.h include/NHC/*.hi include/NHC/*.gc
INCLUDEPKG = $(patsubst %, include/packages/%, ${PACKAGEBUILD}) \
             $(patsubst %, include/packages/%, ${PACKAGECABAL})
DOC = docs/*
MAN = man/*.1

TARGDIR= targets
TARGETS= runtime prelude libraries greencard hp2graph hsc2hs cpphs cabal-parse \
	 profruntime profprelude profprelude-$(CC) \
	 timeruntime timeprelude timeprelude-$(CC) \
	 proflibraries timelibraries proflibraries-$(CC) timelibraries-$(CC) \
	 compiler-nhc compiler-hbc compiler-ghc compiler-$(CC) \
	 hmake-nhc hmake-hbc hmake-ghc hmake-$(CC) \
	 greencard-nhc greencard-hbc greencard-ghc greencard-$(CC) \
	 prelude-$(CC) pragma-$(CC) libraries-$(CC) hsc2hs-$(CC) cpphs-$(CC) \
	 cabal-parse-$(CC)

.PHONY: default basic all compiler help config install


##### compiler build + install scripts

default: all
basic: basic-${BUILDCOMP}
all:   all-${BUILDCOMP}
compiler: compiler-${BUILDCOMP}
greencard: greencard-${BUILDCOMP}
hmake: hmake-${BUILDCOMP}
help:
	@echo "Default target is:     basic + heapprofile + timeprofile"
	@echo "Main targets include:  basic heapprofile timeprofile"
	@echo "                       all (= basic + heapprofile + timeprofile)"
	@echo "                       config install clean realclean"
	@echo "  (other subtargets:   compiler hmake runtime prelude libraries"
	@echo "                       greencard hp2graph hsc2hs cpphs hoodui"
	@echo "                       cabal-parse)"
	@echo "For a specific build-compiler: basic-hbc basic-ghc basic-nhc basic-gcc"
	@echo "                               all-hbc   all-ghc   all-nhc   all-gcc"
	@echo "                               etc..."
	@echo "For individual library packages: (not all tested)"
	@echo "    $(PACKAGES)"

config: script/errnogen.c
	if [ "$(MACHINE)" != "" ]; then CC=$(CC) ./configure --target=$(MACHINE) --config ; else ./configure --config ; fi
install:
	if [ "$(MACHINE)" != "" ]; then CC=$(CC) ./configure --target=$(MACHINE) --install ; else ./configure --config ; fi
	
test:
	cd tests && ./runtests clean >/dev/null && ./runtests >t.log 2>t.err
	tail -4 tests/t.err

basic-nhc: $(PRAGMA) runtime hmake-nhc greencard-nhc compiler-nhc cpphs \
						prelude hsc2hs libraries
basic-hbc: $(PRAGMA) runtime hmake-hbc greencard-hbc compiler-hbc cpphs \
						prelude hsc2hs libraries
basic-ghc: $(PRAGMA) runtime hmake-ghc greencard-ghc compiler-ghc cpphs \
						prelude hsc2hs libraries
basic-$(CC): runtime prelude-$(CC) pragma-$(CC) cpphs-$(CC) \
		greencard-$(CC) hmake-$(CC) hsc2hs-$(CC) package-deps-$(CC) \
		compiler-$(CC) libraries-$(CC)

all-$(BUILDCOMP): basic-$(BUILDCOMP) heapprofile timeprofile #hoodui

heapprofile: compiler profruntime profprelude-$(BUILDCOMP) \
		proflibraries-$(BUILDCOMP) hp2graph
timeprofile: compiler timeruntime timeprelude-$(BUILDCOMP) \
		timelibraries-$(BUILDCOMP)

profprelude-nhc: profprelude
profprelude-ghc: profprelude
profprelude-hbc: profprelude
timeprelude-nhc: timeprelude
timeprelude-ghc: timeprelude
timeprelude-hbc: timeprelude
proflibraries-nhc: proflibraries
proflibraries-ghc: proflibraries
proflibraries-hbc: proflibraries
timelibraries-nhc: timelibraries
timelibraries-ghc: timelibraries
timelibraries-hbc: timelibraries

$(TARGETS): % : $(TARGDIR)/$(MACHINE)/%

#runtime:
$(TARGDIR)/$(MACHINE)/runtime: $(RUNTIME)
	cd src/runtime;        $(MAKE) all nhc98heap$(EXE)
	touch $(TARGDIR)/$(MACHINE)/runtime


$(TARGDIR)/$(MACHINE)/compiler-nhc: $(COMPILER)
	cd src/compiler98;     $(MAKE) HC=$(BUILDWITH) all
	touch $(TARGDIR)/$(MACHINE)/compiler-nhc
$(TARGDIR)/$(MACHINE)/compiler-hbc: $(COMPILER)
	cd src/compiler98;     $(MAKE) HC=$(BUILDWITH) all
	touch $(TARGDIR)/$(MACHINE)/compiler-hbc
$(TARGDIR)/$(MACHINE)/compiler-ghc: $(COMPILER)
	cd src/compiler98;     $(MAKE) HC=$(BUILDWITH) all
	touch $(TARGDIR)/$(MACHINE)/compiler-ghc


$(TARGDIR)/$(MACHINE)/prelude: $(PRELUDEA) $(PRELUDEB)
	cd src/prelude;        $(MAKE) all
	touch $(TARGDIR)/$(MACHINE)/prelude

$(TARGDIR)/$(MACHINE)/libraries: $(LIBRARIES) runtime
	for pkg in ${PACKAGEBUILD};\
	do ( cd src/libraries/$$pkg; $(MAKE) -f Makefile.nhc98; ) ;\
	done && \
	$(MAKE) cabal-parse && \
	for pkg in ${PACKAGECABAL};\
	do ( cd src/libraries/$$pkg; $(MAKE) -f ../Makefile.cabal; ) ;\
	done && touch $(TARGDIR)/$(MACHINE)/libraries

${PACKAGEBUILD}: runtime
	cd src/libraries/`basename $@`; $(MAKE) -f Makefile.nhc98

${PACKAGECABAL}: runtime cabal-parse
	cd src/libraries/`basename $@`; $(MAKE) -f ../Makefile.cabal

${PACKAGES_UNTESTED}: runtime cabal-parse
	cd src/libraries/`basename $@`; $(MAKE) -f ../Makefile.cabal


$(TARGDIR)/$(MACHINE)/greencard-nhc: $(GREENCARD)
	cd src/greencard;      $(MAKE) HC=$(BUILDWITH) all
	touch $(TARGDIR)/$(MACHINE)/greencard $(TARGDIR)/$(MACHINE)/greencard-nhc
$(TARGDIR)/$(MACHINE)/greencard-hbc: $(GREENCARD)
	cd src/greencard;      $(MAKE) HC=$(BUILDWITH) all
	touch $(TARGDIR)/$(MACHINE)/greencard $(TARGDIR)/$(MACHINE)/greencard-hbc
$(TARGDIR)/$(MACHINE)/greencard-ghc: $(GREENCARD)
	cd src/greencard;      $(MAKE) HC=$(BUILDWITH) all
	touch $(TARGDIR)/$(MACHINE)/greencard $(TARGDIR)/$(MACHINE)/greencard-ghc


$(TARGDIR)/$(MACHINE)/hsc2hs: $(HSC2HS)
	cd src/hsc2hs;         $(MAKE) -f Makefile.nhc98 HC=$(BUILDWITH) all
	touch $(TARGDIR)/$(MACHINE)/hsc2hs

$(TARGDIR)/$(MACHINE)/cpphs: $(CPPHS)
	cd src/cpphs;          $(MAKE) -f Makefile.nhc98 HC=$(BUILDWITH) all
	touch $(TARGDIR)/$(MACHINE)/cpphs

$(TARGDIR)/$(MACHINE)/cabal-parse: polyparse src/libraries/cabal-parse2.hs \
			src/libraries/CabalParse2.hs src/libraries/nhc98-pkg.hs
	script/nhc98 -o $(LIBDIR)/$(MACHINE)/cabal-parse \
		src/libraries/CabalParse2.hs src/libraries/cabal-parse2.hs \
		-Isrc/libraries -package polyparse -package base
	script/nhc98 -o $(LIBDIR)/$(MACHINE)/nhc98-pkg \
		src/libraries/CabalParse2.hs src/libraries/nhc98-pkg.hs \
		-Isrc/libraries -package polyparse -package base
	touch $@

$(TARGDIR)/$(MACHINE)/cabal-parse-$(CC): $(LIBRARIESC)
	script/nhc98 -o $(LIBDIR)/$(MACHINE)/cabal-parse \
		src/libraries/CabalParse2.hc src/libraries/cabal-parse2.hc \
		-Isrc/libraries -package polyparse -package base
	script/nhc98 -o $(LIBDIR)/$(MACHINE)/nhc98-pkg \
		src/libraries/CabalParse2.hc src/libraries/nhc98-pkg.hc \
		-Isrc/libraries -package polyparse -package base
	touch $@


pragma: $(PRAGMA)
$(PRAGMA): script/hmake-PRAGMA.hs
	$(BUILDWITH) $(shell echo $(BUILDOPTS)) -cpp -o $@ $<


$(TARGDIR)/$(MACHINE)/hmake-nhc: $(HMAKE) $(CPPHS)
	cd src/hmake;       $(MAKE) HC=$(BUILDWITH) BUILDCOMP=${BUILDCOMP} all config
	cd src/interpreter; $(MAKE) HC=$(BUILDWITH) BUILDCOMP=${BUILDCOMP} all
	touch $(TARGDIR)/$(MACHINE)/hmake-nhc
$(TARGDIR)/$(MACHINE)/hmake-hbc: $(HMAKE) $(CPPHS)
	cd src/hmake;       $(MAKE) HC=$(BUILDWITH) BUILDCOMP=${BUILDCOMP} all config
	cd src/interpreter; $(MAKE) HC=$(BUILDWITH) BUILDCOMP=${BUILDCOMP} all
	touch $(TARGDIR)/$(MACHINE)/hmake-hbc
$(TARGDIR)/$(MACHINE)/hmake-ghc: $(HMAKE) $(CPPHS)
	cd src/hmake;       $(MAKE) HC=$(BUILDWITH) BUILDCOMP=${BUILDCOMP} all config
	cd src/interpreter; $(MAKE) HC=$(BUILDWITH) BUILDCOMP=${BUILDCOMP} all
	touch $(TARGDIR)/$(MACHINE)/hmake-ghc


$(TARGDIR)/$(MACHINE)/hp2graph: $(HP2GRAPH)
	cd src/hp2graph;       $(MAKE) all
	touch $(TARGDIR)/$(MACHINE)/hp2graph


$(TARGDIR)/$(MACHINE)/profruntime: $(RUNTIME)
	cd src/runtime;        $(MAKE) CFG=p all
	touch $(TARGDIR)/$(MACHINE)/profruntime
$(TARGDIR)/$(MACHINE)/profprelude: greencard $(PRELUDEA) $(PRELUDEB)
	cd src/prelude;        $(MAKE) CFG=p all
	touch $(TARGDIR)/$(MACHINE)/profprelude
$(TARGDIR)/$(MACHINE)/proflibraries: $(LIBRARIES)
	for pkg in ${PACKAGEBUILD};\
	do ( cd src/libraries/$$pkg; $(MAKE) -f Makefile.nhc98 CFG=p; ) ;\
	done && \
	for pkg in ${PACKAGECABAL};\
	do ( cd src/libraries/$$pkg; $(MAKE) -f ../Makefile.cabal CFG=p; ) ;\
	done && touch $(TARGDIR)/$(MACHINE)/proflibraries


$(TARGDIR)/$(MACHINE)/timeruntime: $(RUNTIME)
	cd src/runtime;        $(MAKE) CFG=z all
	touch $(TARGDIR)/$(MACHINE)/timeruntime
$(TARGDIR)/$(MACHINE)/timeprelude: greencard $(PRELUDEA) $(PRELUDEB)
	cd src/prelude;        $(MAKE) CFG=z all
	touch $(TARGDIR)/$(MACHINE)/timeprelude
$(TARGDIR)/$(MACHINE)/timelibraries: $(LIBRARIES)
	for pkg in ${PACKAGEBUILD};\
	do ( cd src/libraries/$$pkg; $(MAKE) -f Makefile.nhc98 CFG=z; ) ;\
	done && \
	for pkg in ${PACKAGECABAL};\
	do ( cd src/libraries/$$pkg; $(MAKE) -f ../Makefile.cabal CFG=z; ) ;\
	done && touch $(TARGDIR)/$(MACHINE)/timelibraries


$(TARGDIR)/$(MACHINE)/prelude-$(CC): $(PRELUDEC)
	cd src/prelude;        $(MAKE) fromC relink
	touch $(TARGDIR)/$(MACHINE)/prelude-$(CC)
	touch $(TARGDIR)/$(MACHINE)/prelude
$(TARGDIR)/$(MACHINE)/timeprelude-$(CC): $(PRELUDEC)
	cd src/prelude;        $(MAKE) CFG=z fromC
	cd src/prelude/$(MACHINE)/NHC; $(MAKE) CFG=z clean all
	cd src/prelude;        $(MAKE) CFG=z relink
	touch $(TARGDIR)/$(MACHINE)/timeprelude-$(CC)
	touch $(TARGDIR)/$(MACHINE)/timeprelude
$(TARGDIR)/$(MACHINE)/profprelude-$(CC): $(PRELUDEC)
	cd src/prelude;        $(MAKE) CFG=p fromC
	cd src/prelude/$(MACHINE)/NHC; $(MAKE) CFG=p clean all
	cd src/prelude;        $(MAKE) CFG=p relink
	touch $(TARGDIR)/$(MACHINE)/profprelude-$(CC)
	touch $(TARGDIR)/$(MACHINE)/profprelude
$(TARGDIR)/$(MACHINE)/compiler-$(CC): $(COMPILERC)
	cd src/compiler98;     $(MAKE) fromC
	cd src/prelude/$(MACHINE)/NHC; $(MAKE) clean all	# Patch machine-specific parts.
	cd src/prelude;        $(MAKE) relink
	cd src/compiler98;     $(MAKE) relink
	touch $(TARGDIR)/$(MACHINE)/compiler-$(CC)
$(TARGDIR)/$(MACHINE)/greencard-$(CC): $(GREENCARDC)
	cd src/greencard;      $(MAKE) fromC
	touch $(TARGDIR)/$(MACHINE)/greencard $(TARGDIR)/$(MACHINE)/greencard-$(CC)
$(TARGDIR)/$(MACHINE)/pragma-$(CC): script/hmake-PRAGMA.hc
	script/nhc98 -o $(PRAGMA) script/hmake-PRAGMA.hc
	touch $(TARGDIR)/$(MACHINE)/pragma-$(CC)
$(TARGDIR)/$(MACHINE)/cpphs-$(CC): $(CPPHS)
	cd src/cpphs;          $(MAKE) -f Makefile.nhc98 fromC
	touch $(TARGDIR)/$(MACHINE)/cpphs-$(CC)
$(TARGDIR)/$(MACHINE)/hmake-$(CC): $(HMAKEC)
	cd src/hmake;          $(MAKE) BUILDCOMP=nhc fromC config
	cd src/interpreter;    $(MAKE) BUILDCOMP=nhc fromC
	touch $(TARGDIR)/$(MACHINE)/hmake-$(CC)
$(TARGDIR)/$(MACHINE)/hsc2hs-$(CC): $(HSC2HS) $(HSC2HSC)
	cd src/hsc2hs;         $(MAKE) -f Makefile.nhc98 fromC
	touch $(TARGDIR)/$(MACHINE)/hsc2hs-$(CC)
package-deps-$(CC):
	( cd src/libraries/base; $(MAKE) -f Makefile.nhc98 fromC; ) && \
	( cd src/libraries/polyparse; $(MAKE) -f Makefile.nhc98 fromC; ) && \
	$(MAKE) cabal-parse-$(CC) && \
	for pkg in array filepath packedstring containers;\
	do ( cd src/libraries/$$pkg; $(MAKE) -f ../Makefile.cabal fromC; ) ;\
	done
$(TARGDIR)/$(MACHINE)/libraries-$(CC): $(LIBRARIES)
	for pkg in ${PACKAGEBUILD};\
	do ( cd src/libraries/$$pkg; $(MAKE) -f Makefile.nhc98 fromC; ) ;\
	done && \
	$(MAKE) cabal-parse && \
	for pkg in ${PACKAGECABAL};\
	do ( cd src/libraries/$$pkg; $(MAKE) -f ../Makefile.cabal fromC; ) ;\
	done && touch $(TARGDIR)/$(MACHINE)/libraries-$(CC)
$(TARGDIR)/$(MACHINE)/proflibraries-$(CC): $(LIBRARIES)
	for pkg in ${PACKAGEBUILD};\
	do ( cd src/libraries/$$pkg; $(MAKE) -f Makefile.nhc98 CFG=p fromC; ) ;\
	done && \
	for pkg in ${PACKAGECABAL};\
	do ( cd src/libraries/$$pkg; $(MAKE) -f ../Makefile.cabal CFG=p fromC; ) ;\
	done && touch $(TARGDIR)/$(MACHINE)/proflibraries-$(CC)
$(TARGDIR)/$(MACHINE)/timelibraries-$(CC): $(LIBRARIES)
	for pkg in ${PACKAGEBUILD};\
	do ( cd src/libraries/$$pkg; $(MAKE) -f Makefile.nhc98 CFG=z fromC; ) ;\
	done && \
	for pkg in ${PACKAGECABAL};\
	do ( cd src/libraries/$$pkg; $(MAKE) -f ../Makefile.cabal CFG=z fromC; ) ;\
	done && touch $(TARGDIR)/$(MACHINE)/timelibraries-$(CC)


script/errnogen.c: script/GenerateErrNo.hs
	hmake script/GenerateErrNo
	script/GenerateErrNo +RTS -H2M -RTS >script/errnogen.c


######### tracing with HOOD

hoodui: $(TARGDIR)/hoodui
$(TARGDIR)/hoodui: lib/hood.jar
	touch $(TARGDIR)/hoodui
lib/hood.jar: $(HOODUI)
	cd src/hoodui;         $(MAKE) all


##### scripts for packaging various distribution formats

binDist:
	rm -f nhc98-$(VERSION)-$(MACHINE).tar nhc98-$(VERSION)-$(MACHINE).tar.gz
	tar cf nhc98-$(VERSION)-$(MACHINE).tar $(BASIC)
	tar rf nhc98-$(VERSION)-$(MACHINE).tar lib/$(MACHINE)
	tar rf nhc98-$(VERSION)-$(MACHINE).tar $(SCRIPT)
	tar rf nhc98-$(VERSION)-$(MACHINE).tar $(MAN)
	tar rf nhc98-$(VERSION)-$(MACHINE).tar $(INCLUDE)
	tar rf nhc98-$(VERSION)-$(MACHINE).tar $(INCLUDEPKG)
	tar rf nhc98-$(VERSION)-$(MACHINE).tar $(DOC)
	mkdir nhc98-$(VERSION)
	cd nhc98-$(VERSION); tar xf ../nhc98-$(VERSION)-$(MACHINE).tar
	rm nhc98-$(VERSION)/lib/$(MACHINE)/hmakerc
	tar cf nhc98-$(VERSION)-$(MACHINE).tar nhc98-$(VERSION)
	rm -r nhc98-$(VERSION)
	gzip nhc98-$(VERSION)-$(MACHINE).tar

testDist: $(TARGDIR)/timepreludeC \
		$(TARGDIR)/heappreludeC $(TARGDIR)/preludeC \
		$(TARGDIR)/compilerC $(TARGDIR)/greencardC $(TARGDIR)/hmakeC \
		$(TARGDIR)/pragmaC $(TARGDIR)/hsc2hsC $(TARGDIR)/librariesC \
		$(LIBRARIESC) \
		$(TARGDIR)/cpphsC hoodui \
		cleantest
	$(MAKE) nolinks	# moved from dependency list (because order matters)
	rm -f nhc98src-$(VERSION).tar nhc98src-$(VERSION).tar.gz
	tar cf nhc98src-$(VERSION).tar $(BASIC)
	tar rf nhc98src-$(VERSION).tar $(COMPILER)
	tar rf nhc98src-$(VERSION).tar $(COMPILERC)
	tar rf nhc98src-$(VERSION).tar $(RUNTIME)
	tar rf nhc98src-$(VERSION).tar $(PRELUDEA)
	tar rf nhc98src-$(VERSION).tar $(PRELUDEB)
	tar rf nhc98src-$(VERSION).tar $(PRELUDEC)
	tar rf nhc98src-$(VERSION).tar --exclude _darcs $(LIBRARIES)
	tar rf nhc98src-$(VERSION).tar $(LIBRARIESC)
	tar rf nhc98src-$(VERSION).tar $(HOODUI)
	tar rf nhc98src-$(VERSION).tar $(GREENCARD)
	tar rf nhc98src-$(VERSION).tar $(GREENCARDC)
	tar rf nhc98src-$(VERSION).tar $(HSC2HS)
	tar rf nhc98src-$(VERSION).tar $(HSC2HSC)
	tar rf nhc98src-$(VERSION).tar $(CPPHS)
	tar rf nhc98src-$(VERSION).tar $(CPPHSC)
	tar rf nhc98src-$(VERSION).tar $(HP2GRAPH)
	tar rf nhc98src-$(VERSION).tar $(HMAKE)
	tar rf nhc98src-$(VERSION).tar $(HMAKEC)
	tar rf nhc98src-$(VERSION).tar $(MAN)
	tar rf nhc98src-$(VERSION).tar $(INCLUDE)
	tar rf nhc98src-$(VERSION).tar $(INCLUDEPKG)
	tar rf nhc98src-$(VERSION).tar $(DOC)
	tar rf nhc98src-$(VERSION).tar $(TESTS)
	tar rf nhc98src-$(VERSION).tar $(SCRIPT)
	rm -rf nhc98-$(VERSION); mkdir nhc98-$(VERSION)
	cd nhc98-$(VERSION); tar xf ../nhc98src-$(VERSION).tar

srcDist: testDist
	tar cf nhc98src-$(VERSION).tar nhc98-$(VERSION)
	rm -r nhc98-$(VERSION)
	gzip nhc98src-$(VERSION).tar

nolinks:
	cd src/runtime;    $(MAKE) nolinks
	# 'make nolinks' invalidates the links from include dir to runtime dir
	# so we need to force the links to be re-made on next build:
	rm -f $(TARGDIR)/$(MACHINE)/runtime
$(TARGDIR)/preludeC: $(PRELUDEA) $(PRELUDEB)
	cd src/prelude;    $(MAKE) cfiles
	touch $(TARGDIR)/preludeC
$(TARGDIR)/timepreludeC: $(PRELUDEA) $(PRELUDEB)
	cd src/prelude;    $(MAKE) CFG=z cfiles
	touch $(TARGDIR)/timepreludeC
$(TARGDIR)/heappreludeC: $(PRELUDEA) $(PRELUDEB)
	cd src/prelude;    $(MAKE) CFG=p cfiles
	touch $(TARGDIR)/heappreludeC
$(TARGDIR)/compilerC: $(COMPILER)
	cd src/compiler98; $(MAKE) cfiles
	touch $(TARGDIR)/compilerC
$(TARGDIR)/greencardC: $(GREENCARD)
	cd src/greencard;  $(MAKE) cfiles
	touch $(TARGDIR)/greencardC
$(TARGDIR)/hsc2hsC: $(HSC2HS)
	cd src/hsc2hs;     $(MAKE) -f Makefile.nhc98 cfiles
	touch $(TARGDIR)/hsc2hsC
$(TARGDIR)/cpphsC: $(HSC2HS)
	cd src/cpphs;      $(MAKE) -f Makefile.nhc98 cfiles
	touch $(TARGDIR)/cpphsC
$(TARGDIR)/pragmaC: script/hmake-PRAGMA.hs
	script/nhc98 -cpp -C script/hmake-PRAGMA.hs
	touch $(TARGDIR)/pragmaC
$(TARGDIR)/hmakeC: $(HMAKE)
	cd src/hmake;	     $(MAKE) cfiles
	cd src/interpreter;  $(MAKE) cfiles
	touch $(TARGDIR)/hmakeC
$(TARGDIR)/librariesC: $(LIBRARIES) runtime
	for pkg in ${PACKAGEBUILD};\
	do ( cd src/libraries/$$pkg;\
	     $(MAKE) -f Makefile.nhc98 cfiles;\
	     $(MAKE) CFG=p -f Makefile.nhc98 cfiles;\
	     $(MAKE) CFG=z -f Makefile.nhc98 cfiles; ) ;\
	done && \
	for pkg in ${PACKAGECABAL};\
	do ( cd src/libraries/$$pkg;\
	     $(MAKE) -f ../Makefile.cabal cfiles;\
	     $(MAKE) CFG=p -f ../Makefile.cabal cfiles;\
	     $(MAKE) CFG=z -f ../Makefile.cabal cfiles; ) ;\
	done && touch $(TARGDIR)/librariesC
$(LIBRARIESC) : %.hc : %.hs
	script/nhc98 -C -package polyparse -Isrc/libraries $<



##### package up hmake separately

HBASIC  = src/hmake/README src/hmake/INSTALL
HMFILE  = src/hmake/Makefile.toplevel
HAUX1   = Makefile.inc COPYRIGHT
HAUX2   = src/Makefile*
HSCRIPT = script/hmake.inst script/hmake-config.inst \
	  script/harch script/hi.inst script/confhc \
	  script/echo.c script/fixghc script/fixcygwin
HMAN    = man/hmake.1 docs/hmake
HCONF   = hmake-configure
HBIN    = lib/$(MACHINE)/MkProg$(EXE) lib/$(MACHINE)/Older$(EXE) \
	  lib/$(MACHINE)/hi$(EXE) targets/$(MACHINE)/config.cache

hmakeDist:
	rm -f hmake-$(HMAKEVERSION).tar hmake-$(HMAKEVERSION).tar.gz
	tar cf hmake-$(HMAKEVERSION).tar $(HAUX1)
	tar rf hmake-$(HMAKEVERSION).tar $(HAUX2)
	tar rf hmake-$(HMAKEVERSION).tar $(HMAKE)
	tar rf hmake-$(HMAKEVERSION).tar $(CPPHS)
	tar rf hmake-$(HMAKEVERSION).tar $(HSCRIPT)
	tar rf hmake-$(HMAKEVERSION).tar $(HMAN)
	mkdir hmake-$(HMAKEVERSION)
	cd hmake-$(HMAKEVERSION); tar xf ../hmake-$(HMAKEVERSION).tar
	cp $(HBASIC) hmake-$(HMAKEVERSION)
	cp $(HMFILE) hmake-$(HMAKEVERSION)/Makefile
	cp $(HCONF)  hmake-$(HMAKEVERSION)/configure
	tar cf hmake-$(HMAKEVERSION).tar hmake-$(HMAKEVERSION)
	rm -r hmake-$(HMAKEVERSION)
	gzip hmake-$(HMAKEVERSION).tar
hmakeBinDist:
	rm -f hmake-$(HMAKEVERSION)-$(MACHINE).tar hmake-$(HMAKEVERSION)-$(MACHINE).tar.gz
	tar cf hmake-$(HMAKEVERSION)-$(MACHINE).tar $(HAUX1)
	tar rf hmake-$(HMAKEVERSION)-$(MACHINE).tar $(HSCRIPT)
	tar rf hmake-$(HMAKEVERSION)-$(MACHINE).tar $(HBIN)
	tar rf hmake-$(HMAKEVERSION)-$(MACHINE).tar $(HMAN)
	mkdir hmake-$(HMAKEVERSION)
	cd hmake-$(HMAKEVERSION); tar xf ../hmake-$(HMAKEVERSION)-$(MACHINE).tar
	cp $(HBASIC) hmake-$(HMAKEVERSION)
	cp $(HMFILE) hmake-$(HMAKEVERSION)/Makefile
	cp $(HCONF)  hmake-$(HMAKEVERSION)/configure
	tar cf hmake-$(HMAKEVERSION)-$(MACHINE).tar hmake-$(HMAKEVERSION)
	rm -r hmake-$(HMAKEVERSION)
	gzip hmake-$(HMAKEVERSION)-$(MACHINE).tar


##### cleanup

clean: cleanhi
	#cd data2c;             $(MAKE) clean
	cd src/compiler98;      $(MAKE) clean
	cd src/greencard;       $(MAKE) clean
	cd src/hp2graph;        $(MAKE) clean
	cd src/hmake;           $(MAKE) clean
	cd src/cpphs;           $(MAKE) -f Makefile.nhc98 clean
	cd src/hsc2hs;          $(MAKE) -f Makefile.nhc98 clean
	cd src/interpreter;     $(MAKE) clean
	rm -f  script/hmake-PRAGMA.o
	rm -rf $(BUILDDIR)/obj*			# all object files

cleanhi:
	rm -f  script/hmake-PRAGMA.hi
	cd src/prelude; $(MAKE) cleanhi

cleanC:
	rm -f src/compiler98/*.hc
	rm -f src/greencard/*.hc
	rm -f src/hmake/*.hc
	rm -f src/interpreter/*.hc
	rm -f script/hmake-PRAGMA.hc
	cd src/prelude;		$(MAKE)       cleanC
	cd src/prelude;		$(MAKE) CFG=p cleanC
	cd src/prelude;		$(MAKE) CFG=z cleanC
	find src/libraries -name '*.hc'  -print | xargs rm -f
	find src/libraries -name '*.p.c' -print | xargs rm -f
	find src/libraries -name '*.z.c' -print | xargs rm -f
	-rm -f src/libraries/*/generatedCfiles
	cd $(TARGDIR);  rm -f preludeC compilerC greencardC hmakeC pragmaC \
			timepreludeC heappreludeC hsc2hsC cpphsC librariesC

cleantest:
	cd tests && ./runtests clean >/dev/null

realclean: clean cleanC cleantest
	#cd data2c;        $(MAKE) realclean
	cd $(TARGDIR)/$(MACHINE);  rm -f $(TARGETS)
	cd $(TARGDIR)/$(MACHINE);  rm -f hmakerc hmake3.config config.cache
	rm -rf src/prelude/$(MACHINE)
	rm -rf $(LIBDIR)/$(MACHINE)
	rm -f  script/hmake-PRAGMA.o script/hmake-PRAGMA.hi
	rm -f  script/nhc98 script/greencard script/hmake
