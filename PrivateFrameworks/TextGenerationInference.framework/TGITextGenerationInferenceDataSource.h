/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/TextGenerationInference.framework/TextGenerationInference
 */

@interface TGITextGenerationInferenceDataSource : NSObject <TGITextGenerationInferenceDataSource>

@property (readonly, copy) NSString *debugDescription; /* unknown property attribute: ? */
@property (readonly, copy) TGTextGenerationConfiguration *defaultConfiguration;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (id)createInferenceRunnerWithQueue:(id)arg1 executionUUID:(id)arg2 operation:(id)arg3 session:(id)arg4;
- (struct shared_ptr<TGITextGenerationInferenceModelInterface> { struct TGITextGenerationInferenceModelInterface {} *x1; struct __shared_weak_count {} *x2; })createModelWithConfiguration:(id)arg1;
- (id)defaultConfiguration;

@end
