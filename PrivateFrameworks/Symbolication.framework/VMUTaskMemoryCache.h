/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/Symbolication.framework/Symbolication
 */

@interface VMUTaskMemoryCache : NSObject {
    struct __CFArray { } * _cfOriginalSymbolOwners;
    NSString * _corePath;
    unsigned int  _dyldPlatform;
    bool  _dyldPlatformIsValid;
    unsigned long long  _exclaveType;
    bool  _haveAttemptedDyldPlatformFetch;
    struct mapped_memory_t { } * _memoryRegions;
    struct _CSTypeRef { 
        unsigned long long _opaque_1; 
        unsigned long long _opaque_2; 
    }  _minimalSymbolicator;
    struct _CSTypeRef { unsigned long long x1; unsigned long long x2; } * _originalSymbolOwners;
    int  _pid;
    id /* block */  _regionInfoBlock;
    struct _CSArchitecture { 
        int cpu_type; 
        int cpu_subtype; 
    }  _taskArchitecture;
    bool  _taskIs64Bit;
    bool  _taskIsSelf;
    bool  _taskIsTranslated;
    unsigned int  _taskPort;
    unsigned long long  _taskType;
}

@property (nonatomic, readonly) struct mapped_memory_t { }*memoryRegions;
@property (nonatomic, copy) id /* block */ regionInfoBlock;

+ (bool)taskIs64Bit:(unsigned int)arg1;
+ (id)taskMemoryCacheForTask:(unsigned int)arg1;

- (void).cxx_destruct;
- (void)_createOriginalSymbolOwnersWithPaths:(id)arg1;
- (int)_kernelCorePageRangeQueryWithAddress:(unsigned long long)arg1 size:(unsigned long long)arg2 dispositions:(unsigned long long)arg3 dispositionsCount:(unsigned long long*)arg4;
- (bool)copyRange:(struct _VMURange { unsigned long long x1; unsigned long long x2; })arg1 to:(void*)arg2;
- (void)dealloc;
- (void)enumerateMemoryCache:(id /* block */)arg1;
- (const struct mapped_region_node_t { unsigned long long x1; unsigned long long x2; unsigned long long x3; unsigned int x4; }*)findMappedAddress:(unsigned long long)arg1 size:(unsigned long long)arg2;
- (void)flushMemoryCache;
- (int)getCoreFileCPUType:(int*)arg1;
- (int)getPlatform:(unsigned int*)arg1;
- (id)initWithCorePath:(id)arg1 originalBinaryPaths:(id)arg2 error:(id*)arg3;
- (id)initWithTask:(unsigned int)arg1;
- (bool)isDriverKit;
- (bool)isKernel;
- (bool)isSimulator;
- (int)machVMPageRangeQueryWithAddress:(unsigned long long)arg1 size:(unsigned long long)arg2 dispositions:(unsigned long long)arg3 dispositionsCount:(unsigned long long*)arg4;
- (int)machVMPurgableControlWithAddress:(unsigned long long)arg1 control:(int)arg2 state:(int*)arg3;
- (int)machVMRegionRecurseSubmapInfo64onAddress:(unsigned long long*)arg1 size:(unsigned long long*)arg2 nestingDepth:(unsigned int*)arg3 info:(struct vm_region_submap_info_64 { int x1; int x2; unsigned int x3; unsigned long long x4; unsigned int x5; unsigned int x6; unsigned int x7; unsigned int x8; unsigned int x9; unsigned int x10; unsigned short x11; unsigned char x12; unsigned char x13; int x14; int x15; unsigned int x16; unsigned short x17; unsigned int x18; unsigned long long x19; }*)arg4;
- (int)machVMRegionRecurseSubmapShortInfo64onAddress:(unsigned long long*)arg1 size:(unsigned long long*)arg2 nestingDepth:(unsigned int*)arg3 info:(struct vm_region_submap_short_info_64 { int x1; int x2; unsigned int x3; unsigned long long x4; unsigned int x5; unsigned int x6; unsigned short x7; unsigned char x8; unsigned char x9; int x10; int x11; unsigned int x12; unsigned short x13; }*)arg4;
- (int)mapAddress:(unsigned long long)arg1 size:(unsigned long long)arg2;
- (int)mapAddress:(unsigned long long)arg1 size:(unsigned long long)arg2 returnedAddress:(unsigned long long*)arg3 returnedSize:(unsigned long long*)arg4;
- (struct mapped_memory_t { }*)memoryRegions;
- (unsigned long long)pageSize;
- (int)peekAtAddress:(unsigned long long)arg1 size:(unsigned long long)arg2 returnsBuf:(void**)arg3;
- (const char *)peekStringAtAddress:(unsigned long long)arg1;
- (void)printMemoryCache;
- (int)procRegionFileNameForAddress:(unsigned long long)arg1 buffer:(void*)arg2 bufferSize:(unsigned int)arg3;
- (int)readPointerAt:(unsigned long long)arg1 value:(unsigned long long*)arg2;
- (id /* block */)regionInfoBlock;
- (void)setRegionInfoBlock:(id /* block */)arg1;
- (int)startPeeking;
- (int)stopPeeking;
- (bool)taskIsTranslated;
- (unsigned int)taskPort;
- (int)taskThreadsWithList:(unsigned int**)arg1 listCnt:(unsigned int*)arg2;
- (int)threadGetState:(unsigned int)arg1 withFlavor:(int)arg2 oldState:(unsigned int*)arg3 oldStateCnt:(unsigned int*)arg4;
- (unsigned long long)tryPeekAtAddress:(unsigned long long)arg1 outPtr:(void**)arg2;
- (int)unmapAddress:(unsigned long long)arg1 size:(unsigned long long)arg2 returnedAddress:(unsigned long long*)arg3 returnedSize:(unsigned long long*)arg4;

@end