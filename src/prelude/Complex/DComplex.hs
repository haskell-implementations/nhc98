module Complex where

infix 6 :+

data  (RealFloat a) => Complex a = !a :+ !a
