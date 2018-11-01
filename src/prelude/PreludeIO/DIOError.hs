module Prelude (IOError(..)) where

import IO (Handle)
import NHC.DErrNo

data IOError
	--             operation  filename     file         error-code
        = IOError       String (Maybe String) (Maybe Handle) ErrNo
	--             operation  file
	| EOFError      String   Handle
	--             location
	| PatternError  String
	--             location  message
	| UserError     String   String
