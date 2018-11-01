module SccModule(sccTopDecls) where

import Id
import List
import Scc
import Syntax
import Util.Extra(pair,emptySet,unionSet,singletonSet,removeSet,strPos,assocDef)
import SyntaxPos

----  A simple monad

infixl 5 `sAdd`
infixl 5 `sSub`

sUnit a = (a,emptySet)

sAdd (a',ua) (b',ub) = (a' b',unionSet ua ub)

sSub (a',ua) (b',ub) = (a' b',removeSet ua ub)

sMap a [] = sUnit []
sMap a (x:xs) = sUnit (:) `sAdd` a x `sAdd` sMap a xs

sId id = (id,singletonSet id)


----  Now the real work
 
sccTopDecls :: Decls Id -> Decls Id
sccTopDecls topdecls = fst (sDecls topdecls)

 
sDecls :: Decls Id -> (Decls Id,[Id])
sDecls (DeclsParse ds) = 
        let (ds',dep,trans) = split (toEnum 0::Id) [] [] [] (map_sDecl ds)
            dep' = map (\(l,rs) -> (l,nub (translate trans rs))) dep
            scc  = sccDepend dep'
        in
           (DeclsScc (fixDecl scc ds'),remove dep)
        where
            split n ds dep trans [] = (ds,dep,trans)
            split n ds dep trans ((d,(xs,ys)):r) = split (succ n) ((n,d):ds)
                                                         ((n,ys):dep)
                                                         (map (\x->(x,n)) xs ++ trans) r

            translate trans [] = []
            translate trans (x:xs) = translate' trans x (translate trans xs)
            translate' [] x r = r
            translate' ((t,n):ts) x r = if t == x then n : r else translate' ts x r

            fixDecl [] ds = []
            fixDecl (NoRec n:scc) ds = DeclsNoRec (assocDef ds (error "fixDecl1") n):fixDecl scc ds
            fixDecl (Rec ns:scc) ds = DeclsRec (map (assocDef ds (error "fixDecl2")) ns):fixDecl scc ds

            remove dep = case unzip dep of
                           (def,depend) -> removeSet (nub (concat depend)) def

sDecls _ = error "I: sDecls not on [DeclParse..]"

map_sDecl :: [Decl Id] -> [(Decl Id,([Id],[Id]))]
map_sDecl [] = []
map_sDecl (DeclIgnore str: r) = map_sDecl r
map_sDecl (DeclFixity f: r)   = map_sDecl r
map_sDecl (DeclVarsType _ _ _: r) = map_sDecl r
map_sDecl (DeclDataPrim _ _ _: r) = map_sDecl r
map_sDecl (DeclData _ _ _ _ _: r) = map_sDecl r
map_sDecl (DeclPat (Alt pat rhs decls): r) =
        let (decls',use) = sDecls decls
            (rhs',useRhs) = sRhs rhs
        in (DeclPat (Alt pat rhs' decls')
           ,(defPat pat,use `unionSet` useRhs)): map_sDecl r
map_sDecl (DeclFun pos fun funs: r) =
        let (ds,use) = unzip (map_sFun funs)
        in (DeclFun pos fun ds
           ,([fun],foldr unionSet emptySet use)): map_sDecl r
map_sDecl (d@(DeclPrimitive pos fun arity typ): r) =
        (d, ([fun],emptySet)): map_sDecl r
map_sDecl (d@(DeclForeignImp pos callConv str fun arity cast typ x): r) =
        (d, ([fun],emptySet)): map_sDecl r
map_sDecl (d@(DeclForeignExp pos callConv str fun typ): r) =
        (d, ([fun],emptySet)): map_sDecl r

map_sDecl (DeclType simpleid typeid: _) = error "map_sDecl: DeclType"
map_sDecl (DeclTypeRenamed pos id : r) = map_sDecl r
map_sDecl (DeclConstrs pos id pidid:_) = error "map_sDecl: DeclConstrs"
map_sDecl (DeclClass pos cid id1 id2 fd did:_) = error "map_sDecl: DeclClass"
map_sDecl (DeclInstance pos cid id1 id2 did:_) = error "map_sDecl: DeclInstance"
map_sDecl (DeclError s:_) = error "map_sDecl: DeclError"
-- map_sDecl (DeclAnnot did aid:r) = map_sDecl r -- Ignore, introduced in Rename...
map_sDecl (x: r) = error ("map_sDecl (_ at " ++ strPos (getPos x) ++ ":r)\n")

map_sFun [] = []
map_sFun (Fun pats rhs decls:r) =
        let (decls',use) = sDecls decls
            (rhs',useRhs) = sRhs rhs
        in (Fun pats rhs' decls',(use `unionSet` useRhs) `removeSet` defPats pats): map_sFun r

defDecls (DeclsParse decls) = concat (map defDecl decls)

defDecl (DeclVarsType ids ctx t) = [] --       error "I: defDecl (DeclVarsType ...)"
defDecl (DeclPat (Alt pat gdexps decls)) =
       defPat pat
defDecl (DeclFun pos fun funs) =
       [fun]
defDecl (DeclPrimitive pos fun arity typ) =
       [fun]
defDecl (DeclForeignImp pos callConv str fun arity cast typ _) =
       [fun]
defDecl (DeclForeignExp pos callConv str fun typ) =
       []
defDecl (DeclIgnore str) =
       []
defDecl e = error ("defDecl: _" ++ strPos (getPos e))

defPat p = snd (sPat p)
defPats p = snd (sPats p)


sRhs (Unguarded exp) = sUnit Unguarded `sAdd` sExp exp
sRhs (PatGuard gdexps) = sUnit PatGuard `sAdd` sMap sPatGdExp gdexps

sPatGdExp (qs,e2) =
        sUnit pair `sAdd` sQuals qs `sAdd` sExp e2

sQuals [] = sUnit []
sQuals (QualExp exp:r) = sUnit (\ e r -> QualExp e:r) `sAdd` sExp exp `sAdd` sQuals r
sQuals (QualPatExp pat exp:r) = sUnit (\ e r p -> QualPatExp p e:r) `sAdd` sExp exp `sAdd` sQuals r `sSub` sPat pat
sQuals (QualLet decls:r) =
        let (decls',use) = sDecls decls
            (r',ruse) = sQuals r
        in (QualLet decls':r',(use `unionSet` ruse) `removeSet` defDecls decls)

sExps es = sMap sExp es
sPats es = sExps es
sPat e   = sExp e

sField (FieldExp pos field exp) = sUnit (FieldExp pos field) `sAdd` sExp exp

sStmts [] = sUnit []
sStmts (StmtExp exp:r) = sUnit (\ e r -> StmtExp e:r) `sAdd` sExp exp `sAdd` sStmts r
sStmts (StmtBind pat exp:r) = sUnit (\ e r p -> StmtBind p e:r) `sAdd` sExp exp `sAdd` sStmts r `sSub` sPat pat
sStmts (StmtLet decls:r) =
        let (decls',use) = sDecls decls
            (r',ruse) = sStmts r
        in (StmtLet decls':r',(use `unionSet` ruse) `removeSet` defDecls decls)

sExp (ExpLet pos decls e) =
        let (decls',use) = sDecls decls
            (e',euse) = sExp e
        in (ExpLet pos decls' e',(use `unionSet` euse) `removeSet` defDecls decls)
sExp (ExpLambda pos pats e)   = sUnit (\e p-> ExpLambda pos p e) `sAdd` sExp e `sSub` sPats pats
sExp (ExpCase pos e alts)     = sUnit (ExpCase pos) `sAdd` sExp e `sAdd` sAlts alts
sExp (ExpIf pos c e1 e2)      = sUnit (ExpIf pos) `sAdd` sExp c `sAdd` sExp e1 `sAdd` sExp e2
sExp (ExpType pos e ctx t)    = sUnit (\e -> ExpType pos e ctx t) `sAdd` sExp e
sExp (ExpDo pos stmts)        = sUnit (ExpDo pos) `sAdd` sStmts stmts
--- Above only in expressions
sExp (ExpRecord exp fields)   = sUnit ExpRecord `sAdd` sExp exp `sAdd` sMap sField fields
sExp (ExpApplication pos es)  = sUnit (ExpApplication pos) `sAdd` sExps es
sExp (ExpVar pos id)          = sUnit (ExpVar pos) `sAdd` sId id
sExp (ExpCon pos id)          = sUnit (ExpCon pos) `sAdd` sId id
sExp (ExpList pos  es)        = sUnit (ExpList pos) `sAdd` sExps es
sExp (ExpLit pos lit)         = sUnit (ExpLit pos lit)
--- Below only in pattess
sExp (PatAs pos id e)         = sUnit (PatAs pos) `sAdd` sId id `sAdd` sPat e
sExp (PatWildcard pos)        = sUnit (PatWildcard pos)
sExp (PatIrrefutable pos e)   = sUnit (PatIrrefutable pos) `sAdd` sPat e
sExp (PatNplusK pos n n' k le nk)= sUnit (PatNplusK pos) `sAdd` sId n `sAdd` sId n' `sAdd` sExp k `sAdd` sExp le `sAdd` sExp nk

-- hacky hacky hacky!
-- fixes a bug when tup = (+,*) is given
-- but dies later with a bad error message (but at least gives the position!)
sExp (ExpVarOp pos id)        = sUnit (ExpVarOp pos) `sAdd` sId id



sAlts alts = sMap sAlt alts


sAlt (Alt pat rhs decls) =
        let (decls',use) = sDecls decls
            (rhs',useRhs) = sRhs rhs
        in (Alt pat rhs' decls',(use `unionSet` useRhs) `removeSet` defPat pat)


