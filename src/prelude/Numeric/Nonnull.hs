module Numeric where

nonnull			:: (Char -> Bool) -> ReadS String

nonnull p s		=  [(cs,t) | (cs@(_:_),t) <- [span p s]]
