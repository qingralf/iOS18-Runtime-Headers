/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/NeutrinoCore.framework/NeutrinoCore
 */

@interface NUStyleTransferNode : NURenderNode

@property (nonatomic, readonly) NSDictionary *configuration;
@property (nonatomic, readonly) NURenderNode *inputNode;
@property (nonatomic, readonly) NUColorSpace *targetColorSpace;
@property (nonatomic, readonly) NURenderNode *targetNode;
@property (nonatomic, readonly) NSDictionary *tuningParameters;

+ (id)defaultImageConfiguration;
+ (id)defaultImageSettingsForScale:(struct { long long x1; long long x2; })arg1;
+ (id)defaultImageTuningParameters;
+ (id)defaultVideoConfiguration;
+ (id)defaultVideoSettingsForScale:(struct { long long x1; long long x2; })arg1;
+ (id)defaultVideoTuningParameters;
+ (id)semanticStyleImageConfiguration;
+ (id)semanticStyleImageSettingsForScale:(struct { long long x1; long long x2; })arg1;
+ (id)semanticStyleImageTuningParameters;
+ (id)semanticStyleVideoConfiguration;
+ (id)semanticStyleVideoSettingsForScale:(struct { long long x1; long long x2; })arg1;
+ (id)semanticStyleVideoTuningParameters;
+ (id)thumbnailScalePolicyForConfiguration:(id)arg1;

- (id)_evaluateImage:(out id*)arg1;
- (id)configuration;
- (id)initWithInput:(id)arg1 target:(id)arg2 settings:(id)arg3;
- (id)inputNode;
- (id)nodeByReplayingAgainstCache:(id)arg1 pipelineState:(id)arg2 error:(out id*)arg3;
- (id)noiseModel;
- (id)resolvedNodeWithCachedInputs:(id)arg1 settings:(id)arg2 pipelineState:(id)arg3 error:(out id*)arg4;
- (bool)shouldCache;
- (bool)shouldCacheNodeForPipelineState:(id)arg1;
- (id)targetColorSpace;
- (id)targetNode;
- (id)thumbnailNode;
- (id)tuningParameters;
- (id)uniqueInputNode;

@end