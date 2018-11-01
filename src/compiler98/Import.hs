{- ---------------------------------------------------------------------------
-- Read and process the interface file of one imported module.
-}
module Import (Flags,ImportState,PackedString,TokenId,IdKind,HideDeclIds
              ,readFirst,importOne) where

import IO
import SysDeps(PackedString,unpackPS)
import Flags
import Util.Extra
import Util.OsOnly (isPrelude,fixImportNames)
import TokenId(TokenId(..),extractV)
import Parse.ParseCore(parseit)
import Parse.ParseI
import Parse.Lexical(PosToken,lexical)
import Error
import IExtract
import ImportState(ImportState,putModid2IS)
import IdKind(IdKind)
import PreImp(HideDeclIds)
import qualified Data.Map as Map
import qualified Data.Set as Set
import Maybe -- (fromJust)
import Building(Compiler(..),compiler)


{-
Open an interface file for given module name.
Returns unpacked module name, filename of interface file and its content.
-}
openImport :: Flags -> PackedString -> Map.Map String FilePath
              -> IO (String,String,String)

openImport flags mrps hiDeps
  | compiler==Yhc =
    do let fstr = hiFile
       finput <- tryReadFile "import" fstr
       if sImport flags 
          then hPutStr stderr ("Importing module "++mstr++" from "++fstr++".\n")
          else return ()
       return (mstr, fstr, finput)             

  | compiler==Nhc98 =
    catch (do
             (fstr,finput) <- readFirst filenames 
             if sImport flags 
               then hPutStr stderr 
                      ("Importing module "++mstr++" from "++fstr++".\n")
               else return ()
             return (mstr,fstr,finput))
          (\ err -> ioError (userError (can'tOpenStr mstr filenames err)))
  where
    isUnix = sUnix flags
    preludes = sPreludes flags
    includes = sIncludes flags ++ preludes
    mstr = (reverse . unpackPS)  mrps
    hiFile = fromJust (Map.lookup mstr hiDeps)
    filenames = fixImportNames isUnix (sHiSuffix flags) mstr 
                               (if isPrelude mstr then preludes else includes) 

{-
Read and process the interface file of one imported module.
-}

importOne :: Flags 
          -> ImportState 
          -> Map.Map String FilePath
          -> ( PackedString
             , (PackedString, PackedString, Set.Set TokenId)
                -> [[TokenId]] -> Bool
             , HideDeclIds) 
          -> IO ImportState

importOne flags importState hiDeps (mrps,needFun,hideFun) = do
  (mstr,fstr,finput) <- openImport flags mrps hiDeps
  let lexdata = lexical (sUnderscore flags) fstr finput
  pF (sILex flags) "Lexical Interface" 
     (mixSpace (map (\ (p,l,_,_) -> strPos p ++ ':':show l) lexdata)) 
  case parseit parseInterface1 lexdata of
    Left err -> parseIError fstr err
    Right (modid,imports,fixity,rest) -> do
      if not (sLib flags || sPart flags) && show modid /= mstr
        then hPutStr stderr ("Warning: The module " ++ mstr ++ " is called " 
                             ++ show modid
                             ++ " in its interface file (" ++ fstr ++")\n")
        else return ()  
      case parseit (parseInterface2
                       (needFixity fixity 
                                   (putModidIS importState (extractV modid)))
                       hideFun)
                   rest of
        Left err -> parseIError fstr err
        Right (importState,need,rest) ->
          importCont' importState needFun hideFun mstr fstr need rest


--                   needFun
-- down ((Memo TokenId -> [[TokenId]] -> Bool)

importCont' :: ImportState 
            -> ((PackedString, PackedString, Set.Set TokenId)
                  -> [[TokenId]] -> Bool) 
            -> HideDeclIds
            -> a                        -- module name
            -> [Char]                   -- filename
            -> Maybe [[TokenId]]        -- need
            -> [PosToken]               -- lexical input
            -> IO ImportState

importCont' importState needFun hideFun modid filename need rest =
   importCont (Right (ParseNeed importState need rest))
 where

  importCont (Left err) = parseIError filename err
  importCont (Right (ParseEof  importState)) =  
    return importState :: (IO ImportState)
  importCont (Right (ParseNext importState visible (pos,Visible mrps) rest)) =
    importCont (parseit (parseUntilNeed 
                           (putModid2IS importState visible mrps)) rest)
  importCont (Right (ParseNeed importState (Just needs@(_:_)) rest)) =
     if needFun (getNeedIS importState) needs
     then importCont (parseit (parseInterface3 importState needs hideFun) rest)
     else importCont (parseit (parseUntilNeed importState) rest)

  importCont (Right (ParseNeed importState (Just []) rest)) =
     importCont (parseit (parseInterface3 importState [] hideFun) rest)

  importCont (Right (ParseNeed importState _ rest)) =
     importCont2 (parseit (parseInterface4 importState hideFun) rest)

  importCont2 (Left err) = parseIError filename err
  importCont2 (Right (ParseEof importState)) = return importState
  importCont2 (Right (ParseNext importState visible (pos,Visible mrps) rest)) =
    importCont (parseit (parseUntilNeed 
                           (putModid2IS importState visible mrps)) rest)


{-
Output an error message that is caused by parsing an interface file.
-}
parseIError :: [Char] -> (Pos,String,[String]) -> IO a

parseIError filename err = 
  (ioError . userError . showErr filename) err

