module Numeric (FFFormat(..)) where

-- These are the floating point string-format styles.
-- This type is not exported from Numeric.

data FFFormat = FFExponent | FFFixed | FFGeneric
