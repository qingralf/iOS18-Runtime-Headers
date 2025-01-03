/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/AVFCapture.framework/AVFCapture
 */

@interface AVCaptureMetadataOutputInternal : NSObject {
    bool  appClipCodeObjectTypeAvailable;
    bool  attentionDetectionEnabled;
    AVCaptureDataOutputDelegateCallbackHelper * delegateCallbackHelper;
    bool  emitsEmptyObjectDetectionMetadata;
    float  faceTrackingFailureFieldOfViewModifier;
    long long  faceTrackingMaxFaces;
    bool  faceTrackingMetadataObjectTypesAvailable;
    float  faceTrackingNetworkFailureThresholdMultiplier;
    bool  faceTrackingPlusEnabled;
    bool  faceTrackingUsesFaceRecognition;
    bool  headObjectTypesAvailable;
    bool  humanHandObjectTypeAvailable;
    NSArray * metadataObjectTypes;
    bool  offlineVideoStabilizationMotionMetadataObjectTypesAvailable;
    NSMutableDictionary * previousTwoCMTimesByDetectorType;
    struct CGRect { 
        struct CGPoint { 
            double x; 
            double y; 
        } origin; 
        struct CGSize { 
            double width; 
            double height; 
        } size; 
    }  rectOfInterest;
    bool  sceneClassificationObjectTypeAvailable;
    bool  textRegionObjectTypeAvailable;
    bool  videoPreviewHistogramMetadataObjectTypesAvailable;
    bool  visualIntelligenceObjectTypeAvailable;
    AVWeakReference * weakReference;
}

- (void)dealloc;
- (id)init;

@end
