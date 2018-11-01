{- |
Internal state of the compiler. 
Used from the renaming pass until code generation.
Needs 'IdSupply'.
-}
module IntState(module IntState, module Info) where

import qualified Data.Map as Map
import NT
import TokenId(mkQual3,mkQualD,dropM)
import Util.Extra
import SysDeps(PackedString,packString,trace,unpackPS)
import Info
import Util.MergeSort(group)
import Reduce(Reduce)
import Id
import Maybe
import Flags


-- | Shouldn't this be a record? [SamB]
data IntState = 
      IntState
        Id                              -- unique
        (Id,PackedString)              -- modid
        (Map.Map Id Info)               -- symboltable (Id -> info)
        [String]                        -- errors
        Flags

dummyIntState :: IntState
dummyIntState = IntState (toEnum 0)
                         (toEnum 0,packString "<Dummy>")
                         Map.empty
                         []
                         (error "dummyIntState: flags")

-- -===== State

getModuleId :: IntState -> String
getModuleId (IntState _ (_,rps) _ _ _) = reverse (unpackPS rps)

getInfo :: Id -> a -> IntState -> (Info,IntState)

getInfo i down state@(IntState unique rps st errors fl) =
  case Map.lookup i st of
    Just info -> (info,state)

getIntState :: a -> IntState -> (IntState,IntState)
getIntState down state = (state,state)

addDefaultMethod :: a -> (Id,Id) -> IntState -> IntState

addDefaultMethod tidcls (iMethod,iDefault) state@(IntState unique irps@(_,rps) st errors fl) =
--  FIXME: have mkQualD use the right class as well please ...
  case lookupIS state iMethod of
    Just (InfoMethod u tid ie fix nt' annot iClass) ->
      IntState unique irps 
        (Map.insertWith fstOf iDefault 
          (InfoDMethod  iDefault (mkQualD rps tid) nt' annot iClass) st) 
        errors
        fl

{- | Return all the default methods of an id, including super class methods -}
defaultMethodsIS :: IntState -> Id -> [Id]
defaultMethodsIS state cls = defs ++ concat rest
    where
    clsInfo = fromJust $ lookupIS state cls
    defs    = map snd $ methodsI clsInfo
    supers  = superclassesI clsInfo
    rest    = map (defaultMethodsIS state) supers

-- | Do we really need both 'getUnique' and 'uniqueIS'? I vote for taking out uniqueIS. [SamB]
getUnique :: a -> IntState -> (Id,IntState)

getUnique down state@(IntState unique rps st errors fl) =
  (unique,IntState (succ unique) rps st errors fl)

instance IdSupply IntState where
    getUniqueId = getUnique


addInstMethod :: TokenId -> TokenId -> TokenId -> NewType -> Id 
              -> a -> IntState -> (Id,IntState)

addInstMethod  tidcls tidtyp tidMethod nt iMethod down state@(IntState unique rps@(_,rpsMod) st errors fl) =
  case lookupIS state iMethod of
    Just (InfoMethod u tid ie fix nt' (Just arity) iClass) -> 
        let state' = IntState (succ unique) rps st' errors fl
            st'    = Map.insertWith (error "adding twice!") unique uIM st
            uIM    = InfoIMethod unique (mkQual3 rpsMod tidcls tidtyp tidMethod) nt (Just arity) iMethod
        in (unique,state')

-- -====== State0

updInstMethodNT :: TokenId -> TokenId -> Id -> NewType -> Id 
                -> a -> IntState -> IntState

updInstMethodNT tidcls tidtyp i nt iMethod  down state@(IntState unique rps@(_,rpsMod) st errors fl) =
  case Map.lookup iMethod st of
    Just (InfoMethod _ _ _ _ _ annots _) ->
      case Map.lookup i st of
        Just (InfoIMethod u tid' _ _ _) ->
            let tid = mkQual3 rpsMod tidcls tidtyp (dropM tid')
            in IntState unique rps (Map.insertWith fstOf i (InfoIMethod u tid nt annots iMethod) st) errors fl


addInstance :: Id -> Id -> PackedString -> [Id] -> [(Id,Id)] -> a -> IntState -> IntState

addInstance cls con loc free ctxs down state@(IntState unique rps st errors fl) =
  let st' = Map.update (Just . addInstanceI con loc free ctxs) cls st
  in  IntState unique rps st' errors fl


addNewLetBound :: Id -> TokenId -> a -> IntState -> IntState

addNewLetBound i tid down state =
  addIS i (InfoVar i tid IEnone (InfixDef,9) NoType Nothing) state

-- -==== Reduce

{- |
Adds type of variable to symbol table of internal state.
Assumes that variable is already in symbol table.
Adds error message, if there exists already a type for the variable
in the symbol table or type is badly formed (duplicate predicates in context). 
-}
updVarNT :: Pos -> Id -> NewType -> Reduce IntState IntState

updVarNT pos i nt state@(IntState unique rps st errors fl) =
  case Map.lookup i st of
    Just (InfoVar u tid exp fix NoType annots) ->
      case checkNT pos (strIS state) nt of
        Nothing -> IntState unique rps 
                     (Map.insertWith fstOf i (InfoVar u tid exp fix nt annots) st) 
                     errors fl
        Just err -> IntState unique rps st (err :errors) fl
    Just (InfoVar u tid exp fix nt' annots) ->
      IntState unique rps st 
        (("New type signature for " ++ show tid ++ " at " ++ strPos pos)
         : errors) fl


{- |
Adds arity of variable to symbol table of internal state 
(any old arity is overwritten).
Assumes that variable is already in symbol table.
-}
updVarArity :: Pos -> Id -> Int -> Reduce IntState IntState

updVarArity pos i arity state@(IntState unique rps st errors fl) =
  case Map.lookup i st of
    Just (InfoVar  u tid exp fix nt _) ->  
      -- Always update, might change arity for redefined import in Prelude
      IntState unique rps 
        (Map.insertWith fstOf i (InfoVar u tid exp fix nt (Just arity)) st) errors fl
    _ -> state   
      -- Ignore arity for methods, methods instances and methods default


-- -==== Stand alone

{- | Add new info for identifier to the symbol table -}
addIS :: Id -> Info -> IntState -> IntState

addIS u info state@(IntState unique rps st errors fl) =
  IntState unique rps (Map.insertWith combInfo u info st) errors fl


{- | Lookup identifier in symbol table -} 
lookupIS :: IntState -> Id -> Maybe Info

lookupIS (IntState unique rps st errors fl) i = Map.lookup i st


{- | Update info for identifier in symbol table -}
updateIS :: IntState -> Id -> (Info -> Info) -> IntState

updateIS (IntState unique rps st errors fl) i upd =
  IntState unique rps (Map.update (Just . upd) i st) errors fl


{- | Obtain a new unique and hence also a new internal state -}
uniqueIS :: IntState -> (Id,IntState)

uniqueIS (IntState unique rps st errors fl) = (unique,IntState (succ unique) rps st errors fl)


{- | Associate new uniques with given list of entities; hence also new internal
state -}
uniqueISs :: IntState -> [a] -> ([(a,Id)],IntState)

uniqueISs (IntState unique rps st errors fl) l =
   (zip l [unique..],IntState (toEnum (fromEnum unique+(length l))) rps st errors fl)


{- | Give printable string for identifier -}
strIS :: IntState -> Id -> String

strIS state i =
   case lookupIS state i of
     Just info -> show (tidI info)
     Nothing -> 'v':strId i


{- | Give token of identifier -}
tidIS :: IntState -> Id -> TokenId

tidIS state i =
   case lookupIS state i of
     Just info -> tidI info

getErrors :: IntState -> (IntState,[String])
getErrors (IntState unique rps st errors fl) = (IntState unique rps st [] fl, errors )

getErrorsIS :: IntState -> Either [String] IntState
getErrorsIS is@(IntState unique rps st errors fl)
    | null errors = Right is
    | otherwise   = Left errors

addError :: IntState -> [Char] -> IntState
addError (IntState unique rps st errors fl) err = 
  IntState unique rps st (err:errors) fl

getSymbolTable :: IntState -> Map.Map Id Info
getSymbolTable (IntState unique rps st errors fl) = st

mrpsIS :: IntState -> PackedString
mrpsIS (IntState unique (i,rps) st errors fl) = rps
miIS :: IntState -> Id
miIS (IntState unique (i,rps) st errors fl) = i

getFlags :: IntState -> Flags
getFlags (IntState unique (i,rps) st errors fl) = fl

getIndDataIS :: IntState -> Info -> Id
getIndDataIS state indDataI =
  case constrsI indDataI of
    (c:_) ->   -- Can only be one constructor 
      case lookupIS state c of
        (Just infoCon) ->
          case ntI infoCon of
            (NewType ctx free [] (NTcons con _ _:_)) -> con


globalIS :: IntState -> Id -> Bool

globalIS state i =
  case lookupIS state i of
    Nothing -> False
    Just info -> globalI info
  where
  globalI (InfoData   unique tid ie nt dk) = isExported ie
  globalI (InfoClass  unique tid ie nt ms ds insts) = isExported ie
  globalI (InfoVar     unique tid IEsel fix nt annot) = True
  globalI (InfoVar     unique tid ie fix nt annot) = isExported ie
  globalI (InfoConstr  unique tid ie fix nt fields iType) = 
    globalI' (lookupIS state iType) 
  globalI (InfoField   unique tid ie icon_offs iData iSel) = 
    globalI' (lookupIS state iData) 
  globalI (InfoMethod  unique tid ie fix nt annot iClass) = True
  globalI (InfoIMethod  unique tid nt annot iMethod) = True
  globalI (InfoDMethod  unique tid nt annot iClass) = True
  globalI (InfoName  unique tid arity ptid _) = False --PHtprof

  globalI' (Just (InfoData   unique tid IEall nt dk)) = True
  globalI' _ = False


arityIS :: IntState -> Id -> Int
-- arity with context

arityIS state i = 
       case lookupIS state i of 
        Just (InfoIMethod  unique tid (NewType _ [] ctxs [NTcons tcon _ _]) (Just arity) iMethod) ->
         case lookupIS state iMethod of
          Just (InfoMethod  unique tid ie fix (NewType _ [] ictxs _) (Just iarity) iClass) ->
               let aCtxs  = length ictxs
                   aArity = iarity
                   aClass = (length . (\(_,_,x)->x) . fromJust . 
                             flip Map.lookup ((instancesI . fromJust . lookupIS state) iClass)) tcon
               in --trace ("<arityIS id="++show i++" ctx="++show aCtxs++" ar="++show aArity++" cls="++show aClass++">") $
                  aCtxs + aArity + aClass

--             length ctxs + arity + (length . snd . fromJust . lookupAT ((instancesI . fromJust . lookupIS state) iClass)) tcon
--             length ictxs + length ctxs + arity 
        Just info@(InfoIMethod  unique tid _ _ iMethod) -> error ("arityIS " ++ show info)
        Just info -> --trace ("arityIS id="++show i++" info="++descI info) $ 
                     arityI info
        _ -> error ("arityIS in IntState.hs couldn't find " ++ show i)



{- |
Tests if context of type has duplicate predicates.
Second argument converts class identifier to string.
*** This module not a good place for this function.
-}
checkNT :: Pos -> (Id -> String) -> NewType -> Maybe String

checkNT pos strFun (NewType free [] ctxs nts) =
  case (filter ((1/=) . length) . group) ctxs of
    [] -> Nothing
    [x] -> Just ("Multiple occurences of " ++ (strFun . fst . head) x ++
                 " with identical type variable in context close to " ++ 
                 strPos pos) 
    xs -> Just ("Multiple occurences of " 
                ++ mixCommaAnd (map (strFun . fst . head) xs) ++
                " with identical type variables in context close to " ++ 
                strPos pos) 

{- End Module IntState ------------------------------------------------------}
