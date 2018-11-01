#ifndef _MKBYPROG_H
#define _MKBYPROG_H
/* Current biggest tuple size is 15 */
struct ForeignTuple {
  void *pos1;
  void *pos2;
  void *pos3;
  void *pos4;
  void *pos5;
  void *pos6;
  void *pos7;
  void *pos8;
  void *pos9;
  void *pos10;
  void *pos11;
  void *pos12;
  void *pos13;
  void *pos14;
  void *pos15;
};

extern NodePtr nhc_mkTuple2(NodePtr a1,NodePtr a2);
#define nhc_sizeTuple2 (1+EXTRA+2)
#define Tuple2 0 
extern NodePtr nhc_mkTuple3(NodePtr a1,NodePtr a2,NodePtr a3);
#define nhc_sizeTuple3 (1+EXTRA+3)
#define Tuple3 0 
extern NodePtr nhc_mkTuple4(NodePtr a1,NodePtr a2,NodePtr a3,NodePtr a4);
#define nhc_sizeTuple4 (1+EXTRA+4)
#define Tuple4 0 
extern NodePtr nhc_mkTuple5(NodePtr a1,NodePtr a2,NodePtr a3,NodePtr a4,NodePtr a5);
#define nhc_sizeTuple5 (1+EXTRA+5)
#define Tuple5 0 
extern NodePtr nhc_mkTuple6(NodePtr a1,NodePtr a2,NodePtr a3,NodePtr a4,NodePtr a5,NodePtr a6);
#define nhc_sizeTuple6 (1+EXTRA+6)
#define Tuple6 0 
extern NodePtr nhc_mkTuple7(NodePtr a1,NodePtr a2,NodePtr a3,NodePtr a4,NodePtr a5,NodePtr a6,NodePtr a7);
#define nhc_sizeTuple7 (1+EXTRA+7)
#define Tuple7 0 
extern NodePtr nhc_mkTuple8(NodePtr a1,NodePtr a2,NodePtr a3,NodePtr a4,NodePtr a5,NodePtr a6,NodePtr a7,NodePtr a8);
#define nhc_sizeTuple8 (1+EXTRA+8)
#define Tuple8 0 
extern NodePtr nhc_mkTuple9(NodePtr a1,NodePtr a2,NodePtr a3,NodePtr a4,NodePtr a5,NodePtr a6,NodePtr a7,NodePtr a8,NodePtr a9);
#define nhc_sizeTuple9 (1+EXTRA+9)
#define Tuple9 0 
extern NodePtr nhc_mkTuple10(NodePtr a1,NodePtr a2,NodePtr a3,NodePtr a4,NodePtr a5,NodePtr a6,NodePtr a7,NodePtr a8,NodePtr a9,NodePtr a10);
#define nhc_sizeTuple10 (1+EXTRA+10)
#define Tuple10 0 
extern NodePtr nhc_mkTuple11(NodePtr a1,NodePtr a2,NodePtr a3,NodePtr a4,NodePtr a5,NodePtr a6,NodePtr a7,NodePtr a8,NodePtr a9,NodePtr a10,NodePtr a11);
#define nhc_sizeTuple11 (1+EXTRA+11)
#define Tuple11 0 
extern NodePtr nhc_mkTuple12(NodePtr a1,NodePtr a2,NodePtr a3,NodePtr a4,NodePtr a5,NodePtr a6,NodePtr a7,NodePtr a8,NodePtr a9,NodePtr a10,NodePtr a11,NodePtr a12);
#define nhc_sizeTuple12 (1+EXTRA+12)
#define Tuple12 0 
extern NodePtr nhc_mkTuple13(NodePtr a1,NodePtr a2,NodePtr a3,NodePtr a4,NodePtr a5,NodePtr a6,NodePtr a7,NodePtr a8,NodePtr a9,NodePtr a10,NodePtr a11,NodePtr a12,NodePtr a13);
#define nhc_sizeTuple13 (1+EXTRA+13)
#define Tuple13 0 
extern NodePtr nhc_mkTuple14(NodePtr a1,NodePtr a2,NodePtr a3,NodePtr a4,NodePtr a5,NodePtr a6,NodePtr a7,NodePtr a8,NodePtr a9,NodePtr a10,NodePtr a11,NodePtr a12,NodePtr a13,NodePtr a14);
#define nhc_sizeTuple14 (1+EXTRA+14)
#define Tuple14 0 
extern NodePtr nhc_mkTuple15(NodePtr a1,NodePtr a2,NodePtr a3,NodePtr a4,NodePtr a5,NodePtr a6,NodePtr a7,NodePtr a8,NodePtr a9,NodePtr a10,NodePtr a11,NodePtr a12,NodePtr a13,NodePtr a14,NodePtr a15);
#define nhc_sizeTuple15 (1+EXTRA+15)
#define Tuple15 0 
extern Node C0_Prelude_46False[];
#define nhc_mkFalse() ((NodePtr)C0_Prelude_46False)
#define nhc_sizeFalse 0
#define False 0
extern Node C0_Prelude_46True[];
#define nhc_mkTrue() ((NodePtr)C0_Prelude_46True)
#define nhc_sizeTrue 0
#define True 1
extern NodePtr nhc_mkLeft(NodePtr a1);
#define nhc_sizeLeft (1+EXTRA+1)
#define Left 0
extern NodePtr nhc_mkRight(NodePtr a1);
#define nhc_sizeRight (1+EXTRA+1)
#define Right 1
extern Node C0_Prelude_46_91_93[];
#define nhc_mkNil() ((NodePtr)C0_Prelude_46_91_93)
#define nhc_sizeNil 0
#define Nil 0
extern NodePtr nhc_mkCons(NodePtr a1,NodePtr a2);
#define nhc_sizeCons (1+EXTRA+2)
#define Cons 1
extern Node C0_Prelude_46Nothing[];
#define nhc_mkNothing() ((NodePtr)C0_Prelude_46Nothing)
#define nhc_sizeNothing 0
#define Nothing 0
extern NodePtr nhc_mkJust(NodePtr a1);
#define nhc_sizeJust (1+EXTRA+1)
#define Just 1
extern Node C0_Prelude_46LT[];
#define nhc_mkLT() ((NodePtr)C0_Prelude_46LT)
#define nhc_sizeLT 0
#define LT 0
extern Node C0_Prelude_46EQ[];
#define nhc_mkEQ() ((NodePtr)C0_Prelude_46EQ)
#define nhc_sizeEQ 0
#define EQ 1
extern Node C0_Prelude_46GT[];
#define nhc_mkGT() ((NodePtr)C0_Prelude_46GT)
#define nhc_sizeGT 0
#define GT 2
extern NodePtr nhc_mkRatio(NodePtr a1,NodePtr a2);
#define nhc_sizeRatio (1+EXTRA+2)
#define Ratio 0
extern Node C0__40_41[];
#define nhc_mkUnit() ((NodePtr)C0__40_41)
#define nhc_sizeUnit 0
#define Unit 0 
extern Node C0_Prelude_46_95Void[];
#define nhc_mk_Void() ((NodePtr)C0_Prelude_46_95Void)
#define nhc_size_Void 0
#define _Void 0
extern NodePtr nhc_mkIO(NodePtr a1);
#define nhc_sizeIO (1+EXTRA+1)
#define IO 0
extern NodePtr nhc_mkIOErrorUser(NodePtr a1);
#define nhc_sizeIOErrorUser (1+EXTRA+1)
#define IOErrorUser 0
extern NodePtr nhc_mkIOErrorSystem(NodePtr a1,NodePtr a2);
#define nhc_sizeIOErrorSystem (1+EXTRA+2)
#define IOErrorSystem 1
extern NodePtr nhc_mkIOErrorOpen(NodePtr a1,NodePtr a2,NodePtr a3);
#define nhc_sizeIOErrorOpen (1+EXTRA+3)
#define IOErrorOpen 2
extern NodePtr nhc_mkIOErrorEOF(NodePtr a1,NodePtr a2);
#define nhc_sizeIOErrorEOF (1+EXTRA+2)
#define IOErrorEOF 3
extern NodePtr nhc_mkIOErrorHIsEOF(NodePtr a1,NodePtr a2);
#define nhc_sizeIOErrorHIsEOF (1+EXTRA+2)
#define IOErrorHIsEOF 4
extern NodePtr nhc_mkIOErrorHFileSize(NodePtr a1,NodePtr a2);
#define nhc_sizeIOErrorHFileSize (1+EXTRA+2)
#define IOErrorHFileSize 5
extern NodePtr nhc_mkIOErrorHFlush(NodePtr a1,NodePtr a2);
#define nhc_sizeIOErrorHFlush (1+EXTRA+2)
#define IOErrorHFlush 6
extern NodePtr nhc_mkIOErrorHSeek(NodePtr a1,NodePtr a2);
#define nhc_sizeIOErrorHSeek (1+EXTRA+2)
#define IOErrorHSeek 7
extern NodePtr nhc_mkIOErrorHGetPosn(NodePtr a1,NodePtr a2);
#define nhc_sizeIOErrorHGetPosn (1+EXTRA+2)
#define IOErrorHGetPosn 8
extern NodePtr nhc_mkIOErrorHSetPosn(NodePtr a1,NodePtr a2);
#define nhc_sizeIOErrorHSetPosn (1+EXTRA+2)
#define IOErrorHSetPosn 9
extern NodePtr nhc_mkIOErrorHGetBuffering(NodePtr a1,NodePtr a2);
#define nhc_sizeIOErrorHGetBuffering (1+EXTRA+2)
#define IOErrorHGetBuffering 10
extern NodePtr nhc_mkIOErrorHSetBuffering(NodePtr a1,NodePtr a2);
#define nhc_sizeIOErrorHSetBuffering (1+EXTRA+2)
#define IOErrorHSetBuffering 11
extern NodePtr nhc_mkMkArray(NodePtr a1,NodePtr a2);
#define nhc_sizeMkArray (1+EXTRA+2)
#define MkArray 0
extern NodePtr nhc_mkComplex(NodePtr a1,NodePtr a2);
#define nhc_sizeComplex (1+EXTRA+2)
#define Complex 0
extern Node C0_IO_46NoBuffering[];
#define nhc_mkNoBuffering() ((NodePtr)C0_IO_46NoBuffering)
#define nhc_sizeNoBuffering 0
#define NoBuffering 0
extern Node C0_IO_46LineBuffering[];
#define nhc_mkLineBuffering() ((NodePtr)C0_IO_46LineBuffering)
#define nhc_sizeLineBuffering 0
#define LineBuffering 1
extern NodePtr nhc_mkBlockBuffering(NodePtr a1);
#define nhc_sizeBlockBuffering (1+EXTRA+1)
#define BlockBuffering 2
extern Node C0_IO_46ReadMode[];
#define nhc_mkReadMode() ((NodePtr)C0_IO_46ReadMode)
#define nhc_sizeReadMode 0
#define ReadMode 0
extern Node C0_IO_46WriteMode[];
#define nhc_mkWriteMode() ((NodePtr)C0_IO_46WriteMode)
#define nhc_sizeWriteMode 0
#define WriteMode 1
extern Node C0_IO_46AppendMode[];
#define nhc_mkAppendMode() ((NodePtr)C0_IO_46AppendMode)
#define nhc_sizeAppendMode 0
#define AppendMode 2
extern Node C0_IO_46ReadWriteMode[];
#define nhc_mkReadWriteMode() ((NodePtr)C0_IO_46ReadWriteMode)
#define nhc_sizeReadWriteMode 0
#define ReadWriteMode 3
extern Node C0_IO_46AbsoluteSeek[];
#define nhc_mkAbsoluteSeek() ((NodePtr)C0_IO_46AbsoluteSeek)
#define nhc_sizeAbsoluteSeek 0
#define AbsoluteSeek 0
extern Node C0_IO_46RelativeSeek[];
#define nhc_mkRelativeSeek() ((NodePtr)C0_IO_46RelativeSeek)
#define nhc_sizeRelativeSeek 0
#define RelativeSeek 1
extern Node C0_IO_46SeekFromEnd[];
#define nhc_mkSeekFromEnd() ((NodePtr)C0_IO_46SeekFromEnd)
#define nhc_sizeSeekFromEnd 0
#define SeekFromEnd 2
extern Node C0_IO_46SocketStream[];
#define nhc_mkSocketStream() ((NodePtr)C0_IO_46SocketStream)
#define nhc_sizeSocketStream 0
#define SocketStream 0
extern Node C0_IO_46SocketDatagram[];
#define nhc_mkSocketDatagram() ((NodePtr)C0_IO_46SocketDatagram)
#define nhc_sizeSocketDatagram 0
#define SocketDatagram 1
extern Node C0_IO_46SocketRaw[];
#define nhc_mkSocketRaw() ((NodePtr)C0_IO_46SocketRaw)
#define nhc_sizeSocketRaw 0
#define SocketRaw 2
extern NodePtr nhc_mkSocket(NodePtr a1);
#define nhc_sizeSocket (1+EXTRA+1)
#define Socket 0
extern Node C0_System_46ExitSuccess[];
#define nhc_mkExitSuccess() ((NodePtr)C0_System_46ExitSuccess)
#define nhc_sizeExitSuccess 0
#define ExitSuccess 0
extern NodePtr nhc_mkExitFailure(NodePtr a1);
#define nhc_sizeExitFailure (1+EXTRA+1)
#define ExitFailure 1

#endif
