/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/HomeKitDaemon.framework/HomeKitDaemon
 */

@interface HMDUserActivityHomeAwayReport : HMDUserActivityReport <HMDUserPresence> {
    HMDDevice * _sourceDevice;
    unsigned long long  _state;
}

@property (getter=isAtHome, nonatomic, readonly) bool atHome;
@property (readonly, copy) NSString *debugDescription; /* unknown property attribute: ? */
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (getter=isNotAtHome, nonatomic, readonly) bool notAtHome;
@property (nonatomic, retain) HMDDevice *sourceDevice;
@property (nonatomic, readonly) unsigned long long state;
@property (readonly) Class superclass;
@property (nonatomic, readonly) HMDUser *user;

- (void).cxx_destruct;
- (unsigned long long)contributorType;
- (id)copyReportWithChangedTimestamp:(id)arg1;
- (id)copyReportWithLastUpdateTimestamp:(id)arg1 reason:(unsigned long long)arg2;
- (id)initFromMessagePayload:(id)arg1 withUser:(id)arg2 sourceDevice:(id)arg3;
- (id)initWithUser:(id)arg1 state:(unsigned long long)arg2 fromDevice:(id)arg3 reason:(unsigned long long)arg4;
- (id)initWithUser:(id)arg1 state:(unsigned long long)arg2 fromDevice:(id)arg3 reason:(unsigned long long)arg4 changedTimestamp:(id)arg5 lastUpdatedTimeStamp:(id)arg6;
- (bool)isAtHome;
- (bool)isEqual:(id)arg1;
- (bool)isNotAtHome;
- (id)serializedRemoteMessagePayload;
- (void)setSourceDevice:(id)arg1;
- (id)sourceDevice;
- (unsigned long long)state;

@end
