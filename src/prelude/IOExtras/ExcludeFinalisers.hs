module NHC.IOExtras (excludeFinalisers) where

excludeFinalisers :: IO a -> IO a
excludeFinalisers action = do
    blockFinalisers
    v <- action
    unblockFinalisers
    return v

foreign import ccall blockFinalisers   :: IO a
foreign import ccall unblockFinalisers :: IO a
