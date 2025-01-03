/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/Sharing.framework/Sharing
 */

@interface SFDeviceOperationWiFiSetup : NSObject {
    CUBonjourBrowser * _bonjourBrowser;
    NSString * _bonjourTestID;
    int  _bonjourTestState;
    NSObject<OS_dispatch_source> * _bonjourTimer;
    id /* block */  _completionHandler;
    NSObject<OS_dispatch_queue> * _dispatchQueue;
    bool  _forceFailJoinWiFi;
    bool  _forceFailScanWiFi;
    bool  _invalidateCalled;
    double  _metricBonjourTestSeconds;
    double  _metricTotalSeconds;
    double  _metricWiFiSetupSeconds;
    NSDictionary * _preferredWiFiConfiguration;
    bool  _reachabilityEnabled;
    CUReachabilityMonitor * _reachabilityMonitor;
    unsigned int  _repairFlags;
    unsigned long long  _retryJoinsCount;
    unsigned long long  _retryScansCount;
    unsigned int  _setupFlags;
    SFSession * _sfSession;
    bool  _skipLocalReachability;
    bool  _skipReachability;
    unsigned long long  _startBonjourTestTicks;
    unsigned long long  _startTicks;
    NSObject<OS_dispatch_source> * _timeoutTimer;
    NSArray * _wiFiRetryMetrics;
}

@property (nonatomic, readonly) int bonjourTestState;
@property (nonatomic, copy) id /* block */ completionHandler;
@property (nonatomic, retain) NSObject<OS_dispatch_queue> *dispatchQueue;
@property (nonatomic, readonly) double metricBonjourTestSeconds;
@property (nonatomic, readonly) double metricTotalSeconds;
@property (nonatomic, readonly) double metricWiFiSetupSeconds;
@property (nonatomic) NSDictionary *preferredWiFiConfiguration;
@property (nonatomic) unsigned int repairFlags;
@property (nonatomic) unsigned long long retryJoinsCount;
@property (nonatomic) unsigned long long retryScansCount;
@property (nonatomic) unsigned int setupFlags;
@property (nonatomic, retain) SFSession *sfSession;
@property (nonatomic) bool skipLocalReachability;
@property (nonatomic) bool skipReachability;
@property (nonatomic) NSArray *wiFiRetryMetrics;

- (void).cxx_destruct;
- (void)_activate;
- (void)_activate2;
- (void)_bonjourTestFoundDevice:(id)arg1;
- (void)_bonjourTestStart;
- (void)_bonjourTestTimeout;
- (void)_complete:(id)arg1;
- (void)_setupResponse:(id)arg1 inResponse:(id)arg2;
- (void)activate;
- (int)bonjourTestState;
- (id /* block */)completionHandler;
- (id)createRequestFromWiFiConfig;
- (id)dispatchQueue;
- (id)init;
- (void)invalidate;
- (double)metricBonjourTestSeconds;
- (double)metricTotalSeconds;
- (double)metricWiFiSetupSeconds;
- (id)preferredWiFiConfiguration;
- (unsigned int)repairFlags;
- (unsigned long long)retryJoinsCount;
- (unsigned long long)retryScansCount;
- (void)setCompletionHandler:(id /* block */)arg1;
- (void)setDispatchQueue:(id)arg1;
- (void)setPreferredWiFiConfiguration:(id)arg1;
- (void)setRepairFlags:(unsigned int)arg1;
- (void)setRetryJoinsCount:(unsigned long long)arg1;
- (void)setRetryScansCount:(unsigned long long)arg1;
- (void)setSetupFlags:(unsigned int)arg1;
- (void)setSfSession:(id)arg1;
- (void)setSkipLocalReachability:(bool)arg1;
- (void)setSkipReachability:(bool)arg1;
- (void)setWiFiRetryMetrics:(id)arg1;
- (unsigned int)setupFlags;
- (id)sfSession;
- (bool)skipLocalReachability;
- (bool)skipReachability;
- (id)wiFiRetryMetrics;

@end
