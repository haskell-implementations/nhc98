module NonStdEval(evaluated,evaluating) where

cEvaluated primitive 1 :: E a -> Bool

cEvaluating primitive 1 :: E a -> Bool

data E a = E a

evaluated x = cEvaluated (E x)
evaluating x = cEvaluating (E x)
