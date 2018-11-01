#include "newmacros.h"
#include "runtime.h"

#define PS_IO_46SocketRaw	((void*)startLabel+20)
#define PS_IO_46SocketDatagram	((void*)startLabel+52)
#define PS_IO_46SocketStream	((void*)startLabel+80)

static Node startLabel[] = {
  42
,};
Node PP_IO_46SocketRaw[] = {
 };
Node PC_IO_46SocketRaw[] = {
  bytes2word(73,79,46,83)
, bytes2word(111,99,107,101)
, bytes2word(116,82,97,119)
, bytes2word(0,0,0,0)
,	/* PS_IO_46SocketRaw: (byte 0) */
  useLabel(PP_IO_46SocketRaw)
, useLabel(PP_IO_46SocketRaw)
, useLabel(PC_IO_46SocketRaw)
,};
Node PP_IO_46SocketDatagram[] = {
 };
Node PC_IO_46SocketDatagram[] = {
  bytes2word(73,79,46,83)
, bytes2word(111,99,107,101)
, bytes2word(116,68,97,116)
, bytes2word(97,103,114,97)
, bytes2word(109,0,0,0)
,	/* PS_IO_46SocketDatagram: (byte 0) */
  useLabel(PP_IO_46SocketDatagram)
, useLabel(PP_IO_46SocketDatagram)
, useLabel(PC_IO_46SocketDatagram)
,};
Node PP_IO_46SocketStream[] = {
 };
Node PC_IO_46SocketStream[] = {
  bytes2word(73,79,46,83)
, bytes2word(111,99,107,101)
, bytes2word(116,83,116,114)
, bytes2word(101,97,109,0)
,	/* PS_IO_46SocketStream: (byte 0) */
  useLabel(PP_IO_46SocketStream)
, useLabel(PP_IO_46SocketStream)
, useLabel(PC_IO_46SocketStream)
,};
Node C0_IO_46SocketRaw[] = {
  CONSTR(2,0,0)
, useLabel(PS_IO_46SocketRaw)
, 0
, 0
, 0
,};
Node C0_IO_46SocketDatagram[] = {
  CONSTR(1,0,0)
, useLabel(PS_IO_46SocketDatagram)
, 0
, 0
, 0
,};
Node C0_IO_46SocketStream[] = {
  CONSTR(0,0,0)
, useLabel(PS_IO_46SocketStream)
, 0
, 0
, 0
,};
