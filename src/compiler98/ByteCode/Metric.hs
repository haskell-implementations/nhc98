
module ByteCode.Metric(
    -- * Instruction metrics
      InsMetric(..)
    , HeapUsage(..)
    , bcodeMetric
    ) where

import ByteCode.Type

-- | Information about the heap usage of an instruction
data HeapUsage = HeapStatic (Int -> Int)
               | HeapDynamic

-- | Instruction metrics give useful information about all the instructions such as stack and heap usage
data InsMetric = IM { imStack :: Int, imEval :: Bool, imHeap :: HeapUsage, imId :: Int }

-- | Calculate instruction metrics from a given bytecode instruction
bcodeMetric :: Ins -> InsMetric
bcodeMetric i = bcodeMetric' i
    where
    bcodeMetric' (END_CODE)            = IM 0       False    (st $ const 0)     (-2)
    bcodeMetric' (START_FUN)           = IM 0       False    (st $ const 0)     (-1)
    bcodeMetric' (NEED_HEAP n)         = IM 0       False    (st $ const 0)     0
    bcodeMetric' (NEED_STACK n)        = IM 0       False    (st $ const 0)     1
    bcodeMetric' (PUSH n)              = IM 1       False    (st $ const 0)     2
    bcodeMetric' (PUSH_ZAP n)          = IM 1       False    (st $ const 0)     3
    bcodeMetric' (ZAP_STACK n)         = IM 0       False    (st $ const 0)     4
    bcodeMetric' (PUSH_ARG n)          = IM 1       False    (st $ const 0)     5
    bcodeMetric' (PUSH_ZAP_ARG n)      = IM 1       False    (st $ const 0)     6
    bcodeMetric' (ZAP_ARG n)           = IM 0       False    (st $ const 0)     7
    bcodeMetric' (PUSH_INT n)          = IM 1       False    (st $ (+2))          8
    bcodeMetric' (PUSH_CHAR n)         = IM 1       False    (st $ (+2))          9
    bcodeMetric' (PUSH_CONST n)        = IM 1       False    (st $ const 0)     10
    bcodeMetric' (MK_AP f n)           = IM (-n+1)  False    (st $ (+(n+1)))      12
    bcodeMetric' (MK_PAP f n)          = IM (-n+1)  False    (st $ (+(n+1)))      13
    --bcodeMetric' (CALL f n)           = IM (-n+1)  True     (st $ const 0)
    --bcodeMetric' (TAIL_CALL f n)      = IM (-n+1)  True     (st $ const 0)
    bcodeMetric' (APPLY n)             = IM (-n)    False    (HeapDynamic)      14
    bcodeMetric' (MK_CON c n)          = IM (-n+1)  False    (st $ (+(n+1)))      15
    bcodeMetric' (UNPACK n)            = IM (-1+n)  False    (st $ const 0)     16
    bcodeMetric' (SLIDE n)             = IM (-n)    False    (st $ const 0)     17
    bcodeMetric' (POP n)               = IM (-n)    False    (st $ const 0)     18
    bcodeMetric' (ALLOC n)             = IM n       False    (st $ (+n))          20
    bcodeMetric' (UPDATE n)            = IM (-1)    False    (st $ const 0)     39
    bcodeMetric' (RETURN)              = IM 0       False    (st $ const 0)     19
    bcodeMetric' (EVAL)                = IM 0       True     (st $ const 0)     20
    bcodeMetric' (RETURN_EVAL)         = IM 0       False    (st $ const 0)     21
    bcodeMetric' (NOP)                 = IM 0       False    (st $ const 0)     22
    
    bcodeMetric' (CASE _ _ _)          = IM 0       False    (st $ const 0)     22
    bcodeMetric' (STOP)                = IM 0       False    (st $ const 0)     22
    bcodeMetric' (LABEL _)             = IM 0       False    (st $ const 0)     22
    
    bcodeMetric' (TABLE_SWITCH as)     = IM 0       False    (st $ const 0)     23
    bcodeMetric' (LOOKUP_SWITCH as md) = IM 0       False    (st $ const 0)     24
    bcodeMetric' (INT_SWITCH as md)    = IM 0       False    (st $ const 0)     24
    bcodeMetric' (JUMP_FALSE j)        = IM (-1)    False    (st $ const 0)     25
    bcodeMetric' (JUMP j)              = IM 0       False    (st $ const 0)     26
    
    bcodeMetric' (P_ADD op@OpWord)           = IM (-1)    False    (st $ heapOp op)   27
    bcodeMetric' (P_SUB op@OpWord)           = IM (-1)    False    (st $ heapOp op)   28
    bcodeMetric' (P_MUL op@OpWord)           = IM (-1)    False    (st $ heapOp op)   29
    bcodeMetric' (P_DIV op@OpWord)           = IM (-1)    False    (st $ heapOp op)   30
    bcodeMetric' (P_MOD op@OpWord)           = IM (-1)    False    (st $ heapOp op)   31
    bcodeMetric' (P_CMP_EQ op@OpWord)        = IM (-1)    False    (st $ const 0)     32
    bcodeMetric' (P_CMP_NE op@OpWord)        = IM (-1)    False    (st $ const 0)     33
    bcodeMetric' (P_CMP_LE op@OpWord)        = IM (-1)    False    (st $ const 0)     34
    bcodeMetric' (P_CMP_LT op@OpWord)        = IM (-1)    False    (st $ const 0)     35
    bcodeMetric' (P_CMP_GE op@OpWord)        = IM (-1)    False    (st $ const 0)     35
    bcodeMetric' (P_CMP_GT op@OpWord)        = IM (-1)    False    (st $ const 0)     36
    bcodeMetric' (P_NEG op@OpWord)           = IM 0       False    (st $ heapOp op)   37
    
    bcodeMetric' (P_ADD op@OpFloat)           = IM (-1)    False    (st $ heapOp op)   38
    bcodeMetric' (P_SUB op@OpFloat)           = IM (-1)    False    (st $ heapOp op)   39
    bcodeMetric' (P_MUL op@OpFloat)           = IM (-1)    False    (st $ heapOp op)   40
    bcodeMetric' (P_DIV op@OpFloat)           = IM (-1)    False    (st $ heapOp op)   41
    bcodeMetric' (P_MOD op@OpFloat)           = IM (-1)    False    (st $ heapOp op)   42
    bcodeMetric' (P_CMP_EQ op@OpFloat)        = IM (-1)    False    (st $ const 0)     43
    bcodeMetric' (P_CMP_NE op@OpFloat)        = IM (-1)    False    (st $ const 0)     44
    bcodeMetric' (P_CMP_LE op@OpFloat)        = IM (-1)    False    (st $ const 0)     45
    bcodeMetric' (P_CMP_LT op@OpFloat)        = IM (-1)    False    (st $ const 0)     46
    bcodeMetric' (P_CMP_GE op@OpFloat)        = IM (-1)    False    (st $ const 0)     47
    bcodeMetric' (P_CMP_GT op@OpFloat)        = IM (-1)    False    (st $ const 0)     48
    bcodeMetric' (P_NEG op@OpFloat)           = IM 0       False    (st $ heapOp op)   49
    
    bcodeMetric' (P_ADD op@OpDouble)           = IM (-1)    False    (st $ heapOp op)   50
    bcodeMetric' (P_SUB op@OpDouble)           = IM (-1)    False    (st $ heapOp op)   51
    bcodeMetric' (P_MUL op@OpDouble)           = IM (-1)    False    (st $ heapOp op)   52
    bcodeMetric' (P_DIV op@OpDouble)           = IM (-1)    False    (st $ heapOp op)   52
    bcodeMetric' (P_MOD op@OpDouble)           = IM (-1)    False    (st $ heapOp op)   53
    bcodeMetric' (P_CMP_EQ op@OpDouble)        = IM (-1)    False    (st $ const 0)     54
    bcodeMetric' (P_CMP_NE op@OpDouble)        = IM (-1)    False    (st $ const 0)     55
    bcodeMetric' (P_CMP_LE op@OpDouble)        = IM (-1)    False    (st $ const 0)     56
    bcodeMetric' (P_CMP_LT op@OpDouble)        = IM (-1)    False    (st $ const 0)     57
    bcodeMetric' (P_CMP_GE op@OpDouble)        = IM (-1)    False    (st $ const 0)     58
    bcodeMetric' (P_CMP_GT op@OpDouble)        = IM (-1)    False    (st $ const 0)     59
    bcodeMetric' (P_NEG op@OpDouble)           = IM 0       False    (st $ heapOp op)   60
    
    bcodeMetric' (P_STRING)           = IM 0       False    (st $ heapString)  61
    bcodeMetric' (P_FROM_ENUM)        = IM 0       False    (st $ (+2))          62
    
    bcodeMetric' (PRIMITIVE)          = IM 1       True     (st $ const 0)     64
    bcodeMetric' (EXTERNAL)           = IM 1       True     (st $ (+2))          65
    bcodeMetric' (SELECTOR_EVAL)      = IM 1       True     (st $ const 0)     66
    bcodeMetric' (SELECT n)           = IM 0       False    (st $ const 0)     67
    
    bcodeMetric' (TAP p)              = IM 0       False    (st $ const 0)     undefined
    bcodeMetric' (TCON p)             = IM 0       False    (st $ const 0)     undefined
    bcodeMetric' (TPRIMCON p)         = IM 0       False    (st $ const 0)     undefined
    bcodeMetric' (TAPPLY p n)         = IM 0       False    (st $ const 0)     undefined
    bcodeMetric' (TIF p)              = IM 0       False    (st $ const 0)     undefined
    bcodeMetric' (TGUARD p)           = IM 0       False    (st $ const 0)     undefined
    bcodeMetric' (TCASE p)            = IM 0       False    (st $ const 0)     undefined
    bcodeMetric' (TPRIMAP p n)        = IM (-1)    False    (st $ const 0)     undefined
    bcodeMetric' (TPRIMRESULT p)      = IM 0       False    (st $ const 0)     undefined
    bcodeMetric' (TRETURN)            = IM 0       False    (st $ const 0)     undefined
    bcodeMetric' (TPUSH)              = IM 0       False    (st $ const 0)     undefined
    bcodeMetric' (TPUSHVAR n)         = IM 0       False    (st $ const 0)     undefined
    bcodeMetric' (TPROJECT p)         = IM 0       False    (st $ const 0)     undefined
    
    bcodeMetric' i                =  error $ "FIXME: bcodeMetric'!!"++show i

    st = HeapStatic
    

heapString :: Int -> Int
heapString x =
    x+2 +  -- character
    x+2 +  -- new string box
    x+2 +  -- application
    x+3    -- cons node

heapOp :: PrimOp -> Int -> Int
heapOp (OpWord) = (+2)
heapOp (OpFloat) = (+2)
heapOp (OpDouble) = (+3)
