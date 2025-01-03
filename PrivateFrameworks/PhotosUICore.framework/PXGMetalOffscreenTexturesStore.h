/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
 */

@interface PXGMetalOffscreenTexturesStore : NSObject {
    NSObject<OS_dispatch_queue> * _queue;
    NSHashTable * _queue_aliveTextures;
    <MTLDevice> * _queue_device;
    NSMutableSet * _queue_loadedTextures;
    unsigned long long  _queue_pixelFormat;
    long long  _queue_sampleCount;
    struct { 
        unsigned long long width; 
        unsigned long long height; 
        unsigned long long depth; 
    }  _queue_size;
    NSMutableSet * _queue_usedTextures;
}

- (void).cxx_destruct;
- (id)_queue_checkoutOffscreenTextureWithSize:(struct { unsigned long long x1; unsigned long long x2; unsigned long long x3; })arg1 pixelFormat:(unsigned long long)arg2;
- (id)_queue_loadTextureWithSize:(struct { unsigned long long x1; unsigned long long x2; unsigned long long x3; })arg1 pixelFormat:(unsigned long long)arg2;
- (void)_queue_preloadTexturesCount:(long long)arg1;
- (void)_queue_removeAllTextures;
- (void)_queue_willRenderFrameWithDevice:(id)arg1 size:(struct { unsigned long long x1; unsigned long long x2; unsigned long long x3; })arg2 sampleCount:(long long)arg3 pixelFormat:(unsigned long long)arg4 preloadTexturesCount:(long long)arg5;
- (id)checkoutOffscreenTextureWithSize:(struct { unsigned long long x1; unsigned long long x2; unsigned long long x3; })arg1 pixelFormat:(unsigned long long)arg2;
- (id)init;
- (void)removeAllTextures;
- (void)willRenderFrameWithDevice:(id)arg1 size:(struct { unsigned long long x1; unsigned long long x2; unsigned long long x3; })arg2 sampleCount:(long long)arg3 pixelFormat:(unsigned long long)arg4 preloadTexturesCount:(long long)arg5;

@end
