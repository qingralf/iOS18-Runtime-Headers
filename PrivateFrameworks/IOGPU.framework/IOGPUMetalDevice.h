/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/IOGPU.framework/IOGPU
 */

@interface IOGPUMetalDevice : _MTLDevice {
    unsigned int  _accelID;
    unsigned int  _acceleratorPort;
    struct IOGPUMetalSuballocator { } * _buffer_suballocator;
    struct IOGPUMetalCommandBufferStoragePool { struct gpuStorageQueue { struct IOGPUMetalCommandBufferStorage {} *x_1_1_1; struct IOGPUMetalCommandBufferStorage {} **x_1_1_2; } x1; struct os_unfair_lock_s { unsigned int x_2_1_1; } x2; int x3; int x4; int x5; id x6; } * _commandBufferStoragePool;
    unsigned int  _configBits;
    unsigned int  _deviceBits;
    struct __IOGPUDevice { } * _deviceRef;
    <MTLDeviceSPI> * _deviceWrapper;
    NSObject<OS_dispatch_queue> * _device_dispatch_queue;
    struct os_unfair_lock_s { 
        unsigned int _os_unfair_lock_opaque; 
    }  _device_pool_cleanup_lock;
    NSObject<OS_dispatch_queue> * _device_pool_cleanup_queue;
    bool  _device_pool_cleanup_requested;
    bool  _device_pool_cleanup_scheduled;
    NSObject<OS_dispatch_source> * _device_pool_cleanup_source;
    bool  _disableGPUIO;
    IOGPUMetalDeviceShmemPool * _ioKernelCommandListShmemPool;
    int  _numCommandBuffers;
    unsigned long long  _registryID;
    unsigned long long  _segmentByteThreshold;
    unsigned long long  _sharedMemorySize;
    /* Warning: unhandled struct encoding: '{?="segmentListShmemPool"@"IOGPUMetalDeviceShmemPool""kernelCommandShmemPool"@"IOGPUMetalDeviceShmemPool""sidebandPool"@"IOGPUMetalDeviceShmemPool""hwResourcePools"^@"hwResourcePoolCount"I"akResourceListPool"@"MTLResourceListPool""akPrivateResourceListPool"@"MTLResourceListPool""debugBufferShmemPool"@"IOGPUMetalDeviceShmemPool"}' */ struct { 
        IOGPUMetalDeviceShmemPool *segmentListShmemPool; 
        IOGPUMetalDeviceShmemPool *kernelCommandShmemPool; 
        IOGPUMetalDeviceShmemPool *sidebandPool; 
        hwResourcePoolCount **hwResourcePools; 
    }  _storageCreateParams;
    unsigned long long  _textureRam;
    unsigned long long  _videoRam;
}

@property (readonly) unsigned int acceleratorPort;
@property (readonly) unsigned long long currentAllocatedSize;
@property (readonly) unsigned long long dedicatedMemorySize;
@property (readonly) bool hasUnifiedMemory;
@property (readonly) unsigned int hwResourcePoolCount;
@property (readonly) id*hwResourcePools;
@property (readonly) IOGPUMemoryInfo *memoryInfo;
@property (readonly) int numCommandBuffers;
@property (readonly) unsigned long long recommendedMaxWorkingSetSize;
@property (readonly) unsigned long long registryID;
@property (readonly) unsigned long long sharedMemorySize;
@property (readonly) bool supportPriorityBand;
@property (readonly) bool supportsVertexAmplification;

+ (void)registerDevices;
+ (void)registerService:(unsigned int)arg1;

- (void).cxx_destruct;
- (void)_addResource:(id)arg1;
- (id)_deviceWrapper;
- (void)_purgeDevice;
- (void)_removeResource:(id)arg1;
- (void)_setDeviceWrapper:(id)arg1;
- (unsigned int)acceleratorPort;
- (id)akPrivateResourceListPool;
- (id)akResourceListPool;
- (id)allocBufferSubDataWithLength:(unsigned long long)arg1 options:(unsigned long long)arg2 alignment:(unsigned long long)arg3 heapIndex:(short*)arg4 bufferIndex:(short*)arg5 bufferOffset:(unsigned long long*)arg6;
- (id)allocBufferSubDataWithLength:(unsigned long long)arg1 options:(unsigned long long)arg2 alignment:(unsigned long long)arg3 heapIndex:(short*)arg4 bufferIndex:(short*)arg5 bufferOffset:(unsigned long long*)arg6 parentAddress:(unsigned long long)arg7 parentLength:(unsigned long long)arg8;
- (unsigned int)cmdBufArgsSize;
- (unsigned long long)currentAllocatedSize;
- (void)dealloc;
- (void)deallocBufferSubData:(id)arg1 heapIndex:(short)arg2 bufferIndex:(short)arg3 bufferOffset:(unsigned long long)arg4 length:(unsigned long long)arg5;
- (unsigned long long)dedicatedMemorySize;
- (struct __IOGPUDevice { }*)deviceRef;
- (bool)hasUnifiedMemory;
- (unsigned int)hwResourcePoolCount;
- (id*)hwResourcePools;
- (id)indirectArgumentBufferDecodingData;
- (id)initWithAcceleratorPort:(unsigned int)arg1;
- (id)initWithAcceleratorPort:(unsigned int)arg1 options:(unsigned long long)arg2;
- (unsigned int)initialDebugBufferShmemSize;
- (unsigned int)initialIOKernelCommandListShmemSize;
- (unsigned int)initialKernelCommandShmemSize;
- (unsigned int)initialSegmentListShmemSize;
- (unsigned int)initialSidebandShmemSize;
- (unsigned long long)maxBufferLength;
- (id)memoryInfo;
- (id)newAccelerationStructureWithBuffer:(id)arg1 offset:(unsigned long long)arg2;
- (id)newAccelerationStructureWithBuffer:(id)arg1 offset:(unsigned long long)arg2 resourceIndex:(unsigned long long)arg3;
- (id)newAccelerationStructureWithSize:(unsigned long long)arg1;
- (id)newAccelerationStructureWithSize:(unsigned long long)arg1 resourceIndex:(unsigned long long)arg2;
- (id)newArgumentEncoderWithLayout:(id)arg1;
- (id)newCommandQueueWithDescriptor:(id)arg1;
- (id)newEvent;
- (id)newEventWithOptions:(long long)arg1;
- (id)newFence;
- (id)newIOCommandQueueWithDescriptor:(id)arg1 error:(id*)arg2;
- (id)newIOFileHandleWithURL:(id)arg1 compressionMethod:(long long)arg2 error:(id*)arg3;
- (id)newIOFileHandleWithURL:(id)arg1 error:(id*)arg2;
- (id)newIOHandleWithURL:(id)arg1 compressionMethod:(long long)arg2 error:(id*)arg3;
- (id)newIOHandleWithURL:(id)arg1 compressionType:(long long)arg2 error:(id*)arg3;
- (id)newIOHandleWithURL:(id)arg1 error:(id*)arg2;
- (id)newIndirectArgumentBufferLayoutWithStructType:(id)arg1;
- (id)newIndirectArgumentEncoderWithLayout:(id)arg1;
- (id)newIndirectCommandBufferWithDescriptor:(id)arg1 maxCommandCount:(unsigned long long)arg2 options:(unsigned long long)arg3;
- (id)newIntersectionFunctionTableWithDescriptor:(id)arg1;
- (id)newLateEvalEvent;
- (id)newUncachedIOFileHandleWithURL:(id)arg1 compressionMethod:(long long)arg2 error:(id*)arg3;
- (id)newUncachedIOFileHandleWithURL:(id)arg1 error:(id*)arg2;
- (id)newUncachedIOHandleWithURL:(id)arg1 compressionType:(long long)arg2 error:(id*)arg3;
- (id)newUncachedIOHandleWithURL:(id)arg1 error:(id*)arg2;
- (int)numCommandBuffers;
- (unsigned long long)recommendedMaxWorkingSetSize;
- (unsigned long long)registryID;
- (void)setComputePipelineStateCommandShmemSize:(unsigned int)arg1;
- (void)setHwResourcePool:(id*)arg1 count:(int)arg2;
- (void)setIndirectArgumentBufferDecodingData:(id)arg1;
- (void)setSegmentListShmemSize:(unsigned int)arg1;
- (unsigned long long)sharedMemorySize;
- (bool)supportPriorityBand;
- (bool)supportsResourceDetachBacking;
- (bool)supportsVertexAmplification;
- (bool)supportsVertexAmplificationCount:(unsigned long long)arg1;

@end
