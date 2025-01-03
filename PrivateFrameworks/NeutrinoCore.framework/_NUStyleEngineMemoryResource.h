/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/NeutrinoCore.framework/NeutrinoCore
 */

@interface _NUStyleEngineMemoryResource : NSObject {
    CMIExternalMemoryDescriptor * _descriptor;
    <MTLDevice> * _device;
    CMIExternalMemoryResource * _resource;
    unsigned long long  _sid;
}

@property (nonatomic, readonly) CMIExternalMemoryDescriptor *descriptor;
@property (nonatomic, readonly) <MTLDevice> *device;
@property (nonatomic, readonly) CMIExternalMemoryResource *resource;

+ (bool)usingSharedMemoryResourceForDevice:(id)arg1 withDescriptor:(id)arg2 perform:(id /* block */)arg3;

- (void).cxx_destruct;
- (void)dealloc;
- (id)description;
- (id)descriptor;
- (id)device;
- (id)init;
- (id)initWithDevice:(id)arg1 descriptor:(id)arg2;
- (id)resource;
- (bool)setup;

@end
