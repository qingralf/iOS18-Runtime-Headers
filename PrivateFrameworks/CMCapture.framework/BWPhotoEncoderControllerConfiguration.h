/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/CMCapture.framework/CMCapture
 */

@interface BWPhotoEncoderControllerConfiguration : BWStillImageProcessorControllerConfiguration {
    bool  _alwaysAwaitInference;
    NSDictionary * _attachedMediaConfigurationByAttachedMediaKey;
    bool  _cameraSupportsFlash;
    struct { 
        int width; 
        int height; 
    }  _constantColorConfidenceMapDimensions;
    bool  _deferredPhotoProcessorEnabled;
    NSDictionary * _inputColorInfo;
    int  _portraitRenderQuality;
    int  _semanticDevelopmentVersion;
    int  _smartStyleRenderingVersion;
    bool  _smartStyleReversibilityEnabled;
    struct { 
        int width; 
        int height; 
    }  _stereoPhotoOutputDimensions;
    bool  _usesHighEncodingPriority;
    bool  _zeroShutterLagEnabled;
}

@property (nonatomic) bool alwaysAwaitInference;
@property (nonatomic, retain) NSDictionary *attachedMediaConfigurationByAttachedMediaKey;
@property (nonatomic) bool cameraSupportsFlash;
@property (nonatomic) struct { int x1; int x2; } constantColorConfidenceMapDimensions;
@property (nonatomic) bool deferredPhotoProcessorEnabled;
@property (nonatomic, copy) NSDictionary *inputColorInfo;
@property (nonatomic) int portraitRenderQuality;
@property (nonatomic) int semanticDevelopmentVersion;
@property (nonatomic) int smartStyleRenderingVersion;
@property (nonatomic) bool smartStyleReversibilityEnabled;
@property (nonatomic) struct { int x1; int x2; } stereoPhotoOutputDimensions;
@property (nonatomic) bool usesHighEncodingPriority;
@property (nonatomic) bool zeroShutterLagEnabled;

- (bool)alwaysAwaitInference;
- (id)attachedMediaConfigurationByAttachedMediaKey;
- (bool)cameraSupportsFlash;
- (struct { int x1; int x2; })constantColorConfidenceMapDimensions;
- (void)dealloc;
- (bool)deferredPhotoProcessorEnabled;
- (id)inputColorInfo;
- (int)portraitRenderQuality;
- (int)semanticDevelopmentVersion;
- (void)setAlwaysAwaitInference:(bool)arg1;
- (void)setAttachedMediaConfigurationByAttachedMediaKey:(id)arg1;
- (void)setCameraSupportsFlash:(bool)arg1;
- (void)setConstantColorConfidenceMapDimensions:(struct { int x1; int x2; })arg1;
- (void)setDeferredPhotoProcessorEnabled:(bool)arg1;
- (void)setInputColorInfo:(id)arg1;
- (void)setPortraitRenderQuality:(int)arg1;
- (void)setSemanticDevelopmentVersion:(int)arg1;
- (void)setSmartStyleRenderingVersion:(int)arg1;
- (void)setSmartStyleReversibilityEnabled:(bool)arg1;
- (void)setStereoPhotoOutputDimensions:(struct { int x1; int x2; })arg1;
- (void)setUsesHighEncodingPriority:(bool)arg1;
- (void)setZeroShutterLagEnabled:(bool)arg1;
- (int)smartStyleRenderingVersion;
- (bool)smartStyleReversibilityEnabled;
- (struct { int x1; int x2; })stereoPhotoOutputDimensions;
- (bool)usesHighEncodingPriority;
- (bool)zeroShutterLagEnabled;

@end
