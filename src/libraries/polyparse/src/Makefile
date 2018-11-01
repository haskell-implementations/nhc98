SOFTWARE = polyparse
VERSION = 1.4.1

LIBSRCS = \
	Text/ParserCombinators/HuttonMeijer.hs \
	Text/ParserCombinators/HuttonMeijerWallace.hs \
	Text/ParserCombinators/Poly.hs \
        Text/ParserCombinators/Poly/Base.hs \
        Text/ParserCombinators/Poly/Plain.hs \
        Text/ParserCombinators/Poly/Lazy.hs \
        Text/ParserCombinators/Poly/State.hs \
        Text/ParserCombinators/Poly/StateLazy.hs \
        Text/ParserCombinators/Poly/ByteString.hs \
	Text/Parse.hs \
	Text/Parse/ByteString.hs \

LIBOBJS = $(patsubst %.hs, %.o, $(LIBSRCS))

OUT = $(shell cat ../out)
INSTALLDIR = $(shell cat ../prefix)
WHOLEARCHIVE = $(shell cat ../ldopt)

# The caller *must* set the HC variable.
COMPILER := $(findstring ghc, $(HC))
ifeq "$(COMPILER)" "ghc"
COMPILE  = $(HC) --make -cpp -i. $(shell cat ghcpkgs) \
		-package-name $(SOFTWARE)-$(VERSION) -DVERSION=$(VERSION)
RENAME   = mv $(OUT)
endif
COMPILER := $(findstring nhc98, $(HC))
ifeq "$(COMPILER)" "nhc98"
COMPILE  = hmake -hc=$(HC) -I. -K4M +CTS -H8M -CTS -package base \
		-DVERSION=$(VERSION)
RENAME   = echo Built
endif

.PHONY: all libs

all: libs toolset
toolset:
	#cp $(TOOLSET) $(INSTALLDIR)
libs: libHS$(SOFTWARE).a
install-filesonly-ghc: libs $(INSTALLDIR)
	cp libHS$(SOFTWARE).a `cat ghclibdir`
	-ranlib `cat ghclibdir`/libHS$(SOFTWARE).a	# ignore if fails on Linux
	-cp HS$(SOFTWARE).o `cat ghclibdir`		# file may not exist on MacOS X
	rm -rf `cat ghcincdir`/$(SOFTWARE)
	mkdir -p `cat ghcincdir`/$(SOFTWARE)
	cp interfaces.tar `cat ghcincdir`/$(SOFTWARE)
	cd `cat ghcincdir`/$(SOFTWARE); tar xf interfaces.tar; rm interfaces.tar
install-filesonly-nhc98: libs $(INSTALLDIR)
	cp libHS$(SOFTWARE).a `cat nhc98libdir`/`harch`
	-ranlib `cat nhc98libdir`/`harch`/libHS$(SOFTWARE).a
	rm -rf `cat nhc98incdir`/packages/$(SOFTWARE)
	mkdir -p `cat nhc98incdir`/packages/$(SOFTWARE)
	cp interfaces.tar `cat nhc98incdir`/packages/$(SOFTWARE)
	cd `cat nhc98incdir`/packages/$(SOFTWARE); tar xf interfaces.tar; rm interfaces.tar
install-ghc: install-filesonly-ghc $(SOFTWARE).pkgconf
	`cat ghcpkgcmd` --remove-package=$(SOFTWARE) || true	# ignore any error
	`cat ghcpkgcmd` --add-package <pkg.conf || \
	`cat ghcpkgcmd` register $(SOFTWARE).pkgconf
	@echo "you can safely ignore any errors from --add-package"
install-nhc98: install-filesonly-nhc98
install-tools-hugs: toolset-hugs $(INSTALLDIR)
	cp $(patsubst ../../%, %, ${TOOLSET}) $(INSTALLDIR)

# update the sources if necessary
$(LIBSRCS) $(TOOLSRCS) Makefile: %: ../../src/%
	cp $< $@
$(SOFTWARE).pkgconf: ../../$(SOFTWARE).cabal ghcincdirraw ghclibdirraw
	cp ../../$(SOFTWARE).cabal $@
	echo "import-dirs:	`cat ghcincdirraw`$(SOFTWARE)" >>$@
	echo "library-dirs:	`cat ghclibdirraw`" >>$@
	echo "depends:		base, haskell98" >>$@
	echo "hs-libraries:	HS$(SOFTWARE)" >>$@



# packaged library
libHS$(SOFTWARE).a: $(LIBSRCS)
	$(COMPILE) $(LIBSRCS)
	ar r libHS$(SOFTWARE).a $(LIBOBJS)
	-ld -r $(WHOLEARCHIVE) -o $(SOFTWARE).o libHS$(SOFTWARE).a	# for GHCi only
	tar cf interfaces.tar `find Text -name *.hi -print`

$(INSTALLDIR):
	if [ ! -d $(INSTALLDIR) ] ; then mkdir -p $(INSTALLDIR); fi

