/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/SafetyMonitor.framework/SafetyMonitor
 */

@interface SMReceiverSessionStatus : NSObject <NSSecureCoding> {
    long long  _cacheDownloadError;
    NSDate * _cacheExpiryDate;
    NSDate * _cacheRequestDate;
    NSDate * _coarseEstimatedEndDate;
    NSData * _destinationMapItem;
    unsigned long long  _destinationType;
    NSDate * _estimatedEndDate;
    NSUUID * _identifier;
    SMHandle * _initiatorHandle;
    bool  _isSOSTrigger;
    long long  _keyReleaseInfoRequestCount;
    NSDate * _lastKeyReleaseInfoRequestDate;
    NSDate * _lastSessionStartInfoRequestDate;
    NSDate * _lastUpdateDate;
    RTLocation * _locationOfTrigger;
    long long  _lowPowerModeWarningState;
    NSString * _receiverHandle;
    unsigned long long  _sessionEndReason;
    NSUUID * _sessionID;
    NSDate * _sessionStartDate;
    long long  _sessionStartInfoRequestCount;
    long long  _sessionState;
    unsigned long long  _sessionType;
    NSDate * _triggerDate;
    unsigned long long  _triggerType;
    bool  _zoneShareAccepted;
}

@property (nonatomic) long long cacheDownloadError;
@property (nonatomic, copy) NSDate *cacheExpiryDate;
@property (nonatomic, copy) NSDate *cacheRequestDate;
@property (nonatomic, copy) NSDate *coarseEstimatedEndDate;
@property (nonatomic, copy) NSData *destinationMapItem;
@property (nonatomic) unsigned long long destinationType;
@property (nonatomic, copy) NSDate *estimatedEndDate;
@property (nonatomic, readonly, copy) NSUUID *identifier;
@property (nonatomic, copy) SMHandle *initiatorHandle;
@property (nonatomic) bool isSOSTrigger;
@property (nonatomic) long long keyReleaseInfoRequestCount;
@property (nonatomic, copy) NSDate *lastKeyReleaseInfoRequestDate;
@property (nonatomic, copy) NSDate *lastSessionStartInfoRequestDate;
@property (nonatomic, copy) NSDate *lastUpdateDate;
@property (nonatomic, copy) RTLocation *locationOfTrigger;
@property (nonatomic) long long lowPowerModeWarningState;
@property (nonatomic, retain) NSString *receiverHandle;
@property (nonatomic) unsigned long long sessionEndReason;
@property (nonatomic, copy) NSUUID *sessionID;
@property (nonatomic, copy) NSDate *sessionStartDate;
@property (nonatomic) long long sessionStartInfoRequestCount;
@property (nonatomic) long long sessionState;
@property (nonatomic) unsigned long long sessionType;
@property (nonatomic, copy) NSDate *triggerDate;
@property (nonatomic) unsigned long long triggerType;
@property (nonatomic) bool zoneShareAccepted;

+ (id)convertSessionStateToString:(long long)arg1;
+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (long long)cacheDownloadError;
- (id)cacheExpiryDate;
- (id)cacheRequestDate;
- (id)coarseEstimatedEndDate;
- (id)description;
- (id)destinationMapItem;
- (unsigned long long)destinationType;
- (void)encodeWithCoder:(id)arg1;
- (id)estimatedEndDate;
- (id)identifier;
- (id)initWithCoder:(id)arg1;
- (id)initWithIdentifier:(id)arg1 sessionID:(id)arg2 initiatorHandle:(id)arg3;
- (id)initiatorHandle;
- (bool)isSOSTrigger;
- (bool)isSessionOngoing;
- (long long)keyReleaseInfoRequestCount;
- (id)lastKeyReleaseInfoRequestDate;
- (id)lastSessionStartInfoRequestDate;
- (id)lastUpdateDate;
- (id)locationOfTrigger;
- (long long)lowPowerModeWarningState;
- (id)outputToDictionary;
- (id)receiverHandle;
- (unsigned long long)sessionEndReason;
- (id)sessionID;
- (id)sessionStartDate;
- (long long)sessionStartInfoRequestCount;
- (long long)sessionState;
- (unsigned long long)sessionType;
- (void)setCacheDownloadError:(long long)arg1;
- (void)setCacheExpiryDate:(id)arg1;
- (void)setCacheRequestDate:(id)arg1;
- (void)setCoarseEstimatedEndDate:(id)arg1;
- (void)setDestinationMapItem:(id)arg1;
- (void)setDestinationType:(unsigned long long)arg1;
- (void)setEstimatedEndDate:(id)arg1;
- (void)setInitiatorHandle:(id)arg1;
- (void)setIsSOSTrigger:(bool)arg1;
- (void)setKeyReleaseInfoRequestCount:(long long)arg1;
- (void)setLastKeyReleaseInfoRequestDate:(id)arg1;
- (void)setLastSessionStartInfoRequestDate:(id)arg1;
- (void)setLastUpdateDate:(id)arg1;
- (void)setLocationOfTrigger:(id)arg1;
- (void)setLowPowerModeWarningState:(long long)arg1;
- (void)setReceiverHandle:(id)arg1;
- (void)setSessionEndReason:(unsigned long long)arg1;
- (void)setSessionID:(id)arg1;
- (void)setSessionStartDate:(id)arg1;
- (void)setSessionStartInfoRequestCount:(long long)arg1;
- (void)setSessionState:(long long)arg1;
- (void)setSessionType:(unsigned long long)arg1;
- (void)setTriggerDate:(id)arg1;
- (void)setTriggerType:(unsigned long long)arg1;
- (void)setZoneShareAccepted:(bool)arg1;
- (id)triggerDate;
- (unsigned long long)triggerType;
- (bool)zoneShareAccepted;

@end