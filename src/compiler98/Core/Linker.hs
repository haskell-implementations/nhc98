
module Core.Linker(coreLinker) where

import Util.Extra
import System.FilePath
import Control.Monad
import System.Directory

import Package
import Front
import Yhc.Core
import Flags


ignoreModules :: [String]
ignoreModules = ["PreludeBuiltin"]

requireModules :: [String]
requireModules = ["YHC.Internal"]


coreLinker :: PackageData -> FrontData -> [FrontData] -> FilePath -> IO ()
coreLinker pd startFile inputs output = do
        cores <- mapM (loadCore . sCoreFile . fFileFlags) inputs
        newcores <- f (ignoreModules ++ map fModName inputs) (snub $ requireModules ++ concatMap coreImports cores)

        let allcores = mergeCores rootMod $ cores ++ newcores
            rootMod = sModuleName (fFileFlags startFile)
            rootCor = head $ filter ((==) rootMod . coreName) cores
            rootSet = map coreFuncName $ coreFuncs rootCor
            rootMain = rootMod ++ ";main"
            hasMain = rootMain `elem` rootSet

        putStrLn "Linking..."
        saveCore output $ coreReachable (["main"|hasMain] ++ rootSet)
                        $ addPrims $ addTuple1
                        $ (if hasMain then addMain rootMain else id) $ allcores
    where
        f done [] = return []
        f done (t:odo) | t `elem` done = f done odo
                       | otherwise = do
                            (_,loc) <- getModule pd True "Core linker" t
                            let file = replaceExtension loc "ycr"
                            b <- doesFileExist file
                            when (not b) $ error $ "Core Linker: Failed to find file, " ++ file
                            putStrLn $ "Loading Core for " ++ t
                            c <- loadCore file
                            cs <- f (t:done) (coreImports c ++ odo)
                            return (c:cs)


addPrims :: Core -> Core
addPrims core = core{coreFuncs = map f coreBytecodePrims ++ coreFuncs core}
    where
        f x = CorePrim (primName x) (primArity x) (primName x) "bytecode" True []


addTuple1 :: Core -> Core
addTuple1 core = core{coreDatas = tuple1 : coreDatas core}
    where
        tuple1 = CoreData "Prelude;1()" ["a"] [CoreCtor "Prelude;1()" [("a",Nothing)]]


addMain :: String -> Core -> Core
addMain entry core = core{coreFuncs = newfunc : coreFuncs core}
    where
        CoreFunc nam args _ = coreFunc core entry
        newfunc = CoreFunc "main" args (CoreApp (CoreFun entry) (map CoreVar args))


mergeCores :: String -> [Core] -> Core
mergeCores modname cores = Core modname [] (concat datas) (concat funcs)
    where (datas,funcs) = unzip $ map (\x -> (coreDatas x, coreFuncs x)) cores
