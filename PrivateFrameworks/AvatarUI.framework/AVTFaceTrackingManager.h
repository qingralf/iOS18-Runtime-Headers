/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/AvatarUI.framework/AvatarUI
 */

@interface AVTFaceTrackingManager : NSObject <AVTViewFaceTrackingDelegate> {
    AVTView * _avatarView;
    <AVTFaceTrackingManagerDelegate> * _delegate;
    FBSDisplayLayoutMonitor * _displayLayoutMonitor;
    AVTUIEnvironment * _environment;
    bool  _faceTrackingManagementPaused;
    unsigned long long  _interruptionType;
    NSString * _localizedDeviceName;
    NSTimer * _lowLightAndSensorOcclusionLockoutTimer;
    NSTimer * _pauseTrackingTimer;
    bool  _shouldRecheckLowLightAndSensorOcclusionState;
    NSTimer * _trackingLostMessageTimer;
    AVTUserInfoView * _userInfoView;
}

@property (nonatomic, readonly) AVTView *avatarView;
@property (readonly, copy) NSString *debugDescription; /* unknown property attribute: ? */
@property (nonatomic) <AVTFaceTrackingManagerDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) FBSDisplayLayoutMonitor *displayLayoutMonitor;
@property (nonatomic, readonly) AVTUIEnvironment *environment;
@property (nonatomic) bool faceTrackingManagementPaused;
@property (readonly) unsigned long long hash;
@property (nonatomic) unsigned long long interruptionType;
@property (nonatomic, readonly, copy) NSString *localizedDeviceName;
@property (nonatomic, retain) NSTimer *lowLightAndSensorOcclusionLockoutTimer;
@property (nonatomic, retain) NSTimer *pauseTrackingTimer;
@property (nonatomic) bool shouldRecheckLowLightAndSensorOcclusionState;
@property (readonly) Class superclass;
@property (nonatomic, retain) NSTimer *trackingLostMessageTimer;
@property (nonatomic, readonly) AVTUserInfoView *userInfoView;

+ (double)desiredUserInfoLabelAlphaForFaceTrackingState:(bool)arg1;

- (void).cxx_destruct;
- (id)avatarView;
- (void)avatarView:(id)arg1 didUpdateWithFaceTrackingStatus:(bool)arg2;
- (void)avatarView:(id)arg1 didUpdateWithLowLightStatus:(bool)arg2;
- (void)avatarView:(id)arg1 didUpdateWithSensorOcclusionStatus:(bool)arg2;
- (void)avatarView:(id)arg1 faceTrackingSessionFailedWithError:(id)arg2;
- (void)avatarViewDidUpdateWithLowLightOrCameraOcclusionStatus;
- (void)avatarViewFaceTrackingSessionInterruptionDidBegin:(id)arg1;
- (void)avatarViewFaceTrackingSessionInterruptionDidEnd:(id)arg1;
- (void)cancelLowLightAndSensorOcclusionTimer;
- (void)dealloc;
- (id)delegate;
- (id)displayLayoutMonitor;
- (id)environment;
- (bool)faceTrackingManagementPaused;
- (id)initWithAvatarView:(id)arg1 environment:(id)arg2;
- (id)initWithAvatarView:(id)arg1 userInfoView:(id)arg2 environment:(id)arg3;
- (unsigned long long)interruptionType;
- (void)invalidateFaceTrackingTimers;
- (void)layoutMonitorDidUpdateDisplayLayout:(id)arg1 withContext:(id)arg2;
- (id)localizedDeviceName;
- (id)lowLightAndSensorOcclusionLockoutTimer;
- (id)pauseTrackingTimer;
- (void)resetForResumingTrackingAnimated:(bool)arg1;
- (void)resetForTrackingFoundAFaceAnimated:(bool)arg1;
- (void)resumeFaceTrackingIfNeededAnimated:(bool)arg1;
- (void)setDelegate:(id)arg1;
- (void)setFaceTrackingManagementPaused:(bool)arg1;
- (void)setInterruptionType:(unsigned long long)arg1;
- (void)setLowLightAndSensorOcclusionLockoutTimer:(id)arg1;
- (void)setPauseTrackingTimer:(id)arg1;
- (void)setShouldRecheckLowLightAndSensorOcclusionState:(bool)arg1;
- (void)setTrackingLostMessageTimer:(id)arg1;
- (void)setupDisplayLayoutMonitor;
- (bool)shouldRecheckLowLightAndSensorOcclusionState;
- (void)startTrackingLostTimers;
- (id)trackingLostMessageTimer;
- (void)updateForPausingTracking;
- (void)updateForPausingTrackingWithLabel:(bool)arg1;
- (void)updateForTrackingLost;
- (void)updateInterruptionTypeIfNeeded:(unsigned long long)arg1;
- (void)updateUserInfoBackdropForCurrentLabel;
- (void)updateUserInfoLabelAlphaForFaceTrackingState:(bool)arg1;
- (void)updateUserInfoLabelAlphaForFaceTrackingState:(bool)arg1 animated:(bool)arg2;
- (id)userInfoStringForCurrentTrackingState;
- (id)userInfoView;

@end
