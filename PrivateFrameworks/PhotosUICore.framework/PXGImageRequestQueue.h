/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
 */

@interface PXGImageRequestQueue : NSObject {
    long long  _capacity;
    long long  _count;
    <PXGImageRequestPerformer> * _imageRequestPerformer;
    struct PXGImageRequest { unsigned int x1; int x2; void *x3; } * _requests;
}

@property (nonatomic) long long count;
@property (nonatomic) <PXGImageRequestPerformer> *imageRequestPerformer;

- (void).cxx_destruct;
- (void)_discardIndexes:(id)arg1;
- (void)_removeAllRequests;
- (void)cancelTextureRequests:(id)arg1;
- (long long)count;
- (void)dealloc;
- (void)enqueueRequestsWithSpriteIndexRange:(struct _PXGSpriteIndexRange { unsigned int x1; unsigned int x2; })arg1 textureRequestIDs:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg2 displayAssetFetchResult:(id)arg3 observer:(id)arg4 presentationStyles:(unsigned long long)arg5 targetSize:(struct CGSize { double x1; double x2; })arg6 screenScale:(double)arg7 screenMaxHeadroom:(double)arg8 adjustment:(id)arg9 intent:(unsigned long long)arg10 useLowMemoryDecode:(bool)arg11 applyCleanApertureCrop:(bool)arg12 mediaProvider:(id)arg13;
- (id)imageRequestPerformer;
- (void)performRequestsWithAllowedIDs:(id)arg1;
- (void)setCount:(long long)arg1;
- (void)setImageRequestPerformer:(id)arg1;

@end
