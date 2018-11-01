{- |
Central data structures of the symbol table
-}
module Info(module Info, module Id, IdKind,TokenId,NewType,InfixClass(..),Pos
           ) where

import IdKind(IdKind)
import TokenId(TokenId)
import NT
import Util.Extra(Pos,strace)
import SysDeps(PackedString,trace)
import qualified Data.Map as Map
import Syntax(InfixClass(..))
import Id(Id)
import Maybe

data IE = IEnone | IEsel | IEsome | IEabs | IEall deriving (Eq,Show) 
-- ^ This is "Interface Exports"
--
-- >   defined in a lattice   IEall
-- >                         /     \
-- >                        |     IEsome
-- >                      IEsel     |
-- >                        |     IEabs
-- >                         \     /
-- >                          IEnone
-- >  IEall  -> exported (with all constructors/fields/methods)
-- >  IEsome -> exported with selected constructors/fields/methods
-- >  IEabs  -> exported abstractly (without constructors/fields/methods)
-- >  IEnone -> not exported
-- >  IEsel  -> selected constructors/fields/methods
-- >                      (is exported, despite defn below!)

isExported :: IE -> Bool
isExported IEnone = False
isExported IEsel  = False
isExported _      = True

combIE :: IE -> IE -> IE
combIE IEall  _     = IEall
combIE _      IEall = IEall
combIE IEnone i     = i
combIE i     IEnone = i
combIE IEsome IEabs = IEsome
combIE IEabs IEsome = IEsome
combIE _      i     = i

-- | Patch newtype for exports  (Its constructor must always be in the
-- interface file, even if not visible in the importing module.)
patchIE :: IE -> IE
patchIE IEabs = IEsome
patchIE ie    = ie

data DataKind = 
    DataTypeSynonym Bool  -- True <-> unboxed after expansion
                    Int   -- depth (used to determine 
                          -- which type synonym to expand)
  | DataNewType     Bool  -- always False
                    [Id]  -- constructor(one or zero) 
  | Data            Bool  -- True <-> unboxed
                    [Id]  -- constructors
  | DataPrimitive   Int   -- size
  deriving (Show)

-- | Given all the selector functions below, shouldn't these
-- constructors be record constructors? -SamB
data Info =
    InfoClear   -- used to remove imported when redefining in mutally 
                -- recursive modules and when compiling the prelude
  | InfoUsed      Id       -- unique
                  [(IdKind,TokenId,PackedString,Pos)] -- occurrence where used
  | InfoUsedClass Id       -- unique
                  [(IdKind,TokenId,PackedString,Pos)] -- occurrence where used
                  (Map.Map Id (PackedString,[Id],[(Id,Id)]))  
                  -- instances of the class
                  -- the tree associates a type constructor with
                  -- the module name, free variables and the superclass context 
                  -- of an instance
  | InfoData      -- data type (algebraic, type synonym, ...)
                  Id       -- unique
                  TokenId  -- token of data type name
                  IE       -- is exported?
                  NewType  -- if type synonym: type it is defined to be
                           -- if data or newtype: defined type
                           -- e.g.: data Num a => Test a b = A a | B b
                           -- NewType [1,2] [] [(NumId, 1)] 
                           --   [NTvar 1 Star, NTvar 2 Star, mkNTcons TestId 
                           --                     [NTvar 1 Star, NTvar 2 Star]]
                  DataKind -- kind of data type 
  | InfoClass     Id       -- unique
                  TokenId  -- token of class name
                  IE       -- is exported?
                  NewType  -- pseudo type built from class and type variable
                           -- (type of dictionary?)
                  [Id]     -- method ids refering to type declaration
                  [Id]     -- method ids refering to default definition
                           -- ids in same position refer to same method
                           -- => lists have same lengths
                  (Map.Map Id (PackedString,[Id],[(Id,Id)]))    
                  -- instances of the class
                  -- the tree associates a type constructor with
                  -- the module name, free variables and the superclass context 
                  -- of an instance
  | InfoVar       -- term variable 
                  Id           -- unique 
                  TokenId      -- token for name
                  IE           -- is exported?
                  (InfixClass TokenId,Int)  -- fixity 
                  NewType      -- type
                  (Maybe Int)  -- arity (if available)
  | InfoConstr    -- data constructor
                  Id           -- unique 
                  TokenId      -- token for name
                  IE           -- is exported?
                  (InfixClass TokenId,Int)  -- fixity 
                  NewType      -- type of the constructor
                  [Maybe Id]   -- field names (if they exist) 
                  Id           -- data type to which constructor belongs
  | InfoField     -- field name
                  Id           -- unique
                  TokenId      -- token for name
                  IE           -- is exported?
                  [(Id,Int)]   -- [(data constructor, offset for this constr.)]
                  Id           -- iData
                  Id           -- iSel  
                  -- unique tid [(constructor,offset)] type selector
  | InfoMethod    -- for type declaration of method in a class definition
                  Id           -- unique 
                  TokenId      -- token for method name
                  IE           -- is exported?
                  (InfixClass TokenId,Int) -- fixity
                  NewType 
                  (Maybe Int)  -- arity (if available; here bogus)
                  Id           -- unique of class to which method belongs
  | InfoIMethod   -- for definition in instance definition
                  Id           -- unique 
                  TokenId      -- token for name
                  NewType 
                  (Maybe Int)  -- arity (if available) 
                  Id           -- iMethod (0 after renaming)
                  -- The type is NewType free instancs_ctx instance_type, 
                  -- for real type follow iMethod
  | InfoDMethod   -- for default definition in class definition
                  Id           -- unique
                  TokenId      -- token for method name
                  NewType 
                  (Maybe Int)  -- arity (if available) 
                  Id           -- class to which method belongs
  -- | Only used in "Export"
  | InfoInstance  Id           -- unique
                  PackedString -- where it was defined
                  NewType 
                  Id           -- unique of class (of which this is instance)
  | InfoName      Id           -- unique
                  TokenId      -- token for name
                  Int          -- arity
                  TokenId      
                  Bool         --PHtprof indicates subfn
    -- inserted late to hold name and arity for some functions 
    -- (second TokenId is profname )
  deriving (Show)

{- Template
z (InfoUsed   unique uses) =
z (InfoUsedClass unique uses insts) =
z (InfoData   unique tid ie nt dk) =
      case dk of
        (DataTypeSynonym unboxed depth) ->
        (DataNewType unboxed constructors) ->
        (Data unboxed  constrs) ->
        (DataPrimitive size) ->
z (InfoClass  unique tid ie nt ms ds insts) = 
z (InfoVar    unique tid ie fix nt annot) = 
z (InfoConstr unique tid ie fix nt fields iType) =
z (InfoField  unique tid ie icon_offs iData iSel) =
z (InfoMethod unique tid ie fix nt annot iClass) =
z (InfoIMethod unique tid nt annot iMethod) =
z (InfoDMethod unique tid nt annot iClass) =
z (InfoInstance unique  nt iClass) =
z (InfoName pos unique tid Int ptid subfn) =  --PHtprof
-}

clearI :: a -> Info
clearI _ = InfoClear


--isClear InfoClear = True
--isClear _ = False

isMethod :: Info -> Bool
isMethod (InfoMethod unique tid ie fix nt annot iClass) = True
isMethod _ = False


isData :: Info -> Bool 
isData (InfoData   unique tid exp nt dk) = True
isData _ = False


isRealData :: Info -> Bool
isRealData (InfoData   unique tid exp nt dk) =
      case dk of
        (DataTypeSynonym unboxed depth) -> False
        (DataNewType unboxed constructors) -> False
        (DataPrimitive size) -> True
        (Data unboxed  constrs) -> True
isRealData info = error ("isRealData " ++ show info)


isRenamingFor :: Map.Map Id Info -> Info -> NewType
isRenamingFor st (InfoData  unique tid exp nt (DataTypeSynonym _ depth)) = nt
isRenamingFor st info@(InfoData  unique tid exp nt (DataNewType _ constrs)) =
    case constrs of
      []  -> error ("Problem with type of a foreign imported function:\n"
                    ++"Cannot find constructor for newtype: "++show info)
      [c] -> case Map.lookup c st of
               Just i  -> ntI i
               Nothing -> error ("Cannot find info for newtype constructor: "
                                 ++show info)
isRenamingFor st info = error ("isRenamingFor " ++ show info)


isDataUnBoxed :: Info -> Bool  
isDataUnBoxed (InfoData unique tid exp nt dk) =
      case dk of
        (DataTypeSynonym unboxed depth) -> unboxed
        (DataNewType unboxed constructors) -> unboxed
        (Data unboxed  constrs) -> unboxed
        (DataPrimitive size) -> True
isDataUnBoxed info = error ("isDataUnBoxed: " ++ show info)


isField :: Info -> Bool
isField (InfoField _ _ _ _ _ _) = True
isField _ = False

isClass :: Info -> Bool
isClass (InfoClass _ _ _ _ _ _ _) = True
isClass _ = False

isUsedClass :: Info -> Bool
isUsedClass (InfoUsedClass _ _ _) = True
isUsedClass _ = False


isConstr :: Info -> Bool
isConstr (InfoConstr _ _ _ _ _ _ _) = True
isConstr _                          = False

depthI :: Info -> Maybe Int
depthI (InfoData unique tid exp nt dk) =
    case dk of
        (DataTypeSynonym unboxed depth) -> Just depth
        _ -> Nothing
depthI _ = Nothing


typeSynonymBodyI :: Info -> Maybe NewType
typeSynonymBodyI (InfoData _ _ _ nt (DataTypeSynonym _ _)) = Just nt
typeSynonymBodyI _ = Nothing


updTypeSynonym :: Bool -> Int -> Info -> Info
updTypeSynonym unboxed depth (InfoData unique tid exp nt dk) =
      case dk of
        (DataTypeSynonym _ _) ->
          (InfoData unique tid exp nt (DataTypeSynonym unboxed depth)) 


{- |
   Sets the unboxedness information in newtype info as given.
-}
updNewType :: Bool -> Info -> Info
updNewType unboxed (InfoData unique tid exp nt dk) =
      case dk of
        (DataNewType _ constructors) -> 
          InfoData unique tid exp nt (DataNewType unboxed constructors)

{- |
   Sets the type information in variable info as given.
   Is only applied to identifiers without types,i.e. never methods of any kind!
-}
newNT :: NewType -> Info -> Info
newNT nt (InfoVar unique tid ie fix _ annot) =
          InfoVar unique tid ie fix nt annot


ntI :: Info -> NewType
ntI i = fromJust (maybeNtI i)

maybeNtI :: Info -> Maybe NewType
maybeNtI (InfoData     unique tid ie nt dk)               = Just nt
-- maybeNtI (InfoClass unique tid ie nt ms ds)            = Just nt   --- Not needed?
maybeNtI (InfoVar      unique tid ie fix nt annot)        = Just nt
maybeNtI (InfoConstr   unique tid ie fix nt fields iType) = Just nt
maybeNtI (InfoMethod   unique tid ie fix nt annot iClass) = Just nt
maybeNtI (InfoIMethod  unique tid nt annot iMethod)       = Just nt  -- Work here?
maybeNtI (InfoDMethod  unique tid nt annot iClass)        = Just nt
maybeNtI _                                                = Nothing

strictI :: Info -> [Bool]
strictI (InfoConstr _ _ _ _ (NewType free [] ctx nts) _ _) = 
    map strictNT (init nts)
strictI _ = []
  -- Not strict in any argument so it doesn't matter if we return empty list

qDefI :: Info -> Bool
qDefI (InfoUsed _ _) = False
qDefI (InfoUsedClass _ _ _) = False
qDefI _ = True

uniqueI :: Info -> Id
uniqueI (InfoUsed   unique _)             = unique
uniqueI (InfoUsedClass unique _ _)        = unique
uniqueI (InfoData   unique tid ie nt dk)  = unique
uniqueI (InfoClass  unique _ _ _ _ _ _)   = unique
uniqueI (InfoVar     unique _ _ _ _ _)    = unique
uniqueI (InfoConstr  unique _ _ _ _ _ _)  = unique
uniqueI (InfoField   unique _ _ _ _ _)    = unique
uniqueI (InfoMethod  unique _ _ _ _ _ _)  = unique
uniqueI (InfoIMethod  unique _ _ _ _)     = unique
uniqueI (InfoDMethod  unique _ _ _ _)     = unique
uniqueI (InfoInstance unique _ _ _)       = unique
uniqueI (InfoName  unique _ _ _ _)        = unique --PHtprof

descI :: Info -> String
descI (InfoUsed   _ _)             = "InfoUsed"
descI (InfoUsedClass _ _ _)        = "InfoUsedClass"
descI (InfoData   _ _ _ _ _ )      = "InfoData"
descI (InfoClass  _ _ _ _ _ _ _)   = "InfoClass"
descI (InfoVar     _ _ _ _ _ _)    = "InfoVar"
descI (InfoConstr  _ _ _ _ _ _ _)  = "InfoConstr"
descI (InfoField   _ _ _ _ _ _)    = "InfoField"
descI (InfoMethod  _ _ _ _ _ _ _)  = "InfoMethod"
descI (InfoIMethod  _ _ _ _ _)     = "InfoIMethod"
descI (InfoDMethod  _ _ _ _ _)     = "InfoDMethod"
descI (InfoInstance _ _ _ _)       = "InfoInstance"
descI (InfoName  _ _ _ _ _)        = "InfoName"
descI _                            = "InfoUnknown!"


tidI :: Info -> TokenId
tidI (InfoData   unique tid exp nt dk) = tid
tidI (InfoClass  u tid _ _ _ _ _)      = tid
tidI (InfoVar     u tid _ _ _ _)       = tid
tidI (InfoConstr  u tid _ _ _ _ _)     = tid
tidI (InfoField   u tid _ _ _ _)       = tid
tidI (InfoMethod  u tid _ _ _ _ _)     = tid
tidI (InfoIMethod  u tid _ _ _)        = tid
tidI (InfoDMethod  u tid _ _ _)        = tid
tidI (InfoName  u tid _ _ _)           = tid --PHtprof
tidI (InfoUsedClass u ((_,tid,_,_):_) _) = tid  --MW
tidI (InfoUsed u ((_,tid,_,_):_))        = tid  --TS
tidI info = error ("tidI (Info.hs) called with bad info:\n" ++ show info)


cmpTid :: TokenId -> Info -> Bool
cmpTid t (InfoUsed _ _)        = False
cmpTid t (InfoUsedClass _ _ _) = False
cmpTid t i                     = tidI i == t


methodsI :: Info -> [(Id,Id)]
methodsI (InfoClass u tid ie nt ms ds inst) = zip ms ds


instancesI :: Info -> Map.Map Id (PackedString,[Id],[(Id,Id)])
instancesI (InfoClass u tid e nt ms ds inst) = inst
instancesI info@(InfoUsedClass u uses inst) = 
  strace ("***instanceI(1) "++show info++"\n") inst
instancesI info = 
  strace ("***instanceI(2) "++show info++"\n") Map.empty 
  -- This is a lie!!! For some reason has this class no real entry


{- | Return identifiers of all superclasses of the class which is described
   by given info.
-}
superclassesI :: Info -> [Id]
superclassesI (InfoClass _ _ _ (NewType _ [] ctxs _) _ _ _) = map fst ctxs
superclassesI info = error ("superclassesI " ++ show info)


{- | Add information about an instance to info of a class.
   If information about this instance exists already in info, then info left
   unchanged.
   
   type constructor -> free type variables -> context -> class info -> class info
-}
addInstanceI :: Id -> PackedString -> [Id] -> [(Id,Id)] -> Info -> Info
addInstanceI con loc free ctxs info@(InfoClass u tid e nt ms ds inst) =
  case Map.lookup con inst of
    Just _ -> info
    Nothing -> InfoClass u tid e nt ms ds (Map.insert con (loc,free,ctxs) inst)
addInstanceI con loc free ctxs info@(InfoUsedClass u uses inst) =
  case Map.lookup con inst of
    Just _ -> info
    Nothing -> InfoUsedClass u uses (Map.insert con (loc,free,ctxs) inst)
addInstanceI con loc free ctxs (InfoUsed u uses) = 
        addInstanceI con loc free ctxs (InfoUsedClass u uses Map.empty)

{- |
In joining two trees for describing instances the second one gets
precedence in case of conflict.
-}
joinInsts :: Map.Map Id a -> Map.Map Id a -> Map.Map Id a
joinInsts inst inst' =
  foldr (\(k,v) inst -> Map.insert k v inst) inst (Map.toList inst')


{- | Determine constructors of a type from the info of the type -}
constrsI :: Info -> [Id]
constrsI (InfoName  unique tid i ptid _) = [unique]   --PHtprof
  -- ABOVE: this is a lie! but it is consistent with belongstoI :-)
constrsI (InfoData   unique tid exp nt dk) =
      case dk of
        (DataTypeSynonym unboxed depth) ->  
           strace ("Constr of type synonym "++show tid++"\n") []
        (DataNewType unboxed constructors) -> constructors
        (DataPrimitive size) ->
           strace ("Constr of data primitive "++show tid++"\n") []
        (Data unboxed  constrs) -> constrs
constrsI info = error ("constrsI " ++ show info)


updConstrsI :: Info -> [Id] -> Info
updConstrsI (InfoData unique tid exp nt dk) constrs' =
  case dk of
    (Data unboxed  constrs) -> 
      InfoData unique tid exp nt (Data unboxed constrs')


fieldsI :: Info -> [Maybe Id]
fieldsI (InfoConstr unique tid ie fix nt fields iType) = fields


combInfo :: Info -> Info -> Info

combInfo  InfoClear      info'               = info'
combInfo (InfoUsed _ w) (InfoUsed u' w')     = InfoUsed u' (w++w')
combInfo (InfoUsed _ _)  info'               = info'
combInfo  info           InfoClear           = info
combInfo  info          (InfoUsed _ _)       = info
combInfo i1@(InfoUsedClass _ uses insts) 
         i2@(InfoClass u tid exp nt ms ds insts') =
  InfoClass u tid exp nt ms ds (joinInsts insts' insts)
combInfo i1@(InfoClass _ tid exp nt ms ds insts) 
         i2@(InfoUsedClass u uses insts') =
  InfoClass u tid exp nt ms ds (joinInsts insts' insts)
combInfo (InfoClass u tid exp nt ms ds insts) 
         (InfoClass u' tid' exp' nt' [] [] insts') =    
  InfoClass u tid (combIE exp exp') nt ms ds (joinInsts insts' insts)
combInfo (InfoClass u tid exp nt ms ds insts) 
         (InfoClass u' tid' exp' nt' ms' ds' insts') =  
  InfoClass u tid (combIE exp exp') nt' ms' ds' (joinInsts insts' insts)
combInfo info@(InfoData u tid exp nt dk) 
         info'@(InfoData u' tid' exp' nt' dk')  =
  case dk' of
    Data unboxed [] -> info
    _ -> if isExported exp' then info' else info
combInfo info info' =  
  -- Use new (if possible) so that code can override old imported
        if isExported (expI info)
        then info
        else info'

expI :: Info -> IE
expI (InfoData    _ _ ie _ _)      = ie
expI (InfoClass   _ _ ie _ _ _ _)  = ie
expI (InfoVar     _ _ ie _ _ _)    = ie
expI (InfoConstr  _ _ ie _ _ _ _)  = ie
expI (InfoField   _ _ ie _ _ _)    = ie  -- Data contains export info
expI (InfoMethod  _ _ ie _ _ _ _)  = ie
expI (InfoIMethod _ _ _ _ _)       = IEnone
expI (InfoDMethod _ _ _ _ _)       = IEnone
expI info                          = IEnone  -- I get InfoUsed here !!!

-- | arity without context (Visible)
arityVI :: Info -> Int
arityVI (InfoVar _ _ _ _ _ (Just arity))             =  arity
arityVI (InfoConstr _ _ _ _ (NewType _ _ _ nts) _ _) = length nts - 1
arityVI (InfoMethod _ _ _ _ _ (Just arity) _)        = 1
arityVI (InfoIMethod _ _ _ (Just arity) _)           = arity
arityVI (InfoDMethod _ _ _ (Just arity) _)           = arity 
arityVI (InfoName _ _ arity _ _)                     = arity --PHtprof

-- | arity with context
arityI :: Info -> Int
arityI (InfoVar _ _ _ _ (NewType _ _ ctx _) (Just arity))  = length ctx + arity
arityI (InfoVar _ _ _ _ _                   (Just arity))  = arity
                                        -- NR Generated after type deriving
arityI (InfoConstr _ _ _ _ (NewType _ _ _ nts) _ _)        = length nts - 1
arityI (InfoMethod _ _ _ _ _ (Just arity) _)               = 1
-- Wrong !!! 
-- arityI  (InfoIMethod _ _ (NewType _ _ ctx _) (Just arity) _)
--                                                         = length ctx + arity
arityI (InfoDMethod  _ _  (NewType _ _ ctx _) (Just arity) _)
                                                           = length ctx + arity
                                                             + 1
                                        --  +1 is for the dictionary
arityI (InfoName  unique tid arity ptid _)                 = arity --PHtprof
arityI info  =  error ("arityI " ++ show info)

arityIM :: Info -> Int
arityIM (InfoMethod _ _ _ _ (NewType _ _ ctx _) (Just arity) _)
                                                           = length ctx + arity

fixityI :: Info -> (InfixClass TokenId, Int)
fixityI (InfoVar     unique tid ie fix nt annot)        = fix
fixityI (InfoConstr  unique tid ie fix nt fields iType) = fix
fixityI (InfoMethod  unique tid ie fix nt annot iClass) = fix
fixityI _ = (InfixDef,9::Int)


belongstoI :: Info -> Id
belongstoI (InfoConstr  unique tid ie fix nt fields iType)  = iType
belongstoI (InfoField   unique tid ie icon_offs iData iSel) = iData
belongstoI (InfoMethod  unique tid ie fix nt annot iClass)  = iClass
belongstoI (InfoIMethod  unique tid nt annot iMethod)       = iMethod  
  -- Maybe ought to be it's own function
belongstoI (InfoDMethod  unique tid nt annot iClass)        = iClass
belongstoI (InfoInstance unique mrs nt iClass)              = iClass
belongstoI (InfoName  unique tid i ptid _)                  = unique  --PHtprof
  -- ABOVE: this is a lie! but it is consistent with constrsI :-)
belongstoI info =  error ("belongstoI " ++ show info)


profI :: Info -> TokenId
profI (InfoData   unique tid exp nt dk) = tid
profI (InfoClass  u tid _ _ _ _ _)      = tid
profI (InfoVar     u tid _ _ _ _)       = tid
profI (InfoConstr  u tid _ _ _ _ _)     = tid
profI (InfoField   u tid _ _ _ _)       = tid
profI (InfoMethod  u tid _ _ _ _ _)     = tid
profI (InfoIMethod  u tid _ _ _)        = tid
profI (InfoDMethod  u tid _ _ _)        = tid
profI (InfoName  u tid _ ptid _)        = ptid --PHtprof
profI info = error ("profII (Info.hs) " ++ show info)
