/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/QueryUnderstanding.framework/QueryUnderstanding
 */

@interface U2HeadInput : NSObject <MLFeatureProvider> {
    MLMultiArray * _input_mask;
    MLMultiArray * _input_span_features;
    MLMultiArray * _sequence_output;
}

@property (nonatomic, readonly) NSSet *featureNames;
@property (nonatomic, retain) MLMultiArray *input_mask;
@property (nonatomic, retain) MLMultiArray *input_span_features;
@property (nonatomic, retain) MLMultiArray *sequence_output;

- (void).cxx_destruct;
- (id)featureNames;
- (id)featureValueForName:(id)arg1;
- (id)initWithInput_mask:(id)arg1 input_span_features:(id)arg2 sequence_output:(id)arg3;
- (id)input_mask;
- (id)input_span_features;
- (id)sequence_output;
- (void)setInput_mask:(id)arg1;
- (void)setInput_span_features:(id)arg1;
- (void)setSequence_output:(id)arg1;

@end