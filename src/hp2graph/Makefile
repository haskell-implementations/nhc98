include Makefile.inc

OBJDIR = $(BUILDDIR)/$(OBJ)/hp2graph
TARGET = $(DST)/hp2graph$(EXE)

SRCS = \
	area.c axes.c bioBio.c bioStatic.c comment.c \
	curves.c dimensions.c draw.c entry.c job.c key.c lex.c main.c mark.c \
	mem.c mif.c parse.c ps.c putfile.c sample.c scale.c sort.c \
	trcelement.c auxil.c life.c

OBJS = $(patsubst %.c,$(OBJDIR)/%.o,${SRCS})

# Please set MATHLIB and DSTBIN appropriately. I don't need MATHLIB on
# my machine, but you may.
MATHLIB = -lm

CFLAGS= -DUNIX ${ARCH} $(shell echo ${COPTS})
#CFLAGS= -g -DUNIX
LDFLAGS= 


all: ${TARGET}
depend:
	makedepend -- $(CFLAGS) -- $(SRCS)
clean:
	rm -f core $(OBJDIR)/*.o
realclean: clean
	rm -f ${TARGET}


$(OBJDIR):
	mkdir -p $(OBJDIR) || $(TRUE)

$(OBJS): $(OBJDIR)/%.o: %.c
	$(CC) -c $(CFLAGS) -o $@ $<

${TARGET}: $(OBJDIR) ${OBJS}
	${CC} ${CFLAGS} -o ${TARGET} ${CCFLAGS} ${LDFLAGS} ${OBJS} ${MATHLIB}
	$(STRIP) ${TARGET}



# DO NOT DELETE THIS LINE -- make depend depends on it.
auxil.o: hp2graph.h output.h
area.o: hp2graph.h
axes.o: hp2graph.h  output.h  format.h
bioBio.o: hp2graph.h
bioStatic.o: hp2graph.h
comment.o: hp2graph.h
curves.o: hp2graph.h  output.h format.h
dimensions.o: hp2graph.h  output.h
draw.o: hp2graph.h  format.h  output.h  draw.h
entry.o: hp2graph.h
job.o: hp2graph.h
key.o: hp2graph.h  output.h  format.h
lex.o: hp2graph.h
life.o: hp2graph.h
main.o: hp2graph.h output.h format.h
mark.o: hp2graph.h
mem.o: hp2graph.h
mif.o: hp2graph.h  format.h output.h
parse.o: hp2graph.h
ps.o: hp2graph.h format.h output.h
putfile.o: hp2graph.h output.h  format.h
sample.o: hp2graph.h
scale.o: hp2graph.h
sort.o: hp2graph.h
trcelement.o: hp2graph.h output.h

