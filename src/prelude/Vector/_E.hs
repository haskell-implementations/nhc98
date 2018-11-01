module NHC.Vector(_E(..)) where

-- a box used to protect args from evaluation when they get passed
-- to a foreign function

data _E a = _E a
