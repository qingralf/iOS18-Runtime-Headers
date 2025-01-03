/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/PhotoImaging.framework/PhotoImaging
 */

@interface PIInpaintAuxiliaryImageNode : NURenderNode

@property (nonatomic, readonly) NURenderNode *inputNode;
@property (nonatomic, readonly) NURenderNode *retouchNode;

+ (id)styleTransferSettingsForGeometry:(id)arg1;

- (bool)canPropagateOriginalAuxiliaryData:(long long)arg1;
- (id)initWithInputs:(id)arg1 retouchNode:(id)arg2 settings:(id)arg3;
- (id)initWithSettings:(id)arg1 inputs:(id)arg2;
- (id)inputNode;
- (id)nodeByReplayingAgainstCache:(id)arg1 pipelineState:(id)arg2 error:(out id*)arg3;
- (id)resolvedNodeWithCachedInputs:(id)arg1 settings:(id)arg2 pipelineState:(id)arg3 error:(out id*)arg4;
- (id)retouchNode;
- (bool)shouldCacheNodeForPipelineState:(id)arg1;

@end
