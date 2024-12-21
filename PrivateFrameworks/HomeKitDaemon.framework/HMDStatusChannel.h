/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/HomeKitDaemon.framework/HomeKitDaemon
 */

@interface HMDStatusChannel : NSObject <HMDSKPresenceDelegate, HMFLogging, HMFNetMonitorDelegate, HMFTimerDelegate> {
    HMDAppleAccountManager * _appleAccountManager;
    HMFTimer * _assertionLogTimer;
    NSString * _channelIdentifier;
    NSString * _channelName;
    NSString * _channelPrefix;
    NSSet * _currentRecords;
    bool  _initialStatusKitCloudKitImportOccurred;
    HMFTimer * _initialStatusKitCloudKitImportTimer;
    bool  _isConnected;
    NSDate * _lastConnectivityChangeTimestamp;
    NSNumber * _lastObserveDeviceCount;
    NSDate * _lastObserveTimestamp;
    NSDate * _lastPublishTimestamp;
    NSDate * _lastStopPublishTimestamp;
    NSDictionary * _localPayload;
    <HMMLogEventSubmitting> * _logEventSubmitter;
    HMFNetMonitor * _netMonitor;
    HMFTimer * _postRegainNetworkConnectivityTimer;
    <HMDSKPresence> * _presenceChannel;
    <HMDSKPresenceProvider> * _presenceProvider;
    HMFTimer * _publishDebounceTimer;
    HMFTimer * _publishRetryTimer;
    NSObject<OS_dispatch_queue> * _queue;
    bool  _receivedInitialChannelState;
    bool  _started;
    NSHashTable * _statusDelegates;
    HMFTimer * _stopPublishRetryTimer;
    HMFTimer * _subscribeRetryTimer;
    bool  _subscribed;
    <HMDTimerProvider> * _timerProvider;
    HMFTimer * _unsubscribeRetryTimer;
}

@property (nonatomic, readonly) HMDAppleAccountManager *appleAccountManager;
@property (retain) HMFTimer *assertionLogTimer;
@property (nonatomic, readonly, copy) NSString *channelIdentifier;
@property (nonatomic, readonly, copy) NSString *channelName;
@property (nonatomic, readonly, copy) NSString *channelPrefix;
@property (readonly) NSSet *currentRecords;
@property (readonly, copy) NSString *debugDescription; /* unknown property attribute: ? */
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic) bool initialStatusKitCloudKitImportOccurred;
@property (retain) HMFTimer *initialStatusKitCloudKitImportTimer;
@property (nonatomic, readonly) bool isConnected;
@property (retain) NSDate *lastConnectivityChangeTimestamp;
@property (retain) NSNumber *lastObserveDeviceCount;
@property (retain) NSDate *lastObserveTimestamp;
@property (retain) NSDate *lastPublishTimestamp;
@property (retain) NSDate *lastStopPublishTimestamp;
@property (nonatomic, readonly) NSDictionary *localPayload;
@property (nonatomic, readonly) <HMMLogEventSubmitting> *logEventSubmitter;
@property (nonatomic, readonly) HMFNetMonitor *netMonitor;
@property (retain) HMFTimer *postRegainNetworkConnectivityTimer;
@property (nonatomic, readonly) <HMDSKPresence> *presenceChannel;
@property (nonatomic, readonly) <HMDSKPresenceProvider> *presenceProvider;
@property (retain) HMFTimer *publishDebounceTimer;
@property (retain) HMFTimer *publishRetryTimer;
@property (nonatomic) bool receivedInitialChannelState;
@property (nonatomic) bool started;
@property (nonatomic, readonly) NSHashTable *statusDelegates;
@property (retain) HMFTimer *stopPublishRetryTimer;
@property (retain) HMFTimer *subscribeRetryTimer;
@property (nonatomic) bool subscribed;
@property (readonly) Class superclass;
@property (nonatomic, readonly) <HMDTimerProvider> *timerProvider;
@property (retain) HMFTimer *unsubscribeRetryTimer;

+ (id)logCategory;

- (void).cxx_destruct;
- (void)_addDelegate:(id)arg1;
- (void)_assertPresenceWithIsRetry:(bool)arg1;
- (void)_checkForInitialStatusKitCloudKitImportAndSubscribe;
- (id)_createBackoffTimerWithMinimumTimeInterval:(double)arg1 maximumTimeInterval:(double)arg2;
- (id)_createTimerWithTimeout:(double)arg1;
- (void)_deassertPresenceWithIsRetry:(bool)arg1;
- (void)_handleAssertionLogTimerFired;
- (void)_handlePresentDevicesChangedForPresence:(id)arg1;
- (void)_informNetworkChange:(bool)arg1;
- (void)_publishRecordWithPayload:(id)arg1 shouldDebounce:(bool)arg2;
- (id)_recordsFromPresence:(id)arg1;
- (void)_requestPublishShouldDebounce:(bool)arg1;
- (void)_setInvitedUsers:(id)arg1 withCompletion:(id /* block */)arg2;
- (id)_skHandlesFromUserIDs:(id)arg1;
- (id)_skHandlesFromUsers:(id)arg1;
- (void)_startAssertionLogTimer;
- (void)_stopAssertionLogTimer;
- (void)_stopPostRegainNetworkConnectivityTimer;
- (void)_stopPublishing;
- (void)_subscribeToStatusKitWithIsRetry:(bool)arg1;
- (void)_unsubscribeFromStatusKitWithIsRetry:(bool)arg1;
- (id)_urisFromSKHandles:(id)arg1;
- (void)addDelegate:(id)arg1;
- (id)appleAccountManager;
- (id)assertionLogTimer;
- (id)channelIdentifier;
- (id)channelName;
- (id)channelPrefix;
- (id)currentRecords;
- (void)dealloc;
- (id)dumpState;
- (id)initWithChannelPrefix:(id)arg1 identifier:(id)arg2 queue:(id)arg3;
- (id)initWithChannelPrefix:(id)arg1 identifier:(id)arg2 queue:(id)arg3 netMonitor:(id)arg4 timerProvider:(id)arg5 presenceProvider:(id)arg6 logEventSubmitter:(id)arg7 appleAccountManager:(id)arg8;
- (void)initialCloudKitImportReceived:(id)arg1;
- (bool)initialStatusKitCloudKitImportOccurred;
- (id)initialStatusKitCloudKitImportTimer;
- (id)invitedURIs;
- (bool)isConnected;
- (id)lastConnectivityChangeTimestamp;
- (id)lastObserveDeviceCount;
- (id)lastObserveTimestamp;
- (id)lastPublishTimestamp;
- (id)lastStopPublishTimestamp;
- (id)localPayload;
- (id)logEventSubmitter;
- (id)logIdentifier;
- (id)netMonitor;
- (void)networkMonitorIsReachable:(id)arg1;
- (void)networkMonitorIsUnreachable:(id)arg1;
- (id)postRegainNetworkConnectivityTimer;
- (id)presenceChannel;
- (id)presencePayload;
- (id)presenceProvider;
- (void)presentDevicesChangedForPresence:(id)arg1;
- (id)publishDebounceTimer;
- (void)publishRecordWithPayload:(id)arg1 shouldDebounce:(bool)arg2;
- (id)publishRetryTimer;
- (bool)receivedInitialChannelState;
- (void)setAssertionLogTimer:(id)arg1;
- (void)setInitialStatusKitCloudKitImportOccurred:(bool)arg1;
- (void)setInitialStatusKitCloudKitImportTimer:(id)arg1;
- (void)setInvitedUsers:(id)arg1 withCompletion:(id /* block */)arg2;
- (void)setLastConnectivityChangeTimestamp:(id)arg1;
- (void)setLastObserveDeviceCount:(id)arg1;
- (void)setLastObserveTimestamp:(id)arg1;
- (void)setLastPublishTimestamp:(id)arg1;
- (void)setLastStopPublishTimestamp:(id)arg1;
- (void)setPostRegainNetworkConnectivityTimer:(id)arg1;
- (void)setPublishDebounceTimer:(id)arg1;
- (void)setPublishRetryTimer:(id)arg1;
- (void)setReceivedInitialChannelState:(bool)arg1;
- (void)setStarted:(bool)arg1;
- (void)setStopPublishRetryTimer:(id)arg1;
- (void)setSubscribeRetryTimer:(id)arg1;
- (void)setSubscribed:(bool)arg1;
- (void)setUnsubscribeRetryTimer:(id)arg1;
- (void)start;
- (bool)started;
- (id)statusDelegates;
- (void)stop;
- (id)stopPublishRetryTimer;
- (void)stopPublishing;
- (id)subscribeRetryTimer;
- (bool)subscribed;
- (void)timerDidFire:(id)arg1;
- (id)timerProvider;
- (id)unsubscribeRetryTimer;

@end