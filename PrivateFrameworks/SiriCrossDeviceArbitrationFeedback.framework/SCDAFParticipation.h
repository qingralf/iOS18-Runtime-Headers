/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/SiriCrossDeviceArbitrationFeedback.framework/SiriCrossDeviceArbitrationFeedback
 */

@interface SCDAFParticipation : NSObject <NSSecureCoding> {
    SCDAFAdvertisement * _advertisement;
    NSNumber * _alarmState;
    NSArray * _boosts;
    NSString * _cdaId;
    SCDAFDevice * _device;
    NSNumber * _mediaState;
    NSArray * _nearbyDevices;
    double  _rawGoodnessScore;
    NSString * _requestId;
    NSDate * _requestStartDate;
    unsigned long long  _result;
    NSArray * _seenAdvertisements;
    NSNumber * _timeSinceLastWinInMilliseconds;
    NSNumber * _timeSinceTriggerInMilliseconds;
    NSNumber * _timerState;
    NSNumber * _triggerType;
    NSArray * _trumpReasons;
    NSString * _userRequestText;
    NSDate * _voiceTriggerDate;
    SCDAFAdvertisement * _winnerAdvertisement;
}

@property (nonatomic, retain) SCDAFAdvertisement *advertisement;
@property (nonatomic, copy) NSNumber *alarmState;
@property (nonatomic, retain) NSArray *boosts;
@property (nonatomic, copy) NSString *cdaId;
@property (nonatomic, retain) SCDAFDevice *device;
@property (nonatomic, copy) NSNumber *mediaState;
@property (nonatomic, retain) NSArray *nearbyDevices;
@property (nonatomic) double rawGoodnessScore;
@property (nonatomic, copy) NSString *requestId;
@property (nonatomic, retain) NSDate *requestStartDate;
@property (nonatomic) unsigned long long result;
@property (nonatomic, retain) NSArray *seenAdvertisements;
@property (nonatomic, copy) NSNumber *timeSinceLastWinInMilliseconds;
@property (nonatomic, copy) NSNumber *timeSinceTriggerInMilliseconds;
@property (nonatomic, copy) NSNumber *timerState;
@property (nonatomic, copy) NSNumber *triggerType;
@property (nonatomic, retain) NSArray *trumpReasons;
@property (nonatomic, copy) NSString *userRequestText;
@property (nonatomic, retain) NSDate *voiceTriggerDate;
@property (nonatomic, retain) SCDAFAdvertisement *winnerAdvertisement;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)advertisement;
- (id)alarmState;
- (id)boosts;
- (id)cdaId;
- (id)description;
- (id)device;
- (id)dictionaryRepresentation;
- (void)encodeWithCoder:(id)arg1;
- (id)initNearMiss;
- (id)initWithAdvertisement:(id)arg1 alarmState:(id)arg2 boosts:(id)arg3 cdaId:(id)arg4 device:(id)arg5 mediaState:(id)arg6 nearbyDevices:(id)arg7 rawGoodnessScore:(double)arg8 requestId:(id)arg9 requestStartDate:(id)arg10 result:(unsigned long long)arg11 seenAdvertisements:(id)arg12 timeSinceLastTriggerInMilliseconds:(id)arg13 timeSinceLastWinInMilliseconds:(id)arg14 timerState:(id)arg15 triggerType:(id)arg16 trumpReasons:(id)arg17 userRequestText:(id)arg18 voiceTriggerDate:(id)arg19 winnerAdvertisement:(id)arg20;
- (id)initWithAdvertisement:(id)arg1 boosts:(id)arg2 cdaId:(id)arg3 rawGoodnessScore:(double)arg4 requestStartDate:(id)arg5 result:(unsigned long long)arg6 seenAdvertisements:(id)arg7 timeSinceLastTriggerInMilliseconds:(id)arg8 timeSinceLastWinInMilliseconds:(id)arg9 triggerType:(id)arg10 trumpReasons:(id)arg11 voiceTriggerDate:(id)arg12 winnerAdvertisement:(id)arg13;
- (id)initWithCoder:(id)arg1;
- (id)initWithDictionaryRepresentation:(id)arg1;
- (id)mediaState;
- (id)nearbyDevices;
- (double)rawGoodnessScore;
- (id)requestId;
- (id)requestStartDate;
- (unsigned long long)result;
- (id)seenAdvertisements;
- (void)setAdvertisement:(id)arg1;
- (void)setAlarmState:(id)arg1;
- (void)setBoosts:(id)arg1;
- (void)setCdaId:(id)arg1;
- (void)setDevice:(id)arg1;
- (void)setMediaState:(id)arg1;
- (void)setNearbyDevices:(id)arg1;
- (void)setRawGoodnessScore:(double)arg1;
- (void)setRequestId:(id)arg1;
- (void)setRequestStartDate:(id)arg1;
- (void)setResult:(unsigned long long)arg1;
- (void)setSeenAdvertisements:(id)arg1;
- (void)setTimeSinceLastWinInMilliseconds:(id)arg1;
- (void)setTimeSinceTriggerInMilliseconds:(id)arg1;
- (void)setTimerState:(id)arg1;
- (void)setTriggerType:(id)arg1;
- (void)setTrumpReasons:(id)arg1;
- (void)setUserRequestText:(id)arg1;
- (void)setVoiceTriggerDate:(id)arg1;
- (void)setWinnerAdvertisement:(id)arg1;
- (id)timeSinceLastWinInMilliseconds;
- (id)timeSinceTriggerInMilliseconds;
- (id)timerState;
- (id)triggerType;
- (id)trumpReasons;
- (id)userRequestText;
- (id)voiceTriggerDate;
- (id)winnerAdvertisement;

@end
