module DotNet.Show (strILCode,ppIns) where

import Util.Extra
import DotNet.IL
import qualified Data.Map as Map
import Id(Id)
import TokenId(splitM)
import Info
import IntState(IntState,getSymbolTable,getErrorsIS,strIS,arityIS,mrpsIS,lookupIS)
import Maybe(isJust, fromJust)
import qualified Data.Set as Set
import Data.Char(toUpper)
import Data.PackedString(unpackPS)
import Text.PrettyPrint

strILCode decls = render (
   text ".assembly extern Haskell.Runtime" $$
   char '{' $$
   char '}' $$
   vcat (map ppILDecl decls))

ppILDecl (Namespace name decls) =
   text ".namespace" <+> text name $$
   char '{' $+$
   nest 4 (vcat (map ppILDecl decls)) $$
   char '}'
ppILDecl (Class name base decls) =
  text ".class private auto ansi beforefieldinit" <+> text name $$
  text "      extends" <+> ppClassSignature base $$
  char '{' $+$
  nest 4 (vcat (map ppILClassDecl decls)) $$
  char '}'
ppILDecl (Prim name pos) = text "PRIM" <+> text "Prim"

ppILDecl (External name pos arity cname cc fl) = text "EXTERNAL" <+> text "EXTERNAL" <> text ("[" ++ cname ++ "]("++ show arity ++") flags="++show fl++"\n")

ppILMethodArg (ILMethodArg sig name) =
  ppTypeSignature sig <+> text name

ppILAccess ILPublic  = text "public"
ppILAccess ILPrivate = text "private"

ppILStorage ILStatic   = text "static"
ppILStorage ILInstance = empty
ppILStorage ILVirtual  = text "virtual"

ppILClassDecl (ILClassField access storage sig name) =
  text ".field" <+> ppILAccess access <+> ppILStorage storage <+> ppTypeSignature sig <+> text name
ppILClassDecl (ILClassConstr access storage args locals instrs) =
  text ".method" <+> ppILAccess access <+> ppILStorage storage <+> text "hidebysig specialname rtspecialname" $$
  text "               void" <+> ppName <> parens (hcat (punctuate comma (map ppILMethodArg args))) $$
  char '{' $+$
  nest 4 (text ".locals init" <+> parens (hcat (punctuate comma (map ppTypeSignature locals)))) $+$
  vcat (map ppILInstrLabel instrs) $$
  char '}'
  where
    ppName | storage == ILStatic = text ".cctor"
           | otherwise           = text ".ctor"

ppILClassDecl (ILClassMethod access storage retSig name args locals instrs) =
  text ".method" <+> ppILAccess access <+> ppILStorage storage <+> text "hidebysig" $$
  text "               " <> ppTypeSignature retSig <+> text name <> parens (hcat (punctuate comma (map ppILMethodArg args))) $$
  char '{' $+$
  nest 4 (text ".locals init" <+> parens (hcat (punctuate comma (map ppTypeSignature locals)))) $+$
  vcat (map ppILInstrLabel instrs) $$
  char '}'

ppILInstrLabel (LABEL n) = ppLabel n <> char ':'
ppILInstrLabel i         = nest 4 (ppILInstr i)

ppILInstr i = ppIns i

ppLabel l = text ("L_"++show l)

ppIns (LDC_I4 n)      = text "ldc.i4" <+> int n
ppIns (LDC_R4 f)      = text "ldc.r4" <+> float f
ppIns (LDC_R8 d)      = text "ldc.r8" <+> double d
ppIns (LDSTR s)       = text "ldstr"  <+> text (show s)
ppIns (LDTOKEN t)     = text "ldtoken" <+> ppTypeSignature t
ppIns (LDTOKEN_METHOD r t n as) = text "ldtoken method instance" <+> ppTypeSignature r <+> ppClassSignature t <> text "::" <> text n <> parens (hcat (punctuate comma (map ppTypeSignature as)))
ppIns (LDLOC n)
  | n == 0            = text "ldloc.0"
  | n == 1            = text "ldloc.1"
  | n == 2            = text "ldloc.2"
  | n == 3            = text "ldloc.3"
  | n < 256           = text "ldloc.s" <+> int n
  | otherwise         = text "ldloc"   <+> int n
ppIns (STLOC n)
  | n == 0            = text "stloc.0"
  | n == 1            = text "stloc.1"
  | n == 2            = text "stloc.2"
  | n == 3            = text "stloc.3"
  | n < 256           = text "stloc.s" <+> int n
  | otherwise         = text "stloc"   <+> int n
ppIns (LDARG n)
  | n == 0            = text "ldarg.0"
  | n == 1            = text "ldarg.1"
  | n == 2            = text "ldarg.2"
  | n == 3            = text "ldarg.3"
  | n < 256           = text "ldarg.s" <+> int n
  | otherwise         = text "ldarg"   <+> int n
ppIns (STARG n)
  | n == 0            = text "starg.0"
  | n == 1            = text "starg.1"
  | n == 2            = text "starg.2"
  | n == 3            = text "starg.3"
  | n < 256           = text "starg.s" <+> int n
  | otherwise         = text "starg"   <+> int n
ppIns (LDSFLD r t n)  = text "ldsfld" <+> ppTypeSignature r <+> ppClassSignature t <> text "::" <> text n
ppIns (STSFLD r t n)  = text "stsfld" <+> ppTypeSignature r <+> ppClassSignature t <> text "::" <> text n
ppIns (LDFLD  r t n)  = text "ldfld" <+> ppTypeSignature r <+> ppClassSignature t <> text "::" <> text n
ppIns (STFLD  r t n)  = text "stfld" <+> ppTypeSignature r <+> ppClassSignature t <> text "::" <> text n
ppIns (NEWOBJ sig args)=text "newobj instance void" <+> ppClassSignature sig <> text "::.ctor" <> parens (hcat (punctuate comma (map ppTypeSignature args)))
ppIns (ISINST sig)    = text "isinst" <+> ppClassSignature sig
ppIns (DUP)           = text "dup"
ppIns (POP)           = text "pop"
ppIns (ADD)           = text "add"
ppIns (SUB)           = text "sub"
ppIns (MUL)           = text "mul"
ppIns (DIV)           = text "div"
ppIns (REM)           = text "rem"
ppIns (CEQ)           = text "ceq"
ppIns (CLT)           = text "clt"
ppIns (CGT)           = text "cgt"
ppIns (NOT)           = text "not"
ppIns (NEG)           = text "neg"

ppIns (BRTRUE  l)     = text "brtrue"  <+> ppLabel l
ppIns (BRFALSE l)     = text "brfalse" <+> ppLabel l
ppIns (BR      l)     = text "br"      <+> ppLabel l
ppIns (BEQ     l)     = text "beq"     <+> ppLabel l
ppIns (BNE     l)     = text "bne.un"  <+> ppLabel l
ppIns (CALL r t n as) = text "call instance" <+> ppTypeSignature r <+> ppClassSignature t <> text "::" <> text n <> parens (hcat (punctuate comma (map ppTypeSignature as)))
ppIns (CALLVIRT r t n as) = text "callvirt"  <+> ppTypeSignature r <+> ppClassSignature t <> text "::" <> text n <> parens (hcat (punctuate comma (map ppTypeSignature as)))
ppIns (CALLCLASS r t n as)= text "call"      <+> ppTypeSignature r <+> ppClassSignature t <> text "::" <> text n <> parens (hcat (punctuate comma (map ppTypeSignature as)))
ppIns (TAIL)          = text "tail."
ppIns (RET)           = text "ret"
ppIns (THROW)         = text "throw"
ppIns (LABEL f)       = text "LABEL" <+> ppLabel f

ppTypeSignature (ClassSignature pkg cls)
  | null pkg                     = text "class" <+> text cls
  | otherwise                    = text "class" <+> brackets (text pkg) <> text cls
ppTypeSignature (ValueSignature pkg cls)
  | null pkg                     = text "valuetype" <+> text cls
  | otherwise                    = text "valuetype" <+> brackets (text pkg) <> text cls
ppTypeSignature Int32Signature   = text "int32"
ppTypeSignature CharSignature    = text "char"
ppTypeSignature DoubleSignature  = text "float64"
ppTypeSignature FloatSignature   = text "float32"
ppTypeSignature BoolSignature    = text "bool"
ppTypeSignature VoidSignature    = text "void"

ppClassSignature (ClassSignature pkg cls)
  | null pkg       = text cls
  | otherwise      = brackets (text pkg) <> text cls
ppClassSignature _ = empty
