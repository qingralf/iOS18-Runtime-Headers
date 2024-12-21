/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/MediaExperience.framework/MediaExperience
 */

@interface MXSystemController : NSObject {
    bool  _appWantsVolumeChanges;
    NSSet * _appsAllowedToInitiatePlayback;
    NSString * _appsAllowedToInitiatePlaybackClientType;
    NSDate * _appsAllowedToInitiatePlaybackTimestamp;
    NSData * _auditToken;
    NSString * _bundleID;
    bool  _canBeNowPlayingApp;
    int  _clientPID;
    NSString * _displayID;
    bool  _hasEntitlementForPIDInheritance;
    bool  _hasEntitlementForSilentModeNotifications;
    bool  _hasEntitlementToAllowAppsToInitiatePlayback;
    bool  _hasEntitlementToClearCacheForFirstPartyPhoneCalls;
    bool  _hasEntitlementToEnableWombat;
    bool  _hasEntitlementToInitiateRecordingTemporarily;
    bool  _hasEntitlementToSetRelativeVoiceOverVolume;
    bool  _hasEntitlementToSetSilentMode;
    NSDictionary * _notificationsSubscribedTo;
    int  _pidToInheritAppStateFrom;
    NSString * _remoteDeviceID;
    NSSet * _remoteDeviceIDs;
}

@property (nonatomic) bool appWantsVolumeChanges;
@property (retain) NSSet *appsAllowedToInitiatePlayback;
@property (retain) NSString *appsAllowedToInitiatePlaybackClientType;
@property (retain) NSDate *appsAllowedToInitiatePlaybackTimestamp;
@property (retain) NSData *auditToken;
@property (retain) NSString *bundleID;
@property (nonatomic) bool canBeNowPlayingApp;
@property (nonatomic) int clientPID;
@property (retain) NSString *displayID;
@property (nonatomic) bool hasEntitlementForPIDInheritance;
@property (nonatomic) bool hasEntitlementForSilentModeNotifications;
@property (nonatomic) bool hasEntitlementToAllowAppsToInitiatePlayback;
@property (nonatomic) bool hasEntitlementToClearCacheForFirstPartyPhoneCalls;
@property (nonatomic) bool hasEntitlementToEnableWombat;
@property (nonatomic) bool hasEntitlementToInitiateRecordingTemporarily;
@property (nonatomic) bool hasEntitlementToSetRelativeVoiceOverVolume;
@property (nonatomic) bool hasEntitlementToSetSilentMode;
@property (nonatomic, readonly) bool isSomeoneRecording;
@property (retain) NSDictionary *notificationsSubscribedTo;
@property (nonatomic, readonly) bool phoneCallExists;
@property (nonatomic) int pidToInheritAppStateFrom;
@property (retain) NSString *remoteDeviceID;
@property (retain) NSSet *remoteDeviceIDs;
@property (nonatomic, readonly) bool someLongFormVideoClientIsActiveOverAirPlayVideo;
@property (nonatomic, readonly) bool someLongFormVideoClientIsPlaying;
@property (nonatomic, readonly) bool someLongFormVideoClientIsPlayingOverAirPlayVideo;
@property (nonatomic, readonly) bool someSharePlayCapableCallSessionIsActive;

+ (void)dumpInfoOfMXSystemControllers;
+ (bool)getCanBeNowPlayingAppForPID:(int)arg1;
+ (int)getPIDForAnyAppThatWantsVolumeChanges;
+ (int)getPIDToInheritAppStateFromForPID:(int)arg1;
+ (void)initialize;
+ (bool)isAppAllowedToInitiatePlayback:(id)arg1;
+ (bool)isNonSerializedCopyProperty:(id)arg1;
+ (bool)isNonSerializedSetProperty:(id)arg1;
+ (void)mxSystemControllerListAddInstance:(id)arg1 isSidekick:(bool)arg2;
+ (void)mxSystemControllerListBeginIteration;
+ (void)mxSystemControllerListEndIteration;
+ (void)notifyAll:(id)arg1 payload:(id)arg2 dontPostIfSuspended:(bool)arg3;
+ (void)notifyAll:(id)arg1 payload:(id)arg2 dontPostIfSuspended:(bool)arg3 remoteDeviceID:(id)arg4;
+ (void)updateMXSystemControllerList;

- (int)_performVolumeOperation:(unsigned int)arg1 volume:(float)arg2 category:(id)arg3 mode:(id)arg4 routeName:(id)arg5 routeDeviceIdentifier:(id)arg6 routeSubtype:(id)arg7 outVolume:(float*)arg8 outSequenceNumber:(long long*)arg9 outMuted:(bool*)arg10 outCategoryCopy:(id*)arg11 outModeCopy:(id*)arg12;
- (int)_performVolumeOperation:(unsigned int)arg1 volume:(float)arg2 category:(id)arg3 mode:(id)arg4 routeName:(id)arg5 routeDeviceIdentifier:(id)arg6 routeSubtype:(id)arg7 rampUpDuration:(float)arg8 rampDownDuration:(float)arg9 outVolume:(float*)arg10 outSequenceNumber:(long long*)arg11 outMuted:(bool*)arg12 outCategoryCopy:(id*)arg13 outModeCopy:(id*)arg14;
- (int)_performVolumeOperation:(unsigned int)arg1 volume:(float)arg2 category:(id)arg3 mode:(id)arg4 routeName:(id)arg5 routeDeviceIdentifier:(id)arg6 routeSubtype:(id)arg7 rampUpDuration:(float)arg8 rampDownDuration:(float)arg9 outVolume:(float*)arg10 outSequenceNumber:(long long*)arg11 outMuted:(bool*)arg12 outCategoryCopy:(id*)arg13 outModeCopy:(id*)arg14 retainFullMute:(bool)arg15;
- (int)_performVolumeOperation:(unsigned int)arg1 volume:(float)arg2 category:(id)arg3 mode:(id)arg4 routeName:(id)arg5 routeDeviceIdentifier:(id)arg6 routeSubtype:(id)arg7 rampUpwardDuration:(id)arg8 rampDownwardDuration:(id)arg9 outVolume:(float*)arg10 outSequenceNumber:(long long*)arg11 outMuted:(bool*)arg12 outCategoryCopy:(id*)arg13 outModeCopy:(id*)arg14;
- (int)allowAppsToInitiatePlayback:(id)arg1 clientType:(id)arg2 isTemporary:(bool)arg3;
- (bool)appWantsVolumeChanges;
- (void)applyCanBeNowPlayingApp:(const void*)arg1;
- (int)applyPIDToInheritAppStateFrom:(const void*)arg1;
- (id)appsAllowedToInitiatePlayback;
- (id)appsAllowedToInitiatePlaybackClientType;
- (id)appsAllowedToInitiatePlaybackTimestamp;
- (id)auditToken;
- (id)bundleID;
- (bool)canBeNowPlayingApp;
- (int)clearUplinkMutedCache;
- (int)clientPID;
- (int)copyAttributeForKey:(id)arg1 withValueOut:(void*)arg2;
- (int)copyAttributeForKeyInternal:(id)arg1 withValueOut:(void*)arg2;
- (int)copySessionIDsWithMuteValue:(id*)arg1 muteValue:(bool*)arg2;
- (void)dealloc;
- (id)displayID;
- (int)getInputMute:(struct { unsigned int x1[8]; })arg1 outMuteValue:(bool*)arg2;
- (int)getVolumeButtonDelta:(id)arg1 outVolumeDelta:(float*)arg2;
- (int)grantMediaEndowmentWithEnvironmentID:(id)arg1 endowmentPayload:(id)arg2;
- (bool)hasEntitlementForPIDInheritance;
- (bool)hasEntitlementForSilentModeNotifications;
- (bool)hasEntitlementToAllowAppsToInitiatePlayback;
- (bool)hasEntitlementToClearCacheForFirstPartyPhoneCalls;
- (bool)hasEntitlementToEnableWombat;
- (bool)hasEntitlementToInitiateRecordingTemporarily;
- (bool)hasEntitlementToSetRelativeVoiceOverVolume;
- (bool)hasEntitlementToSetSilentMode;
- (id)info;
- (id)initWithPID:(int)arg1;
- (id)initWithPID:(int)arg1 remoteDeviceID:(id)arg2;
- (bool)isAppAllowedToInitiatePlayback:(id)arg1;
- (bool)isSomeoneRecording;
- (id)notificationsSubscribedTo;
- (int)performVolumeOperation:(unsigned int)arg1 volume:(float)arg2 category:(id)arg3 mode:(id)arg4 routeName:(id)arg5 routeDeviceIdentifier:(id)arg6 routeSubtype:(id)arg7 outVolume:(float*)arg8 outSequenceNumber:(long long*)arg9 outMuted:(bool*)arg10 outCategoryCopy:(id*)arg11 outModeCopy:(id*)arg12;
- (int)performVolumeOperation:(unsigned int)arg1 volume:(float)arg2 category:(id)arg3 mode:(id)arg4 routeName:(id)arg5 routeDeviceIdentifier:(id)arg6 routeSubtype:(id)arg7 rampUpDuration:(float)arg8 rampDownDuration:(float)arg9 outVolume:(float*)arg10 outSequenceNumber:(long long*)arg11 outMuted:(bool*)arg12 outCategoryCopy:(id*)arg13 outModeCopy:(id*)arg14;
- (int)performVolumeOperation:(unsigned int)arg1 volume:(float)arg2 category:(id)arg3 mode:(id)arg4 routeName:(id)arg5 routeDeviceIdentifier:(id)arg6 routeSubtype:(id)arg7 rampUpDuration:(float)arg8 rampDownDuration:(float)arg9 outVolume:(float*)arg10 outSequenceNumber:(long long*)arg11 outMuted:(bool*)arg12 outCategoryCopy:(id*)arg13 outModeCopy:(id*)arg14 retainFullMute:(bool)arg15;
- (int)performVolumeOperation:(unsigned int)arg1 volume:(float)arg2 category:(id)arg3 mode:(id)arg4 routeName:(id)arg5 routeDeviceIdentifier:(id)arg6 routeSubtype:(id)arg7 rampUpwardDuration:(id)arg8 rampDownwardDuration:(id)arg9 outVolume:(float*)arg10 outSequenceNumber:(long long*)arg11 outMuted:(bool*)arg12 outCategoryCopy:(id*)arg13 outModeCopy:(id*)arg14;
- (bool)phoneCallExists;
- (int)pidToInheritAppStateFrom;
- (int)remoteDeviceControlIsAllowed:(unsigned int*)arg1;
- (id)remoteDeviceID;
- (id)remoteDeviceIDs;
- (int)revokeMediaEndowmentWithEnvironmentID:(id)arg1;
- (void)setAppWantsVolumeChanges:(bool)arg1;
- (void)setAppsAllowedToInitiatePlayback:(id)arg1;
- (void)setAppsAllowedToInitiatePlaybackClientType:(id)arg1;
- (void)setAppsAllowedToInitiatePlaybackTimestamp:(id)arg1;
- (int)setAttributeForKey:(id)arg1 andValue:(const void*)arg2;
- (int)setAttributeForKeyInternal:(id)arg1 andValue:(const void*)arg2;
- (void)setAuditToken:(id)arg1;
- (void)setBundleID:(id)arg1;
- (void)setCanBeNowPlayingApp:(bool)arg1;
- (void)setClientPID:(int)arg1;
- (void)setDisplayID:(id)arg1;
- (void)setHasEntitlementForPIDInheritance:(bool)arg1;
- (void)setHasEntitlementForSilentModeNotifications:(bool)arg1;
- (void)setHasEntitlementToAllowAppsToInitiatePlayback:(bool)arg1;
- (void)setHasEntitlementToClearCacheForFirstPartyPhoneCalls:(bool)arg1;
- (void)setHasEntitlementToEnableWombat:(bool)arg1;
- (void)setHasEntitlementToInitiateRecordingTemporarily:(bool)arg1;
- (void)setHasEntitlementToSetRelativeVoiceOverVolume:(bool)arg1;
- (void)setHasEntitlementToSetSilentMode:(bool)arg1;
- (int)setInputMute:(struct { unsigned int x1[8]; })arg1 muteValue:(bool)arg2;
- (void)setNotificationsSubscribedTo:(id)arg1;
- (void)setPidToInheritAppStateFrom:(int)arg1;
- (void)setRemoteDeviceID:(id)arg1;
- (void)setRemoteDeviceIDs:(id)arg1;
- (int)setSilentMode:(bool)arg1 untilTime:(id)arg2 reason:(id)arg3 clientType:(unsigned int)arg4;
- (bool)someLongFormVideoClientIsActiveOverAirPlayVideo;
- (bool)someLongFormVideoClientIsPlaying;
- (bool)someLongFormVideoClientIsPlayingOverAirPlayVideo;
- (bool)someSharePlayCapableCallSessionIsActive;
- (int)toggleInputMute;
- (void)volumeCategoryAndMode:(id)arg1 mode:(id)arg2 outCategoryCopy:(id*)arg3 outModeCopy:(id*)arg4;

@end