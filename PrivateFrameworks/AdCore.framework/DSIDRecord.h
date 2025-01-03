/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/AdCore.framework/AdCore
 */

@interface DSIDRecord : NSObject <NSCopying> {
    NSMutableDictionary * _ADIDRecords;
    NSString * _DSID;
    bool  _accountAgeUnknown;
    bool  _accountIsT13;
    bool  _accountIsU13;
    bool  _accountIsU18;
    int  _deviceIDRotationTimestamp;
    bool  _dirty;
    int  _effectiveBirthYear;
    NSString * _iAdIDBeforeReset;
    NSString * _iCloudDSID;
    bool  _isActiveRecord;
    bool  _isDPIDLocal;
    bool  _isDPIDManatee;
    bool  _isPlaceholderAccount;
    long long  _lastJingleAccountStatus;
    int  _lastSegmentServedTimestamp;
    bool  _lastSentPersonalizedAdsStatus;
    int  _lastSentPersonalizedAdsTimestamp;
    int  _lastSentSegmentDataTimestamp;
    int  _nextReconcileTimestamp;
    int  _noiseAppliedVersion;
    bool  _notificationRequired;
    int  _personalizedAdsTimestamp;
    NSString * _segmentData;
    int  _segmentDataTimestamp;
    bool  _sensitiveContentEligible;
}

@property (retain) NSMutableDictionary *ADIDRecords;
@property (nonatomic, retain) NSString *DSID;
@property (nonatomic) bool accountAgeUnknown;
@property (nonatomic) bool accountIsT13;
@property (nonatomic) bool accountIsU13;
@property (nonatomic) bool accountIsU18;
@property (nonatomic) int deviceIDRotationTimestamp;
@property (nonatomic) bool dirty;
@property (nonatomic) int effectiveBirthYear;
@property (nonatomic, retain) NSString *iAdIDBeforeReset;
@property (nonatomic, retain) NSString *iCloudDSID;
@property (nonatomic, readonly) bool isActiveRecord;
@property (nonatomic) bool isDPIDLocal;
@property (nonatomic) bool isDPIDManatee;
@property (nonatomic) bool isPlaceholderAccount;
@property (nonatomic, readonly) bool isRestrictedByApple;
@property (nonatomic) long long lastJingleAccountStatus;
@property (nonatomic) int lastSegmentServedTimestamp;
@property (nonatomic) bool lastSentPersonalizedAdsStatus;
@property (nonatomic) int lastSentPersonalizedAdsTimestamp;
@property (nonatomic) int lastSentSegmentDataTimestamp;
@property (nonatomic) int nextReconcileTimestamp;
@property (nonatomic) int noiseAppliedVersion;
@property (nonatomic) bool notificationRequired;
@property (nonatomic) int personalizedAdsTimestamp;
@property (nonatomic, retain) NSString *segmentData;
@property (nonatomic) int segmentDataTimestamp;
@property (nonatomic) bool sensitiveContentEligible;

// Image: /System/Library/PrivateFrameworks/AdCore.framework/AdCore

- (void).cxx_destruct;
- (id)ADIDRecords;
- (id)DSID;
- (id)_parseItunesFlags;
- (bool)accountAgeUnknown;
- (bool)accountIsT13;
- (bool)accountIsU13;
- (bool)accountIsU18;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (int)deviceIDRotationTimestamp;
- (id)dictionaryRepresentation;
- (bool)dirty;
- (int)effectiveBirthYear;
- (id)encryptedIDForClientType:(long long)arg1;
- (id)iAdIDBeforeReset;
- (bool)iAdIDRecordsDirty;
- (id)iCloudDSID;
- (id)idAccountsDictionaryRepresentation;
- (id)idForClientType:(long long)arg1;
- (id)initWithDSID:(id)arg1 serializedRecord:(id)arg2 version:(int)arg3;
- (bool)isActiveRecord;
- (bool)isDPIDLocal;
- (bool)isDPIDManatee;
- (bool)isPlaceholderAccount;
- (bool)isRestrictedByApple;
- (long long)lastJingleAccountStatus;
- (int)lastSegmentServedTimestamp;
- (bool)lastSentPersonalizedAdsStatus;
- (int)lastSentPersonalizedAdsTimestamp;
- (int)lastSentSegmentDataTimestamp;
- (int)nextReconcileTimestamp;
- (int)noiseAppliedVersion;
- (bool)notificationRequired;
- (int)personalizedAdsTimestamp;
- (id)segmentData;
- (int)segmentDataTimestamp;
- (bool)sensitiveContentEligible;
- (void)setADIDRecords:(id)arg1;
- (void)setAccountAgeUnknown:(bool)arg1;
- (void)setAccountIsT13:(bool)arg1;
- (void)setAccountIsU13:(bool)arg1;
- (void)setAccountIsU18:(bool)arg1;
- (void)setDSID:(id)arg1;
- (void)setDeviceIDRotationTimestamp:(int)arg1;
- (void)setDirty:(bool)arg1;
- (void)setEffectiveBirthYear:(int)arg1;
- (void)setIAdIDBeforeReset:(id)arg1;
- (void)setICloudDSID:(id)arg1;
- (void)setID:(id)arg1 forClientType:(long long)arg2;
- (void)setIsDPIDLocal:(bool)arg1;
- (void)setIsDPIDManatee:(bool)arg1;
- (void)setIsPlaceholderAccount:(bool)arg1;
- (void)setLastJingleAccountStatus:(long long)arg1;
- (void)setLastSegmentServedTimestamp:(int)arg1;
- (void)setLastSentPersonalizedAdsStatus:(bool)arg1;
- (void)setLastSentPersonalizedAdsTimestamp:(int)arg1;
- (void)setLastSentSegmentDataTimestamp:(int)arg1;
- (void)setNextReconcileTimestamp:(int)arg1;
- (void)setNoiseAppliedVersion:(int)arg1;
- (void)setNotificationRequired:(bool)arg1;
- (void)setPersonalizedAdsTimestamp:(int)arg1;
- (void)setSegmentData:(id)arg1;
- (void)setSegmentDataTimestamp:(int)arg1;
- (void)setSensitiveContentEligible:(bool)arg1;
- (bool)shouldSendNotification;

// Image: /System/Library/PrivateFrameworks/AdID.framework/AdID

- (void)ensureiAdIDs;
- (bool)hasIDForClientType:(long long)arg1;
- (bool)isActiveRecord;
- (bool)isEqual:(id)arg1;
- (void)removeIDForClientType:(long long)arg1;
- (bool)resetDeviceNewsPlusSubscriberIDIfNeeded;
- (void)retrieveSegmentDataFromiTunes:(id /* block */)arg1;
- (void)sendPersonalizedAdsStatusToAdPlatforms:(id /* block */)arg1;
- (void)sendSegmentDataToAdPlatforms:(id /* block */)arg1;

@end
