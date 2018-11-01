module STGState where

import IntState
import Gcode
import ForeignCode
import Maybe
import Flags (Flags(sWarnFFI))
import Util.Extra (Warning(..))

data Where = Arg Int | Stack Int | Heap Int | HeapLate | Direct Gcode

instance Show Where where
  showsPrec d (Arg i) = showString "Arg " . shows i
  showsPrec d (Stack i) = showString "Stack " . shows i
  showsPrec d (Heap i) = showString "Heap " . shows i
  showsPrec d (HeapLate ) = showString "HeapLate"
  showsPrec d (Direct g) = showString "Direct <gcode>"

              ---    prof fun maxDepth  failstack  state     env          
data Thread = Thread Bool Int Int     [(Int,Int)] IntState [[(Int,Where)]]
              ---    lateenv         depth heap depth stack
                     [[(Int,Where)]] Int   Int  [Int]      
              ---     foreigns   foreignMemo
                     ([Foreign], Maybe ForeignMemo)


sums xs = sums' 0 xs
   where
	sums' k [] = [k]
	sums' k (x:xs) = k : sums' (k+x) xs

needstack 0 gs = gs
needstack n gs = NEEDSTACK n : gs


------

pushFail down up@(Thread prof fun maxDepth fds state env lateenv d h dhs fs) =
  case uniqueIS state of
    (i,state) ->
      (fromEnum i,Thread prof fun maxDepth ((fromEnum i,d):fds) state env lateenv d h dhs fs)

popFail down up@(Thread prof fun maxDepth (_:fds) state env lateenv d h dhs fs) =
  Thread prof fun maxDepth fds state env lateenv d h dhs fs

getFail down up@(Thread prof fun maxDepth fds@[] state env lateenv d h dhs fs) =
  (Nothing,up)
getFail down up@(Thread prof fun maxDepth fds@((f,fd):_) state env lateenv d h dhs fs) =
  (Just (f,d-fd),up)

maxDepth down up@(Thread prof fun mD fds state env lateenv d h dhs fs) =
  (mD,up)

getDepth down up@(Thread prof fun maxDepth fds state env lateenv d h dhs fs) = (d,up)

incDepthIf False down up@(Thread prof fun maxDepth fds state env lateenv d h dhs fs) = (d,up)
incDepthIf True  down up@(Thread prof fun maxDepth fds state (e:env) lateenv d h dhs fs) =
  case d + 1 of
    d' ->
      if d' > maxDepth then
        (d',Thread prof fun d' fds state (((-1,Stack d'):e):env) lateenv d' h dhs fs)
      else
        (d',Thread prof fun maxDepth fds state (((-1,Stack d'):e):env) lateenv d' h dhs fs)

{- ----
-- Niklas reckons that the updTOS code here is completely useless,
-- so we're following his advice and replacing it with a lifted identity.
-- ----

-- NOTE why is old_i sometimes -1, and if not why did the old code change i?
updTOS False i down up = up
updTOS True  i down up@(Thread prof fun maxDepth fds state (((old_i,w):e):env) lateenv d h dhs fs) | old_i == -1 =
  Thread prof fun maxDepth fds state (((i,w):e):env) lateenv d h dhs fs
updTOS True  i down up@(Thread prof fun maxDepth fds state (((old_i,w):e):env) lateenv d h dhs fs) | old_i == i = up
updTOS _ i down up@(Thread prof fun maxDepth fds state (e:env) lateenv d h dhs fs) =
   strace ("nhc98 is in deep trouble and might produce faulty code for "++show i++" \n  fun= " ++ show fun ++ "  e = " ++ show e ++ "\n") $ up
-}

-- However, I'm going to keep the warning just in case it's useful.
-- ... but now it is commented out because it is annoying, and we still
--     believe it is harmless.
--updTOS True i down up@(Thread prof fun maxDepth fds state (((oi,w):e):env) lateenv d h dhs fs)
--  | oi/=i && oi /= -1  =
--   strace ("Warning: nhc98 might produce faulty code:"++
--           "\n  i="++show i++"\n  oi="++show oi++
--           "\n  fun="++show fun++
--           "\n  e = " ++ show e ++ "\n") $ up
updTOS _ i down up = up

incDepth down up@(Thread prof fun maxDepth fds state env lateenv d h dhs fs) =
  case d + 1 of
    d' ->
      if d' > maxDepth then
        Thread prof fun d' fds state env lateenv d' h dhs fs
      else
        Thread prof fun maxDepth fds state env lateenv d' h dhs fs

decDepth s down up@(Thread prof fun maxDepth fds state env lateenv d h dhs fs) =
  Thread prof fun maxDepth fds state env lateenv (d-s) h dhs fs

clrHeap down up@(Thread prof fun maxDepth fds state env lateenv d h dhs fs) =
  Thread prof fun maxDepth fds state env lateenv d 0 dhs fs

getHeap down up@(Thread prof fun maxDepth fds state env lateenv d h dhs fs) =
  (h,up)
  
updHeap s down up@(Thread prof fun maxDepth fds state env lateenv d h dhs fs) =
  (h,Thread prof fun maxDepth fds state env lateenv d (h+s) dhs fs)

pushDH down up@(Thread prof fun maxDepth fds state env lateenv d h dhs fs) =
  Thread prof fun maxDepth fds state env lateenv d h (d:dhs) fs

cloneDH down up@(Thread prof fun maxDepth fds state env lateenv _ h dhs@(d:_) fs) =
  Thread prof fun maxDepth fds state env lateenv d h dhs fs

popDH down up@(Thread prof fun maxDepth fds state env lateenv _ h (d:dhs) fs) =
  Thread prof fun maxDepth fds state env lateenv d h dhs fs

pushEnv es down up@(Thread prof fun maxDepth fds state env lateenv d h dhs fs) =
  -- strace ("Pushenv (" ++ s ++ ") " ++ show es) $
  Thread prof fun maxDepth fds state (es:env) lateenv d h dhs fs


pushStack es down up@(Thread prof fun maxDepth fds state env lateenv d h dhs fs) =
  let es' = zip es (map Stack [d+1 .. ])
  in 
    -- strace ("pushStack (" {- ++ s ++ ") "-} ++ show es') $
    Thread prof fun maxDepth fds state (es':env) lateenv (d+length es') h dhs fs

popEnv down up@(Thread prof fun maxDepth fds state (_:env) lateenv d h dhs fs) =
  Thread prof fun maxDepth fds state env lateenv d h dhs fs


gUnique down up@(Thread prof fun maxDepth fds state env lateenv d h dhs fs) =
  case uniqueIS state of
    (u,state) -> (u,Thread prof fun maxDepth fds state env lateenv d h dhs fs)

gProf down up@(Thread prof fun maxDepth fds state env lateenv d h dhs fs) =
  (prof,up)

setFun fun down up@(Thread prof _ maxDepth fds state env lateenv d h dhs fs) =
  (Thread prof fun maxDepth fds state env [] d h dhs fs)

getExtra c down up@(Thread prof fun maxDepth fds state env lateenv d h dhs fs) =
  if prof then
    ((4,[HEAP_STATIC fun c,HEAP_CREATE,HEAP_SPACE,HEAP_SPACE]),Thread prof fun maxDepth fds state env lateenv d h dhs fs)
  else 
    ((0::Int,[]),up)

gState down up@(Thread prof fun maxDepth fds state env lateenv d h dhs fs) =
  (state,up)

gOnly con down up@(Thread prof fun maxDepth fds state env lateenv d h dhs fs) =
  (((1==) . length . constrsI . fromJust . lookupIS state . belongstoI . fromJust . lookupIS state) con ,up)

gWhere i down up@(Thread prof fun maxDepth fds state env lateenv d h dhs fs) =
  (case lookups i env of
    Nothing -> Nothing
    Just (Arg i)  -> Just (Arg i)
    Just (Stack i)-> Just (Stack (d-i))
    Just (Heap i) -> Just (Heap (i-h))  -- always incHeap before lookup
    Just (HeapLate) -> Just HeapLate
  ,up
  )

gWhereAbs i down up@(Thread prof fun maxDepth fds state env lateenv d h dhs fs) =
  (lookups i env
  ,up
  )

makeForeign s a v c ie down up@(Thread prof fun maxDepth fds state env lateenv d h dhs fs) =
  let (IntState _ _ st _ flags) = state
      warn = if sWarnFFI flags then FFIWarn else NoWarn
      newfs = case fs of
          (fs,Nothing)     -> let mm = foreignMemo st
                                  tf = toForeign warn st mm c ie s a v in
                              (tf:fs, Just mm)
          (fs,m@(Just mm)) -> let tf = toForeign warn st mm c ie s a v in
                              (tf:fs, m)
  in Thread prof fun maxDepth fds state env lateenv d h dhs newfs


lateWhere v down up@(Thread prof fun maxDepth fds state env lateenv d h dhs fs) =
  (case lookups v lateenv of
    Just x@(Heap i) -> x  -- always incHeap before lookup
    Just x@(Direct g) -> x
    Just x@(Stack i) -> x
    Just _  -> error ("lateWhere (just) failed on " ++ show v ++ " lateenv = " ++ show lateenv)
    _ -> error ("lateWhere (nothing) failed on " ++ show v ++ " lateenv = " ++ show lateenv)
  ,up
  )
            

            
updWhere i down up@(Thread prof fun maxDepth fds state (e:env) lateenv d h dhs fs) =
  -- strace ("updWhere: i = " ++ show i ++ "  e = " ++ show e) $
  Thread prof fun maxDepth fds state (((i,Stack d):e):env) lateenv d h dhs fs  -- hide old definition

gArity i down up@(Thread prof fun maxDepth fds state env lateenv d h dhs fs) =
  case lookups i env of
    Nothing -> (Just (arityIS state (toEnum i)),up)
    Just _ -> (Nothing,up)



lookups i [] = Nothing
lookups i (x:xs) =
  case lookup i x of
    Just v -> Just v
    Nothing -> lookups i xs
