/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/IOGPU.framework/IOGPU
 */

@interface IOGPUMetalResidencySet : _MTLObjectWithLabel <MTLResidencySetSPI> {
    unsigned long long  _currentGeneration;
    IOGPUMetalDevice<MTLDeviceSPI> * _device;
    bool  _evictsImmediately;
    unsigned long long  _expiredGeneration;
    unsigned long long  _globalTraceObjectID;
    struct __IOGPUResource { struct __CFRuntimeBase { unsigned long long x_1_1_1; _Atomic unsigned long long x_1_1_2; } x1; struct __IOGPUDevice {} *x2; void *x3; unsigned long long x4; unsigned long long x5; unsigned int x6; unsigned int x7; unsigned long long x8; unsigned long long x9; struct IOGPUClientSharedRO {} *x10; unsigned long long x11; unsigned long long x12; unsigned long long x13; unsigned long long x14; unsigned long long x15[0]; } * _groupRef;
    struct IOGPUGenerationalSet<id, IOGPUMTLIdKey, IOGPUMTLObjectHashAllocator> { 
        struct IOGPUMTLIdKey {} *m_keyTable; 
        unsigned long long *m_generationTable; 
        unsigned int *m_hopInfo; 
        unsigned long long *m_usedInfo; 
        unsigned long long *m_dirtyInfo; 
        unsigned long long *m_dirtyInfoH; 
        unsigned int m_hashSize; 
        unsigned int m_hashMask; 
        unsigned int m_usedMask; 
        unsigned int m_dirtyHMask; 
        unsigned int m_hashShift; 
        unsigned int m_count; 
        unsigned int m_dirtyCount; 
        unsigned int m_maxSize; 
        unsigned long long m_allocatedSize; 
        unsigned long long m_currentGeneration; 
        unsigned long long m_expiredGeneration; 
    }  _hashTable;
    struct IOGPUResourceInfo { 
        struct __IOSurface {} *iosurface; 
        unsigned int resourceSize : 56; 
        unsigned int iosurfaceField : 8; 
        unsigned int resourceID; 
    }  _info;
    unsigned long long  _labelTraceID;
    struct os_unfair_lock_s { 
        unsigned int _os_unfair_lock_opaque; 
    }  _lock;
}

@property (readonly, copy) NSArray *allAllocations;
@property (readonly, copy) NSArray *allCommittedAllocations; /* unknown property attribute: ? */
@property (readonly) unsigned long long allocatedSize;
@property (readonly) unsigned long long allocationCount;
@property (nonatomic) unsigned long long currentGeneration; /* unknown property attribute: ? */
@property (readonly, copy) NSString *debugDescription; /* unknown property attribute: ? */
@property (readonly, copy) NSString *description;
@property (readonly) <MTLDevice> *device;
@property (nonatomic) unsigned long long expiredGeneration; /* unknown property attribute: ? */
@property (readonly) unsigned long long hash;
@property (readonly) NSString *label;
@property (readonly) Class superclass;

- (id).cxx_construct;
- (void).cxx_destruct;
- (bool)_commitAddedAllocations:(const id*)arg1 count:(unsigned long long)arg2 removedAllocations:(const id*)arg3 count:(unsigned long long)arg4;
- (bool)_commitAddedHeaps:(const id*)arg1 count:(unsigned long long)arg2 removedHeaps:(const id*)arg3 count:(unsigned long long)arg4;
- (bool)_commitAddedResources:(const id*)arg1 count:(unsigned long long)arg2 removedResources:(const id*)arg3 count:(unsigned long long)arg4;
- (void)addAllocation:(id)arg1;
- (void)addAllocations:(const id*)arg1 count:(unsigned long long)arg2;
- (id)allAllocations;
- (id)allCommittedAllocations;
- (unsigned long long)allocatedSize;
- (unsigned long long)allocationCount;
- (void)commit;
- (bool)containsAllocation:(id)arg1;
- (unsigned long long)countForAllocation:(id)arg1;
- (unsigned long long)currentGeneration;
- (void)dealloc;
- (id)device;
- (void)endResidency;
- (unsigned long long)expiredGeneration;
- (unsigned long long)generationForAllocation:(id)arg1;
- (id)initWithDevice:(id)arg1 descriptor:(id)arg2 args:(struct IOGPUNewResourceArgs { struct IOGPUNewResourceData { unsigned int x_1_1_1; unsigned int x_1_1_2; unsigned short x_1_1_3; unsigned short x_1_1_4; unsigned short x_1_1_5; unsigned short x_1_1_6; unsigned char x_1_1_7; unsigned char x_1_1_8; unsigned char x_1_1_9; unsigned char x_1_1_10; unsigned int x_1_1_11; unsigned long long x_1_1_12; unsigned long long x_1_1_13; unsigned long long x_1_1_14; unsigned int x_1_1_15; unsigned int x_1_1_16; union { struct { unsigned long long x_1_3_1; unsigned long long x_1_3_2; unsigned long long x_1_3_3; union { unsigned int x_4_4_1; unsigned long long x_4_4_2; } x_1_3_4; } x_17_2_1; struct { unsigned int x_2_3_1; unsigned int x_2_3_2; unsigned int x_2_3_3; unsigned int x_2_3_4; unsigned long long x_2_3_5[2]; } x_17_2_2; struct { unsigned long long x_3_3_1; unsigned long long x_3_3_2; unsigned long long x_3_3_3; } x_17_2_3; struct { unsigned int x_4_3_1; } x_17_2_4; } x_1_1_17; } x1; }*)arg3 argsSize:(unsigned long long)arg4;
- (void)removeAllAllocations;
- (void)removeAllocation:(id)arg1;
- (void)removeAllocations:(const id*)arg1 count:(unsigned long long)arg2;
- (void)requestResidency;
- (void)setCurrentGeneration:(unsigned long long)arg1;
- (void)setExpiredGeneration:(unsigned long long)arg1;

@end