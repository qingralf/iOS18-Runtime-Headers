/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/CMCapture.framework/CMCapture
 */

@interface BWStreamingPersonSegmentationConfiguration : BWInferenceConfiguration {
    NSString * _alternativeStreamingPersonSegmentationMaskKey;
    NSString * _alternativeStreamingSkinSegmentationMaskKey;
    bool  _cropColorInputToPrimaryCaptureRect;
    int  _inputRotationAngle;
    bool  _propagateColorInput;
    bool  _useLowFrameRateOptimizedNetwork;
}

@property (nonatomic, retain) NSString *alternativeStreamingPersonSegmentationMaskKey;
@property (nonatomic, retain) NSString *alternativeStreamingSkinSegmentationMaskKey;
@property (nonatomic) bool cropColorInputToPrimaryCaptureRect;
@property (nonatomic) int inputRotationAngle;
@property (nonatomic) bool propagateColorInput;
@property (nonatomic) bool useLowFrameRateOptimizedNetwork;

- (id)alternativeStreamingPersonSegmentationMaskKey;
- (id)alternativeStreamingSkinSegmentationMaskKey;
- (bool)cropColorInputToPrimaryCaptureRect;
- (void)dealloc;
- (int)inputRotationAngle;
- (bool)propagateColorInput;
- (void)setAlternativeStreamingPersonSegmentationMaskKey:(id)arg1;
- (void)setAlternativeStreamingSkinSegmentationMaskKey:(id)arg1;
- (void)setCropColorInputToPrimaryCaptureRect:(bool)arg1;
- (void)setInputRotationAngle:(int)arg1;
- (void)setPropagateColorInput:(bool)arg1;
- (void)setUseLowFrameRateOptimizedNetwork:(bool)arg1;
- (bool)useLowFrameRateOptimizedNetwork;

@end