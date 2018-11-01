module Overlap
  ( Overlap
  , Resolution
  , addOverlap
  , deAlias
  ) where

-- Added in H98: the overlap table, which allows for later resolution of
-- shared module aliases.               Malcolm.Wallace@cs.york.ac.uk

import TokenId(TokenId)
import IdKind
import Id
import qualified Data.Map as Map
import Util.Extra
import List (delete)

--                                       resolved yet?
--                                                  source alias
--                                                          other possible aliases
type Overlap = Map.Map (TokenId,IdKind) (Resolution,TokenId,[TokenId])
data Resolution = Unresolved | ResolvedTo | Excluded

-- For every ident that could resolve to more than one qualified ident,
-- add multiple entries into the Overlap table.  For instance, if
-- M.foo could resolve to A.foo, B.foo, or C.foo, put all of:
--     C.foo <--- (Unresolved,"M.foo",["A.foo","B.foo"])
--     B.foo <--- (Unresolved,"M.foo",["A.foo","C.foo"])
--     A.foo <--- (Unresolved,"M.foo",["B.foo","C.foo"])
-- into the table.  Eventually, through resolution, we will choose one
-- renaming (e.g. M.foo ---> C.foo) and exclude the others
-- (e.g. M.foo -/-> A.foo, M.foo -/-> B.foo)

addOverlap :: TokenId -> IdKind -> Overlap -> [TokenId] -> Overlap
addOverlap atid idKind o tids =
    foldr add o tids
  where add t o = Map.insert (t,idKind) (Unresolved, atid, delete t tids) o


-- In deAlias, we compute the new, fully-resolved, qualified-renaming function
-- given the Overlap table and all the idents to be renamed.

deAlias ::
    (TokenId->[TokenId])                -- orig (imprecise) qualified renaming
     -> Overlap                         -- table of known overlaps
     -> Map.Map (TokenId,IdKind) (Either [Pos] [Id]) -- idents to be renamed
     -> ([String], (TokenId->TokenId))  -- errors + new qual-renaming func
deAlias qf o rt =
    (foldr findUndef err flatrt, newqf)
  where
    (err,o') = resolveOverlaps o flatrt
    flatrt   = Map.toList rt      

    findUndef (key, Left poss) err = checkNonUnique key poss err
    findUndef (key, Right _)   err = err

    checkNonUnique key@(_,kind) poss err =
        case Map.lookup key o' of
                         -- No overlap, remains undefined.
          Nothing -> mkErrorND key poss: err
                         -- Overlap, but resolves to a different alias.
          (Just (Excluded,alias,others)) -> err
                         -- Overlap, still unresolved.
          (Just (Unresolved,alias,others)) -> mkErrorOVND key poss alias others: err
                         -- Overlap properly resolved, there must be some mistake.
          (Just (ResolvedTo,alias,others)) -> mkErrorOVD key poss alias others: err

    newqf t =
        case Map.lookup t (foldr buildqf Map.empty (Map.toList o')) of
                -- if in resolution table, use newly-resolved qual-renaming
            (Just t') -> t'
                -- if not in resolution table, use original qual-renaming
            Nothing   -> head (qf t)

    buildqf ((tid,_), (ResolvedTo,alias,_))  t = Map.insertWith (whichqf alias)
                                                                alias tid t
    buildqf ((tid,_), (Excluded,_,_))        t = t 
    buildqf ((tid,_), (Unresolved,_,_))      t = t 

    whichqf alias new old | new==old = old
    whichqf alias new old            = error ("import alias "++show alias
                                       ++" resolves to both "++show new
                                       ++" and "++show old)


resolveOverlaps :: Overlap -> [((TokenId,IdKind), Either [Pos] [Id])]
              -> ([String],Overlap)
resolveOverlaps o rt =
    foldl resolve ([],o) rt
  where
    resolve   o     (key, Left poss) = o
    resolve   o     (key, Right [x]) = mkUnique o key
    resolve (err,o) (key, Right (x:xs)) =
        if all (x==) xs then    --- Tuples are entered twice
            mkUnique (err,o) key
        else (mkErrorMD key (x:xs): err, o)

    mkUnique (err,o) key@(_,kind) =
        case Map.lookup key o of
              -- No overlap, nothing to do
          Nothing -> (err, o)
              -- Overlaps, already resolved to a different alias.
          (Just (Excluded,alias,others)) -> (mkErrorOV key alias others: err, o)
              -- Overlaps, still unresolved.
          (Just (Unresolved,alias,others)) -> (err, foldr (undef kind) (def key o) others)
              -- Overlaps, resolves to this alias.
          (Just (ResolvedTo,alias,others)) -> (err, foldr (undef kind) o others)

    undef kind tid o = Map.update (\(_,a,as)->Just(Excluded,a,as))   (tid,kind) o
    def   key      o = Map.update (\(_,a,as)->Just(ResolvedTo,a,as)) key        o

------
mkErrorMD :: (Show a, Show b) => (a,b) -> [c] -> String
mkErrorMD (tid,kind) xs =
  show kind ++ ' ':show tid ++ " defined " ++ show (length xs) ++ " times."

mkErrorOV :: (Show a, Show b, Show c) => (a,c) -> b -> [a] -> String
mkErrorOV (tid,kind) alias others =
  show kind ++ ' ':show alias ++ " resolves to two or more of "
  ++ showList (tid:others) "."

mkErrorND :: Show a => (a,IdKind) -> [Pos] -> String
mkErrorND (tid,Method) poss =
  "The identifier " ++ show tid ++ " instantiated at "
  ++ mix "," (map strPos poss) ++ " does not belong to this class."
mkErrorND (tid,kind) poss =
  show kind ++ ' ':show tid ++ " used at " ++ mix ", " (map strPos poss)
  ++ " is not defined."

mkErrorOVND :: (Show a, Show b, Show c) => (a,c) -> [Pos] -> b -> [a] -> String
mkErrorOVND (tid,kind) poss alias others =
  show kind ++ ' ':show alias ++ " used at " ++ mix ", " (map strPos poss)
  ++ " cannot be resolved:\n  none of " ++ showList (tid:others) " is defined."

mkErrorOVD :: (Show a, Show b, Show c) => (a,c) -> [Pos] -> b -> [a] -> String
mkErrorOVD (tid,kind) poss alias others =
  show kind ++ ' ':show alias ++ " used at " ++ mix ", " (map strPos poss)
  ++ " is the correct qualified resolution for all of:\n  "
  ++ showList (tid:others) ",\n but there is still some unknown problem."

------
