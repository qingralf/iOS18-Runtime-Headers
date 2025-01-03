/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/NeutrinoCore.framework/NeutrinoCore
 */

@interface _NUImage : NSObject <NUImage, NUImageCopying, NUMutableImage, NUMutablePurgeableImage, NUPurgeableImage> {
    struct vector<unsigned char, std::allocator<unsigned char>> { 
        char *__begin_; 
        char *__end_; 
        struct __compressed_pair<unsigned char *, std::allocator<unsigned char>> { 
            char *__value_; 
        } __end_cap_; 
    }  _accessCount;
    NUColorSpace * _colorSpace;
    NUPixelFormat * _format;
    NUImageLayout * _layout;
    NSObject<OS_dispatch_queue> * _queue;
    <NUStorageFactory> * _tileFactory;
    NSPointerArray * _tiles;
    NURegion * _validRegion;
    NSObject<OS_dispatch_queue> * _writeQueue;
}

@property (readonly) NUColorSpace *colorSpace;
@property (readonly, copy) NSString *debugDescription; /* unknown property attribute: ? */
@property (readonly, copy) NSString *description;
@property (readonly) NUPixelFormat *format;
@property (readonly) unsigned long long hash;
@property (readonly) NUImageLayout *layout;
@property (readonly) struct { long long x1; long long x2; } size;
@property (readonly) Class superclass;
@property (copy) NURegion *validRegion;

- (id).cxx_construct;
- (void).cxx_destruct;
- (id)_createOrCopyTile:(id)arg1 tileInfo:(id)arg2 writeRegion:(id)arg3;
- (id)_nonPurgeableCopy;
- (id)_purgeableCopy;
- (id)_tileAtIndex:(unsigned long long)arg1;
- (bool)beginAccess;
- (bool)beginAccessRegion:(id)arg1;
- (id)colorSpace;
- (bool)copyBufferStorage:(id)arg1 fromRect:(struct { struct { long long x_1_1_1; long long x_1_1_2; } x1; struct { long long x_2_1_1; long long x_2_1_2; } x2; })arg2 toPoint:(struct { long long x1; long long x2; })arg3;
- (bool)copySurfaceStorage:(id)arg1 fromRect:(struct { struct { long long x_1_1_1; long long x_1_1_2; } x1; struct { long long x_2_1_1; long long x_2_1_2; } x2; })arg2 toPoint:(struct { long long x1; long long x2; })arg3 device:(id)arg4;
- (void)dealloc;
- (id)description;
- (void)endAccess;
- (void)endAccessRegion:(id)arg1;
- (id)format;
- (id)immutableImageCopy;
- (id)init;
- (id)initWithLayout:(id)arg1 format:(id)arg2 colorSpace:(id)arg3 tileFactory:(id)arg4;
- (id)layout;
- (id)mutableImageCopy;
- (id)mutablePurgeableImageCopy;
- (id)purgeableImageCopy;
- (void)readRegion:(id)arg1 withBlock:(id /* block */)arg2;
- (void)setValidRegion:(id)arg1;
- (struct { long long x1; long long x2; })size;
- (id)tileAtIndex:(unsigned long long)arg1;
- (id)validRegion;
- (void)writeRegion:(id)arg1 withBlock:(id /* block */)arg2;

@end
