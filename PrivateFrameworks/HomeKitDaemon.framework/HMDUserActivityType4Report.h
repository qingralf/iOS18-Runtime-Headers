/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/HomeKitDaemon.framework/HomeKitDaemon
 */

@interface HMDUserActivityType4Report : HMDUserActivityReport {
    unsigned long long  _state;
}

@property (nonatomic, readonly) unsigned long long state;

- (unsigned long long)contributorType;
- (id)copyReportWithChangedTimestamp:(id)arg1;
- (id)copyReportWithLastUpdateTimestamp:(id)arg1 reason:(unsigned long long)arg2;
- (id)initFromMessagePayload:(id)arg1 withUser:(id)arg2;
- (id)initWithUser:(id)arg1 state:(unsigned long long)arg2 withReason:(unsigned long long)arg3;
- (id)initWithUser:(id)arg1 state:(unsigned long long)arg2 withReason:(unsigned long long)arg3 changedTimestamp:(id)arg4 lastUpdateTimestamp:(id)arg5;
- (bool)isEqual:(id)arg1;
- (id)serializedRemoteMessagePayload;
- (unsigned long long)state;

@end
