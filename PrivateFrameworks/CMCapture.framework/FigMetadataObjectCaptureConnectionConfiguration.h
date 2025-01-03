/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/CMCapture.framework/CMCapture
 */

@interface FigMetadataObjectCaptureConnectionConfiguration : FigCaptureConnectionConfiguration {
    bool  _attachMetadataToVideoBuffers;
    bool  _attentionDetectionEnabled;
    bool  _emitsEmptyObjectDetectionMetadata;
    float  _faceTrackingFailureFieldOfViewModifier;
    int  _faceTrackingMaxFaces;
    float  _faceTrackingNetworkFailureThresholdMultiplier;
    bool  _faceTrackingPlusEnabled;
    bool  _faceTrackingUsesFaceRecognition;
    NSArray * _metadataIdentifiers;
    struct CGRect { 
        struct CGPoint { 
            double x; 
            double y; 
        } origin; 
        struct CGSize { 
            double width; 
            double height; 
        } size; 
    }  _metadataRectOfInterest;
}

@property (nonatomic) bool attachMetadataToVideoBuffers;
@property (nonatomic) bool attentionDetectionEnabled;
@property (nonatomic) bool emitsEmptyObjectDetectionMetadata;
@property (nonatomic) float faceTrackingFailureFieldOfViewModifier;
@property (nonatomic) int faceTrackingMaxFaces;
@property (nonatomic) float faceTrackingNetworkFailureThresholdMultiplier;
@property (nonatomic) bool faceTrackingPlusEnabled;
@property (nonatomic) bool faceTrackingUsesFaceRecognition;
@property (nonatomic, copy) NSArray *metadataIdentifiers;
@property (nonatomic) struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; } metadataRectOfInterest;

- (bool)attachMetadataToVideoBuffers;
- (bool)attentionDetectionEnabled;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)copyXPCEncoding;
- (void)dealloc;
- (id)description;
- (bool)emitsEmptyObjectDetectionMetadata;
- (float)faceTrackingFailureFieldOfViewModifier;
- (int)faceTrackingMaxFaces;
- (float)faceTrackingNetworkFailureThresholdMultiplier;
- (bool)faceTrackingPlusEnabled;
- (bool)faceTrackingUsesFaceRecognition;
- (id)initWithXPCEncoding:(id)arg1;
- (bool)isEqual:(id)arg1;
- (id)metadataIdentifiers;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })metadataRectOfInterest;
- (void)setAttachMetadataToVideoBuffers:(bool)arg1;
- (void)setAttentionDetectionEnabled:(bool)arg1;
- (void)setEmitsEmptyObjectDetectionMetadata:(bool)arg1;
- (void)setFaceTrackingFailureFieldOfViewModifier:(float)arg1;
- (void)setFaceTrackingMaxFaces:(int)arg1;
- (void)setFaceTrackingNetworkFailureThresholdMultiplier:(float)arg1;
- (void)setFaceTrackingPlusEnabled:(bool)arg1;
- (void)setFaceTrackingUsesFaceRecognition:(bool)arg1;
- (void)setMetadataIdentifiers:(id)arg1;
- (void)setMetadataRectOfInterest:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;

@end
