/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/CameraUI.framework/CameraUI
 */

@interface CAMPostConfigurationSetupCommand : CAMCaptureCommand {
    CAMCaptureGraphConfiguration * _graphConfiguration;
}

@property (nonatomic, readonly) CAMCaptureGraphConfiguration *graphConfiguration;

- (void).cxx_destruct;
- (void)_configure48MPZSL:(id)arg1;
- (void)_configureAudioConfigurationForContext:(id)arg1;
- (void)_configureAudioSessionMixesWithOthersForContext:(id)arg1;
- (void)_configureAudioWindNoiseRemovalEnabledForContext:(id)arg1;
- (void)_configureControlCenterVideoEffectsForContext:(id)arg1;
- (void)_configureLivePhotoPreservationSuspension:(id)arg1;
- (void)_configureSmoothZoomingForContext:(id)arg1;
- (void)_configureSpatialPhotoCaptureEnabled:(id)arg1;
- (void)_configureStereoVideoCaptureEnabled:(id)arg1;
- (void)_configureTrueVideoEnabled:(id)arg1;
- (void)_configureVideoGreenGhostMitigationForContext:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)encodeWithCoder:(id)arg1;
- (void)executeWithContext:(id)arg1;
- (id)graphConfiguration;
- (id)initWithCoder:(id)arg1;
- (id)initWithGraphConfiguration:(id)arg1;

@end
