-----------------------------------------------------------------------------
-- |
-- Module      :  Getmodtime
-- Copyright   :  Thomas Hallgren
-- 
-- Maintainer  :  Malcolm Wallace <Malcolm.Wallace@cs.york.ac.uk>
-- Stability   :  Stable
-- Portability :  All
--
-- Modification time functionality, especially "When"
-----------------------------------------------------------------------------

module Getmodtime(isOlder, show_When, When(..)) where

import Time

-- | One of Never modified, or modified At a ClockTime
data When = Never | At ClockTime  deriving (Eq, Ord)

instance Show When where
    showsPrec d Never = showString "Never"
    showsPrec d (At i) = showString ("At "++show i)

show_When Never = "Never"
show_When (At t) = show t

isOlder :: When -> When -> Bool
isOlder Never _ = True
isOlder _ Never = False
isOlder (At t1) (At t2) = t1 < t2

