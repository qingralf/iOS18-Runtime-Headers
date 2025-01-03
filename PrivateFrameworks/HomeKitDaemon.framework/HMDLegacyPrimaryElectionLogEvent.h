/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/HomeKitDaemonLegacy.framework/HomeKitDaemonLegacy
 */

@interface HMDLegacyPrimaryElectionLogEvent : HMMLogEvent <HMMCoreAnalyticsLogging> {
    unsigned long long  _availableResidentCount;
    NSString * _criteria;
    NSString * _reason;
}

@property (nonatomic, readonly, copy) NSString *accessoryIdentifier; /* unknown property attribute: ? */
@property unsigned long long availableResidentCount;
@property (nonatomic, readonly, copy) NSDictionary *coreAnalyticsEventDictionary;
@property (nonatomic, readonly, copy) NSString *coreAnalyticsEventName;
@property (nonatomic, readonly) unsigned long long coreAnalyticsEventOptions;
@property (copy) NSString *criteria;
@property (readonly, copy) NSString *debugDescription; /* unknown property attribute: ? */
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) NSUUID *homeUUID; /* unknown property attribute: ? */
@property (copy) NSString *reason;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (unsigned long long)availableResidentCount;
- (id)coreAnalyticsEventDictionary;
- (id)coreAnalyticsEventName;
- (unsigned long long)coreAnalyticsEventOptions;
- (id)criteria;
- (id)reason;
- (void)setAvailableResidentCount:(unsigned long long)arg1;
- (void)setCriteria:(id)arg1;
- (void)setReason:(id)arg1;

@end
