include Makefile.inc

DIR=Integer
OBJDIR=${BUILDDIR}/${OBJ}/runtime/${DIR}

SRCS    = mpz_add.c mpz_sub.c mpz_mul.c mpz_div.c  mpz_mod.c  mpz_neg.c \
	 mpz_abs.c mpz_cmp.c mpz_or.c mpz_and.c mpn_cmp.c mpn_sub.c \
	 mpn_div.c mpn_add.c mp_clz_tab.c mpn_lshift.c mpn_mul.c mpn_rshift.c \
	 fltcode.c dblcode.c alloca.c

OBJS = $(patsubst %.c,${OBJDIR}/%.o,${SRCS})


HEADERS = gmp-mparam.h

WARNING = $(shell if [ $(GCCVERSION) \> 4.2 ]; then echo -Wno-pointer-to-int-cast; fi )

CFLAGS= -I../Kernel -I${INCDIR} ${DCFG} ${OPT} ${ENDIAN} ${ARCH} \
	$(shell echo ${COPTS}) $(WARNING)

LINKS = flt.h

links:
	@cd ${INCDIR}; \
	for f in ${LINKS}; do \
        ln -s ../src/runtime/${DIR}/$$f >/dev/null 2>&1 || \
            echo "Link ${INCDIR}/$$f already exists."; \
    done
nolinks:
	@for f in ${LINKS}; do \
        rm -f ${INCDIR}/$$f; \
    done

${OBJS}: ${OBJDIR}/%.o: %.c
	${CC} -c ${CFLAGS} -o $@ $<

all: links ${HEADERS} $(OBJS)

${OBJDIR}:
	mkdir -p ${OBJDIR}

objdir: ${OBJDIR}

mp_bases.c: $(OBJDIR)/cre-conv-tab
	$(OBJDIR)/cre-conv-tab > tmp-$@
	mv tmp-$@ $@
$(OBJDIR)/cre-conv-tab: cre-conv-tab.c longlong.h asmlong.h
	$(CC) $(CFLAGS) `if [ x$(firstword $^) = x ];	\
			       then echo cre-conv-tab.c;		\
			       else echo $(firstword $^); fi` -o $@ -lm

gmp-mparam.h: $(OBJDIR)/cre-mparam
	$(OBJDIR)/cre-mparam > tmp-$@
	mv tmp-$@ $@
$(OBJDIR)/cre-mparam: cre-mparam.c gmp.h haskell2c.h 
	$(HOSTCC) $(CFLAGS) `if [ x$(firstword $^) = x ];	\
			       then echo cre-mparam.c;		\
			       else echo $(firstword $^); fi` -o $@

clean:
	rm -f ${OBJS}
	rm -f *.o $(OBJDIR)/cre-conv-tab $(OBJDIR)/cre-mparam cre-stddefh \
 gmp.dvi gmp.info mp_bases.c gmp-mparam.h stamp-stddefh test-with-stddefh.c \
 stddef.h gcd.c pow.c rpow.c madd.c msub.c mult.c mcmp.c tmp.* tmp-*

# Automatically generated dependencies

xmem.o : xmem.c xmem.h

_mpz_get_str.o : _mpz_get_str.c gmp.h haskell2c.h  gmp-impl.h gmp-mparam.h longlong.h asmlong.h 
_mpz_set_str.o : _mpz_set_str.c gmp.h haskell2c.h  gmp-impl.h gmp-mparam.h longlong.h asmlong.h 
itom.o : itom.c mp.h gmp.h haskell2c.h  gmp-impl.h gmp-mparam.h 
mcmp.o : mcmp.c mp.h gmp.h haskell2c.h  gmp-impl.h gmp-mparam.h 
mdiv.o : mdiv.c mp.h gmp.h haskell2c.h  gmp-impl.h gmp-mparam.h longlong.h asmlong.h mpz_dmincl.c 
memory.o : memory.c gmp.h haskell2c.h  gmp-impl.h gmp-mparam.h 
mfree.o : mfree.c mp.h gmp.h haskell2c.h  gmp-impl.h gmp-mparam.h 
min.o : min.c mp.h gmp.h haskell2c.h  gmp-impl.h gmp-mparam.h 
mout.o : mout.c mp.h gmp.h haskell2c.h  gmp-impl.h gmp-mparam.h 
move.o : move.c mp.h gmp.h haskell2c.h  gmp-impl.h gmp-mparam.h 
mp_clz_tab.o : mp_clz_tab.c gmp.h haskell2c.h  gmp-impl.h gmp-mparam.h 
mp_set_fns.o : mp_set_fns.c gmp.h haskell2c.h  gmp-impl.h gmp-mparam.h 
mpn_add.o : mpn_add.c gmp.h haskell2c.h  gmp-impl.h gmp-mparam.h 
mpn_cmp.o : mpn_cmp.c gmp.h haskell2c.h  gmp-impl.h gmp-mparam.h 
mpn_div.o : mpn_div.c gmp.h haskell2c.h  gmp-impl.h gmp-mparam.h longlong.h asmlong.h 
mpn_lshift.o : mpn_lshift.c gmp.h haskell2c.h  gmp-impl.h gmp-mparam.h 
mpn_mul.o : mpn_mul.c gmp.h haskell2c.h  gmp-impl.h gmp-mparam.h longlong.h asmlong.h 
mpn_rshift.o : mpn_rshift.c gmp.h haskell2c.h  gmp-impl.h gmp-mparam.h 
mpn_rshiftci.o : mpn_rshiftci.c gmp.h haskell2c.h  gmp-impl.h gmp-mparam.h 
mpn_sub.o : mpn_sub.c gmp.h haskell2c.h  gmp-impl.h gmp-mparam.h 
mpq_add.o : mpq_add.c gmp.h haskell2c.h  gmp-impl.h gmp-mparam.h 
mpq_clear.o : mpq_clear.c gmp.h haskell2c.h  gmp-impl.h gmp-mparam.h 
mpq_cmp.o : mpq_cmp.c gmp.h haskell2c.h  gmp-impl.h gmp-mparam.h 
mpq_div.o : mpq_div.c gmp.h haskell2c.h  gmp-impl.h gmp-mparam.h 
mpq_get_den.o : mpq_get_den.c gmp.h haskell2c.h  gmp-impl.h gmp-mparam.h 
mpq_get_num.o : mpq_get_num.c gmp.h haskell2c.h  gmp-impl.h gmp-mparam.h 
mpq_init.o : mpq_init.c gmp.h haskell2c.h  gmp-impl.h gmp-mparam.h 
mpq_inv.o : mpq_inv.c gmp.h haskell2c.h  gmp-impl.h gmp-mparam.h 
mpq_mul.o : mpq_mul.c gmp.h haskell2c.h  gmp-impl.h gmp-mparam.h 
mpq_neg.o : mpq_neg.c gmp.h haskell2c.h  gmp-impl.h gmp-mparam.h 
mpq_set.o : mpq_set.c gmp.h haskell2c.h  gmp-impl.h gmp-mparam.h 
mpq_set_den.o : mpq_set_den.c gmp.h haskell2c.h  gmp-impl.h gmp-mparam.h 
mpq_set_num.o : mpq_set_num.c gmp.h haskell2c.h  gmp-impl.h gmp-mparam.h 
mpq_set_si.o : mpq_set_si.c gmp.h haskell2c.h  gmp-impl.h gmp-mparam.h 
mpq_set_ui.o : mpq_set_ui.c gmp.h haskell2c.h  gmp-impl.h gmp-mparam.h 
mpq_sub.o : mpq_sub.c gmp.h haskell2c.h  gmp-impl.h gmp-mparam.h 
mpz_abs.o : mpz_abs.c gmp.h haskell2c.h  gmp-impl.h gmp-mparam.h 
mpz_add.o : mpz_add.c gmp.h haskell2c.h  gmp-impl.h gmp-mparam.h 
mpz_and.o : mpz_and.c gmp.h haskell2c.h  gmp-impl.h gmp-mparam.h 
mpz_or.o : mpz_or.c gmp.h haskell2c.h  gmp-impl.h gmp-mparam.h 
mpz_add_ui.o : mpz_add_ui.c gmp.h haskell2c.h  gmp-impl.h gmp-mparam.h 
mpz_and.o : mpz_and.c gmp.h haskell2c.h  gmp-impl.h gmp-mparam.h 
mpz_clear.o : mpz_clear.c gmp.h haskell2c.h  gmp-impl.h gmp-mparam.h 
mpz_clrbit.o : mpz_clrbit.c gmp.h haskell2c.h  gmp-impl.h gmp-mparam.h
mpz_cmp.o : mpz_cmp.c gmp.h haskell2c.h  gmp-impl.h gmp-mparam.h 
mpz_cmp_si.o : mpz_cmp_si.c gmp.h haskell2c.h  gmp-impl.h gmp-mparam.h 
mpz_cmp_ui.o : mpz_cmp_ui.c gmp.h haskell2c.h  gmp-impl.h gmp-mparam.h 
mpz_div.o : mpz_div.c gmp.h haskell2c.h  gmp-impl.h gmp-mparam.h longlong.h asmlong.h 
mpz_div_2exp.o : mpz_div_2exp.c gmp.h haskell2c.h  gmp-impl.h gmp-mparam.h 
mpz_div_ui.o : mpz_div_ui.c gmp.h haskell2c.h  gmp-impl.h gmp-mparam.h longlong.h asmlong.h 
mpz_dm.o : mpz_dm.c gmp.h haskell2c.h  gmp-impl.h gmp-mparam.h longlong.h asmlong.h mpz_dmincl.c 
mpz_dm_ui.o : mpz_dm_ui.c gmp.h haskell2c.h  gmp-impl.h gmp-mparam.h longlong.h asmlong.h 
mpz_do_sqrt.o : mpz_do_sqrt.c gmp.h haskell2c.h  gmp-impl.h gmp-mparam.h longlong.h asmlong.h 
mpz_fac_ui.o : mpz_fac_ui.c gmp.h haskell2c.h  gmp-impl.h gmp-mparam.h longlong.h asmlong.h
mpz_gcd.o : mpz_gcd.c gmp.h haskell2c.h  gmp-impl.h gmp-mparam.h longlong.h asmlong.h 
mpz_gcdext.o : mpz_gcdext.c gmp.h haskell2c.h  gmp-impl.h gmp-mparam.h 
mpz_get_str.o : mpz_get_str.c gmp.h haskell2c.h  gmp-impl.h gmp-mparam.h 
mpz_get_si.o : mpz_get_si.c gmp.h haskell2c.h  gmp-impl.h gmp-mparam.h 
mpz_get_ui.o : mpz_get_ui.c gmp.h haskell2c.h  gmp-impl.h gmp-mparam.h 
mpz_init.o : mpz_init.c gmp.h haskell2c.h  gmp-impl.h gmp-mparam.h 
mpz_inp_raw.o : mpz_inp_raw.c gmp.h haskell2c.h  gmp-impl.h gmp-mparam.h 
mpz_inp_str.o : mpz_inp_str.c gmp.h haskell2c.h  gmp-impl.h gmp-mparam.h 
mpz_ior.o : mpz_ior.c gmp.h haskell2c.h  gmp-impl.h gmp-mparam.h 
mpz_iset.o : mpz_iset.c gmp.h haskell2c.h  gmp-impl.h gmp-mparam.h 
mpz_iset_si.o : mpz_iset_si.c gmp.h haskell2c.h  gmp-impl.h gmp-mparam.h 
mpz_iset_str.o : mpz_iset_str.c gmp.h haskell2c.h  gmp-impl.h gmp-mparam.h 
mpz_iset_ui.o : mpz_iset_ui.c gmp.h haskell2c.h  gmp-impl.h gmp-mparam.h 
mpz_mdiv.o : mpz_mdiv.c gmp.h haskell2c.h  gmp-impl.h gmp-mparam.h 
mpz_mdiv_ui.o : mpz_mdiv_ui.c gmp.h haskell2c.h  gmp-impl.h gmp-mparam.h 
mpz_mdm.o : mpz_mdm.c gmp.h haskell2c.h  gmp-impl.h gmp-mparam.h 
mpz_mdm_ui.o : mpz_mdm_ui.c gmp.h haskell2c.h  gmp-impl.h gmp-mparam.h 
mpz_mmod.o : mpz_mmod.c gmp.h haskell2c.h  gmp-impl.h gmp-mparam.h 
mpz_mmod_ui.o : mpz_mmod_ui.c gmp.h haskell2c.h  gmp-impl.h gmp-mparam.h 
mpz_mod.o : mpz_mod.c gmp.h haskell2c.h  gmp-impl.h gmp-mparam.h longlong.h asmlong.h mpz_dmincl.c 
mpz_mod_2exp.o : mpz_mod_2exp.c gmp.h haskell2c.h  gmp-impl.h gmp-mparam.h 
mpz_mod_ui.o : mpz_mod_ui.c gmp.h haskell2c.h  gmp-impl.h gmp-mparam.h longlong.h asmlong.h 
mpz_mul.o : mpz_mul.c gmp.h haskell2c.h  gmp-impl.h gmp-mparam.h 
mpz_mul_2exp.o : mpz_mul_2exp.c gmp.h haskell2c.h  gmp-impl.h gmp-mparam.h 
mpz_mul_ui.o : mpz_mul_ui.c gmp.h haskell2c.h  gmp-impl.h gmp-mparam.h longlong.h asmlong.h 
mpz_neg.o : mpz_neg.c gmp.h haskell2c.h  gmp-impl.h gmp-mparam.h 
mpz_com.o : mpz_com.c gmp.h haskell2c.h  gmp-impl.h gmp-mparam.h 
mpz_out_raw.o : mpz_out_raw.c gmp.h haskell2c.h  gmp-impl.h gmp-mparam.h 
mpz_out_str.o : mpz_out_str.c gmp.h haskell2c.h  gmp-impl.h gmp-mparam.h 
mpz_perfsqr.o : mpz_perfsqr.c gmp.h haskell2c.h  gmp-impl.h gmp-mparam.h longlong.h asmlong.h 
mpz_pow_ui.o : mpz_pow_ui.c gmp.h haskell2c.h  gmp-impl.h gmp-mparam.h longlong.h asmlong.h 
mpz_powm.o : mpz_powm.c gmp.h haskell2c.h  gmp-impl.h gmp-mparam.h longlong.h asmlong.h 
mpz_powm_ui.o : mpz_powm_ui.c gmp.h haskell2c.h  gmp-impl.h gmp-mparam.h longlong.h asmlong.h 
mpz_pprime_p.o : mpz_pprime_p.c gmp.h haskell2c.h  gmp-impl.h gmp-mparam.h
mpz_random.o : mpz_random.c gmp.h haskell2c.h  gmp-impl.h gmp-mparam.h 
mpz_random2.o : mpz_random2.c gmp.h haskell2c.h  gmp-impl.h gmp-mparam.h 
mpz_realloc.o : mpz_realloc.c gmp.h haskell2c.h  gmp-impl.h gmp-mparam.h 
mpz_set.o : mpz_set.c gmp.h haskell2c.h  gmp-impl.h gmp-mparam.h 
mpz_set_si.o : mpz_set_si.c gmp.h haskell2c.h  gmp-impl.h gmp-mparam.h 
mpz_set_str.o : mpz_set_str.c gmp.h haskell2c.h  gmp-impl.h gmp-mparam.h longlong.h asmlong.h 
mpz_set_ui.o : mpz_set_ui.c gmp.h haskell2c.h  gmp-impl.h gmp-mparam.h 
mpz_size.o : mpz_size.c gmp.h haskell2c.h  gmp-impl.h gmp-mparam.h 
mpz_sizeinb.o : mpz_sizeinb.c gmp.h haskell2c.h  gmp-impl.h gmp-mparam.h 
mpz_sqrt.o : mpz_sqrt.c gmp.h haskell2c.h  gmp-impl.h gmp-mparam.h 
mpz_sqrtrem.o : mpz_sqrtrem.c gmp.h haskell2c.h  gmp-impl.h gmp-mparam.h 
mpz_sub.o : mpz_sub.c gmp.h haskell2c.h  gmp-impl.h gmp-mparam.h 
mpz_sub_ui.o : mpz_sub_ui.c gmp.h haskell2c.h  gmp-impl.h gmp-mparam.h 
msqrt.o : msqrt.c mp.h gmp.h haskell2c.h  gmp-impl.h gmp-mparam.h 
mtox.o : mtox.c mp.h gmp.h haskell2c.h  gmp-impl.h gmp-mparam.h 
rpow.o : rpow.c mp.h gmp.h haskell2c.h  gmp-impl.h gmp-mparam.h longlong.h asmlong.h 
sdiv.o : sdiv.c mp.h gmp.h haskell2c.h  gmp-impl.h gmp-mparam.h longlong.h asmlong.h 
xtom.o : xtom.c mp.h gmp.h haskell2c.h  gmp-impl.h gmp-mparam.h 
