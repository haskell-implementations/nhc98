module GcodeOpt2(gcodeOpt2) where

import Gcode

gcodeOpt2 state gcode = (peephole gcode, state)

peephole (HEAP_ARG i: HEAP_ARG j: RETURN_EVAL: gs) = HEAP_ARG_ARG_RET_EVAL i j: peephole gs
peephole (HEAP_ARG i: HEAP_ARG j: gs) = HEAP_ARG_ARG i j: peephole gs
peephole (g1@(PUSH_ARG i): g2@(ZAP_ARG j): gs)
		| i==j      = PUSH_ZAP_ARG i: peephole gs
		| otherwise = g1: g2: peephole gs
peephole (g:gs) = g: peephole gs
peephole []     = []
