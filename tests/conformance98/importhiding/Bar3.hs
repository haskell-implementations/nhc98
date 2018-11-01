module Bar3 (module Baz) where

import Baz hiding (Ding(..))
