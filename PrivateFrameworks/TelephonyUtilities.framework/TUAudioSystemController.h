/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/TelephonyUtilities.framework/TelephonyUtilities
 */

@interface TUAudioSystemController : TUAudioController {
    NSArray * _currentPickableRoutes;
    <TUAudioSystemControllerDelegate> * _delegate;
    NSObject<OS_dispatch_queue> * _downlinkMutedQueue;
    NSNumber * _isDownlinkMutedCached;
    bool  _isRequestingDownlinkMuted;
    bool  _isRequestingPickableRoutesForPhoneCall;
    bool  _isRequestingPickableRoutesForPlayAndRecordRemoteVoice;
    bool  _isRequestingPickableRoutesForPlayAndRecordVideo;
    bool  _isRequestingPickableRoutesForPlayAndRecordVoice;
    bool  _isRequestingPickableRoutesForTTY;
    bool  _isRequestingPickableRoutesForVoicemail;
    bool  _isRequestingTTY;
    bool  _isRequestingUplinkMuted;
    NSNumber * _isTTYCached;
    NSNumber * _isUplinkMutedCached;
    unsigned long long  _lastDownlinkMutedRequestScheduleTime;
    unsigned long long  _lastPhoneCallCategoryRoutesScheduleTime;
    unsigned long long  _lastPlayAndRecordRemoteVoiceRoutesScheduleTime;
    unsigned long long  _lastPlayAndRecordVideoRoutesScheduleTime;
    unsigned long long  _lastPlayAndRecordVoiceRoutesScheduleTime;
    unsigned long long  _lastTTYPickableRoutesScheduleTime;
    unsigned long long  _lastTTYRequestScheduleTime;
    unsigned long long  _lastUplinkMutedRequestScheduleTime;
    unsigned long long  _lastVoicemailRoutesScheduleTime;
    NSArray * _pickableRoutesForPhoneCall;
    NSArray * _pickableRoutesForPlayAndRecordRemoteVoice;
    NSArray * _pickableRoutesForPlayAndRecordVideo;
    NSArray * _pickableRoutesForPlayAndRecordVoice;
    NSArray * _pickableRoutesForTTY;
    NSArray * _pickableRoutesForVoicemail;
    NSObject<OS_dispatch_queue> * _pickableRoutesQueue;
    NSObject<OS_dispatch_queue> * _ttyQueue;
    NSObject<OS_dispatch_queue> * _uplinkMutedQueue;
}

@property (nonatomic) float activeCategoryVolume;
@property (nonatomic, readonly, copy) NSArray *bestGuessPickableRoutesForAnyCall;
@property (nonatomic) <TUAudioSystemControllerDelegate> *delegate;
@property (getter=isDownlinkMuted, nonatomic) bool downlinkMuted;
@property (nonatomic, readonly) bool otherSessionsRequestNoRingtoneInterruption;
@property (nonatomic, readonly, copy) NSArray *pickableRoutesForTTY;
@property (nonatomic, readonly, copy) NSDictionary *pickedRouteAttribute;
@property (getter=isTTY, nonatomic, readonly) bool tty;
@property (getter=isUplinkMuted, nonatomic) bool uplinkMuted;

+ (id)filteredPickableRoutesFromPickableRoutes:(id)arg1;
+ (bool)isPhoneCallAudioCategory:(id)arg1;
+ (id)sharedAudioSystemController;
+ (id)sharedSystemController;
+ (id)sourceIdentifierForRouteID:(id)arg1;

- (void).cxx_destruct;
- (void)_getPickableRoutesForCategory:(id)arg1 mode:(id)arg2 onlyKnownCombinations:(bool)arg3 completion:(id /* block */)arg4;
- (void)_handleDownlinkMuteDidChangeNotification:(id)arg1;
- (void)_handlePickableRoutesDidChangeNotification:(id)arg1;
- (void)_handleUplinkMuteDidChangeNotification:(id)arg1;
- (void)_handleVolumeDidChangeNotification:(id)arg1;
- (void)_loadCurrentPickableRoutesWithCompletion:(id /* block */)arg1;
- (void)_mediaServicesWereReset:(id)arg1;
- (id)_pickableRoutesForPhoneCallWithForceNewRequest:(bool)arg1;
- (id)_pickableRoutesForPlayAndRecordRemoteVoiceWithForceNewRequest:(bool)arg1;
- (id)_pickableRoutesForPlayAndRecordVideoWithForceNewRequest:(bool)arg1;
- (id)_pickableRoutesForPlayAndRecordVoiceWithForceNewRequest:(bool)arg1;
- (id)_pickableRoutesForTTYWithForceNewRequest:(bool)arg1;
- (id)_pickableRoutesForVoiceMailWithForceNewRequest:(bool)arg1;
- (void)_subscribeToNotificationAttributes;
- (void)_updateCachedState;
- (float)activeCategoryVolume;
- (id)bestGuessPickableRoutesForAnyCall;
- (void)clearUplinkMutedCache;
- (id)currentlyPickedRouteIdForCategory:(id)arg1 andMode:(id)arg2;
- (void)dealloc;
- (id)delegate;
- (void)getPickableRoutesForCategory:(id)arg1 mode:(id)arg2 completion:(id /* block */)arg3;
- (id)init;
- (bool)isDownlinkMuted;
- (bool)isTTY;
- (bool)isUplinkMuted;
- (bool)otherSessionsRequestNoRingtoneInterruption;
- (bool)pickRoute:(id)arg1 error:(id*)arg2;
- (id)pickableRouteWithUniqueIdentifier:(id)arg1;
- (id)pickableRoutesForActiveCall;
- (id)pickableRoutesForCategory:(id)arg1 andMode:(id)arg2;
- (id)pickableRoutesForTTY;
- (id)pickedRouteAttribute;
- (void)setActiveCategoryVolume:(float)arg1;
- (void)setDelegate:(id)arg1;
- (void)setDownlinkMuted:(bool)arg1;
- (void)setUplinkMuted:(bool)arg1;
- (bool)shouldSuppressCallUsingRoute:(id)arg1;
- (void)switchBluetoothAudioFormats;
- (void)triggerEndInterruptionForAudioSessionID:(id)arg1;

@end
