/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/MediaPlaybackCore.framework/MediaPlaybackCore
 */

@interface MediaPlaybackCore.PlaybackStackController : _TtCs12_SwiftObject <MFAudioSessionControlling, MFPlayerConfigurable, MFResettable, MFStackModeConfigurable, MFStateDumpable> {
    void assetQueueController;
    void backgroundTaskController;
    void currentSetQueueIdentifier;
    void errorController;
    void playerController;
    void queueController;
    void reporter;
}

@property (nonatomic, readonly) bool isModeManagedSession;
@property (nonatomic, readonly) bool isModeShared;
@property (nonatomic, readonly) bool isModeSolo;
@property (nonatomic, readonly) NSString *modeDescription;
@property (nonatomic) float relativeVolume;
@property (nonatomic, readonly) long long renderingMode;
@property (nonatomic, readonly) NSDictionary *stateDictionary;

- (void)activateAudioSessionWithCompletion:(id /* block */)arg1;
- (void)deactivateAudioSessionIfIdle:(long long)arg1;
- (bool)isModeManagedSession;
- (bool)isModeShared;
- (bool)isModeSolo;
- (id)modeDescription;
- (float)relativeVolume;
- (long long)renderingMode;
- (void)resetWithReason:(id)arg1;
- (void)setApplicationMusicPlayerTransitionType:(long long)arg1 duration:(double)arg2;
- (void)setInhibitSpeechDetection:(bool)arg1;
- (void)setRelativeVolume:(float)arg1;
- (void)setSpatializationFormat:(long long)arg1;
- (void)setupForManagedSessionWithAudioSession:(id)arg1;
- (void)setupForShared;
- (void)setupForSolo;
- (id)stateDictionary;
- (void)updateAudioSessionWithConfiguration:(id)arg1;

@end
