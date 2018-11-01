include Makefile.inc

THISLIB	= List
SEARCH	= -P../Maybe

SRCS	= \
	DeleteBy.hs Delete.hs \
	DeleteFirstsBy.hs DeleteFirsts.hs \
	Difference.hs ElemBy.hs \
	ElemIndexBy.hs ElemIndex.hs ElemIndices.hs \
	Find.hs FindIndex.hs FindIndices.hs \
	GenericDrop.hs GenericIndex.hs GenericLength.hs \
	GenericReplicate.hs GenericSplitAt.hs GenericTake.hs \
	GroupBy.hs Group.hs \
	Inits.hs InsertBy.hs Insert.hs \
	IntersectBy.hs Intersect.hs \
	Intersperse.hs IsPrefixOf.hs IsSuffixOf.hs \
	LookupBy.hs MapAccumL.hs MapAccumR.hs \
	MaximumBy.hs MinimumBy.hs NotElemBy.hs \
	NubBy.hs Nub.hs \
	Partition.hs Permutations.hs Products.hs \
	SortBy.hs Sort.hs Subsequences.hs \
	Sums.hs Tails.hs Transpose.hs \
	Unfoldr.hs UnionBy.hs Union.hs \
	Unzip4.hs Unzip5.hs Unzip6.hs Unzip7.hs \
	ZipWith4.hs ZipWith5.hs ZipWith6.hs ZipWith7.hs \
	Zip4.hs Zip5.hs Zip6.hs Zip7.hs



# Here are the main rules.
include ../Makefile.common


# Here are the dependencies.

${OBJDIR}/Nub.$O: Nub.hs ${OBJDIR}/NubBy.$O
${OBJDIR}/Delete.$O: Delete.hs ${OBJDIR}/DeleteBy.$O
${OBJDIR}/Difference.$O: Difference.hs ${OBJDIR}/Delete.$O
${OBJDIR}/DeleteFirsts.$O: DeleteFirsts.hs ${OBJDIR}/Difference.$O
${OBJDIR}/DeleteFirstsBy.$O: DeleteFirstsBy.hs ${OBJDIR}/DeleteBy.$O
${OBJDIR}/ElemIndex.$O: ElemIndex.hs ${OBJDIR}/ElemIndexBy.$O
${OBJDIR}/Group.$O: Group.hs ${OBJDIR}/GroupBy.$O
${OBJDIR}/NotElemBy.$O: NotElemBy.hs ${OBJDIR}/ElemBy.$O
${OBJDIR}/Nub.$O: Nub.hs ${OBJDIR}/NubBy.$O
${OBJDIR}/Zip4.$O: Zip4.hs ${OBJDIR}/ZipWith4.$O
${OBJDIR}/Zip5.$O: Zip5.hs ${OBJDIR}/ZipWith5.$O
${OBJDIR}/Zip6.$O: Zip6.hs ${OBJDIR}/ZipWith6.$O
${OBJDIR}/Zip7.$O: Zip7.hs ${OBJDIR}/ZipWith7.$O
${OBJDIR}/Sort.$O: Sort.hs ${OBJDIR}/SortBy.$O
${OBJDIR}/SortBy.$O: SortBy.hs ${OBJDIR}/InsertBy.$O
${OBJDIR}/ElemIndex.$O: ElemIndex.hs ${OBJDIR}/FindIndex.$O
${OBJDIR}/ElemIndices.$O: ElemIndices.hs ${OBJDIR}/FindIndices.$O
${OBJDIR}/Find.$O: Find.hs ${OBJDIR}/../Maybe/ListToMaybe.$O
${OBJDIR}/FindIndex.$O: FindIndex.hs  ${OBJDIR}/FindIndices.$O ${OBJDIR}/../Maybe/ListToMaybe.$O
${OBJDIR}/GenericReplicate.$O: GenericReplicate.hs ${OBJDIR}/GenericTake.$O
${OBJDIR}/Union.$O: Union.hs ${OBJDIR}/Difference.$O
${OBJDIR}/UnionBy.$O: UnionBy.hs ${OBJDIR}/DeleteFirstsBy.$O ${OBJDIR}/NubBy.$O
${OBJDIR}/../Maybe/ListToMaybe.$O:
	cd ../Maybe; ${MAKE} ${BUILDDIR}/${OBJ}/prelude/Maybe/ListToMaybe.$O


# C-files dependencies.
Nub.$C:            NubBy.$C
Delete.$C:         DeleteBy.$C
Difference.$C:     Delete.$C
DeleteFirsts.$C:   Difference.$C
DeleteFirstsBy.$C: DeleteBy.$C
ElemIndex.$C:      ElemIndexBy.$C
Group.$C:          GroupBy.$C
NotElemBy.$C:      ElemBy.$C
Nub.$C:            NubBy.$C
Zip4.$C:           ZipWith4.$C
Zip5.$C:           ZipWith5.$C
Zip6.$C:           ZipWith6.$C
Zip7.$C:           ZipWith7.$C
Sort.$C:           SortBy.$C
SortBy.$C:         InsertBy.$C
ElemIndex.$C:      FindIndex.$C
ElemIndices.$C:    FindIndices.$C
Find.$C:           ../Maybe/ListToMaybe.$C
FindIndex.$C:      FindIndices.$C ../Maybe/ListToMaybe.$C
GenericReplicate.$C: GenericTake.$C
Union.$C:          Difference.$C
../Maybe/ListToMaybe.$C:
	cd ../Maybe; ${MAKE} ListToMaybe.$C

