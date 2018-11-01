-- | The IL module declares all the data structures necessary for generating and writing
-- IL code.
module DotNet.IL(
              ILDecl(..), ILName, ILAccess(..), ILStorage(..), ILClassDecl(..), ILMethodArg(..),
              GType(..), CRef, Code(..), 
              GraphNode(..), Graph, Jumpers, GLabel(..),
              Write(..),
              UseSet(..), emptyUS, Tag, Label,
              TypeSignature(..), ILInstruction(..), PrimOp(..),  UseIns) where

import Id(Id)
import qualified Data.Map as Map
import Util.Extra(Pos)              
import qualified Data.Set as Set
import Prim(PrimOp(..))
import Syntax(CallConv)
import NT

type ILName = String

-- | A Declaration is a top level IL entry
data ILDecl 
  = Namespace
      { ilName  :: ILName
      , nsDecls :: [ILDecl]
      }
  | Class
      { ilName     :: ILName
      , classBase  :: TypeSignature
      , classDecls :: [ILClassDecl]
      }
  | Prim
      { pName :: Id
      , pPos :: Pos
      }
  | External 
      { xName  :: Id
      , xPos   :: Pos
      , xArity :: Int
      , xCName :: String
      , xCallConv :: CallConv
      , xType  :: NewType
      }

data ILMethodArg   = ILMethodArg   TypeSignature ILName

data ILAccess
  = ILPublic | ILPrivate
  deriving Eq

data ILStorage 
  = ILStatic | ILInstance | ILVirtual
  deriving Eq

data ILClassDecl 
  = ILClassField  ILAccess ILStorage TypeSignature ILName
  | ILClassConstr ILAccess ILStorage                      [ILMethodArg] [TypeSignature] [ILInstruction]
  | ILClassMethod ILAccess ILStorage TypeSignature ILName [ILMethodArg] [TypeSignature] [ILInstruction]

-- | A constant table maps constant references to constant items 
type CRef = Int

-- | common applicative form, function info, node for non-CAF, constructor info, 
-- node for zero arity constructor, primitive function info
data GType = GCAF | GFUN | GFUN0 | GCON | GZCON | GPRIM | GEXT
           deriving (Eq, Ord, Show)

-- | code can be several things:
-- either a simple list of instructions or a code flow graph
data Code = CLinear [(ILInstruction,UseSet)]
          | CGraph GLabel Graph Jumpers
          | CWrites [Write]

{- | a graph associates labels with graph nodes -}
type Graph = Map.Map GLabel GraphNode

{- | Jumpers lists for each label all the graph nodes that might jump to it -}
type Jumpers = Map.Map GLabel (Set.Set GLabel)

{- a graph node is either

@
     GLinear is eval next 
             is   = the linear sequence of instructions
             eval = whether this block has an EVAL at the end
             next = the label of the next block 
     GCase int alts default
             int     = true if this is a case over integers
             alts    = the alternatives of the case
             default = the default branch of the case, if any
     GIf true false
             true    = the true label of the if
             false   = the false label of the if
     GReturn 
             terminal node in the graph 
@
-}   
data GraphNode = GLinear [UseIns] Bool GLabel
               | GCase Bool [(Tag,GLabel)] (Maybe GLabel)
               | GIf GLabel GLabel
               | GReturn
               | GDead

{- | a graph label, just wraps a label, helps with typechecking and we can sort the other way round -}
data GLabel = GLabel Label deriving Eq

{- | it's most useful to have these sorted in increasing order -}
instance Ord GLabel where
    compare (GLabel x) (GLabel y) = case compare x y of
                                        LT -> GT
                                        EQ -> EQ
                                        GT -> LT

instance Show GLabel where
    show (GLabel l) = "L_" ++ show l

-- | a write is a data section that should be written to the final bytecode file, Label is used as a placeholder
data Write = WUByte Int
           | WUShort Int
           | WLabel Int Label 
           | WByte Int
           | WShort Int

-- | the use set for an instruction lists the variables that the instructions 'gives'
-- as well as those that it needs, from this we can calculate what should be zapped.
data UseSet = UseSet { useDepth :: Int, useGive :: [Id], useNeed :: Set.Set Id }

emptyUS :: UseSet
emptyUS = UseSet 0 [] Set.empty

type UseIns = (ILInstruction,UseSet)

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

data TypeSignature 
  = ClassSignature String String
  | ValueSignature String String
  | Int32Signature
  | CharSignature
  | DoubleSignature
  | FloatSignature
  | BoolSignature
  | VoidSignature
  deriving (Eq,Ord,Show)

-- | The instructions
data ILInstruction
  = LDC_I4   Int
  | LDC_R4   Float
  | LDC_R8   Double
  | LDSTR    String
  | LDTOKEN  TypeSignature
  | LDTOKEN_METHOD TypeSignature TypeSignature String [TypeSignature]
  | LDLOC    Int
  | STLOC    Int
  | LDARG    Int
  | STARG    Int
  | LDSFLD   TypeSignature TypeSignature String
  | STSFLD   TypeSignature TypeSignature String
  | LDFLD    TypeSignature TypeSignature String
  | STFLD    TypeSignature TypeSignature String
  | NEWOBJ   TypeSignature [TypeSignature]
  | BEQ      Label
  | BNE      Label
  | BRTRUE   Label
  | BRFALSE  Label
  | BR       Label
  | CALL      TypeSignature TypeSignature String [TypeSignature]
  | CALLCLASS TypeSignature TypeSignature String [TypeSignature]
  | CALLVIRT  TypeSignature TypeSignature String [TypeSignature]
  | TAIL
  | RET
  | THROW
  | LABEL    Label
  | ISINST   TypeSignature
  | DUP
  | POP
  | ADD
  | SUB
  | MUL
  | DIV
  | REM
  | CEQ
  | CLT
  | CGT
  | NEG
  | NOT
  deriving (Eq,Ord,Show)

type Label = Int
