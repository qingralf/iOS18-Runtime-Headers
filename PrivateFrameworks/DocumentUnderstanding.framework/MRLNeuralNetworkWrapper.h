/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/DocumentUnderstanding.framework/DocumentUnderstanding
 */

@interface MRLNeuralNetworkWrapper : NSObject {
    struct MontrealNeuralNetwork { } * model;
}

- (bool)load:(id)arg1;
- (id)lstmPredictions:(id)arg1 embeddingDimension:(unsigned long long)arg2 classSize:(unsigned long long)arg3 seqLen:(unsigned long long)arg4;

@end