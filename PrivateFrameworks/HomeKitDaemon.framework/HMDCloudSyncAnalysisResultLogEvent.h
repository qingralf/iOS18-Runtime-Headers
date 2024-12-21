/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/HomeKitDaemonLegacy.framework/HomeKitDaemonLegacy
 */

@interface HMDCloudSyncAnalysisResultLogEvent : HMMLogEvent <HMMCoreAnalyticsLogging> {
    unsigned long long  _bytesFetched;
    unsigned long long  _bytesPushed;
    unsigned long long  _decryptionFailedCount;
    unsigned long long  _fetchCount;
    unsigned long long  _fetchErrorCount;
    unsigned long long  _incomingPushCount;
    bool  _lastDecryptionFailed;
    unsigned long long  _legacyBytesFetched;
    unsigned long long  _legacyBytesPushed;
    unsigned long long  _legacyFetchCount;
    unsigned long long  _legacyFetchErrorCount;
    unsigned long long  _legacyUploadCount;
    unsigned long long  _legacyUploadErrorCount;
    NSDictionary * _legacyUploadErrorCountMap;
    NSDictionary * _legacyUploadReasonCountMap;
    unsigned long long  _uploadCount;
    unsigned long long  _uploadErrorCount;
    NSDictionary * _uploadErrorCountMap;
    bool  _uploadMaximumDelayReached;
}

@property (nonatomic, readonly, copy) NSString *accessoryIdentifier; /* unknown property attribute: ? */
@property unsigned long long bytesFetched;
@property unsigned long long bytesPushed;
@property (nonatomic, readonly, copy) NSDictionary *coreAnalyticsEventDictionary;
@property (nonatomic, readonly, copy) NSString *coreAnalyticsEventName;
@property (nonatomic, readonly) unsigned long long coreAnalyticsEventOptions;
@property (readonly, copy) NSString *debugDescription; /* unknown property attribute: ? */
@property unsigned long long decryptionFailedCount;
@property (readonly, copy) NSString *description;
@property unsigned long long fetchCount;
@property unsigned long long fetchErrorCount;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) NSUUID *homeUUID; /* unknown property attribute: ? */
@property unsigned long long incomingPushCount;
@property bool lastDecryptionFailed;
@property unsigned long long legacyBytesFetched;
@property unsigned long long legacyBytesPushed;
@property unsigned long long legacyFetchCount;
@property unsigned long long legacyFetchErrorCount;
@property unsigned long long legacyUploadCount;
@property unsigned long long legacyUploadErrorCount;
@property (nonatomic, retain) NSDictionary *legacyUploadErrorCountMap;
@property (nonatomic, retain) NSDictionary *legacyUploadReasonCountMap;
@property (readonly) Class superclass;
@property unsigned long long uploadCount;
@property unsigned long long uploadErrorCount;
@property (nonatomic, retain) NSDictionary *uploadErrorCountMap;
@property bool uploadMaximumDelayReached;

- (void).cxx_destruct;
- (unsigned long long)bytesFetched;
- (unsigned long long)bytesPushed;
- (id)coreAnalyticsEventDictionary;
- (id)coreAnalyticsEventName;
- (unsigned long long)coreAnalyticsEventOptions;
- (unsigned long long)decryptionFailedCount;
- (unsigned long long)fetchCount;
- (unsigned long long)fetchErrorCount;
- (unsigned long long)incomingPushCount;
- (bool)lastDecryptionFailed;
- (unsigned long long)legacyBytesFetched;
- (unsigned long long)legacyBytesPushed;
- (unsigned long long)legacyFetchCount;
- (unsigned long long)legacyFetchErrorCount;
- (unsigned long long)legacyUploadCount;
- (unsigned long long)legacyUploadErrorCount;
- (id)legacyUploadErrorCountMap;
- (id)legacyUploadReasonCountMap;
- (void)setBytesFetched:(unsigned long long)arg1;
- (void)setBytesPushed:(unsigned long long)arg1;
- (void)setDecryptionFailedCount:(unsigned long long)arg1;
- (void)setFetchCount:(unsigned long long)arg1;
- (void)setFetchErrorCount:(unsigned long long)arg1;
- (void)setIncomingPushCount:(unsigned long long)arg1;
- (void)setLastDecryptionFailed:(bool)arg1;
- (void)setLegacyBytesFetched:(unsigned long long)arg1;
- (void)setLegacyBytesPushed:(unsigned long long)arg1;
- (void)setLegacyFetchCount:(unsigned long long)arg1;
- (void)setLegacyFetchErrorCount:(unsigned long long)arg1;
- (void)setLegacyUploadCount:(unsigned long long)arg1;
- (void)setLegacyUploadErrorCount:(unsigned long long)arg1;
- (void)setLegacyUploadErrorCountMap:(id)arg1;
- (void)setLegacyUploadReasonCountMap:(id)arg1;
- (void)setUploadCount:(unsigned long long)arg1;
- (void)setUploadErrorCount:(unsigned long long)arg1;
- (void)setUploadErrorCountMap:(id)arg1;
- (void)setUploadMaximumDelayReached:(bool)arg1;
- (unsigned long long)uploadCount;
- (unsigned long long)uploadErrorCount;
- (id)uploadErrorCountMap;
- (bool)uploadMaximumDelayReached;

@end