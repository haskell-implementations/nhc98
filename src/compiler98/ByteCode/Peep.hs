-- | Do very simple peephole optimisations, mostly to do with slides and pops
module ByteCode.Peep(bcPeep) where

import ByteCode.Type
import ByteCode.Metric

-- | Simple peephole optimizer
bcPeep :: BCModule -> BCModule
bcPeep m = m { bcmDecls = map peepDecl $ bcmDecls m }

peepDecl :: BCDecl -> BCDecl
peepDecl (Fun n p z as cs cn pr sk nd fl) = Fun n p z as (peepCode cs) cn pr sk nd fl
peepDecl x                                = x

peepCode :: Code -> Code
peepCode (CLinear is) = CLinear is'
    where
    (cs,us) = unzip is
    cs'     = peepIns cs
    is'     = map (\i -> (i,emptyUS)) cs'

peepIns :: [Ins] -> [Ins]
-- merge need heaps
peepIns (NEED_HEAP 0:is)                  = peepIns is
peepIns (NEED_HEAP n:NEED_HEAP m:is)      = peepIns (NEED_HEAP (n+m):is)
peepIns (NEED_HEAP n:NEED_STACK m:is)     = peepIns (NEED_HEAP n:is)

-- we're in trouble if a needheap hits a label since a NEED_HEAP's are introduced based on a linear
-- block, and they are not introduced if nothing allocates heap. We therefore shouldn't push past something
-- that allocates heap.
peepIns (NEED_HEAP n:LABEL j:is)          = error "peepIns: NEED_HEAP should never reach a label!"

-- remove needheaps infront of RETURN/RETURN_EVAL/EVAL
peepIns (NEED_HEAP n:RETURN:is)           = peepIns (RETURN:is)
peepIns (NEED_HEAP n:RETURN_EVAL:is)      = peepIns (RETURN_EVAL:is)
peepIns (NEED_HEAP n:EVAL:is)             = peepIns (EVAL:is)

-- push back needheaps until they are needed (allows further optimisations)
peepIns (NEED_HEAP n:i:is) | usesNoHeap i = i : peepIns (NEED_HEAP n:is)

-- remove redundant slides, and merge multiple slides
peepIns (SLIDE 0:is)                      = peepIns is
peepIns (SLIDE n:SLIDE m:is)              = peepIns (SLIDE (n+m):is)
peepIns (SLIDE n:RETURN:is)               = peepIns (RETURN:is)
peepIns (SLIDE n:RETURN_EVAL:is)          = peepIns (RETURN_EVAL:is)

-- remove redundant pops, and merge multiple pops
peepIns (POP 0:is)                        = peepIns is
peepIns (POP n:POP m:is)                  = peepIns (POP (n+m):is)
peepIns (POP n:RETURN:is)                 = peepIns (RETURN:is)
peepIns (POP n:RETURN_EVAL:is)            = peepIns (RETURN_EVAL:is)

-- remove redundant evals
peepIns (EVAL:RETURN:is)                  = peepIns (RETURN_EVAL:is)
peepIns (EVAL:RETURN_EVAL:is)             = peepIns (RETURN_EVAL:is)
peepIns (EVAL:EVAL:is)                    = peepIns (EVAL:is)
peepIns (i:is)                            = i : peepIns is
peepIns []                                = []

-- | returns whether the instruction returns no heap, ignores extra since
--   no instruction should allocate extra only ...
usesNoHeap :: Ins -> Bool
usesNoHeap i = case imHeap $ bcodeMetric i of
                    HeapStatic f -> f 0 == 0
                    HeapDynamic  -> False
            
    
