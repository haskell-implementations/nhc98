module IO where

import DHandle
import DIOError

hWaitForInput         :: Handle -> Int -> IO Bool
hWaitForInput h n      = error "Not defined: hWaitForInput"

hReady                :: Handle -> IO Bool
hReady h               = hWaitForInput h 0

hLookAhead            :: Handle -> IO Char
hLookAhead h           = error "Not defined: hLookAhead"

hIsOpen               :: Handle -> IO Bool
hIsOpen h              = error "Not defined: hIsOpen"

hIsClosed             :: Handle -> IO Bool
hIsClosed h            = error "Not defined: hIsClosed"

hIsReadable           :: Handle -> IO Bool
hIsReadable h          = error "Not defined: hIsReadable"

hIsWritable           :: Handle -> IO Bool
hIsWritable h          = error "Not defined: hIsWritable"

hIsSeekable           :: Handle -> IO Bool
hIsSeekable h          = error "Not defined: hIsSeekable"

