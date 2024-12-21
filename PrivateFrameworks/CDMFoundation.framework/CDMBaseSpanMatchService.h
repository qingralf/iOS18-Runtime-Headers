/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/CDMFoundation.framework/CDMFoundation
 */

@interface CDMBaseSpanMatchService : CDMDAGBaseService {
    <CDMProtoSpanMatcher> * _spanMatcher;
}

@property (retain) <CDMProtoSpanMatcher> *spanMatcher;

+ (id)convertToSpanMatchRequest:(id)arg1 nlContext:(id)arg2;
+ (id)convertToSpanMatchRequests:(id)arg1 nlContext:(id)arg2;
+ (id)getCDMServiceAssetConfig;
+ (Class)spanMatcherClass;

- (void).cxx_destruct;
- (id)_handle:(id)arg1;
- (id)createErrorSetupResponseCommand:(id)arg1;
- (id)handle:(id)arg1;
- (id)handleRequestCommandTypeNames;
- (void)limitNumberOfSpans:(id)arg1;
- (void)setSpanMatcher:(id)arg1;
- (id)setup:(id)arg1;
- (id)setupSpanMatcher:(id)arg1;
- (bool)shouldBeUsedForAsrAlternatives;
- (id)spanMatcher;
- (void)spanizeAsrs:(id)arg1 asrSpansMap:(id)arg2 topAsrSpans:(id)arg3 topAsrSpansFiltered:(id)arg4 asrHypotheses:(id)arg5;
- (void)spanizeTokenChain:(id)arg1 spans:(id)arg2 isTopAsr:(bool)arg3 topAsrSpansFiltered:(id)arg4 asrHypothesis:(id)arg5;
- (id)warmup:(id)arg1;

@end