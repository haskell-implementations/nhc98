REM -- Build polyparse package using GHC
REM
REM    Usage: (case-sensitive)
REM      Build         compile and install the polyparse library GHC package
REM      Build Remove  remove the polyparse GHC library package

rem -- Change the following variables (upto and including SRC)
rem -- to suit the local system environment --

rem    GHC version
set GHCVER=6.6

rem    GHC installation directory:
set GHCDIR=C:\DEV\ghc\ghc-%GHCVER%

rem    Programs needed to build polyparse:
rem
rem    NOTE: install MinGW linked from <http://www.mingw.org/>
rem    for a copy of 'ar.exe'
rem
set GHC=C:\DEV\ghc\ghc-%GHCVER%\bin\ghc.exe
set GHCPKG=C:\DEV\ghc\ghc-%GHCVER%\bin\ghc-pkg.exe
set AR=C:\DEV\MinGW\bin\ar.exe
set LD=C:\DEV\ghc\ghc-%GHCVER%\gcc-lib\ld.exe

rem    Source directory for polyparse:
set SRC=C:\DEV\Haskell\lib\polyparse-1.1\src

rem    Two very long lines (500-600 chars) follow here.  
rem    They should not need changing.
set SRCS=Text/ParserCombinators/Poly.hs Text/ParserCombinators/PolyState.hs Text/ParserCombinators/TextParser.hs Text/ParserCombinators/PolyLazy.hs Text/ParserCombinators/PolyStateLazy.hs Text/ParserCombinators/Poly/Base.hs Text/ParserCombinators/Poly/Plain.hs Text/ParserCombinators/Poly/State.hs Text/ParserCombinators/Poly/Lazy.hs Text/ParserCombinators/Poly/StateLazy.hs Text/ParserCombinators/Poly/NoLeak/Plain.hs Text/ParserCombinators/Poly/NoLeak/State.hs Text/ParserCombinators/Poly/NoLeak/Lazy.hs Text/ParserCombinators/Poly/NoLeak/StateLazy.hs
set OBJS=Text/ParserCombinators/Poly.o Text/ParserCombinators/PolyState.o Text/ParserCombinators/TextParser.o Text/ParserCombinators/PolyLazy.o Text/ParserCombinators/PolyStateLazy.o Text/ParserCombinators/Poly/Base.o Text/ParserCombinators/Poly/Plain.o Text/ParserCombinators/Poly/State.o Text/ParserCombinators/Poly/Lazy.o Text/ParserCombinators/Poly/StateLazy.o Text/ParserCombinators/Poly/NoLeak/Plain.o Text/ParserCombinators/Poly/NoLeak/State.o Text/ParserCombinators/Poly/NoLeak/Lazy.o Text/ParserCombinators/Poly/NoLeak/StateLazy.o


rem -- Get on with the real work --

if "%1"=="Remove" goto Remove

rem -- Compile sources and create library archive
if "%GHCVER%"=="6.4"   COPY polyparse.cabal %SRC%\pkg.conf
if "%GHCVER%"=="6.4.1" COPY polyparse.cabal %SRC%\pkg.conf
if "%GHCVER%"=="6.4.2" COPY polyparse.cabal %SRC%\pkg.conf
if "%GHCVER%"=="6.6"   COPY polyparse.cabal %SRC%\pkg.conf
if "%GHCVER%"=="6.6.1" COPY polyparse.cabal %SRC%\pkg.conf
if "%GHCVER%"=="6.6.2" COPY polyparse.cabal %SRC%\pkg.conf
cd %SRC%
%GHC% --make -cpp -i. -package-name polyparse-1.1 %SRCS%
%AR% r libHSpolyparse.a %OBJS%

rem -- Create library file for GHCi
%LD% -r --whole-archive -o HSpolyparse.o libHSpolyparse.a

rem -- Install the library archive(s) where GHC can find them
COPY libHSpolyparse.a %GHCDIR%
COPY HSpolyparse.o    %GHCDIR%

rem -- Install the interface files where GHC can find them
rem    /L - list only, /Y - overrite without confirmation
rem    /S - copy subdirectories, /T - create directories only
rem    /F - display full filenames while copying
XCOPY /S /F *.hi %GHCDIR%\imports

rem -- Finally, register the package with GHC
if "%GHCVER%"=="6.2"    goto OldRegister
if "%GHCVER%"=="6.2.1"  goto OldRegister
if "%GHCVER%"=="6.2.2"  goto OldRegister
if "%GHCVER%"=="6.4"    goto NewRegister
if "%GHCVER%"=="6.4.1"  goto NewRegister
if "%GHCVER%"=="6.4.2"  goto NewRegister
if "%GHCVER%"=="6.6"    goto NewRegister
if "%GHCVER%"=="6.6.1"  goto NewRegister
if "%GHCVER%"=="6.6.2"  goto NewRegister

goto Exit

rem -- old-style package registration
:OldRegister
%GHCPKG% --add-package -i pkg.conf
goto Exit

rem -- new-style package registration
:NewRegister
ECHO import-dirs:   %GHCDIR%\imports >>pkg.conf
ECHO library-dirs:  %GHCDIR% >>pkg.conf
ECHO depends:       base, haskell98 >>pkg.conf
ECHO hs-libraries:  HSpolyparse >>pkg.conf
%GHCPKG% register pkg.conf
goto Exit

rem -- Remove GHC package for polyparse --
:Remove
%GHCPKG% --remove-package polyparse-1.1

goto Exit

rem -- All done --

:Exit
