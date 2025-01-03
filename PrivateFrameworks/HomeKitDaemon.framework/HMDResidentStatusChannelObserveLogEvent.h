/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/HomeKitDaemon.framework/HomeKitDaemon
 */

@interface HMDResidentStatusChannelObserveLogEvent : HMMHomeLogEvent <HMMCoreAnalyticsLogging> {
    long long  _count;
    bool  _didAddStatuses;
    bool  _didFindPrimary;
    bool  _didLoseStatuses;
    bool  _didPrimaryChange;
    bool  _didUpdateStatuses;
    bool  _isStatusesEmpty;
}

@property (nonatomic, readonly, copy) NSString *accessoryIdentifier; /* unknown property attribute: ? */
@property (nonatomic, readonly, copy) NSDictionary *coreAnalyticsEventDictionary;
@property (nonatomic, readonly, copy) NSString *coreAnalyticsEventName;
@property (nonatomic, readonly) unsigned long long coreAnalyticsEventOptions;
@property (nonatomic, readonly) long long count;
@property (readonly, copy) NSString *debugDescription; /* unknown property attribute: ? */
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) bool didAddStatuses;
@property (nonatomic, readonly) bool didFindPrimary;
@property (nonatomic, readonly) bool didLoseStatuses;
@property (nonatomic, readonly) bool didPrimaryChange;
@property (nonatomic, readonly) bool didUpdateStatuses;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) NSUUID *homeUUID; /* unknown property attribute: ? */
@property (nonatomic, readonly) bool isStatusesEmpty;
@property (readonly) Class superclass;

+ (id)denominatorEvent:(id)arg1;

- (id)coreAnalyticsEventDictionary;
- (id)coreAnalyticsEventName;
- (unsigned long long)coreAnalyticsEventOptions;
- (long long)count;
- (bool)didAddStatuses;
- (bool)didFindPrimary;
- (bool)didLoseStatuses;
- (bool)didPrimaryChange;
- (bool)didUpdateStatuses;
- (id)initWithHomeUUID:(id)arg1 didLoseStatuses:(bool)arg2 didAddStatuses:(bool)arg3 didUpdateStatuses:(bool)arg4 didFindPrimary:(bool)arg5 didPrimaryChange:(bool)arg6 isStatusesEmpty:(bool)arg7;
- (id)initWithHomeUUID:(id)arg1 didLoseStatuses:(bool)arg2 didAddStatuses:(bool)arg3 didUpdateStatuses:(bool)arg4 didFindPrimary:(bool)arg5 didPrimaryChange:(bool)arg6 isStatusesEmpty:(bool)arg7 count:(long long)arg8;
- (bool)isStatusesEmpty;

@end
