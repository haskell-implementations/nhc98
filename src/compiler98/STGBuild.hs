module STGBuild(stgExpPush,stgBodyPush) where

import Util.Extra
import Maybe
import Id
import State
import PosCode
import Gcode
import GcodeLow(con0,cap0,caf)
import STGState(Where(Arg,Stack,Heap,HeapLate,Direct),Thread(Thread)
               ,updTOS,popEnv,updHeap,getExtra,incDepthIf,gArity
               ,lateWhere,gWhereAbs)

stgExpPush :: PosExp -> State a Thread [Gcode] Thread
stgExpPush exp = unitS fst =>>> buildExp True exp


stgBodyPush :: (Id,PosLambda) -> State a Thread ([Gcode],(Int,Where)) Thread
stgBodyPush exp = buildBody True exp


buildBody pu (fun,PosLambda pos _ _ _ exp) =
   buildExp pu exp >>>= \ (build,ptr) ->
   updTOS pu fun >>>
   unitS (build,(fromEnum fun,ptr))


buildExp :: Bool -> PosExp -> State a Thread ([Gcode],Where) Thread

buildExp pu (PosExpLet _ pos bindings exp) =
  \ down
    (Thread prof fun maxDepth failstack state env lateenv depth heap depthstack fs)
    ->
     let (bBuild_bEnv,Thread prof' fun' maxDepth' failstack' state' _ _ depth' heap' depthstack' fs')
            = mapS (buildBody False) bindings
                   down (Thread prof fun maxDepth failstack state newEnv (addLate:lateenv) depth heap depthstack fs)
                   
         (bBuild,addLate) = unzip bBuild_bEnv
         addId = map fst bindings
 	 addEnv = map ( \ v -> (fromEnum v,HeapLate)) addId
         newEnv = addEnv:env
    in
--      strace ("STGGBuild PosExpLet addLate " ++ show (map fst addLate) ++ " addId " ++ show addId) $
      (buildExp pu exp >>>= \ (eBuild,ptr) ->
       popEnv >>>
       unitS (concat bBuild ++ eBuild,ptr)
      ) down (Thread prof' fun' maxDepth' failstack' state' newEnv (addLate:lateenv) depth' heap' depthstack' fs')


buildExp pu (PosExpThunk _ _ (tag@(PosCon _ v):args)) = 
  -- Should evaluate strict arguments
  mapS (buildExp False) args >>>= \ build_ptr ->  
  incDepthIf pu >>>= \ sp ->
  case unzip build_ptr of
    (build,ptr) ->
--    strace ("buildExp " ++ show pu ++ "  " ++ show ptr) $ 
      getExtra (fromEnum v) >>>= \ (e,extra) ->
      updHeap (1+e+length ptr) >>>= \ hp ->
--    strace ("buildExp " ++ show pu ++ "  " ++ show hp) $ 
      unitS (concat build ++ pushHeapIf True pu 
               (HEAP_CON (fromEnum v) : extra ++ (zipWith (heapPtr sp) [hp+1+e .. ] ptr))
            ,Heap hp
	    )

buildExp pu (PosExpThunk _ _ (tag@(PosVar _ v):args)) =
    mapS (buildExp False) args >>>= \ build_ptr ->  
    buildAp pu (fromEnum v) build_ptr


buildExp pu (PosExpThunk pos _ [e]) =
  buildExp pu e
buildExp pu (PosCon pos i) =
    oneHeap True pu (HEAP_GLB con0 (fromEnum i))
--  gArity i >>>= \ a ->
--  if isJust a && fromJust a == 0 then   
--      oneHeap True pu (HEAP_GLB con0 i)
--  else
--      -- Can only happen with a constructor wrapped in NTBuiltin
--      oneHeap True pu (HEAP_GLB profconstructor i)

buildExp pu (PosVar pos i) =
  incDepthIf pu >>>= \ sp ->
  gWhereAbs (fromEnum i) >>>= \ w ->
  case w of
    Nothing -> gArity (fromEnum i) >>>= \ a ->
		   if isJust a && fromJust a == 0 then 
		     oneHeap False pu (HEAP_GLB caf (fromEnum i))
		   else
		     oneHeap True pu (HEAP_GLB cap0 (fromEnum i))
    Just (Arg i) ->  oneHeap False pu (HEAP_ARG i)
    Just (Stack i) ->  -- Could be improved if we knew if Stack i is evaluated !!!
      if pu then
        updHeap 1 >>>= \ hp -> unitS ([PUSH_HEAP,HEAP (sp-i)], Heap hp)
      else
        unitS ([],Stack i)
    Just (Heap i) -> -- Could be improved if we knew if Heap i is evaluated !!!
      if pu then
        updHeap 1 >>>= \ hp -> unitS ([PUSH_HEAP,HEAP_OFF (i-hp)], Heap hp)
      else
        unitS ([],Heap i)
    Just (HeapLate) -> lateWhere (fromEnum i) >>>= \ lw ->
      if pu then
        updHeap 1 >>>= \ hp -> unitS ([PUSH_HEAP,case lw of
                                                   Stack i -> HEAP (sp-i)
                                                   Heap i -> HEAP_OFF (i-hp)
						   Direct g -> g],Heap hp)
      else
        unitS ([],lw)

buildExp pu (PosInt pos i) = oneHeap True pu (HEAP_INT i)
buildExp pu (PosChar pos i) = oneHeap True pu (HEAP_CHAR i)
buildExp pu (PosFloat pos f) = oneHeap True pu (HEAP_FLOAT f )
buildExp pu (PosDouble pos d) = oneHeap True pu (HEAP_DOUBLE d)
-- \#ifdef DBGTRANS
-- buildExp pu (PosInteger pos i) = oneHeap True pu (HEAP_INT (fromInteger i))
-- \#else
buildExp pu (PosInteger pos i) = oneHeap True pu (HEAP_INTEGER i)
-- \#endif
buildExp pu (PosString pos s) = oneHeap False pu (HEAP_STRING s)
buildExp pu (PosExpCase pos exp alts) =
  error ("buildExp Case " ++ strPos pos)
buildExp pu (PosExpFatBar esc exp1 exp2) =
  error ("buildExp FatBar ")
buildExp pu (PosExpFail) =
  error ("buildExp Fail ")
buildExp pu (PosExpIf  pos _ exp1 exp2 exp3) =
  error ("buildExp If " ++ strPos pos)
buildExp pu (PosExpThunk pos _ [PosPrim _ STRING _,PosString _ s]) =
  error ("buildExp STRING " ++ strPos pos)
buildExp pu (PosExpThunk pos _ [PosPrim _ SEQ _,a1,a2]) =
  error ("buildExp SEQ " ++ strPos pos)
buildExp pu (PosExpThunk pos _ (PosPrim _ p _:args)) =
  error ("buildExp Prim " ++ strPos pos)
buildExp pu (PosExpApp pos (fun:args)) =
  error ("buildExp App " ++ strPos pos)


buildAp :: Bool -> Int -> [([Gcode],Where)] 
        -> State a Thread ([Gcode],Where) Thread

buildAp pu v build_ptr =
  incDepthIf pu >>>= \ sp ->
  case unzip build_ptr of
    (build,ptr) ->
      getExtra (toEnum v) >>>= \ (e,extra) ->
      gArity v >>>= \(Just arity) -> -- Always a global here!
      let nargs = length ptr
      in
        updHeap (1+e+nargs) >>>= \ hp ->
        unitS (concat build ++  (if nargs == arity 
                                 then pushHeapIf False pu (HEAP_VAP (toEnum v):extra)
                                 else pushHeapIf True pu (HEAP_CAP (toEnum v) (arity-nargs):extra)
                                ) ++ zipWith (heapPtr sp) [hp+1+e .. ] ptr
        ,Heap hp
        )


oneHeap :: Bool -> Bool -> Gcode -> State a Thread ([Gcode],Where) Thread

oneHeap True True  ptr = 
  updHeap 1 >>>= \ hp -> unitS ([PUSH_HEAP,EVALUATED,ptr], Heap hp)
oneHeap False True  ptr = 
  updHeap 1 >>>= \ hp -> unitS ([PUSH_HEAP,ptr], Heap hp)
oneHeap _ False ptr = unitS ([] , Direct ptr)

pushHeapIf True True gs = PUSH_HEAP : EVALUATED : gs
pushHeapIf False True gs = PUSH_HEAP : gs
pushHeapIf _ False gs = gs

heapPtr sp hp (Arg a)  = PUSH_ARG a
heapPtr sp hp (Stack i) = HEAP (sp-i)
heapPtr sp hp (Heap i) = HEAP_OFF (i-hp)
heapPtr sp hp (Direct ins) = ins
