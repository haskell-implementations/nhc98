module Bar2 (module Baz) where

import Baz hiding (Ding(..))
