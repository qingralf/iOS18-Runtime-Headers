/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/CameraUI.framework/CameraUI
 */

@interface CAMMutableStillImageCaptureRequest : CAMStillImageCaptureRequest <CAMMutableCaptureRequestEncodingBehavior, CAMMutableCaptureRequestLibrarySelection, CAMMutableCaptureRequestLocation, CAMMutableCaptureRequestOrigin, CAMMutableCaptureRequestPersistence, CAMMutableCaptureRequestPower>

@property (nonatomic, copy) NSString *EV0IrisIdentifier;
@property (nonatomic, copy) NSURL *EV0LocalVideoDestinationURL;
@property (nonatomic, copy) NSString *EV0PersistenceUUID;
@property (nonatomic, copy) NSString *EV0VideoPersistenceUUID;
@property (nonatomic, retain) NSArray *adjustmentFilters;
@property (nonatomic, retain) CAMAnalyticsCaptureEvent *analyticsEvent;
@property (nonatomic) long long aspectRatioCrop;
@property (nonatomic) unsigned int assertionIdentifier;
@property (nonatomic, copy) NSString *burstIdentifier;
@property (nonatomic) long long captureDevice;
@property (getter=isCaptureMirrored, nonatomic) bool captureMirrored;
@property (nonatomic) long long captureMode;
@property (nonatomic) long long captureOrientation;
@property (nonatomic, copy) NSArray *contactIDsInProximity;
@property (nonatomic) long long ctmCaptureType;
@property (readonly, copy) NSString *debugDescription; /* unknown property attribute: ? */
@property (nonatomic) unsigned long long deferredPersistenceOptions;
@property (nonatomic) <CAMStillImageCaptureRequestDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (nonatomic) struct CGSize { double x1; double x2; } desiredPreviewSize;
@property (nonatomic) bool disablesCameraSwitchingDuringRecording;
@property (nonatomic) long long effectFilterType;
@property (nonatomic) long long flashMode;
@property (readonly) unsigned long long hash;
@property (nonatomic) long long hdrMode;
@property (nonatomic, retain) CLHeading *heading;
@property (nonatomic, copy) NSString *irisIdentifier;
@property (nonatomic) long long irisMode;
@property (nonatomic) long long lightingEffectType;
@property (nonatomic, copy) NSURL *localCTMVideoDestinationURL;
@property (nonatomic, copy) NSURL *localDestinationURL;
@property (nonatomic, copy) NSURL *localVideoDestinationURL;
@property (nonatomic, retain) CLLocation *location;
@property (nonatomic) long long lowLightMode;
@property (nonatomic) unsigned long long maximumBurstLength;
@property (nonatomic) long long maximumPhotoResolution;
@property (nonatomic) long long origin;
@property (nonatomic, retain) NSArray *originalFilters;
@property (nonatomic) long long persistenceOptions;
@property (nonatomic, copy) NSString *persistenceUUID;
@property (nonatomic) long long photoEncodingBehavior;
@property (nonatomic) long long photoQualityPrioritization;
@property (nonatomic) long long pressType;
@property (nonatomic) long long rawFileFormatBehavior;
@property (nonatomic, retain) <CEKCaptureStyle> *semanticStyle;
@property (nonatomic) unsigned short sessionIdentifier;
@property (nonatomic, copy) NSDictionary *sharedLibraryDiagnostics;
@property (nonatomic) long long sharedLibraryMode;
@property (nonatomic) bool shouldDelayRemotePersistence;
@property (nonatomic) bool shouldExtractDiagnosticsFromMetadata;
@property (nonatomic) bool shouldPersistDiagnosticsToSidecar;
@property (nonatomic) long long stereoCaptureStatus;
@property (nonatomic) bool stillDuringVideo;
@property (readonly) Class superclass;
@property (nonatomic) long long temporaryPersistenceOptions;
@property (nonatomic, copy) NSString *textAnalysisIdentifier;
@property (nonatomic, copy) CAMTextRegionResult *textAnalysisRegion;
@property (nonatomic, copy) NSString *timelapseIdentifier;
@property (nonatomic) long long torchMode;
@property (nonatomic) unsigned long long userInitiationTime;
@property (nonatomic) long long videoEncodingBehavior;
@property (nonatomic, copy) NSString *videoPersistenceUUID;
@property (nonatomic) bool wantsAudioForCapture;
@property (nonatomic) bool wantsAutoDualCameraFusion;
@property (nonatomic) bool wantsDepthData;
@property (nonatomic) bool wantsEV0ForHDR;
@property (nonatomic) bool wantsHighResolutionStills;
@property (nonatomic) bool wantsSemanticSceneFilter;
@property (nonatomic) bool wantsSquareCrop;
@property (nonatomic) bool wantsWhiteBalanceLockedDuringVideoRecording;

- (id)analyticsEvent;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (bool)isCaptureMirrored;
- (id)mutableCopyWithZone:(struct _NSZone { }*)arg1;
- (void)setAdjustmentFilters:(id)arg1;
- (void)setAnalyticsEvent:(id)arg1;
- (void)setAspectRatio:(long long)arg1;
- (void)setAspectRatioCrop:(long long)arg1;
- (void)setAssertionIdentifier:(unsigned int)arg1;
- (void)setBurstIdentifier:(id)arg1;
- (void)setCaptureDevice:(long long)arg1;
- (void)setCaptureMirrored:(bool)arg1;
- (void)setCaptureMode:(long long)arg1;
- (void)setCaptureOrientation:(long long)arg1;
- (void)setCapturedFromPhotoBooth:(bool)arg1;
- (void)setContactIDsInProximity:(id)arg1;
- (void)setCtmCaptureType:(long long)arg1;
- (void)setDeferredPersistenceOptions:(unsigned long long)arg1;
- (void)setDelegate:(id)arg1;
- (void)setDesiredPreviewSize:(struct CGSize { double x1; double x2; })arg1;
- (void)setDisablesCameraSwitchingDuringRecording:(bool)arg1;
- (void)setEV0IrisIdentifier:(id)arg1;
- (void)setEV0LocalVideoDestinationURL:(id)arg1;
- (void)setEV0PersistenceUUID:(id)arg1;
- (void)setEV0VideoPersistenceUUID:(id)arg1;
- (void)setEffectFilterType:(long long)arg1;
- (void)setFlashMode:(long long)arg1;
- (void)setHdrMode:(long long)arg1;
- (void)setHeading:(id)arg1;
- (void)setIrisIdentifier:(id)arg1;
- (void)setIrisMode:(long long)arg1;
- (void)setLightingEffectType:(long long)arg1;
- (void)setLocalCTMVideoDestinationURL:(id)arg1;
- (void)setLocalDestinationURL:(id)arg1;
- (void)setLocalVideoDestinationURL:(id)arg1;
- (void)setLocation:(id)arg1;
- (void)setLowLightMode:(long long)arg1;
- (void)setMaximumBurstLength:(unsigned long long)arg1;
- (void)setMaximumPhotoResolution:(long long)arg1;
- (void)setOrigin:(long long)arg1;
- (void)setOriginalFilters:(id)arg1;
- (void)setPersistenceOptions:(long long)arg1;
- (void)setPersistenceUUID:(id)arg1;
- (void)setPhotoEncodingBehavior:(long long)arg1;
- (void)setPhotoQualityPrioritization:(long long)arg1;
- (void)setPressType:(long long)arg1;
- (void)setRawFileFormatBehavior:(long long)arg1;
- (void)setSemanticStyle:(id)arg1;
- (void)setSessionIdentifier:(unsigned short)arg1;
- (void)setSharedLibraryDiagnostics:(id)arg1;
- (void)setSharedLibraryMode:(long long)arg1;
- (void)setShouldDelayRemotePersistence:(bool)arg1;
- (void)setShouldExtractDiagnosticsFromMetadata:(bool)arg1;
- (void)setShouldPersistDiagnosticsToSidecar:(bool)arg1;
- (void)setStereoCaptureStatus:(long long)arg1;
- (void)setStillDuringVideo:(bool)arg1;
- (void)setTemporaryPersistenceOptions:(long long)arg1;
- (void)setTextAnalysisIdentifier:(id)arg1;
- (void)setTextAnalysisRegion:(id)arg1;
- (void)setTimelapseIdentifier:(id)arg1;
- (void)setTorchMode:(long long)arg1;
- (void)setUserInitiationTime:(unsigned long long)arg1;
- (void)setVideoEncodingBehavior:(long long)arg1;
- (void)setVideoPersistenceUUID:(id)arg1;
- (void)setWantsAudioForCapture:(bool)arg1;
- (void)setWantsAutoDualCameraFusion:(bool)arg1;
- (void)setWantsDepthData:(bool)arg1;
- (void)setWantsEV0ForHDR:(bool)arg1;
- (void)setWantsHighResolutionStills:(bool)arg1;
- (void)setWantsSemanticSceneFilter:(bool)arg1;
- (void)setWantsSquareCrop:(bool)arg1;
- (void)setWantsWhiteBalanceLockedDuringVideoRecording:(bool)arg1;

@end
