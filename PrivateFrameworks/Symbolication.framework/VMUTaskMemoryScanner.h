/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/Symbolication.framework/Symbolication
 */

@interface VMUTaskMemoryScanner : NSObject <VMUCommonGraphInterface> {
    bool  _abandonedMarkingEnabled;
    NSMutableDictionary * _addressToRuntimeMetadataChunkInfoDict;
    void * _applySwiftMaskingToIsa;
    unsigned int  _attributeGraphVMRegionBlockIndex;
    unsigned int  _autoreleasePoolBoundaryNode;
    NSString * _binaryImagesDescription;
    struct _VMUBlockNode { unsigned long long x1; unsigned int x2 : 3; unsigned int x3 : 2; unsigned int x4 : 36; unsigned int x5 : 23; } * _blocks;
    unsigned int  _blocksCount;
    unsigned int  _blocksSize;
    unsigned long long  _cfPasteboardReservedBase;
    unsigned int  _classDataMethodsClassInfoIndex;
    VMUClassInfoMap * _classInfoIndexer;
    id * _classInfos;
    unsigned int  _classInfosCount;
    NSMapTable * _classStructureAddressToDestinationMapTable;
    VMURangeArray * _dataSegmentsRangeArrayOutsideSharedCache;
    struct _VMURange { 
        unsigned long long location; 
        unsigned long long length; 
    }  _dataSegmentsRangeInSharedCache;
    struct _VMURange { 
        unsigned long long location; 
        unsigned long long length; 
    }  _dataSegmentsRangeOutsideSharedCache;
    VMUDebugTimer * _debugTimer;
    bool  _exactScanningEnabled;
    NSString * _executablePath;
    unsigned int  _idleExitStatus;
    bool  _initializedRegionMallocBlockCounts;
    struct _VMUInstanceValues { unsigned long long x1; id x2; } * _instanceValues;
    unsigned int  _instanceValuesCount;
    unsigned int  _instanceValuesSize;
    NSDictionary * _ledger;
    bool  _mallocEnumerationShouldFail;
    unsigned long long  _mallocZonesBufferAddress;
    NSMutableDictionary * _mappedFileNameToLengthDict;
    unsigned long long  _maxInteriorOffset;
    VMUTaskMemoryCache * _memoryCache;
    id /* block */  _nodeLogger;
    unsigned int  _objcClassStructureClassInfoIndex;
    VMUObjectIdentifier * _objectIdentifier;
    unsigned long long  _physicalFootprint;
    unsigned long long  _physicalFootprintPeak;
    int  _pid;
    NSString * _processDescriptionString;
    NSString * _processName;
    VMUProcessObjectGraph * _processObjectGraph;
    unsigned int  _recordAutoreleasePoolBoundaries;
    bool  _recordRuntimeMetadataChunkInfo;
    id /* block */  _referenceLogger;
    unsigned long long  _regionDescriptionOptions;
    VMUVMRegionIdentifier * _regionIdentifier;
    id /* block */  _regionInfoBlock;
    struct _VMURegionMap { struct _VMUBlockNode {} *x1; unsigned int x2; unsigned long long x3; void *x4; struct _VMURegionNode {} *x5; unsigned int x6; unsigned long long x7; unsigned long long x8; unsigned int x9[0]; } * _regionMap;
    struct _VMURegionNode { id x1; unsigned int *x2; unsigned int x3; unsigned int x4; unsigned long long x5; unsigned long long x6; unsigned long long x7; void *x8; struct _VMURegionNode {} *x9; } * _regions;
    unsigned int  _regionsCount;
    struct _VMUScanLocationCache {} ** _scanCaches;
    VMUScanOverlay * _scanOverlay;
    unsigned int  _scanningMask;
    bool  _showRawClassNames;
    NSMutableDictionary * _srcAddressToExtraAutoreleaseCountDict;
    VMURangeArray * _stackRanges;
    NSDate * _suspendDate;
    unsigned long long  _suspendTime;
    unsigned long long  _suspendTimeContinuous;
    unsigned int  _suspensionToken;
    unsigned int  _swiftClassStructureClassInfoIndex;
    unsigned int  _swiftHeapGenericLocalVariableClassInfoIndex;
    unsigned int  _swiftMetadataClassInfoIndex;
    unsigned int  _swiftMetadataMaxBlockIndex;
    unsigned int  _swiftMetadataMinBlockIndex;
    bool  _targetProcessHasObjCPatches;
    VMUTask * _task;
    VMUTaskThreadStates * _threadStates;
    unsigned int  _threadsCount;
    void * _userMarkedAbandoned;
    NSMutableDictionary * _variantCachesByIsaIndex;
    unsigned int  _webKitMallocFakeRootNode;
    unsigned int  _webKitZoneIndex;
    NSMutableArray * _zoneNames;
    struct _VMUZoneNode { unsigned long long x1; id x2; struct malloc_introspection_t {} *x3; } * _zones;
    unsigned int  _zonesCount;
    unsigned int  _zonesSize;
}

@property (nonatomic) bool abandonedMarkingEnabled;
@property (nonatomic, readonly) NSString *binaryImagesDescription;
@property (nonatomic, readonly) struct _VMUBlockNode { unsigned long long x1; unsigned int x2 : 3; unsigned int x3 : 2; unsigned int x4 : 36; unsigned int x5 : 23; }*blocks;
@property (readonly, copy) NSString *debugDescription; /* unknown property attribute: ? */
@property (nonatomic, retain) VMUDebugTimer *debugTimer;
@property (readonly, copy) NSString *description;
@property (nonatomic) bool exactScanningEnabled;
@property (nonatomic, readonly) NSString *executablePath;
@property (nonatomic, readonly) bool hasClassInfosDerivedFromStackBacktraces;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) unsigned int idleExitStatus;
@property (nonatomic, readonly) bool is64bit;
@property (nonatomic, readonly) bool isTranslatedByRosetta;
@property (nonatomic, readonly) unsigned int kernelPageSize;
@property (nonatomic, readonly) NSDictionary *ledger;
@property (nonatomic) bool mallocEnumerationShouldFail;
@property (nonatomic, readonly) unsigned int mallocNodeCount;
@property (nonatomic) unsigned long long maxInteriorOffset;
@property (nonatomic, readonly) VMUTaskMemoryCache *memoryCache;
@property (nonatomic, readonly) unsigned int nodeCount;
@property (nonatomic, readonly) unsigned int nodeNamespaceSize;
@property (nonatomic) unsigned int objectContentLevel;
@property (nonatomic, readonly) VMUObjectIdentifier *objectIdentifier;
@property (nonatomic, readonly) unsigned long long physicalFootprint;
@property (nonatomic, readonly) unsigned long long physicalFootprintPeak;
@property (nonatomic, readonly) int pid;
@property (nonatomic, readonly) NSString *processDescriptionString;
@property (nonatomic, readonly) NSString *processName;
@property (nonatomic, readonly) VMUClassInfoMap *realizedClasses;
@property (nonatomic) bool recordRuntimeMetadataChunkInfo;
@property (nonatomic, readonly) unsigned int regionCount;
@property (nonatomic, readonly) struct _VMURegionNode { id x1; unsigned int *x2; unsigned int x3; unsigned int x4; unsigned long long x5; unsigned long long x6; unsigned long long x7; void *x8; struct _VMURegionNode {} *x9; }*regions;
@property (nonatomic, readonly) VMUScanOverlay *scanOverlay;
@property (nonatomic) unsigned int scanningMask;
@property (nonatomic) bool showRawClassNames;
@property (readonly) Class superclass;
@property (nonatomic, readonly) unsigned long long suspendTimeContinuous;
@property (nonatomic, readonly) unsigned int task;
@property (nonatomic, readonly) unsigned int vmPageSize;
@property (nonatomic, readonly) unsigned int zoneCount;

+ (void)initialize;

- (void).cxx_destruct;
- (void)_addSpecialNodesFromTask;
- (void)_addThreadNodesFromTask;
- (void)_buildRegionFirstBlockIndexOnPageArrays;
- (id)_cachedVariantForGenericInfo:(id)arg1 variantKey:(unsigned long long)arg2;
- (bool)_callRemoteMallocEnumerators:(unsigned int)arg1 error:(id*)arg2 block:(id /* block */)arg3;
- (void)_destroyLinearClassInfos;
- (void)_findMarkedAbandonedBlocks;
- (void)_findSwiftClassesInExclaveCore;
- (void)_fixupBlockIsas;
- (void)_identifyAttributeGraphAllocations;
- (void)_identifyNonObjectsPointedToByTypedIvars;
- (void)_identifyNonObjectsPointingToSwiftMetadata;
- (void)_identifyNonObjectsUsingStackBacktrace;
- (void)_identifyObjCClassStructureBlocks;
- (void)_identifySwiftAsyncTaskSlabs;
- (void)_identifySwiftTypeNameCache;
- (unsigned int)_indexForClassInfo:(id)arg1;
- (id)_initWithTask:(unsigned int)arg1 options:(unsigned long long)arg2;
- (unsigned long long)_lengthOfMappedFileOfRegion:(id)arg1;
- (unsigned int)_nodeForAddress:(unsigned long long)arg1 checkMaxInteriorOffset:(bool)arg2;
- (id)_readonlyRegionRanges;
- (id)_recursivelyIdentifySwiftAsyncTaskSlabs:(unsigned long long)arg1 containerRange:(struct _VMURange { unsigned long long x1; unsigned long long x2; })arg2 remoteBlock:(unsigned long long)arg3 mappedBlock:(unsigned long long)arg4 asyncTaskSlabMetadataIsa:(unsigned long long)arg5 nestingLevel:(unsigned int)arg6;
- (void)_registerVariant:(id)arg1 forGenericInfo:(id)arg2 variantKey:(unsigned long long)arg3;
- (unsigned int)_removeFalsePositiveLeakedVMregionsFromNodes:(unsigned int*)arg1 nodeCount:(unsigned int)arg2 recorder:(id /* block */)arg3;
- (void)_shortenScannableRangeOfMappedFile:(unsigned int)arg1;
- (void)_sortAndClassifyBlocks;
- (void)_sortBlocks;
- (bool)_suspend;
- (void)_updateLinearClassInfos;
- (void)_withMemoryReaderBlock:(id /* block */)arg1;
- (void)_withOrderedNodeMapper:(id /* block */)arg1;
- (bool)abandonedMarkingEnabled;
- (bool)addAllNodesFromTaskWithError:(id*)arg1;
- (void)addMallocNodes:(id)arg1;
- (void)addMallocNodesFromTask;
- (bool)addMallocNodesFromTaskWithError:(id*)arg1;
- (void)addRootNodesFromTask;
- (bool)addRootNodesFromTaskWithError:(id*)arg1;
- (bool)addressIsInDataSegment:(unsigned long long)arg1;
- (void)applyTypeOverlayToMutableInfo:(id)arg1;
- (id)binaryImagesDescription;
- (struct _VMUBlockNode { unsigned long long x1; unsigned int x2 : 3; unsigned int x3 : 2; unsigned int x4 : 36; unsigned int x5 : 23; }*)blocks;
- (id)classInfoForObjectAtAddress:(unsigned long long)arg1;
- (void)clearCrashReporterInfoForMappedFileRegion;
- (void*)contentForNode:(unsigned int)arg1;
- (void*)copyUserMarked;
- (void)dealloc;
- (id)debugTimer;
- (void)detachFromTask;
- (bool)doesTargetProcessHaveObjCPatches;
- (unsigned int)enumerateMarkedObjects:(void*)arg1 withBlock:(id /* block */)arg2;
- (unsigned int)enumerateNodesWithBlock:(id /* block */)arg1;
- (unsigned int)enumerateObjectsWithBlock:(id /* block */)arg1;
- (unsigned int)enumerateReferencesWithBlock:(id /* block */)arg1;
- (unsigned int)enumerateRegionsWithBlock:(id /* block */)arg1;
- (bool)exactScanningEnabled;
- (id)executablePath;
- (bool)hasClassInfosDerivedFromStackBacktraces;
- (bool)hasLabelsForNodes;
- (unsigned int)idleExitStatus;
- (id)initFullyWithTask:(unsigned int)arg1;
- (id)initFullyWithTask:(unsigned int)arg1 error:(id*)arg2;
- (id)initWithSelfTaskAndOptions:(unsigned long long)arg1;
- (id)initWithTask:(unsigned int)arg1;
- (id)initWithTask:(unsigned int)arg1 options:(unsigned long long)arg2;
- (id)initWithVMUTask:(id)arg1 options:(unsigned long long)arg2;
- (bool)is64bit;
- (bool)isTranslatedByRosetta;
- (unsigned int)kernelPageSize;
- (id)labelForNode:(unsigned int)arg1;
- (id)ledger;
- (unsigned long long)ledgerValueForKey:(id)arg1 keyExists:(bool*)arg2;
- (bool)mallocEnumerationShouldFail;
- (unsigned int)mallocNodeCount;
- (void)mapDyldSharedCacheFromTargetWithRegions:(id)arg1;
- (unsigned long long)maxInteriorOffset;
- (id)memoryCache;
- (unsigned int)nodeCount;
- (struct { unsigned long long x1; unsigned int x2 : 60; unsigned int x3 : 4; id x4; })nodeDetails:(unsigned int)arg1;
- (unsigned int)nodeForAddress:(unsigned long long)arg1;
- (unsigned int)nodeNamespaceSize;
- (unsigned int)objectContentLevel;
- (id)objectIdentifier;
- (unsigned long long)physicalFootprint;
- (unsigned long long)physicalFootprintPeak;
- (int)pid;
- (void)printRuntimeMetadataInfo;
- (id)processDescriptionString;
- (id)processName;
- (id)processSnapshotGraph;
- (id)processSnapshotGraphWithOptions:(unsigned long long)arg1;
- (id)realizedClasses;
- (bool)recordRuntimeMetadataChunkInfo;
- (void)refineTypesWithOverlay:(id)arg1;
- (unsigned int)regionCount;
- (struct _VMURegionNode { id x1; unsigned int *x2; unsigned int x3; unsigned int x4; unsigned long long x5; unsigned long long x6; unsigned long long x7; void *x8; struct _VMURegionNode {} *x9; }*)regions;
- (void)scanNodesWithReferenceRecorder:(id /* block */)arg1;
- (id)scanOverlay;
- (unsigned int)scanningMask;
- (void)setAbandonedMarkingEnabled:(bool)arg1;
- (void)setClassStructureFieldScanValueAtSourceAddress:(void*)arg1 toCorrectedAddress:(void*)arg2;
- (void)setDebugTimer:(id)arg1;
- (void)setExactScanningEnabled:(bool)arg1;
- (void)setMallocEnumerationShouldFail:(bool)arg1;
- (void)setMaxInteriorOffset:(unsigned long long)arg1;
- (void)setNodeScanningLogger:(id /* block */)arg1;
- (void)setObjectContentLevel:(unsigned int)arg1;
- (void)setRecordRuntimeMetadataChunkInfo:(bool)arg1;
- (void)setReferenceScanningLogger:(id /* block */)arg1;
- (void)setScanningMask:(unsigned int)arg1;
- (void)setShowRawClassNames:(bool)arg1;
- (id)shortLabelForNode:(unsigned int)arg1;
- (bool)showRawClassNames;
- (unsigned long long)suspendTimeContinuous;
- (unsigned int)task;
- (void)unmapAllRegions;
- (struct _VMURegionNode { id x1; unsigned int *x2; unsigned int x3; unsigned int x4; unsigned long long x5; unsigned long long x6; unsigned long long x7; void *x8; struct _VMURegionNode {} *x9; }*)validateAddressRangeForSwiftRemoteMirror:(struct _VMURange { unsigned long long x1; unsigned long long x2; })arg1 allowUnusedSplitLibs:(bool)arg2;
- (unsigned int)vmPageSize;
- (id)vmuTask;
- (id)vmuVMRegionForAddress:(unsigned long long)arg1;
- (id)vmuVMRegionForNode:(unsigned int)arg1;
- (unsigned int)zoneCount;
- (id)zoneNameForIndex:(unsigned int)arg1;
- (id)zoneNameForNode:(unsigned int)arg1;

@end
