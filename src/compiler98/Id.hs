{- |
This is the start for an abstract data type 'Id'.
We need @instance Eq Id@ and @instance Ord Id@.
Furthermore an 'IdSupply'.
However, currently 'Int' is used for that purpose and shall slowly be
replaced by the new type 'Id'.

Update: Slowly really doesn't cut it very well. Sometimes you have to
just dive in and @newtype@, even if it *will* take days to fix the
type errors. (This is a *slight* exaggeration...)

Now Int has been replaced by the @newtype 'Id'@, but there are a few
places on the frontier that don't really make any sense, such as in
"ByteCode.Compiler" (Why were we passing 'Id's to
'ByteCode.Type.PUSH_ARG'?) and "RenameLib" (why are we passing them to
'TokenId.t_tuple'?)  [SamB]

-}
module Id(Id, IdSupply(..), strId, strTVar) where

import State


newtype Id = Id Int deriving (Eq, Ord)

instance Enum Id where 
    toEnum n = Id n
    fromEnum (Id n) = n

instance Show Id where
    show = strId


-- | Convert an 'Id' to a string suitable for use as a variable name
strId :: Id -> String
strId (Id n) = show n

strTVar :: Id -> String
strTVar v = let v' = fromEnum v
                cv =  toEnum (v' + fromEnum 'a')
            in if 'a' <= cv && cv <= 'z'
               then [cv]
               else toEnum (v'`mod`26 + fromEnum 'a'):'_':show (v'`div`26)
        --     else '_':show v


-- | Whee! here goes to actually trying to *implement* @IdSupply@ ;-)
--
-- At first I thought that because the the various pseudo-monads were
-- just newtyped functions, I couldn't overload them... but then I
-- realized that, since each is the same shape and has a different
-- @FooState@ type, I could index them by that... anyway, here's to
-- readable code that doesn't mix everything all together.
-- [SamB]

class IdSupply state where
    getUniqueId :: State a state Id state


{- End Module Id ------------------------------------------------------------}
