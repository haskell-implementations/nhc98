module Parse.ParseI (
                ParseI(..)
              , parseInterface1
              , parseInterface2
              , parseInterface3
              , parseInterface4
              , parseUntilNeed
              ) where

import Util.Extra(pair,triple,noPos)
import Parse.Lex
import Parse.Lexical
import Syntax
--import MkSyntax(mkDeclClass)
import Parse.ParseLib
import Parse.ParseLex
import Parse.Parse2
import TokenId(tNEED,tinterface,tNHCInternal)
import PreImp
import ImportState(ImportState)
import Building (Compiler(..),compiler)

data ParseI st tid declneed rest =
          ParseEof  st
        | ParseNext st Bool tid  rest   -- true if visible
        | ParseNeed st declneed rest

parseAnnotVar :: Parser (Maybe Int) [PosToken] c
parseAnnotVar =
   (\(_,LitInt Boxed i) -> Just i) `parseChk` lannot `ap` int `chk` rannot 

parseAnnotType :: Parser (Int, Bool) [PosToken] c
parseAnnotType =
   (\(_,LitInt Boxed i) unboxed -> (i,unboxed)) `parseChk` lannot `ap` int
                                                    `ap` optBang `chk` rannot 

parseAnnotNewType :: Parser Bool [PosToken] c
parseAnnotNewType =
   lannot `revChk` optBang `chk` rannot 

optBang :: Parser Bool [PosToken] b
optBang = True `parseChk` bang
              `orelse`
          parse False

optSemi :: Parser () [PosToken] b
optSemi = () `parseChk` semi
                `orelse`
           parse ()

parseNeedList :: Parser [[TokenId]] [(Pos, Lex, LexState, [PosTokenPre])] c
parseNeedList =
     many ( ((:[]).snd) `parseAp`  (conid `orelse` varid)
               `orelse`
            (map snd :: ([(a,b)] -> [b])) `parseChk` lit L_LCURL
                      `apCut` many  (conid `orelse` varid) `chkCut` lit L_RCURL)

parseNeedAnnot :: Parser (Maybe [[TokenId]]) [PosToken] b
parseNeedAnnot =
     Just `parseChk` optSemi `chk` lannot `chk` lit (L_ACONID tNEED)
                                      `apCut`  parseNeedList `chk` rannot
        `orelse`
     parse Nothing


parseInterface1 :: Parser
                       (TokenId,
                        [ImpDecl TokenId],
                        [(InfixClass TokenId, Int, [FixId TokenId])],
                        [PosToken])
                       [PosToken]
                       c
parseInterface1 =
    (\(pos,modid) imports fixdecls rest -> (modid,imports,fixdecls,rest))
                `parseChk` k_interface `apCut` bigModId
                `chkCut` lit L_where `chkCut` lcurl
                `apCut` parseImpDecls
                `apCut` parseFixDecls
                `apCut` parseRest

parseInterface2 :: ImportState
                   -> HideDeclIds
                   -> Parser (ImportState, Maybe [[TokenId]], [PosToken]) [PosToken] c
parseInterface2 st hideFun = triple `parseAp` parseITopDecls st [] hideFun
                                        `ap` parseNeedAnnot `ap` parseRest

parseEof :: Parser (Maybe a) [PosToken] c
parseEof = Nothing `parseChk` optSemi `chk` rcurl


parseInterface3 :: ImportState
                   -> [[TokenId]]
                   -> HideDeclIds
                   -> Parser
                          (ParseI ImportState (Pos, TokenId) (Maybe [[TokenId]]) [PosToken])
                          [PosToken]
                          b
parseInterface3 st needs hideFun =
  ParseEof st `parseChk` parseEof
    `orelse`
  ParseNext st `parseChk` k_interface `apCut` optBang `ap` bigModId
                                                              `apCut` parseRest
    `orelse`
  ParseNeed `parseAp` parseITopDecls st needs hideFun `apCut` parseNeedAnnot
                                                              `apCut` parseRest

parseInterface4 :: ImportState
                   -> HideDeclIds
                   -> Parser
                          (ParseI ImportState (Pos, TokenId) declneed [PosToken])
                          [PosToken]
                          c
parseInterface4 st hideFun =
  parseITopDecls st [] hideFun `into`
        \st -> ParseEof st `parseChk` parseEof
                   `orelse`
               ParseNext st `parseChk` k_interface  `apCut` optBang
                                               `ap` bigModId `apCut` parseRest

parseITopDecls :: ImportState
                  -> [[TokenId]]
                  -> HideDeclIds
                  -> Parser ImportState [PosToken] c
parseITopDecls st needs hideFuns =
     optSemi `revChk` iterateSemi0 st semi
                                   (\st -> parseITopDecl st needs hideFuns)

iterateSemi0 :: a1
                -> Parser a i b
                -> (a1 -> Parser a1 i b)
                -> Parser a1 i b
iterateSemi0 st s p = iterateSemi st s p
                        `orelse`
                      parse st

iterateSemi :: a
               -> (Parser a1 i b)
               -> (a -> Parser a i b)
               -> Parser a i b
iterateSemi st s p = p st `intoCut` (\st -> semiIterate st s p) 

semiIterate :: a
               -> Parser a1 i b
               -> (a -> Parser a i b)
               -> Parser a i b
semiIterate st s p = s `revChk` iterateSemi st s p
                        `orelse`
                     parse st

parseITopDecl :: ImportState -> [[TokenId]] -> HideDeclIds
              -> Parser ImportState [PosToken] c
parseITopDecl st needs hideFuns =
  cases
      [ (L_type, \pos ->
                 hType hideFuns st `parseAp` parseAnnotType
                             `ap` parseSimple `chkCut` equal `apCut` parseType)
      , (L_newtype, \pos ->
                    (hData hideFuns st . Left)
                           `parseAp` parseAnnotNewType `ap` parseContexts
                           `ap` parseSimple `apCut`
                               ( equal `revChk` someSep pipe parseConstr
                                   `orelse`
                                 parse [])
                           `ap` parse needs `apCut` parseDeriving)
      , (L_data, \pos ->
                 hDataPrim hideFuns st `parseChk` k_primitive 
                                        `apCut` conid `chk` equal
                                                      `apCut` intPrim
                   `orelse`
                 (hData hideFuns st . Right) `parseAp` unboxed
                           `ap` parseContexts `ap` parseSimple `apCut`
                               ( equal `revChk` someSep pipe parseConstr
                                    `orelse`
                                 parse [])
                           `ap` parse needs `apCut` parseDeriving)
      , (L_class, \pos ->
                  hClass hideFuns st `parseAp` parseContexts `ap` aconid
                            `ap` some avarid `apCut`
                                 (lit L_where `revChk` lcurl
                                              `revChk` parseICSigns
                                              `chk` optSemi
                                              `chkCut` rcurl
                                       `orelse`
                                  parse [])
                            `ap` (parse needs))
      , (L_instance, \pos ->
              if compiler==Yhc then
                   hInstance hideFuns st `parseAp` aconid `chkCut` lit L_At
                                     `apCut` parseContexts
                                     `apCut` aconid `apCut` some parseInst
              else hInstance hideFuns st `parseAp` (parse (noPos,tNHCInternal))
                                     `ap` parseContexts
                                     `apCut` aconid `apCut` some parseInst )
      ]
      (hVarsType hideFuns st
           `parseAp` someSep comma (pair `parseAp` varid `ap` parseAnnotVar)
           `chkCut` coloncolon `apCut` parseContexts `apCut` parseType)

parseICSigns :: Parser [([((Pos, TokenId), Maybe Int)], [Context TokenId], Type TokenId)] [PosToken] c
parseICSigns =
    id `parseChk` optSemi `ap` manySep semi parseICSign


parseICSign :: Parser ([((Pos, TokenId), Maybe Int)], [Context TokenId], Type TokenId) [PosToken] c
parseICSign =
    triple `parseAp` someSep comma (pair `parseAp` varid `ap` parseAnnotVar)
           `chk` coloncolon `ap` parseContexts `ap` parseType



-- | Skip until next @{-# NEED list #-}@, return @(Just ([],Just need,rest))@.
-- The same type as 'parseInterface3' [No it isn't! Who wrote this module anyway?!? --SamB].
--
-- FIXME: simplify this type using the type synonyms in "Parse.ParseCore".
parseUntilNeed :: st
                  -> (ParseI st (Pos, TokenId) (Maybe [[TokenId]]) [PosToken]
                      -> [(Pos, Lex, LexState, [PosTokenPre])]
                      -> ParseError
                      -> ParseResult c [PosToken])
                  -> (ParseError -> ParseResult c [PosToken])
                  -> [(Pos, Lex, LexState, [PosTokenPre])]
                  -> ParseError
                  -> ParseResult c [PosToken]
parseUntilNeed st good bad input err =
   untilNeed input
 where
   untilNeed [] = error "Internal error in parseUntilNeed"
   untilNeed ((pos,L_EOF,_,_):input) = good (ParseEof st) input err
   untilNeed ((_,L_AVARID t,_,_):input) | t==tinterface =
       (ParseNext st `parseAp` optBang `ap` bigModId `apCut` parseRest)
       good bad input err
   untilNeed ((_,L_LANNOT,_,_):(_,L_ACONID x,_,_):input) | x == tNEED =
       ((ParseNeed st . Just) `parseAp` parseNeedList `chk` rannot
                                                      `apCut` parseRest)
       good bad input err
   untilNeed (_:input) = untilNeed input
