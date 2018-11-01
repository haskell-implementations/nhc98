/* basic read/write from real memory locations, for primitive FFI */

#include "HsFFI.h"

#define ffi_write(T)	\
void	write##T##AtAddr (void* a, Hs##T d)	{ *(Hs##T*)a = d; }
#define ffi_read(T)	\
Hs##T	read##T##AtAddr  (void* a)		{ return *(Hs##T*)a; }

ffi_write(Char)
ffi_write(Int)
ffi_write(Float)
ffi_write(Double)
ffi_write(Addr)

ffi_read(Char)
ffi_read(Int)
ffi_read(Float)
ffi_read(Double)
ffi_read(Addr)

ffi_write(Int8)
ffi_write(Int16)
ffi_write(Int32)
ffi_write(Int64)
ffi_write(Word8)
ffi_write(Word16)
ffi_write(Word32)
ffi_write(Word64)

ffi_read(Int8)
ffi_read(Int16)
ffi_read(Int32)
ffi_read(Int64)
ffi_read(Word8)
ffi_read(Word16)
ffi_read(Word32)
ffi_read(Word64)

