module Package (package, getModule, getOneModule, PackageData) where

import Directory
import List
import Char
import Maybe
import Control.Monad

import Flags
import Error
import System.FilePath



data PackageData = PackageData [FilePath]


package :: Flags -> FilePath -> IO PackageData
package flags rootpath =
    do let paths = [sBasePath flags </> "lib" </> "yhc" </> "packages"]
       packages <- concatMapM getDirectoryListFull paths
       versions <- concatMapM f packages
       let result = pickPackages versions
       return $ PackageData (rootpath : sIncludes flags ++ result)
                   
    where
        getDirectoryListFull path = do xs <- getDirectoryList path
                                       return [(x, combine path x) | x <- xs]
    
        f (pack, path) = do vers <- getDirectoryList path
                            return [(pack, ver, combine path ver) | ver <- vers]


-- decide which packages are "best"
-- data structure is (package name, package version, package folder)
pickPackages :: [(String, String, FilePath)] -> [FilePath]
pickPackages xs = concatMap f $ groupBy eqFst3 $ sortBy cmpFst3 xs
    where
        cmpFst3 (a,_,_) (b,_,_) = a `compare` b
        eqFst3  (a,_,_) (b,_,_) = a == b
        cmpFstRev (a,_) (b,_) = b `compare` a
        
        f xs = if any (null . fst) vers then map snd vers else [snd $ head $ sortBy cmpFstRev vers]
            where vers = map (\(a,b,c) -> (versionNumber b, c)) xs
        
        -- return [] on nothing
        versionNumber :: String -> [Integer]
        versionNumber xs = g [] "" xs
        
        g res todo ('.':xs) | todo /= [] = g (g res todo []) "" xs
        g res todo ( x :xs) | isDigit x = g res (x:todo) xs
        g res todo [] | todo /= [] = res ++ [read (reverse todo)]
        g _ _ _ = []



-- | take the package data and the name of the module you want
--   return the (modulepath.hs, modulepath.hi)
--   if either doesn't exist, return null, at least one must exist 
--   if requireHi is True then the .hi file MUST exist
getModule :: PackageData -> Bool -> String -> String -> IO (FilePath, FilePath)
getModule (PackageData rs@(root:rest)) requireHi asker file = 
        do local <- testPackage root
           res <- concatMapM testPackage rest
           case (local,res) of
                ([x], _) -> return x
                (_, [x]) -> return x
                ([], []) -> raiseError $ ErrorFileNone noErrPos askMsg file rs
                (as, bs) -> raiseError $ ErrorFileMany noErrPos askMsg file (map anyOne (as ++ bs))
    where
        askMsg = if null asker then "asked for by the compiler" else "imported from " ++ asker
    
        -- for error messages only, when you find multiple items
        anyOne ("",x) = x
        anyOne (x, _) = x
    
        -- what is the location for an .hi file (in the hi dir)
        hiLocation = "hi" </> addExtension file "hi"
        hsLocation = getLocations file

        testPackage pkg =
            do
                bHi <- doesFileExist basehi
                his <- mapM (calcHi bHi) basehs
                hss <- mapM calcHs basehs
                let poss = filter isValid $ [("",basehi) | bHi] ++ concatMap power (zip hss his)
                    (hasHs, noHs) = partition (not . null . fst) poss
                
                return $ if null hasHs then noHs else hasHs
            where
                basehi = combine pkg hiLocation
                basehs = map (combine pkg) hsLocation
                
                -- calculate an hi path
                calcHi True  path = return [basehi]
                calcHi False path = do let s = addExtension path "hi"
                                       b <- doesFileExist s
                                       if b then return [s] else return []
                
                calcHs path = do let slhs = addExtension path "lhs"
                                     shs  = addExtension path "hs"
                                 blhs <- doesFileExist slhs
                                 bhs  <- doesFileExist shs
                                 return $ [slhs | blhs] ++ [shs | bhs]

                power ([],xs) = map (\x -> ("",x)) xs
                power (xs,[]) = map (\x -> (x,"")) xs
                power (xs,ys) = [(x,y) | x <- xs, y <- ys]
                
                isValid (hs,hi) = not (null hi) || (not requireHi && not (null hs))


-- | Find the location of one single module
getOneModule :: String -> IO FilePath
getOneModule modName = do curdir <- getCurrentDirectory
                          (res,_) <- getModule (PackageData [curdir]) False "" modName
                          return res


-- figure out where a module could roam
-- obey the Haskell' proposal (http://hackage.haskell.org/trac/haskell-prime/wiki/DottedHierarchicalModules)
getLocations :: String -> [FilePath]
getLocations modu = reverse $ f [] modu
    where
        f prefix xs = joinPath (prefix ++ [xs]) :
                      if null b then [] else f (prefix ++ [a]) (tail b)
            where (a,b) = break (=='.') xs

concatMapM :: Monad m => (a -> m [b]) -> [a] -> m [b]
concatMapM f xs = liftM concat $ mapM f xs


getDirectoryList :: FilePath -> IO [String]
getDirectoryList path = do x <- getDirectoryContents path
                           let xfull = filter (not . isFakeDirectory) x
                           filterM (\a -> doesDirectoryExist $ combine path a) xfull

isFakeDirectory :: FilePath -> Bool
isFakeDirectory x = x == "." || x == ".."

