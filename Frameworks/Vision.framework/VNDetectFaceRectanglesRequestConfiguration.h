/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/Vision.framework/Vision
 */

@interface VNDetectFaceRectanglesRequestConfiguration : VNImageBasedRequestConfiguration {
    bool  _faceCoreEnhanceEyesAndMouthLocalization;
    bool  _faceCoreExtractBlink;
    bool  _faceCoreExtractSmile;
    NSNumber * _faceCoreInitialAngle;
    NSNumber * _faceCoreMinFaceSize;
    NSNumber * _faceCoreNumberOfDetectionAngles;
    unsigned long long  _faceCoreType;
    NSNumber * _precisionRecallThresholdOverride;
}

@property (nonatomic) bool faceCoreEnhanceEyesAndMouthLocalization;
@property (nonatomic) bool faceCoreExtractBlink;
@property (nonatomic) bool faceCoreExtractSmile;
@property (nonatomic, retain) NSNumber *faceCoreInitialAngle;
@property (nonatomic, retain) NSNumber *faceCoreMinFaceSize;
@property (nonatomic, retain) NSNumber *faceCoreNumberOfDetectionAngles;
@property (nonatomic) unsigned long long faceCoreType;
@property (nonatomic, copy) NSNumber *precisionRecallThresholdOverride;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (bool)faceCoreEnhanceEyesAndMouthLocalization;
- (bool)faceCoreExtractBlink;
- (bool)faceCoreExtractSmile;
- (id)faceCoreInitialAngle;
- (id)faceCoreMinFaceSize;
- (id)faceCoreNumberOfDetectionAngles;
- (unsigned long long)faceCoreType;
- (id)initWithRequestClass:(Class)arg1;
- (id)precisionRecallThresholdOverride;
- (void)setFaceCoreEnhanceEyesAndMouthLocalization:(bool)arg1;
- (void)setFaceCoreExtractBlink:(bool)arg1;
- (void)setFaceCoreExtractSmile:(bool)arg1;
- (void)setFaceCoreInitialAngle:(id)arg1;
- (void)setFaceCoreMinFaceSize:(id)arg1;
- (void)setFaceCoreNumberOfDetectionAngles:(id)arg1;
- (void)setFaceCoreType:(unsigned long long)arg1;
- (void)setPrecisionRecallThresholdOverride:(id)arg1;

@end
