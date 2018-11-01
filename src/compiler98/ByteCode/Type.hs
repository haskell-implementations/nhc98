
module ByteCode.Type(
    -- * Data Types
    -- ** Top-level bytecode declarations
      BCModule(..)
    , BCDecl(..)

    -- ** Constant tables
    , ConstTable
    , ConstItem(..)
    , GType(..)
    , CRef

    -- ** Code representations
    , Code(..)
    , GraphNode(..)
    , Graph
    , Jumpers
    , GLabel(..)
    , Write(..)
    , Ins(..)
    , PrimOp(..)
    , Tag
    , Label

    -- ** Use sets
    , UseSet(..)
    , emptyUS
    , UseIns

    -- * Constants
    , xFlNone
    , xFlVoid
    , fNone, fInvisible, fLambda, intFlags
    , frameSize
    , calcHeapExtra
    , splitQualified
    ) where


import Prim(PrimOp(..))
import qualified Data.Map as Map
import qualified Data.Set as Set
import Util.Extra(Pos)
import Syntax(CallConv)
import NT
import PosCode(LambdaFlags(..))
import Flags(Flags, sHat)

-- | A bytecode program
data BCModule = BCModule {
                    bcmModule :: String,
                    bcmDecls :: [BCDecl]
            }

-- | A Declaration is a top level bcode entry
data BCDecl = Fun { fName :: String, fPos :: Pos, fArity :: Int, fArgs :: [String],
                    fCode :: Code, fConsts :: ConstTable, fIsPrim :: Bool, fStack :: Int, fNumDictArgs :: Int,
                    fFlags :: [LambdaFlags] }
            | Con { cName :: String, cPos :: Pos, cSize :: Int, cTag :: Int }
            | Prim { pName :: String, pPos :: Pos }
            | External { xName :: String, xPos :: Pos, xArity :: Int,
                         xCName :: String, xCallConv :: String, xArgsTypes :: [String] }

fNone, fInvisible, fLambda :: Int
fNone = 0x00
fInvisible = 0x01
fLambda = 0x02

intFlags :: [LambdaFlags] -> Int
intFlags lfs = sum (map f lfs)
  where
  f LamFLNone = fNone
  f LamFLIntro = fInvisible
  f LamFLLambda = fLambda

xFlNone, xFlVoid :: Int
xFlNone = 0x00
xFlVoid = 0x01

-- | A constant table maps constant references to constant items
type ConstTable = Map.Map CRef ConstItem
type CRef = Int

-- | A constant in the constant table
data ConstItem = CGlobal String  GType        {- CAF, FUN, FUN0, CON, ZCON -}
               | CInt Int
               | CInteger Integer
               | CFloat Float
               | CDouble Double
               | CString String
               | CPos Pos
               | CVarDesc String Pos
                 deriving (Eq, Ord, Show)

-- | Common applicative form, function info, node for non-CAF, constructor info,
--   node for zero arity constructor, primitive function info
data GType = GCAF | GFUN | GFUN0 | GCON | GZCON | GPRIM | GEXT
           deriving (Eq, Ord, Show)

-- | Code can be several things;
--   either a simple list of instructions or a code flow graph
data Code = CLinear [(Ins,UseSet)]
          | CGraph GLabel Graph Jumpers
          | CWrites [Write]

-- | A graph associates labels with graph nodes
type Graph = Map.Map GLabel GraphNode

-- |  Jumpers lists for each label all the graph nodes that might jump to it
type Jumpers = Map.Map GLabel (Set.Set GLabel)

-- | a graph node is either:
--
--   * @ GLinear is eval next
--             is   = the linear sequence of instructions
--             eval = whether this block has an EVAL at the end
--             next = the label of the next block
--     @
--
--   * @ GCase int alts default
--             int     = true if this is a case over integers
--             alts    = the alternatives of the case
--             default = the default branch of the case, if any
--     @
--
--   * @ GIf true false
--             true    = the true label of the if
--             false   = the false label of the if
--     @
--
--   * @ GReturn
--             terminal node in the graph
--     @

data GraphNode = GLinear [UseIns] Bool GLabel
               | GCase Bool [(Tag,GLabel)] (Maybe GLabel)
               | GIf GLabel GLabel
               | GReturn
               | GDead

-- | A graph label, just wraps a label, helps with typechecking and we can sort the other way round
data GLabel = GLabel Label deriving Eq

-- | It's most useful to have these sorted in increasing order, so labels
--   are compared in the reverse order as labels
instance Ord GLabel where
    compare (GLabel x) (GLabel y) = case compare x y of
                                        LT -> GT
                                        EQ -> EQ
                                        GT -> LT

instance Show GLabel where
    show (GLabel l) = "L_" ++ show l

-- | A write is a data section that should be written to the final bytecode file, Label is used as a placeholder
data Write = WUByte Int
           | WUShort Int
           | WLabel Int Label
           | WByte Int
           | WShort Int

-- | The use set for an instruction lists the variables that the instructions 'gives'
--   as well as those that it needs, from this we can calculate what should be zapped.
data UseSet = UseSet { useDepth :: Int, useGive :: [String], useNeed :: Set.Set String }

-- | Create an empty use set
emptyUS :: UseSet
emptyUS = UseSet 0 [] Set.empty

-- | A bytecode instruction paired with its use set
type UseIns = (Ins,UseSet)

-- a block is a unflattened section of BCode
--     BLinear  is - linear block of instructions, this originally corresponds to an
--                       uninterruptable linear sequence of instructions. Later it's flattened.
--     BCase int tags  - a case statement block, 'int' is true if the case is over integers
--                         tags is the list of (tag,code) pairs.
--     BIf true false - if block with true and false code
--     BFatBar esc code fail - a 'fat bar' is used as an internal way to collect together defaults for cases
--                             'esc' is true if the failure can escape.
--     BWrite writes - a code block that has been converted into a series of bytes and shorts
--                     (i.e. assembled). This makes it easier to fix labels to jump addresses
--     BFail         - go to the 'nearest' fatbar handler.
{-
data Block = BLinear [(Ins, UseSet)]
           | BCase Bool [(Tag,Code)]
           | BIf Code Code
           | BFatBar Bool Code Code
           | BWrite [Write]
           | BFail
-}
{-
data Block = BLinear Label [(Ins,UseSet)] (Maybe Label)
           | BCase Label Bool [(Tag,Label)] (Maybe Label)
           | BIf Label Label Label
-}

type Tag = Int

-- | The instructions
data Ins = END_CODE
         | START_FUN                -- ^ never appears just used in zap analysis
         | NEED_STACK Int
         | NEED_HEAP Int
         | PUSH Int
         | PUSH_ZAP Int
         | ZAP_STACK Int
         | PUSH_ARG Int -- ^ is this supposed to be an 'Int' or an 'Id'? [SamB]
                        -- ^ Int, first argument = 0, second = 1, etc [TomS]
         | PUSH_ZAP_ARG Int
         | ZAP_ARG Int
         | PUSH_INT Int
         | PUSH_CHAR Int
         | PUSH_CONST CRef
         | MK_AP CRef Int
         | MK_PAP CRef Int
         | MK_CON CRef Int
         | APPLY Int
         | UNPACK Int
         | SLIDE Int
         | POP Int
         | ALLOC Int
         | UPDATE Int
         | RETURN
         | EVAL
         | RETURN_EVAL
         | NOP
         | P_ADD PrimOp
         | P_SUB PrimOp
         | P_MUL PrimOp
         | P_DIV PrimOp
         | P_MOD PrimOp
         | P_CMP_EQ PrimOp
         | P_CMP_NE PrimOp
         | P_CMP_LE PrimOp
         | P_CMP_LT PrimOp
         | P_CMP_GE PrimOp
         | P_CMP_GT PrimOp
         | P_NEG PrimOp
         | P_STRING
         | P_FROM_ENUM

         | CASE Bool [(Tag,Label)] (Maybe Label)
         | STOP

         | TABLE_SWITCH [Label]
         | LOOKUP_SWITCH [(Tag,Label)] Label
         | INT_SWITCH [(Tag,Label)] Label
         | JUMP_FALSE Label
         | JUMP Label
         | LABEL Label
         | PRIMITIVE
         | EXTERNAL
         | SELECTOR_EVAL
         | SELECT Int

         | TAP CRef
         | TCON CRef
         | TPRIMCON CRef
         | TAPPLY CRef Int
         | TIF CRef
         | TGUARD CRef
         | TCASE CRef
         | TRETURN
         | TPRIMAP CRef Int
         | TPRIMRESULT CRef
         | TPUSH
         | TPUSHVAR CRef
         | TPROJECT CRef

         | COMMENT String
           deriving (Eq,Ord,Show)

type Label = Int


frameSize :: Int
frameSize = 3

calcHeapExtra :: Flags -> Int
calcHeapExtra flags = if sHat flags then 2 else 0

-- | split a qualified name into (module,item)
splitQualified :: String -> (String,String)
splitQualified s = case break (==';') s of
                    (mod,[])   -> (mod,[])
                    (mod,i:is) -> (mod,is)
