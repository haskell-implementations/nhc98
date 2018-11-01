module Distribution.Parser
  ( Parse(..)
  ) where

import Text.Parse (Parse(..), isWord, field, enumeration, apply, discard)
import Distribution.InstalledPackageInfo (InstalledPackageInfo_(..))
import Distribution.Package (PackageIdentifier(..))
import Distribution.License (License(..))
import Distribution.Version (Version(..))

instance Parse m => Parse (InstalledPackageInfo_ m) where
  parse = do isWord "InstalledPackageInfo"
             isWord "{"
             return InstalledPackageInfo_
                     `apply` field "package"	`discard` isWord ","
                     `apply` field "license"	`discard` isWord ","
                     `apply` field "copyright"	`discard` isWord ","
                     `apply` field "maintainer"	`discard` isWord ","
                     `apply` field "author"	`discard` isWord ","
                     `apply` field "stability"	`discard` isWord ","
                     `apply` field "homepage"	`discard` isWord ","
                     `apply` field "pkgUrl"	`discard` isWord ","
                     `apply` field "description"	`discard` isWord ","
                     `apply` field "category"	`discard` isWord ","
                     `apply` field "exposed"	`discard` isWord ","
                     `apply` field "exposedModules"	`discard` isWord ","
                     `apply` field "hiddenModules"	`discard` isWord ","
                     `apply` field "importDirs"	`discard` isWord ","
                     `apply` field "libraryDirs"	`discard` isWord ","
                     `apply` field "hsLibraries"	`discard` isWord ","
                     `apply` field "extraLibraries"	`discard` isWord ","
                     `apply` field "extraGHCiLibraries"	`discard` isWord ","
                     `apply` field "includeDirs"	`discard` isWord ","
                     `apply` field "includes"	`discard` isWord ","
                     `apply` field "depends"	`discard` isWord ","
                     `apply` field "hugsOptions"	`discard` isWord ","
                     `apply` field "ccOptions"	`discard` isWord ","
                     `apply` field "ldOptions"	`discard` isWord ","
                     `apply` field "frameworkDirs"	`discard` isWord ","
                     `apply` field "frameworks"	`discard` isWord ","
                     `apply` field "haddockInterfaces"	`discard` isWord ","
                     `apply` field "haddockHTMLs"
                     `discard` isWord "}"

instance Parse PackageIdentifier where
  parse = do isWord "PackageIdentifier"
             isWord "{"
             return PackageIdentifier
                     `apply` field "pkgName"	`discard` isWord ","
                     `apply` field "pkgVersion"
                     `discard` isWord "}"

instance Parse License where
  parse = enumeration "License"
              [GPL,LGPL,BSD3,BSD4,PublicDomain,AllRightsReserved,OtherLicense]

instance Parse Version where
  parse = do isWord "Version"
             isWord "{"
             return Version
                     `apply` field "versionBranch"	`discard` isWord ","
                     `apply` field "versionTags"
                     `discard` isWord "}"
