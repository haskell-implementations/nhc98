#include "newmacros.h"
#include "mutlib.h"

#ifdef PROFILE
#define PROFINFO_Int  ,useLabel(prof_Int),4,2,3
#define PROFINFO_Char  ,useLabel(prof_Char),4,2,3
#define PROFINFO_True ,useLabel(prof_True),0,0,0
#define PROFINFO_False ,useLabel(prof_False),0,0,0

extern unsigned PM_Prelude[];
extern unsigned PP_compiletime[];

extern unsigned PC_Prelude__46Int[];
extern unsigned PC_Prelude__46Char[];
extern unsigned PC_Prelude_461[];
extern unsigned PC_Prelude_4613[];
extern unsigned PC_Prelude_4614[];
extern unsigned PC_Prelude_4615[];
extern unsigned PC_Prelude_4616[];
extern unsigned PC_Prelude_4617[];
extern unsigned PC_Prelude_4618[];
extern unsigned PC_Prelude_4619[];
extern unsigned PC_Prelude_4620[];

unsigned prof_Int[] = {
  useLabel(PM_Prelude)
, useLabel(PP_compiletime)
, useLabel(PC_Prelude__46Int)
};
unsigned prof_Char[] = {
  useLabel(PM_Prelude)
, useLabel(PP_compiletime)
, useLabel(PC_Prelude__46Char)
};
unsigned PC_Prelude__46Int[] = {
  bytes2word('P','r','e','l')
, bytes2word('u','d','e','.')
, bytes2word('I','n','t',0)
};
unsigned PC_Prelude__46Char[] = {
  bytes2word('P','r','e','l')
, bytes2word('u','d','e','.')
, bytes2word('C','h','a','r')
, 0
};
unsigned PC_Prelude_461[] = {
  bytes2word('P','r','e','l')
, bytes2word('u','d','e','.')
, bytes2word('1','-','t','u')
, bytes2word('p','l','e',0)
};
unsigned PC_Prelude_4613[] = {
  bytes2word('P','r','e','l')
, bytes2word('u','d','e','.')
, bytes2word('1','3','-','t')
, bytes2word('u','p','l','e')
, 0
};
unsigned PC_Prelude_4614[] = {
  bytes2word('P','r','e','l')
, bytes2word('u','d','e','.')
, bytes2word('1','4','-','t')
, bytes2word('u','p','l','e')
, 0
};
unsigned PC_Prelude_4615[] = {
  bytes2word('P','r','e','l')
, bytes2word('u','d','e','.')
, bytes2word('1','5','-','t')
, bytes2word('u','p','l','e')
, 0
};
unsigned PC_Prelude_4616[] = {
  bytes2word('P','r','e','l')
, bytes2word('u','d','e','.')
, bytes2word('1','6','-','t')
, bytes2word('u','p','l','e')
, 0
};
unsigned PC_Prelude_4617[] = {
  bytes2word('P','r','e','l')
, bytes2word('u','d','e','.')
, bytes2word('1','7','-','t')
, bytes2word('u','p','l','e')
, 0
};
unsigned PC_Prelude_4618[] = {
  bytes2word('P','r','e','l')
, bytes2word('u','d','e','.')
, bytes2word('1','8','-','t')
, bytes2word('u','p','l','e')
, 0
};
unsigned PC_Prelude_4619[] = {
  bytes2word('P','r','e','l')
, bytes2word('u','d','e','.')
, bytes2word('1','9','-','t')
, bytes2word('u','p','l','e')
, 0
};
unsigned PC_Prelude_4620[] = {
  bytes2word('P','r','e','l')
, bytes2word('u','d','e','.')
, bytes2word('2','0','-','t')
, bytes2word('u','p','l','e')
, 0
};

#if 0
extern unsigned PM_Prelude[];
unsigned PM_Prelude[] = {
  bytes2word('P','r','e','l')
, bytes2word('u','d','e',0)
};
#endif /*0*/

unsigned PP_compiletime[] = {
  bytes2word('<','c','o','m')
, bytes2word('p','i','l','e')
, bytes2word(' ','t','i','m')
, bytes2word('e','>',0,0)
};

#else
#define PROFINFO_Int
#define PROFINFO_Char
#define PROFINFO_True
#define PROFINFO_False
#endif /*PROFILE*/

/***************/



#define DEFINT(n)        CONSTRW(1,0) PROFINFO_Int  ,(unsigned)n
#define DEFCHAR(n)       CONSTRW(1,0) PROFINFO_Char ,(unsigned)n

Node ints[] = {
     DEFINT(-10)
,    DEFINT( -9)
,    DEFINT( -8)
,    DEFINT( -7)
,    DEFINT( -6)
,    DEFINT( -5)
,    DEFINT( -4)
,    DEFINT( -3)
,    DEFINT( -2)
,    DEFINT( -1)

,    DEFINT(  0)
,    DEFINT(  1)
,    DEFINT(  2)
,    DEFINT(  3)
,    DEFINT(  4)
,    DEFINT(  5)
,    DEFINT(  6)
,    DEFINT(  7)
,    DEFINT(  8)
,    DEFINT(  9)
,    DEFINT( 10)
,    DEFINT( 11)
,    DEFINT( 12)
,    DEFINT( 13)
,    DEFINT( 14)
,    DEFINT( 15)
,    DEFINT( 16)
,    DEFINT( 17)
,    DEFINT( 18)
,    DEFINT( 19)
,    DEFINT( 20)
,    DEFINT( 21)
,    DEFINT( 22)
,    DEFINT( 23)
,    DEFINT( 24)
,    DEFINT( 25)
,    DEFINT( 26)
,    DEFINT( 27)
,    DEFINT( 28)
,    DEFINT( 29)
,    DEFINT( 30)
,    DEFINT( 31)
,    DEFINT( 32)
,    DEFINT( 33)
,    DEFINT( 34)
,    DEFINT( 35)
,    DEFINT( 36)
,    DEFINT( 37)
,    DEFINT( 38)
,    DEFINT( 39)
,    DEFINT( 40)
,    DEFINT( 41)
,    DEFINT( 42)
,    DEFINT( 43)
,    DEFINT( 44)
,    DEFINT( 45)
,    DEFINT( 46)
,    DEFINT( 47)
,    DEFINT( 48)
,    DEFINT( 49)
,    DEFINT( 50)
,    DEFINT( 51)
,    DEFINT( 52)
,    DEFINT( 53)
,    DEFINT( 54)
,    DEFINT( 55)
,    DEFINT( 56)
,    DEFINT( 57)
,    DEFINT( 58)
,    DEFINT( 59)
,    DEFINT( 60)
,    DEFINT( 61)
,    DEFINT( 62)
,    DEFINT( 63)
,    DEFINT( 64)
,    DEFINT( 65)
,    DEFINT( 66)
,    DEFINT( 67)
,    DEFINT( 68)
,    DEFINT( 69)
,    DEFINT( 70)
,    DEFINT( 71)
,    DEFINT( 72)
,    DEFINT( 73)
,    DEFINT( 74)
,    DEFINT( 75)
,    DEFINT( 76)
,    DEFINT( 77)
,    DEFINT( 78)
,    DEFINT( 79)
,    DEFINT( 80)
,    DEFINT( 81)
,    DEFINT( 82)
,    DEFINT( 83)
,    DEFINT( 84)
,    DEFINT( 85)
,    DEFINT( 86)
,    DEFINT( 87)
,    DEFINT( 88)
,    DEFINT( 89)
,    DEFINT( 90)
,    DEFINT( 91)
,    DEFINT( 92)
,    DEFINT( 93)
,    DEFINT( 94)
,    DEFINT( 95)
,    DEFINT( 96)
,    DEFINT( 97)
,    DEFINT( 98)
,    DEFINT( 99)

,    DEFINT(100)
,    DEFINT(101)
,    DEFINT(102)
,    DEFINT(103)
,    DEFINT(104)
,    DEFINT(105)
,    DEFINT(106)
,    DEFINT(107)
,    DEFINT(108)
,    DEFINT(109)
,    DEFINT(110)
,    DEFINT(111)
,    DEFINT(112)
,    DEFINT(113)
,    DEFINT(114)
,    DEFINT(115)
,    DEFINT(116)
,    DEFINT(117)
,    DEFINT(118)
,    DEFINT(119)
,    DEFINT(120)
,    DEFINT(121)
,    DEFINT(122)
,    DEFINT(123)
,    DEFINT(124)
,    DEFINT(125)
,    DEFINT(126)
,    DEFINT(127)
,    DEFINT(128)
,    DEFINT(129)
,    DEFINT(130)
,    DEFINT(131)
,    DEFINT(132)
,    DEFINT(133)
,    DEFINT(134)
,    DEFINT(135)
,    DEFINT(136)
,    DEFINT(137)
,    DEFINT(138)
,    DEFINT(139)
,    DEFINT(140)
,    DEFINT(141)
,    DEFINT(142)
,    DEFINT(143)
,    DEFINT(144)
,    DEFINT(145)
,    DEFINT(146)
,    DEFINT(147)
,    DEFINT(148)
,    DEFINT(149)
,    DEFINT(150)
,    DEFINT(151)
,    DEFINT(152)
,    DEFINT(153)
,    DEFINT(154)
,    DEFINT(155)
,    DEFINT(156)
,    DEFINT(157)
,    DEFINT(158)
,    DEFINT(159)
,    DEFINT(160)
,    DEFINT(161)
,    DEFINT(162)
,    DEFINT(163)
,    DEFINT(164)
,    DEFINT(165)
,    DEFINT(166)
,    DEFINT(167)
,    DEFINT(168)
,    DEFINT(169)
,    DEFINT(170)
,    DEFINT(171)
,    DEFINT(172)
,    DEFINT(173)
,    DEFINT(174)
,    DEFINT(175)
,    DEFINT(176)
,    DEFINT(177)
,    DEFINT(178)
,    DEFINT(179)
,    DEFINT(180)
,    DEFINT(181)
,    DEFINT(182)
,    DEFINT(183)
,    DEFINT(184)
,    DEFINT(185)
,    DEFINT(186)
,    DEFINT(187)
,    DEFINT(188)
,    DEFINT(189)
,    DEFINT(190)
,    DEFINT(191)
,    DEFINT(192)
,    DEFINT(193)
,    DEFINT(194)
,    DEFINT(195)
,    DEFINT(196)
,    DEFINT(197)
,    DEFINT(198)
,    DEFINT(199)

,    DEFINT(200)
,    DEFINT(201)
,    DEFINT(202)
,    DEFINT(203)
,    DEFINT(204)
,    DEFINT(205)
,    DEFINT(206)
,    DEFINT(207)
,    DEFINT(208)
,    DEFINT(209)
,    DEFINT(210)
,    DEFINT(211)
,    DEFINT(212)
,    DEFINT(213)
,    DEFINT(214)
,    DEFINT(215)
,    DEFINT(216)
,    DEFINT(217)
,    DEFINT(218)
,    DEFINT(219)
,    DEFINT(220)
,    DEFINT(221)
,    DEFINT(222)
,    DEFINT(223)
,    DEFINT(224)
,    DEFINT(225)
,    DEFINT(226)
,    DEFINT(227)
,    DEFINT(228)
,    DEFINT(229)
,    DEFINT(230)
,    DEFINT(231)
,    DEFINT(232)
,    DEFINT(233)
,    DEFINT(234)
,    DEFINT(235)
,    DEFINT(236)
,    DEFINT(237)
,    DEFINT(238)
,    DEFINT(239)
,    DEFINT(240)
,    DEFINT(241)
,    DEFINT(242)
,    DEFINT(243)
,    DEFINT(244)
,    DEFINT(245)
,    DEFINT(246)
,    DEFINT(247)
,    DEFINT(248)
,    DEFINT(249)
,    DEFINT(250)
,    DEFINT(251)
,    DEFINT(252)
,    DEFINT(253)
,    DEFINT(254)
,    DEFINT(255)
,    DEFINT(256)
};

Node chars[] = {
     DEFCHAR( -1)

,    DEFCHAR(  0)
,    DEFCHAR(  1)
,    DEFCHAR(  2)
,    DEFCHAR(  3)
,    DEFCHAR(  4)
,    DEFCHAR(  5)
,    DEFCHAR(  6)
,    DEFCHAR(  7)
,    DEFCHAR(  8)
,    DEFCHAR(  9)
,    DEFCHAR( 10)
,    DEFCHAR( 11)
,    DEFCHAR( 12)
,    DEFCHAR( 13)
,    DEFCHAR( 14)
,    DEFCHAR( 15)
,    DEFCHAR( 16)
,    DEFCHAR( 17)
,    DEFCHAR( 18)
,    DEFCHAR( 19)
,    DEFCHAR( 20)
,    DEFCHAR( 21)
,    DEFCHAR( 22)
,    DEFCHAR( 23)
,    DEFCHAR( 24)
,    DEFCHAR( 25)
,    DEFCHAR( 26)
,    DEFCHAR( 27)
,    DEFCHAR( 28)
,    DEFCHAR( 29)
,    DEFCHAR( 30)
,    DEFCHAR( 31)
,    DEFCHAR( 32)
,    DEFCHAR( 33)
,    DEFCHAR( 34)
,    DEFCHAR( 35)
,    DEFCHAR( 36)
,    DEFCHAR( 37)
,    DEFCHAR( 38)
,    DEFCHAR( 39)
,    DEFCHAR( 40)
,    DEFCHAR( 41)
,    DEFCHAR( 42)
,    DEFCHAR( 43)
,    DEFCHAR( 44)
,    DEFCHAR( 45)
,    DEFCHAR( 46)
,    DEFCHAR( 47)
,    DEFCHAR( 48)
,    DEFCHAR( 49)
,    DEFCHAR( 50)
,    DEFCHAR( 51)
,    DEFCHAR( 52)
,    DEFCHAR( 53)
,    DEFCHAR( 54)
,    DEFCHAR( 55)
,    DEFCHAR( 56)
,    DEFCHAR( 57)
,    DEFCHAR( 58)
,    DEFCHAR( 59)
,    DEFCHAR( 60)
,    DEFCHAR( 61)
,    DEFCHAR( 62)
,    DEFCHAR( 63)
,    DEFCHAR( 64)
,    DEFCHAR( 65)
,    DEFCHAR( 66)
,    DEFCHAR( 67)
,    DEFCHAR( 68)
,    DEFCHAR( 69)
,    DEFCHAR( 70)
,    DEFCHAR( 71)
,    DEFCHAR( 72)
,    DEFCHAR( 73)
,    DEFCHAR( 74)
,    DEFCHAR( 75)
,    DEFCHAR( 76)
,    DEFCHAR( 77)
,    DEFCHAR( 78)
,    DEFCHAR( 79)
,    DEFCHAR( 80)
,    DEFCHAR( 81)
,    DEFCHAR( 82)
,    DEFCHAR( 83)
,    DEFCHAR( 84)
,    DEFCHAR( 85)
,    DEFCHAR( 86)
,    DEFCHAR( 87)
,    DEFCHAR( 88)
,    DEFCHAR( 89)
,    DEFCHAR( 90)
,    DEFCHAR( 91)
,    DEFCHAR( 92)
,    DEFCHAR( 93)
,    DEFCHAR( 94)
,    DEFCHAR( 95)
,    DEFCHAR( 96)
,    DEFCHAR( 97)
,    DEFCHAR( 98)
,    DEFCHAR( 99)

,    DEFCHAR(100)
,    DEFCHAR(101)
,    DEFCHAR(102)
,    DEFCHAR(103)
,    DEFCHAR(104)
,    DEFCHAR(105)
,    DEFCHAR(106)
,    DEFCHAR(107)
,    DEFCHAR(108)
,    DEFCHAR(109)
,    DEFCHAR(110)
,    DEFCHAR(111)
,    DEFCHAR(112)
,    DEFCHAR(113)
,    DEFCHAR(114)
,    DEFCHAR(115)
,    DEFCHAR(116)
,    DEFCHAR(117)
,    DEFCHAR(118)
,    DEFCHAR(119)
,    DEFCHAR(120)
,    DEFCHAR(121)
,    DEFCHAR(122)
,    DEFCHAR(123)
,    DEFCHAR(124)
,    DEFCHAR(125)
,    DEFCHAR(126)
,    DEFCHAR(127)
,    DEFCHAR(128)
,    DEFCHAR(129)
,    DEFCHAR(130)
,    DEFCHAR(131)
,    DEFCHAR(132)
,    DEFCHAR(133)
,    DEFCHAR(134)
,    DEFCHAR(135)
,    DEFCHAR(136)
,    DEFCHAR(137)
,    DEFCHAR(138)
,    DEFCHAR(139)
,    DEFCHAR(140)
,    DEFCHAR(141)
,    DEFCHAR(142)
,    DEFCHAR(143)
,    DEFCHAR(144)
,    DEFCHAR(145)
,    DEFCHAR(146)
,    DEFCHAR(147)
,    DEFCHAR(148)
,    DEFCHAR(149)
,    DEFCHAR(150)
,    DEFCHAR(151)
,    DEFCHAR(152)
,    DEFCHAR(153)
,    DEFCHAR(154)
,    DEFCHAR(155)
,    DEFCHAR(156)
,    DEFCHAR(157)
,    DEFCHAR(158)
,    DEFCHAR(159)
,    DEFCHAR(160)
,    DEFCHAR(161)
,    DEFCHAR(162)
,    DEFCHAR(163)
,    DEFCHAR(164)
,    DEFCHAR(165)
,    DEFCHAR(166)
,    DEFCHAR(167)
,    DEFCHAR(168)
,    DEFCHAR(169)
,    DEFCHAR(170)
,    DEFCHAR(171)
,    DEFCHAR(172)
,    DEFCHAR(173)
,    DEFCHAR(174)
,    DEFCHAR(175)
,    DEFCHAR(176)
,    DEFCHAR(177)
,    DEFCHAR(178)
,    DEFCHAR(179)
,    DEFCHAR(180)
,    DEFCHAR(181)
,    DEFCHAR(182)
,    DEFCHAR(183)
,    DEFCHAR(184)
,    DEFCHAR(185)
,    DEFCHAR(186)
,    DEFCHAR(187)
,    DEFCHAR(188)
,    DEFCHAR(189)
,    DEFCHAR(190)
,    DEFCHAR(191)
,    DEFCHAR(192)
,    DEFCHAR(193)
,    DEFCHAR(194)
,    DEFCHAR(195)
,    DEFCHAR(196)
,    DEFCHAR(197)
,    DEFCHAR(198)
,    DEFCHAR(199)

,    DEFCHAR(200)
,    DEFCHAR(201)
,    DEFCHAR(202)
,    DEFCHAR(203)
,    DEFCHAR(204)
,    DEFCHAR(205)
,    DEFCHAR(206)
,    DEFCHAR(207)
,    DEFCHAR(208)
,    DEFCHAR(209)
,    DEFCHAR(210)
,    DEFCHAR(211)
,    DEFCHAR(212)
,    DEFCHAR(213)
,    DEFCHAR(214)
,    DEFCHAR(215)
,    DEFCHAR(216)
,    DEFCHAR(217)
,    DEFCHAR(218)
,    DEFCHAR(219)
,    DEFCHAR(220)
,    DEFCHAR(221)
,    DEFCHAR(222)
,    DEFCHAR(223)
,    DEFCHAR(224)
,    DEFCHAR(225)
,    DEFCHAR(226)
,    DEFCHAR(227)
,    DEFCHAR(228)
,    DEFCHAR(229)
,    DEFCHAR(230)
,    DEFCHAR(231)
,    DEFCHAR(232)
,    DEFCHAR(233)
,    DEFCHAR(234)
,    DEFCHAR(235)
,    DEFCHAR(236)
,    DEFCHAR(237)
,    DEFCHAR(238)
,    DEFCHAR(239)
,    DEFCHAR(240)
,    DEFCHAR(241)
,    DEFCHAR(242)
,    DEFCHAR(243)
,    DEFCHAR(244)
,    DEFCHAR(245)
,    DEFCHAR(246)
,    DEFCHAR(247)
,    DEFCHAR(248)
,    DEFCHAR(249)
,    DEFCHAR(250)
,    DEFCHAR(251)
,    DEFCHAR(252)
,    DEFCHAR(253)
,    DEFCHAR(254)
,    DEFCHAR(255)
,    DEFCHAR(256)
};