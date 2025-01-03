/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/CMCapture.framework/CMCapture
 */

@interface BWIntelligentDistortionCorrectionProcessorControllerConfiguration : BWStillImageProcessorControllerConfiguration {
    int  _baseDepthRotationDegrees;
    bool  _depthDataCorrectionEnabled;
    BWVideoFormat * _depthFormat;
    struct { 
        int width; 
        int height; 
    }  _geometricDistortionCorrectionExpandedImageDimensions;
    struct CGPoint { 
        double x; 
        double y; 
    }  _geometricDistortionCorrectionInputCropOffset;
    int  _horizontalSensorBinningFactor;
    bool  _intelligentDistortionCorrectionAppliesFinalDimensions;
    int  _intelligentDistortionCorrectionVersion;
    NSArray * _portTypesWithGeometricDistortionCorrectionEnabled;
    NSArray * _portTypesWithIntelligentDistortionCorrectionEnabled;
    BWVideoFormat * _primaryFormat;
    struct { 
        unsigned int maximumImageWidth; 
        unsigned int maximumImageHeight; 
        unsigned int maximumPersonMaskWidth; 
        unsigned int maximumPersonMaskHeight; 
    }  _processorConfig;
    NSDictionary * _providedInferenceAttachedMediaByMode;
    struct { 
        int width; 
        int height; 
    }  _stereoPhotoOutputDimensions;
    int  _verticalSensorBinningFactor;
}

@property (nonatomic, readonly) int baseDepthRotationDegrees;
@property (nonatomic, readonly) bool depthDataCorrectionEnabled;
@property (nonatomic, readonly) BWVideoFormat *depthFormat;
@property (nonatomic) struct { int x1; int x2; } geometricDistortionCorrectionExpandedImageDimensions;
@property (nonatomic) struct CGPoint { double x1; double x2; } geometricDistortionCorrectionInputCropOffset;
@property (nonatomic) int horizontalSensorBinningFactor;
@property (nonatomic) bool intelligentDistortionCorrectionAppliesFinalDimensions;
@property (nonatomic) int intelligentDistortionCorrectionVersion;
@property (nonatomic, retain) NSArray *portTypesWithGeometricDistortionCorrectionEnabled;
@property (nonatomic, retain) NSArray *portTypesWithIntelligentDistortionCorrectionEnabled;
@property (nonatomic, readonly) BWVideoFormat *primaryFormat;
@property (nonatomic) struct { unsigned int x1; unsigned int x2; unsigned int x3; unsigned int x4; } processorConfig;
@property (nonatomic, retain) NSDictionary *providedInferenceAttachedMediaByMode;
@property (nonatomic) struct { int x1; int x2; } stereoPhotoOutputDimensions;
@property (nonatomic) int verticalSensorBinningFactor;

- (int)baseDepthRotationDegrees;
- (void)dealloc;
- (bool)depthDataCorrectionEnabled;
- (id)depthFormat;
- (struct { int x1; int x2; })geometricDistortionCorrectionExpandedImageDimensions;
- (struct CGPoint { double x1; double x2; })geometricDistortionCorrectionInputCropOffset;
- (int)horizontalSensorBinningFactor;
- (bool)intelligentDistortionCorrectionAppliesFinalDimensions;
- (int)intelligentDistortionCorrectionVersion;
- (id)portTypesWithGeometricDistortionCorrectionEnabled;
- (id)portTypesWithIntelligentDistortionCorrectionEnabled;
- (id)primaryFormat;
- (struct { unsigned int x1; unsigned int x2; unsigned int x3; unsigned int x4; })processorConfig;
- (id)providedInferenceAttachedMediaByMode;
- (void)setDepthDataCorrectionEnabled:(bool)arg1 primaryFormat:(id)arg2 depthFormat:(id)arg3 baseDepthRotationDegrees:(int)arg4;
- (void)setGeometricDistortionCorrectionExpandedImageDimensions:(struct { int x1; int x2; })arg1;
- (void)setGeometricDistortionCorrectionInputCropOffset:(struct CGPoint { double x1; double x2; })arg1;
- (void)setHorizontalSensorBinningFactor:(int)arg1;
- (void)setIntelligentDistortionCorrectionAppliesFinalDimensions:(bool)arg1;
- (void)setIntelligentDistortionCorrectionVersion:(int)arg1;
- (void)setPortTypesWithGeometricDistortionCorrectionEnabled:(id)arg1;
- (void)setPortTypesWithIntelligentDistortionCorrectionEnabled:(id)arg1;
- (void)setProcessorConfig:(struct { unsigned int x1; unsigned int x2; unsigned int x3; unsigned int x4; })arg1;
- (void)setProvidedInferenceAttachedMediaByMode:(id)arg1;
- (void)setStereoPhotoOutputDimensions:(struct { int x1; int x2; })arg1;
- (void)setVerticalSensorBinningFactor:(int)arg1;
- (struct { int x1; int x2; })stereoPhotoOutputDimensions;
- (int)verticalSensorBinningFactor;

@end
