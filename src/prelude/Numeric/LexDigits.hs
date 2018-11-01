module Numeric where

import IsDigit
import Nonnull

lexDigits		:: ReadS String	

lexDigits		=  nonnull isDigit
