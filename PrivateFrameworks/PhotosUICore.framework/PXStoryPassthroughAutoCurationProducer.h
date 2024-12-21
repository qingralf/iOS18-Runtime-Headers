/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
 */

@interface PXStoryPassthroughAutoCurationProducer : NSObject <PXStoryAutoCurationProducer> {
    <PXDisplayAssetFetchResult> * _assets;
    unsigned long long  _availableLengths;
}

@property (nonatomic, retain) <PXDisplayAssetFetchResult> *assets;
@property (nonatomic) unsigned long long availableLengths;

- (void).cxx_destruct;
- (id)assets;
- (unsigned long long)availableLengths;
- (id)init;
- (id)requestCuratedAssetsWithOptions:(unsigned long long)arg1 targetOverallDurationInfo:(struct { long long x1; struct { struct { long long x_1_2_1; int x_1_2_2; unsigned int x_1_2_3; long long x_1_2_4; } x_2_1_1; struct { long long x_2_2_1; int x_2_2_2; unsigned int x_2_2_3; long long x_2_2_4; } x_2_1_2; struct { long long x_3_2_1; int x_3_2_2; unsigned int x_3_2_3; long long x_3_2_4; } x_2_1_3; } x2; })arg2 resultHandler:(id /* block */)arg3;
- (id)requestCurationLengthsWithOptions:(unsigned long long)arg1 allAssets:(id)arg2 curatedAssets:(id)arg3 resultHandler:(id /* block */)arg4;
- (void)setAssets:(id)arg1;
- (void)setAvailableLengths:(unsigned long long)arg1;

@end