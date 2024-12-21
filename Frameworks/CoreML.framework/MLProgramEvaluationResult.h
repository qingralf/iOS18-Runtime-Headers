/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/CoreML.framework/CoreML
 */

@interface MLProgramEvaluationResult : NSObject {
    <MLBatchProvider> * _evaluationMetrics;
    double  _loss;
}

@property (readonly) NSNumber *averageLoss;
@property (retain) <MLBatchProvider> *evaluationMetrics;
@property double loss;

// Image: /System/Library/Frameworks/CoreML.framework/CoreML

- (void).cxx_destruct;
- (id)evaluationMetrics;
- (id)init;
- (double)loss;
- (void)setEvaluationMetrics:(id)arg1;
- (void)setLoss:(double)arg1;

// Image: /System/Library/PrivateFrameworks/PromotedContentPrediction.framework/PromotedContentPrediction

- (id)averageAccuracy:(id)arg1;
- (id)averageLoss;

@end