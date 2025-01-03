/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/SafetyMonitor.framework/SafetyMonitor
 */

@interface SMInitiatorContact : SMContact {
    NSDate * _cacheUpdateBackstopExpiryDate;
    bool  _cloudkitShareZoneCleanedUpSuccessfully;
    NSData * _destinationMapItem;
    NSUUID * _earliestActiveDeviceIdentifier;
    NSDate * _keyReleaseMessageSendDate;
    NSUUID * _latestActiveDeviceIdentifier;
    RTLocation * _locationOfTrigger;
    SMLocation * _lockLocation;
    bool  _lockState;
    double  _maxCacheSize;
    long long  _maxLocationsInTrace;
    double  _maxTimeBetweenCacheUpdates;
    long long  _numCacheUpdates;
    long long  _numberOfHandoffBecomingActive;
    long long  _numberOfHandoffBecomingNonActive;
    long long  _numberOfMessageCancelling;
    long long  _numberOfMessageScheduling;
    long long  _numberOfSuccessfulCacheUpdates;
    long long  _numberOfSuccessfulMessageCancelling;
    long long  _numberOfSuccessfulMessageScheduling;
    SMLocation * _offWristLocation;
    SMLocation * _parkedCarLocation;
    SMCache * _phoneCache;
    NSString * _scheduleSendMessageGUID;
    NSDate * _scheduledSendExpiryDate;
    NSDate * _shouldBeCleanedUpDate;
    SMLocation * _startingLocation;
    NSDate * _timeCacheUploadCompletion;
    double  _timeTilCacheRelease;
    NSDate * _triggerDate;
    SMLocation * _unlockLocation;
    bool  _wasCacheReleased;
    bool  _wasScheduledSendTriggered;
    SMCache * _watchCache;
    NSMutableArray * _workoutEvents;
}

@property (nonatomic, readonly) SMCache *cache;
@property (nonatomic, copy) NSDate *cacheUpdateBackstopExpiryDate;
@property (nonatomic) bool cloudkitShareZoneCleanedUpSuccessfully;
@property (nonatomic, copy) NSData *destinationMapItem;
@property (nonatomic, copy) NSUUID *earliestActiveDeviceIdentifier;
@property (nonatomic, retain) NSDate *keyReleaseMessageSendDate;
@property (nonatomic, copy) NSUUID *latestActiveDeviceIdentifier;
@property (nonatomic, retain) RTLocation *locationOfTrigger;
@property (nonatomic, retain) SMLocation *lockLocation;
@property (nonatomic) bool lockState;
@property (nonatomic) double maxCacheSize;
@property (nonatomic) long long maxLocationsInTrace;
@property (nonatomic) double maxTimeBetweenCacheUpdates;
@property (nonatomic) long long numCacheUpdates;
@property (nonatomic) long long numberOfHandoffBecomingActive;
@property (nonatomic) long long numberOfHandoffBecomingNonActive;
@property (nonatomic) long long numberOfMessageCancelling;
@property (nonatomic) long long numberOfMessageScheduling;
@property (nonatomic) long long numberOfSuccessfulCacheUpdates;
@property (nonatomic) long long numberOfSuccessfulMessageCancelling;
@property (nonatomic) long long numberOfSuccessfulMessageScheduling;
@property (nonatomic, retain) SMLocation *offWristLocation;
@property (nonatomic, retain) SMLocation *parkedCarLocation;
@property (nonatomic, retain) SMCache *phoneCache;
@property (nonatomic, copy) NSString *scheduleSendMessageGUID;
@property (nonatomic, copy) NSDate *scheduledSendExpiryDate;
@property (nonatomic, copy) NSDate *shouldBeCleanedUpDate;
@property (nonatomic, retain) SMLocation *startingLocation;
@property (nonatomic, copy) NSDate *timeCacheUploadCompletion;
@property (nonatomic) double timeTilCacheRelease;
@property (nonatomic, copy) NSDate *triggerDate;
@property (nonatomic, retain) SMLocation *unlockLocation;
@property (nonatomic) bool wasCacheReleased;
@property (nonatomic) bool wasScheduledSendTriggered;
@property (nonatomic, retain) SMCache *watchCache;
@property (nonatomic, copy) NSMutableArray *workoutEvents;

- (void).cxx_destruct;
- (id)cache;
- (id)cacheUpdateBackstopExpiryDate;
- (bool)cloudkitShareZoneCleanedUpSuccessfully;
- (id)description;
- (id)destinationMapItem;
- (id)earliestActiveDeviceIdentifier;
- (id)init;
- (id)initWithIdentifier:(id)arg1 shouldBeCleanedUpDate:(id)arg2 cloudkitShareZoneCleanedUpSuccessfully:(bool)arg3 syncDate:(id)arg4 keyReleaseMessageSendDate:(id)arg5 scheduledSendExpiryDate:(id)arg6 phoneCache:(id)arg7 watchCache:(id)arg8 sessionID:(id)arg9 safetyCacheKey:(id)arg10 allowReadToken:(id)arg11 scheduleSendMessageGUID:(id)arg12 unlockLocation:(id)arg13 lockLocation:(id)arg14 startingLocation:(id)arg15 offWristLocation:(id)arg16 parkedCarLocation:(id)arg17 destinationMapItem:(id)arg18 timeCacheUploadCompletion:(id)arg19 maxCacheSize:(double)arg20 maxLocationsInTrace:(long long)arg21 maxTimeBetweenCacheUpdates:(double)arg22 numCacheUpdates:(long long)arg23 timeTilCacheRelease:(double)arg24 numberOfSuccessfulCacheUpdates:(long long)arg25 numberOfMessageCancelling:(long long)arg26 numberOfSuccessfulMessageCancelling:(long long)arg27 numberOfMessageScheduling:(long long)arg28 numberOfSuccessfulMessageScheduling:(long long)arg29 wasCacheReleased:(bool)arg30 wasScheduledSendTriggered:(bool)arg31 locationOfTrigger:(id)arg32 triggerDate:(id)arg33 lockState:(bool)arg34 cacheUpdateBackstopExpiryDate:(id)arg35 workoutEvents:(id)arg36 numberOfHandoffBecomingActive:(long long)arg37 numberOfHandoffBecomingNonActive:(long long)arg38 earliestActiveDeviceIdentifier:(id)arg39 latestActiveDeviceIdentifier:(id)arg40;
- (id)keyReleaseMessageSendDate;
- (id)latestActiveDeviceIdentifier;
- (id)locationOfTrigger;
- (id)lockLocation;
- (bool)lockState;
- (double)maxCacheSize;
- (long long)maxLocationsInTrace;
- (double)maxTimeBetweenCacheUpdates;
- (long long)numCacheUpdates;
- (long long)numberOfHandoffBecomingActive;
- (long long)numberOfHandoffBecomingNonActive;
- (long long)numberOfMessageCancelling;
- (long long)numberOfMessageScheduling;
- (long long)numberOfSuccessfulCacheUpdates;
- (long long)numberOfSuccessfulMessageCancelling;
- (long long)numberOfSuccessfulMessageScheduling;
- (id)offWristLocation;
- (id)parkedCarLocation;
- (id)phoneCache;
- (id)scheduleSendMessageGUID;
- (id)scheduledSendExpiryDate;
- (void)setCacheUpdateBackstopExpiryDate:(id)arg1;
- (void)setCloudkitShareZoneCleanedUpSuccessfully:(bool)arg1;
- (void)setDestinationMapItem:(id)arg1;
- (void)setEarliestActiveDeviceIdentifier:(id)arg1;
- (void)setKeyReleaseMessageSendDate:(id)arg1;
- (void)setLatestActiveDeviceIdentifier:(id)arg1;
- (void)setLocationOfTrigger:(id)arg1;
- (void)setLockLocation:(id)arg1;
- (void)setLockState:(bool)arg1;
- (void)setMaxCacheSize:(double)arg1;
- (void)setMaxLocationsInTrace:(long long)arg1;
- (void)setMaxTimeBetweenCacheUpdates:(double)arg1;
- (void)setNumCacheUpdates:(long long)arg1;
- (void)setNumberOfHandoffBecomingActive:(long long)arg1;
- (void)setNumberOfHandoffBecomingNonActive:(long long)arg1;
- (void)setNumberOfMessageCancelling:(long long)arg1;
- (void)setNumberOfMessageScheduling:(long long)arg1;
- (void)setNumberOfSuccessfulCacheUpdates:(long long)arg1;
- (void)setNumberOfSuccessfulMessageCancelling:(long long)arg1;
- (void)setNumberOfSuccessfulMessageScheduling:(long long)arg1;
- (void)setOffWristLocation:(id)arg1;
- (void)setParkedCarLocation:(id)arg1;
- (void)setPhoneCache:(id)arg1;
- (void)setScheduleSendMessageGUID:(id)arg1;
- (void)setScheduledSendExpiryDate:(id)arg1;
- (void)setShouldBeCleanedUpDate:(id)arg1;
- (void)setStartingLocation:(id)arg1;
- (void)setTimeCacheUploadCompletion:(id)arg1;
- (void)setTimeTilCacheRelease:(double)arg1;
- (void)setTriggerDate:(id)arg1;
- (void)setUnlockLocation:(id)arg1;
- (void)setWasCacheReleased:(bool)arg1;
- (void)setWasScheduledSendTriggered:(bool)arg1;
- (void)setWatchCache:(id)arg1;
- (void)setWorkoutEvents:(id)arg1;
- (id)shouldBeCleanedUpDate;
- (id)startingLocation;
- (id)timeCacheUploadCompletion;
- (double)timeTilCacheRelease;
- (id)triggerDate;
- (id)unlockLocation;
- (bool)wasCacheReleased;
- (bool)wasScheduledSendTriggered;
- (id)watchCache;
- (id)workoutEvents;

@end
