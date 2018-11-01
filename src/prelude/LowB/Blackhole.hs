module Prelude where

-- import PreludeBuiltin

-- The intention is to use a PackedString, when they are available !!!

blackhole :: String  -> a
blackhole fun = error "Blackhole: ?"
