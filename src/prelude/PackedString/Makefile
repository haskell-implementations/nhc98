include Makefile.inc

THISLIB	= PackedString
SEARCH	= -P$(LOW)

SRCS	= \
	Index.hs            Span.hs \
	Append.hs           Length.hs             SplitAt.hs \
	Break.hs            Substr.hs \
	Concat.hs           Lines.hs              DPackedString.hs \
	Cons.hs             Map.hs                Tail.hs \
	Drop.hs             Nil.hs                Take.hs \
	DropWhile.hs        Null.hs               TakeWhile.hs \
	Eq_PackedString.hs  Ord_PackedString.hs   Unlines.hs \
	Filter.hs           PackString.hs         UnpackPS.hs \
	Foldl.hs            Read_PackedString.hs  Unwords.hs \
	Foldr.hs            Reverse.hs            Words.hs \
	Head.hs             Show_PackedString.hs


# Here are the main rules.
include ../Makefile.common


# Here are the dependencies.

${OBJDIR}/Append.$O: Append.hs ${OBJDIR}/DPackedString.$O ${OBJDIR}/UnpackPS.$O ${OBJDIR}/PackString.$O
${OBJDIR}/Break.$O: Break.hs ${OBJDIR}/DPackedString.$O ${OBJDIR}/Span.$O
${OBJDIR}/Concat.$O: Concat.hs ${OBJDIR}/DPackedString.$O ${OBJDIR}/Nil.$O ${OBJDIR}/Append.$O
${OBJDIR}/Cons.$O: Cons.hs ${OBJDIR}/DPackedString.$O ${OBJDIR}/Append.$O ${OBJDIR}/PackString.$O
${OBJDIR}/Drop.$O: Drop.hs ${OBJDIR}/DPackedString.$O ${OBJDIR}/Length.$O ${OBJDIR}/Substr.$O
${OBJDIR}/DropWhile.$O: DropWhile.hs ${OBJDIR}/DPackedString.$O ${OBJDIR}/Nil.$O ${OBJDIR}/Length.$O ${OBJDIR}/Index.$O ${OBJDIR}/Substr.$O
${OBJDIR}/Eq_PackedString.$O: Eq_PackedString.hs ${OBJDIR}/DPackedString.$O 
${OBJDIR}/Eval_PackedString.$O: Eval_PackedString.hs ${OBJDIR}/DPackedString.$O 
${OBJDIR}/Filter.$O: Filter.hs ${OBJDIR}/DPackedString.$O ${OBJDIR}/PackString.$O ${OBJDIR}/UnpackPS.$O
${OBJDIR}/Foldl.$O: Foldl.hs ${OBJDIR}/DPackedString.$O ${OBJDIR}/UnpackPS.$O
${OBJDIR}/Foldr.$O: Foldr.hs ${OBJDIR}/DPackedString.$O ${OBJDIR}/UnpackPS.$O
${OBJDIR}/Head.$O: Head.hs ${OBJDIR}/DPackedString.$O ${OBJDIR}/Index.$O
${OBJDIR}/Index.$O: Index.hs ${OBJDIR}/DPackedString.$O 
${OBJDIR}/Length.$O: Length.hs ${OBJDIR}/DPackedString.$O 
${OBJDIR}/Lines.$O: Lines.hs ${OBJDIR}/DPackedString.$O ${OBJDIR}/Null.$O ${OBJDIR}/Break.$O ${OBJDIR}/Tail.$O
${OBJDIR}/Map.$O: Map.hs ${OBJDIR}/DPackedString.$O ${OBJDIR}/PackString.$O ${OBJDIR}/UnpackPS.$O
${OBJDIR}/Nil.$O: Nil.hs ${OBJDIR}/DPackedString.$O ${OBJDIR}/PackString.$O
${OBJDIR}/Null.$O: Null.hs ${OBJDIR}/DPackedString.$O ${OBJDIR}/Length.$O
${OBJDIR}/Ord_PackedString.$O: Ord_PackedString.hs ${OBJDIR}/DPackedString.$O ${OBJDIR}/Eq_PackedString.$O 
${OBJDIR}/PackString.$O: PackString.hs ${OBJDIR}/DPackedString.$O 
${OBJDIR}/Read_PackedString.$O: Read_PackedString.hs ${OBJDIR}/DPackedString.$O 
${OBJDIR}/Reverse.$O: Reverse.hs ${OBJDIR}/DPackedString.$O ${OBJDIR}/PackString.$O ${OBJDIR}/UnpackPS.$O
${OBJDIR}/Show_PackedString.$O: Show_PackedString.hs ${OBJDIR}/DPackedString.$O 
${OBJDIR}/Span.$O: Span.hs ${OBJDIR}/DPackedString.$O ${OBJDIR}/Length.$O ${OBJDIR}/Index.$O ${OBJDIR}/Substr.$O ${OBJDIR}/Nil.$O
${OBJDIR}/SplitAt.$O: SplitAt.hs ${OBJDIR}/DPackedString.$O ${OBJDIR}/Take.$O ${OBJDIR}/Drop.$O
${OBJDIR}/Substr.$O: Substr.hs ${OBJDIR}/DPackedString.$O ${OBJDIR}/PackString.$O ${OBJDIR}/UnpackPS.$O
${OBJDIR}/Tail.$O: Tail.hs ${OBJDIR}/DPackedString.$O ${OBJDIR}/Substr.$O ${OBJDIR}/Length.$O
${OBJDIR}/Take.$O: Take.hs ${OBJDIR}/DPackedString.$O ${OBJDIR}/Substr.$O ${OBJDIR}/Length.$O
${OBJDIR}/TakeWhile.$O: TakeWhile.hs ${OBJDIR}/DPackedString.$O ${OBJDIR}/Length.$O ${OBJDIR}/Index.$O ${OBJDIR}/Substr.$O
${OBJDIR}/Unlines.$O: Unlines.hs ${OBJDIR}/DPackedString.$O ${OBJDIR}/PackString.$O ${OBJDIR}/UnpackPS.$O
${OBJDIR}/UnpackPS.$O: UnpackPS.hs ${OBJDIR}/DPackedString.$O # ${OBJDIR}/Length.$O ${OBJDIR}/Index.$O
${OBJDIR}/Unwords.$O: Unwords.hs ${OBJDIR}/DPackedString.$O ${OBJDIR}/PackString.$O ${OBJDIR}/UnpackPS.$O
${OBJDIR}/Words.$O: Words.hs ${OBJDIR}/DPackedString.$O ${OBJDIR}/DropWhile.$O ${OBJDIR}/Null.$O ${OBJDIR}/Break.$O


# C-files dependencies.

Append.$C:     DPackedString.$C UnpackPS.$C PackString.$C
Break.$C:      DPackedString.$C Span.$C
Concat.$C:     DPackedString.$C Nil.$C Append.$C
Cons.$C:       DPackedString.$C Append.$C PackString.$C
Drop.$C:       DPackedString.$C Length.$C Substr.$C
DropWhile.$C:  DPackedString.$C Nil.$C Length.$C Index.$C Substr.$C
Filter.$C:     DPackedString.$C PackString.$C UnpackPS.$C
Foldl.$C:      DPackedString.$C UnpackPS.$C
Foldr.$C:      DPackedString.$C UnpackPS.$C
Head.$C:       DPackedString.$C Index.$C
Index.$C:      DPackedString.$C 
Length.$C:     DPackedString.$C 
Lines.$C:      DPackedString.$C Null.$C Break.$C Tail.$C
Map.$C:        DPackedString.$C PackString.$C UnpackPS.$C
Nil.$C:        DPackedString.$C PackString.$C
Null.$C:       DPackedString.$C Length.$C
PackString.$C: DPackedString.$C 
Reverse.$C:    DPackedString.$C PackString.$C UnpackPS.$C
Span.$C:       DPackedString.$C Length.$C Index.$C Substr.$C Nil.$C
SplitAt.$C:    DPackedString.$C Take.$C Drop.$C
Substr.$C:     DPackedString.$C PackString.$C UnpackPS.$C
Tail.$C:       DPackedString.$C Substr.$C Length.$C
Take.$C:       DPackedString.$C Substr.$C Length.$C
TakeWhile.$C:  DPackedString.$C Length.$C Index.$C Substr.$C
Unlines.$C:    DPackedString.$C PackString.$C UnpackPS.$C
UnpackPS.$C:   DPackedString.$C # Length.$C Index.$C
Unwords.$C:    DPackedString.$C PackString.$C UnpackPS.$C
Words.$C:      DPackedString.$C DropWhile.$C Null.$C Break.$C

Eq_PackedString.$C:   DPackedString.$C 
Eval_PackedString.$C: DPackedString.$C 
Ord_PackedString.$C:  DPackedString.$C Eq_PackedString.$C 
Read_PackedString.$C: DPackedString.$C 
Show_PackedString.$C: DPackedString.$C 

