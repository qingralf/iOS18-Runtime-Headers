/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/NeutrinoCore.framework/NeutrinoCore
 */

@interface NUPlaceholderNode : NURenderNode

+ (id)emptyNode;

- (id)_evaluateImage:(out id*)arg1;
- (id)_evaluateImageGeometryWithSourceOptions:(id)arg1 error:(out id*)arg2;
- (id)_evaluateImagePropertiesWithSourceOptions:(id)arg1 error:(out id*)arg2;
- (id)_evaluateImageWithSourceOptions:(id)arg1 subsampleFactor:(long long*)arg2 error:(out id*)arg3;
- (id)_evaluateVideoCompositionWithSourceOptions:(id)arg1 error:(out id*)arg2;
- (id)_evaluateVideoPropertiesWithSourceOptions:(id)arg1 error:(out id*)arg2;
- (id)initWithInputs:(id)arg1;
- (id)initWithSettings:(id)arg1 inputs:(id)arg2;
- (bool)isPlaceholderNode;
- (id)nodeByReplayingAgainstCache:(id)arg1 pipelineState:(id)arg2 error:(out id*)arg3;

@end