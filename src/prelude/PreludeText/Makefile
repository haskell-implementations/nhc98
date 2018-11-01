include Makefile.inc

THISLIB	= PreludeText
SEARCH	= -P../PreludeIO -P../Numeric -P../Char
EXTRA_H_FLAGS	= --prelude
EXTRA_C_FLAGS	=

SRCS	= \
	TReadS.hs        Lex.hs           ReadParen.hs  \
	CRead.hs         Read_2.hs        Reads.hs      \
	CShow.hs         Read_3.hs        Show_IO.hs 	\
	Read_4.hs        ShowChar.hs      Show_Int.hs 	   ShowType.hs  \
	Read_5.hs        Read_Bool.hs     ShowParen.hs     Show_Integer.hs \
	Read_6.hs        Read_7.hs \
	Read_Char.hs     ShowString.hs    Show_List.hs 	\
	Read_Double.hs   Show_2.hs        Show_Maybe.hs 	\
	Read_Either.hs   Show_3.hs        Show_Unit.hs 	   Show_5.hs    \
	Read.hs          Read_Float.hs    Show_4.hs        Shows.hs 	\
	_ReadCon.hs      Read_Int.hs      Show_Bool.hs               	\
	_ReadCon0.hs     Read_Integer.hs  Show_Char.hs     TShowS.hs 	\
	_ReadConArg.hs   Read_List.hs     Show_Double.hs   		\
	_ReadConInfix.hs Read_Maybe.hs    Show_Either.hs   		\
	_ReadField.hs    Read_Unit.hs     Show_Float.hs    \
	Read_Ordering.hs Show_Ordering.hs Show_6.hs        Show_7.hs	\
	Read_8.hs	Read_9.hs	Read_10.hs	Read_11.hs	\
	Read_12.hs	Read_13.hs	Read_14.hs	Read_15.hs	\
	Show_8.hs	Show_9.hs	Show_10.hs	Show_11.hs	\
	Show_12.hs	Show_13.hs	Show_14.hs	Show_15.hs	\
	Show_Fun.hs


# Here are the main rules.
include ../Makefile.common


# Here are the dependencies.
${OBJDIR}/Show_IO.$O: Show_IO.hs # ${OBJDIR}/../PreludeIO/DIO.$O
${OBJDIR}/_ReadCon0.$O: _ReadCon0.hs ${OBJDIR}/_ReadCon.$O

${OBJDIR}/../PreludeIO/DIO.$O:
	cd ../PreludeIO; ${MAKE} ${OBJDIR}/../PreludeIO/DIO.$O

