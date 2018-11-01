{-
    The make module does dependency analysis starting from the given
    root file and then compiles all the seperate parts.
-}

module Make2(make2) where

import Data.List
import Data.Maybe
import Control.Monad

import Flags
import Front
import Package
import SysDeps(unpackPS)
import Directory
import Syntax
import TokenId
import Compile
import System.FilePath
import Core.Linker

import qualified Data.Map as Map
import qualified Data.Set as Set
import System.Make.Low


type ModuleName = String
type RootPath = String

type Depend = (RootPath,FilePath,FrontData,ModuleName,[ModuleName])


make2 :: Flags -> FilePath -> IO ()
make2 flags file = do
    (fron,name,imports) <- readModule file
    let root = calcRootPath file name
    pd <- package flags root
    dep <- dependencies pd [(root,file,fron,name,imports)]

    let mp = Map.fromList [(name,root) | (root,file,fron,name,imports) <- dep]
        (targets,rules) = unzip $ map (genRules flags mp) dep
    runMake (concat targets) (concat rules)


genRules :: Flags -> Map.Map ModuleName RootPath -> Depend -> ([FilePath],[Rule])
genRules flags mp (root,file,fron,name,imports) = (,)
    [objSelf "hbc"]
    [Rule (compile t)
          (file : map (obj "hi") imports)
          (objSelf "hi" : objSelf "hbc" : [objSelf "ycr" | t])
    | t <- [True,False], t || not (sGenCore flags)]
    where
        obj ext name = objFile flags (fromJust $ Map.lookup name mp) name ext
        objSelf ext = if name /= "Main" then obj ext name else
                      if ext == "hbc" then replaceExtension file "hbc"
                                      else objFile flags root (takeBaseName file) ext

        compile = undefined


objFile :: Flags -> RootPath -> ModuleName -> String -> FilePath
objFile _ root name ext = root </> "yhc_obj" </> name <.> ext



-- return the module name and a list of imported modules
readModule :: FilePath -> IO (FrontData,ModuleName,[ModuleName])
readModule = undefined -- dm <- getFileModuleFl


-- find the package of a module, and where the file is
findModule :: PackageData -> ModuleName -> IO (RootPath,FilePath)
findModule = undefined


-- complete a dependency table
dependencies :: PackageData -> [Depend] -> IO [Depend]
dependencies pd x = do
        res <- f (Set.fromList mods) (concat imps)
        return $ x ++ res
    where
        (_,_,_,mods,imps) = unzip5 x
    
        f seen [] = return []
        f seen (t:odo) | t `Set.member` seen = f seen odo
                       | otherwise = do
            (root,file) <- findModule pd t
            (fron,name,imports) <- readModule file
            when (t /= name) $
                error $ "Error, module name vs filename clash\n" ++
                        "File: " ++ file ++ "\n" ++
                        "Expected: " ++ t ++ "\n" ++
                        "Found: " ++ name
            rest <- f (Set.insert name seen) (imports ++ odo)
            return $ (root,file,fron,name,imports) : rest


{-



> make flags file = do dm             <- getFileModule flags file
>                      pd             <- Package.package flags (calcRootPath file (dmModule dm))



> getFileModule :: Flags -> FilePath -> IO DepMod
> getFileModule flags file =
>     do frontdata <- front flags file
>        let fileflags = fFileFlags frontdata
>
>        dirtyHi <- isDirty file (sTypeFile fileflags)
>        dirtyHbc <- isDirty file (sObjectFile fileflags)
>        dirtyYcr <- isDirty file (sCoreFile fileflags)
>        let dirty = dirtyHi || dirtyHbc || (dirtyYcr && sGenCore flags)
>        return $ DepMod (fModName frontdata) (Just file) Nothing (Just frontdata) dirty





> getFileModule :: Flags -> FilePath -> IO DepMod
> getFileModule flags file =
>     do frontdata <- front flags file
>        let fileflags = fFileFlags frontdata
>
>        dirtyHi <- isDirty file (sTypeFile fileflags)
>        dirtyHbc <- isDirty file (sObjectFile fileflags)
>        dirtyYcr <- isDirty file (sCoreFile fileflags)
>        let dirty = dirtyHi || dirtyHbc || (dirtyYcr && sGenCore flags)
>        return $ DepMod (fModName frontdata) (Just file) Nothing (Just frontdata) dirty






DepMod is a dependent module 
   dmModule          the name of the module
   dmHSFile          the name of the associated HS file (or Nothing)
   dmHIFile          the name of the associated HI file (or Nothing)
   dmParsed          possibly the frontend data of the parsed hs file (or Nothing)
   dmDirty           whether the hs file definitely needs to be recompiled
                     (false if there is no hs file, true if there is no hi file,
                      if both then true if hsfile is newer than the hi file)

> data DepMod = DepMod { dmModule    :: String,
>                        dmHSFile    :: Maybe FilePath,
>                        dmHIFile    :: Maybe FilePath,
>                        dmParsed    :: Maybe FrontData,
>                        dmDirty     :: Bool}

> instance Show DepMod where
>     show (DepMod m hs hi _ d) = "DepMod "++show m++" "++(if d then "dirty" else "clean")++
>                                 " [hs '"++show hs++"'] [hi '"++show hi++"']"

DepData is the data produced and used by the dependency analyser. It consists of the dependency
graph and a map from module names to node identifiers. This nodemap is needed to prevent us 
getting caught in cycles.

> type DepGraph = Graph () [DepMod]
> type DepData = (DepGraph, Map.Map String NodeId)

make takes the program flags and the path to the root module. It then calculates all the dependencies
and compiles all the code in order.

> make :: Flags -> FilePath -> IO ()
> make flags file = do dm             <- getFileModule flags file
>                      pd             <- Package.package flags (calcRootPath file (dmModule dm))
>                      let modname = dmModule dm
>
>                      if sCompileOne flags then
>                         -- if just compiling one then don't do dependency analysis
>                         do let frontdata = fromJust (dmParsed dm)
>                                deps      = depModDependencies dm
>                                getMod m  = do (hs,hi) <- Package.getModule pd True modname m
>                                               return ("",hi)
>
>                            depDMs <- mapM (getDepMod flags getMod) deps
>                            compile [dm] depDMs
>                       else 
>                         -- otherwise compile from dependency graph
>                         do let (rid,graph) = runState (addNode [dm]) emptyGraph
>                                nmap        = Map.fromList [(modname, rid)]
>                            (graph',_)     <- makeDepGraph flags pd "" modname (graph,nmap) (Just dm)
>                            let graph'' = execState (mergeScc [] rid) graph'
>                            _ <- traverse graph'' rid Map.empty
>
>                            let coreAll = replaceExtension (sCoreFile $ fFileFlags $ fromJust $ dmParsed dm) "yca"
>                            coreAllDirty <- isDirty file coreAll
>                            when (sLinkCore flags && coreAllDirty) $
>                                 coreLinker pd (fromJust $ dmParsed dm)
>                                        [x | Just x <- map dmParsed $ concat $ getNodes graph''] coreAll
>                            return ()

getFileModule takes a path to a source file and returns the associated DepMod. This is needed to convert
the initial file path passed to make into a module.

FIXME: currently assumes that module is always dirty .. this is wasteful

> getFileModule :: Flags -> FilePath -> IO DepMod
> getFileModule flags file =
>     do frontdata <- front flags file
>        let fileflags = fFileFlags frontdata
>
>        dirtyHi <- isDirty file (sTypeFile fileflags)
>        dirtyHbc <- isDirty file (sObjectFile fileflags)
>        dirtyYcr <- isDirty file (sCoreFile fileflags)
>        let dirty = dirtyHi || dirtyHbc || (dirtyYcr && sGenCore flags)
>        return $ DepMod (fModName frontdata) (Just file) Nothing (Just frontdata) dirty

-----------------------------------------------------------------------------------------------------------------
Dependency analysis code
-----------------------------------------------------------------------------------------------------------------

makeDepGraph builds the dependency graph for a given module name. It assumes that the module 
has not be examined already.

> makeDepGraph :: Flags -> PackageData -> String -> String -> DepData -> Maybe DepMod -> IO DepData
> makeDepGraph flags pd asker modname depdata mdm = 
>        -- get the dep mod structure for the module
>     do dm <- case mdm of 
>                  Just dm -> return dm
>                  Nothing -> getDepMod flags (Package.getModule pd False asker) modname 
>    
>        -- update the depdata with a new graph node and updated mapping
>        let (depdata1,nid) = addNewDepMod depdata dm
>            dmDeps         = depModDependencies dm
>        -- make the dependencies
>        depdata2 <- makeAllDeps flags dmDeps depdata1
>        -- lookup all the node ids for the deps and link all the dependencies to the new node
>        let ndeps    = map (modLookup depdata2) dmDeps
>            depdata3 = linkAll depdata2 nid ndeps
>        -- all done
>        return depdata3
>     where
>     -- much like mapM_ makeDepGraph' but threads the depdata between them as well
>     makeAllDeps flags []     depdata = return depdata
>     makeAllDeps flags (m:ms) depdata = 
>         do depdata' <- makeDepGraph' flags pd modname m depdata
>            makeAllDeps flags ms depdata'
>
>     -- return the nodeid associated with a particular module name
>     modLookup (_,nmap) modname = fromJust (Map.lookup modname nmap)
>
>     -- link a node to a list of other nodes and return the new graph
>     linkAll (graph,nmap) from ts = 
>         let graph' = execState linkm graph
>             linkm      = mapM_ (\t -> addEdge from t ()) ts                            
>         in (graph',nmap)

makeDepGraph' is like makeDepGraph but it checks whether the module has already been examined.

> makeDepGraph' :: Flags -> PackageData -> String -> String -> DepData -> IO DepData
> makeDepGraph' flags pd asker modname depdata@(graph, nmap) =
>     case Map.lookup modname nmap of 
>         Just _ -> return depdata
>         Nothing -> makeDepGraph flags pd asker modname depdata Nothing

getDepMod takes a module name and searchs for that module. It then builds the corresponding DepMod
structure and returns it

> getDepMod :: Flags -> (String -> IO (FilePath,FilePath)) -> String -> IO DepMod
> getDepMod flags getModule modname = 
>     do -- first of all search for the right filename for the module
>        (hsfile, hifile) <- getModule modname
>        frontdata <- if null hsfile then return Nothing
>                     else liftM Just $ front flags hsfile
>        let mhs = if null hsfile then Nothing else Just hsfile
>            mhi = if null hifile then Nothing else Just hifile
>        dirty <- isDirty hsfile hifile
>        return $ DepMod modname mhs mhi frontdata dirty

isDirty takes the path to a haskell source file and the path to a haskell interface file and returns
whether the haskell source file needs to be recompiled or not (w.r.t the dates of the two files)

> isDirty :: FilePath -> FilePath -> IO Bool
> isDirty [] hi = return False
> isDirty hs [] = return True
> isDirty hs hi = do hsExist <- doesFileExist hs
>                    hiExist <- doesFileExist hi
>                    if hsExist && hiExist then do
>                       hsTime <- getModificationTime hs
>                       hiTime <- getModificationTime hi
>                       return (hsTime > hiTime)
>                     else if hiExist then return False
>                     else return True

depModDependencies takes a DepMod and lists the names of the modules that it depends on

> depModDependencies :: DepMod -> [String]
> depModDependencies dm = 
>     case dmParsed dm of
>         Nothing        -> []
>         Just frontdata -> let imps = fImports frontdata 
>                           in map (\(mrps,_,_) -> reverse (unpackPS mrps)) imps

addNewDepMod takes the dependency data and adds a new node to the graph and a new
mapping to the node map.

> addNewDepMod :: DepData -> DepMod -> (DepData,NodeId)
> addNewDepMod (graph,nmap) dm =
>     case Map.lookup (dmModule dm) nmap of 
>         Just nid -> ((graph,nmap), nid)
>         Nothing  -> let (nid,graph') = runState (addNode [dm]) graph
>                         nmap'        = Map.insert (dmModule dm) nid nmap
>                         depdata      = (graph',nmap')
>                     in (depdata, nid)

-----------------------------------------------------------------------------------------------------------------
Graph merging code
-----------------------------------------------------------------------------------------------------------------

It is necessary to merge cyclic groups so that these can be compiled together. This then leaves us with a
DAG.

Stack is used to represent a stack of node identifiers, this is used to find cycles in the dependency graph

> type Stack = [NodeId]

mergeScc merges 'strongly connected components', which is to say the parts of the graph that
forms cycles. For example

                    A                                   AB
                  // \                                    \ 
   the graph      B   C             would become           C
                     / \                                   |
                    D===E                                 DE

It does this using a stack. It traverses the graph pushing nodes on the stack and if it gets to
a node that's already on the stack then all the nodes on the stack between that one and the top of the stack
must be cyclicly dependent so they can all be merged.

> mergeScc :: Stack -> NodeId -> GraphMonad DepGraph ()
> mergeScc ss nid = 
>     case stackFrom nid ss [] of
>         Just (m:ms) -> mapM_ (merge m) ms
>         _           -> do outs <- getOutEdges nid
>                           mapM_ (mergeScc (nid:ss)) outs
>     where
>     stackFrom x []     acc = Nothing
>     stackFrom x (y:ys) acc 
>         | x == y    = Just (y:acc)
>         | otherwise = stackFrom x ys (y:acc)
>

merge takes two nodes and merges the secondt into the first, edges are moved and the values unioned. So 

                         A
                       // \                            AB
  merge A B in         B   D        would give         | \
                       |                               C  D
                       C

> merge :: NodeId -> NodeId -> GraphMonad DepGraph ()
> merge into node =       
>       do got <- hasNode node
>          if got then 
>             do outs <- getOutEdges node
>                ins  <- getInEdges node
>                mapM_ (\i -> moveEdgeDst i node into) ins
>                mapM_ (\i -> moveEdgeSrc node i into) outs
>                ndata <- getNodeData node
>                updateNode into (++ndata)
>                removeNode node
>                removeSelfs into
>           else
>             return ()
>     where
>     -- removeSelfs removes all self edges from a node.
>     removeSelfs into = do self <- hasEdge into into
>                           if self then
>                              do removeEdge into into
>                                 removeSelfs into
>                            else
>                              return ()

moveEdgeDst moves the destination node of an edge to another node (the edge must exist)

> moveEdgeDst :: NodeId -> NodeId -> NodeId -> GraphMonad DepGraph ()
> moveEdgeDst fid tid ntid = 
>     do ed <- getEdgeData fid tid       
>        removeEdge fid tid
>        addEdge fid ntid ed

moveEdgeSrc moves the source node of an edge to another node (the edge must exist)
       
> moveEdgeSrc :: NodeId -> NodeId -> NodeId -> GraphMonad DepGraph ()
> moveEdgeSrc fid tid nfid = 
>     do ed <- getEdgeData fid tid
>        removeEdge fid tid
>        addEdge nfid tid ed       

-----------------------------------------------------------------------------------------------------------------
Traversal code
-----------------------------------------------------------------------------------------------------------------

Having built the dependency graph and flattened cycles to convert it into a DAG it is then necessary to 
traverse the graph and do the compiling.

traverse takes the dependency graph and the root node and it traverses the graph and compiles files as necessary. 
It returns whether the node had to be recompiled.

> type TravAssoc = Map.Map NodeId Bool

> traverse :: DepGraph -> NodeId -> TravAssoc -> IO (Bool,TravAssoc)
> traverse graph nid seen =
>     case Map.lookup nid seen of
>          Just recomped -> return (recomped,seen)
>          Nothing       ->
>             do -- FIXME: check we haven't visited here already
>                -- traverse into the dependencies
>               (depRecomps,seen') <- traverseAll seen deps
>               -- do we need to recompile?
>               recomp <- if or depRecomps || any dmDirty dms then
>                            do compile dms depDMs
>                               return True
>                          else
>                            return False
>               let seen'' = Map.insert nid recomp seen'
>               return (recomp, seen'')
>     where
>     traverseAll seen []     = return ([], seen)
>     traverseAll seen (d:ds) = 
>         do (r,seen')   <- traverse graph d seen
>            (rs,seen'') <- traverseAll seen' ds
>            return (r:rs, seen'')
>
>     dms    = evalState (getNodeData nid) graph
>     deps   = evalState (getOutEdges nid) graph 
>     depDMs = concat $ evalState (mapM getNodeData deps) graph

compile takes a list of DepMods and compiles them

> compile :: [DepMod] -> [DepMod] -> IO ()
> compile [dm] deps = compileOne (fromJust (dmParsed dm)) (getDepHIs deps)
> compile dms  deps = error $ "Cyclic dependency detected in modules "++show (map dmModule dms)

given a list of DepMod calculate the .hi file dependencies. Returns an association between module
names and the filepath to the required .hi file.

> getDepHIs :: [DepMod] -> Map.Map String FilePath
> getDepHIs dms = Map.fromList (map depDM dms)
>     where
>     depDM dm = let hshi = sTypeFile $ fFileFlags $ fromJust $ dmParsed dm
>                    hi   = maybe hshi id (dmHIFile dm)
>                in (dmModule dm, hi)



-}
