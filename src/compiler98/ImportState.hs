{- |
Internal state of the compiler used from need analysis until renaming

Needs 'IdSupply'?
-}
module ImportState (module ImportState, module Info, Decl) where

import State
import SysDeps(PackedString,packString)
import Syntax(Decl)
import qualified Data.Map as Map
import qualified Data.Set as Set
import Info
import Error
import Id


-- | It is probably best to refrain from direct access to the fields...
data  ImportState =
      ImportState {
        visibleIS    :: Bool,
        uniqueIS     :: Id,            -- ^ next unique 'Id'
        rpsIS        :: PackedString,  -- ^ modid of interface file
        sectionRpsIS :: PackedString,  -- ^ modid of this section of .hi file
        needIS       :: (Set.Set TokenId),   -- ^ new identifiers needed
        renameIS     :: (Map.Map (TokenId,IdKind) (Either [Pos] [Id])),
                                       -- ^ rename (name -> unique)
        symtabIS     :: (Map.Map (TokenId,IdKind) Info),
                                       -- ^ symboltable (real name -> info)
        instsIS      :: [(TokenId,TokenId,TokenId,[Id],[(Pos,TokenId,Id)])],
                   -- ^ [ (mod,realClass, realData, free, Ctxs) ]
        fixityIS     :: (TokenId -> (InfixClass TokenId,Int)),
                                       -- ^ fixity information (name -> fixity)
        errorsIS     :: [Error]        -- ^ errors
      }

instance IdSupply ImportState where
    getUniqueId _ is@(ImportState { uniqueIS = unique }) 
        = (unique, is { uniqueIS = succ unique })
        
    
{- | initial import state -}
initIS :: Map.Map (TokenId,IdKind) [Pos] -> ImportState
initIS rt = 
  ImportState False (toEnum 1) (packString "???") (packString "???") Set.empty
    (Map.map Left rt) Map.empty [] (error "no fixity") []


{- | put modid of interface file into import state -}
putModidIS :: ImportState -> PackedString -> ImportState
putModidIS is rps = is { visibleIS = True, rpsIS = rps, sectionRpsIS = rps }

{- | put modid of current section of interface file into import state -}
putModid2IS :: ImportState -> Bool -> PackedString -> ImportState
putModid2IS is visible rps = is { visibleIS = visible, sectionRpsIS = rps }


getNeedIS :: ImportState -> (PackedString, PackedString, Set.Set TokenId)
getNeedIS is = (rpsIS is, sectionRpsIS is, needIS is)

getSymbolTableIS :: ImportState -> Map.Map (TokenId, IdKind) Info
getSymbolTableIS = symtabIS

getRenameTableIS :: ImportState -> Map.Map (TokenId, IdKind) (Either [Pos] [Id])
getRenameTableIS = renameIS

getErrIS :: ImportState -> Either [Error] ImportState
getErrIS is@(ImportState { errorsIS = errors })
  | null errors = Right is
  | otherwise   = Left errors

importError :: Error -> a -> () -> ImportState -> (a,ImportState)
importError err r _ is = (r, is { errorsIS = err : errorsIS is })



-- Things added as part of an attempt to keep "IExtract" from having
-- to pattern match on so many 'ImportState's

-- | Maybe this should be rolled into 'addSymbolIS'?
addNeedIS :: TokenId -> State0 a ImportState ImportState
addNeedIS tid _ is = is { needIS = Set.insert tid (needIS is) }

addSymbolIS :: (TokenId, IdKind) -> Info -> State0 a ImportState ImportState
addSymbolIS symbol info _ is = is { symtabIS = Map.insertWith combInfo symbol info (symtabIS is) }

findSymbolIS :: (TokenId, IdKind) -> State a ImportState (Maybe Info) ImportState
findSymbolIS symbol _ is = (Map.lookup symbol (symtabIS is), is)
