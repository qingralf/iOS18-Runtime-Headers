/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/HomeKitDaemon.framework/HomeKitDaemon
 */

@interface HMDUserActivityReport : HMFObject {
    NSDate * _changedTimestamp;
    NSDate * _lastUpdateTimestamp;
    unsigned long long  _reason;
    HMDUser * _user;
}

@property (nonatomic, readonly) NSDate *changedTimestamp;
@property (nonatomic, readonly) unsigned long long contributorType;
@property (nonatomic, readonly) NSDate *lastUpdateTimestamp;
@property (nonatomic, readonly) unsigned long long reason;
@property (nonatomic, readonly) HMDUser *user;

- (void).cxx_destruct;
- (id)changedTimestamp;
- (id)changedTimestampFromReason:(unsigned long long)arg1 lastUpdateTimestamp:(id)arg2;
- (unsigned long long)contributorType;
- (id)copyReportWithChangedTimestamp:(id)arg1;
- (id)copyReportWithLastUpdateTimestamp:(id)arg1 reason:(unsigned long long)arg2;
- (id)initFromMessagePayload:(id)arg1 withUser:(id)arg2;
- (id)initWithUser:(id)arg1 withReason:(unsigned long long)arg2 changedTimestamp:(id)arg3 lastUpdateTimestamp:(id)arg4;
- (bool)isEqual:(id)arg1;
- (bool)isExpiredWithCurrentDate:(id)arg1 validInterval:(double)arg2;
- (id)lastUpdateTimestamp;
- (unsigned long long)reason;
- (id)serializedRemoteMessagePayload;
- (id)user;

@end