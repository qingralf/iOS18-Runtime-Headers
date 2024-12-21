/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/HomeKitDaemon.framework/HomeKitDaemon
 */

@interface HMDPrimaryResidentDiscoveryLogEvent : HMMHomeLogEvent <HMMCoreAnalyticsLogging> {
    NSError * _accountMessageError;
    bool  _accountMessageNoPrimaryResolved;
    bool  _accountMessageSent;
    bool  _residentChannelActive;
    bool  _residentChannelActiveNoPrimaryResolved;
    NSError * _residentChannelActiveResolvePrimaryError;
}

@property (nonatomic, readonly, copy) NSString *accessoryIdentifier; /* unknown property attribute: ? */
@property (nonatomic, retain) NSError *accountMessageError;
@property (nonatomic) bool accountMessageNoPrimaryResolved;
@property (nonatomic) bool accountMessageSent;
@property (nonatomic, readonly, copy) NSDictionary *coreAnalyticsEventDictionary;
@property (nonatomic, readonly, copy) NSString *coreAnalyticsEventName;
@property (nonatomic, readonly) unsigned long long coreAnalyticsEventOptions;
@property (readonly, copy) NSString *debugDescription; /* unknown property attribute: ? */
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) NSUUID *homeUUID; /* unknown property attribute: ? */
@property (nonatomic) bool residentChannelActive;
@property (nonatomic) bool residentChannelActiveNoPrimaryResolved;
@property (nonatomic, retain) NSError *residentChannelActiveResolvePrimaryError;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)accountMessageError;
- (bool)accountMessageNoPrimaryResolved;
- (bool)accountMessageSent;
- (id)coreAnalyticsEventDictionary;
- (id)coreAnalyticsEventName;
- (unsigned long long)coreAnalyticsEventOptions;
- (id)initWithHomeUUID:(id)arg1;
- (bool)residentChannelActive;
- (bool)residentChannelActiveNoPrimaryResolved;
- (id)residentChannelActiveResolvePrimaryError;
- (void)setAccountMessageError:(id)arg1;
- (void)setAccountMessageNoPrimaryResolved:(bool)arg1;
- (void)setAccountMessageSent:(bool)arg1;
- (void)setResidentChannelActive:(bool)arg1;
- (void)setResidentChannelActiveNoPrimaryResolved:(bool)arg1;
- (void)setResidentChannelActiveResolvePrimaryError:(id)arg1;

@end