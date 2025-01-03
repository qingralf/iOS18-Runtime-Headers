/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/ProactiveML.framework/ProactiveML
 */

@interface PMLProtoBufTracker : NSObject <PMLEvaluationTrackerProtocol, PMLLogRegTrackerProtocol, PMLMultiLabelEvaluationTrackerProtocol> {
    <PMLTrackerAdapterProtocol> * _adapter;
    AWDProactiveModelFittingModelInfo * _modelInfo;
    unsigned long long  _quantizationNumberOfBuckets;
}

@property (nonatomic, readonly) <PMLTrackerAdapterProtocol> *adapter;
@property (readonly, copy) NSString *debugDescription; /* unknown property attribute: ? */
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) AWDProactiveModelFittingModelInfo *modelInfo;
@property (nonatomic, readonly) unsigned long long quantizationNumberOfBuckets;
@property (readonly) Class superclass;

+ (id)awdTrackerForPlanId:(id)arg1;
+ (id)messageForGradient:(id)arg1 scaleFactor:(float)arg2 minibatchStats:(id)arg3 evaluationMetrics:(id)arg4 serverIteration:(unsigned long long)arg5 modelInfo:(id)arg6 numberOfBuckets:(unsigned long long)arg7;
+ (id)messageForWeights:(id)arg1 scaleFactor:(float)arg2 minibatchStats:(id)arg3 evaluationMetrics:(id)arg4 modelInfo:(id)arg5 numberOfBuckets:(unsigned long long)arg6;
+ (id)parsecTrackerForPlanId:(id)arg1;
+ (id)trackerForPlanId:(id)arg1;

- (void).cxx_destruct;
- (id)adapter;
- (id)init;
- (id)initWithAdapter:(id)arg1 modelInfo:(id)arg2;
- (id)initWithAdapter:(id)arg1 modelInfo:(id)arg2 quantizationBuckets:(unsigned long long)arg3;
- (id)initWithPlist:(id)arg1 chunks:(id)arg2 context:(id)arg3;
- (id)modelInfo;
- (unsigned long long)quantizationNumberOfBuckets;
- (id)toPlistWithChunks:(id)arg1;
- (id)trackEvaluationMetrics:(id)arg1 minibatchStats:(id)arg2;
- (id)trackGradient:(id)arg1 scaleFactor:(float)arg2 minibatchStats:(id)arg3 evaluationMetrics:(id)arg4 serverIteration:(unsigned long long)arg5;
- (id)trackPrecisionAtK:(id)arg1;
- (id)trackPrecisionAtK:(id)arg1 minibatchStats:(id)arg2;
- (id)trackWeights:(id)arg1 scaleFactor:(float)arg2 minibatchStats:(id)arg3 evaluationMetrics:(id)arg4;

@end
