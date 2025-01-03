/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/CoreSceneUnderstanding.framework/CoreSceneUnderstanding
 */

@interface CSUCaptionResults : NSObject {
    <CSUBuffer> * _decoderFeaturesCSUBuffer;
    MLMultiArray * _decoderFeaturesMLMultiArray;
    NSArray * _results;
}

@property (nonatomic, retain) <CSUBuffer> *decoderFeaturesCSUBuffer;
@property (nonatomic, retain) MLMultiArray *decoderFeaturesMLMultiArray;
@property (nonatomic, readonly, copy) NSArray *results;

+ (id)createCaptionResultsWithResults:(id)arg1;

- (void).cxx_destruct;
- (id)decoderFeaturesCSUBuffer;
- (id)decoderFeaturesMLMultiArray;
- (id)initWithCaptionResults:(id)arg1;
- (id)results;
- (void)setDecoderFeaturesCSUBuffer:(id)arg1;
- (void)setDecoderFeaturesMLMultiArray:(id)arg1;

@end
