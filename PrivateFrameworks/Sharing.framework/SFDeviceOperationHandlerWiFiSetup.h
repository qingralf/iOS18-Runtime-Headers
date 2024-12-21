/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/Sharing.framework/Sharing
 */

@interface SFDeviceOperationHandlerWiFiSetup : NSObject {
    CUBonjourAdvertiser * _bonjourAdvertiser;
    unsigned long long  _currentWiFiJoinChannelCount;
    unsigned long long  _currentWiFiJoinNoChannelCount;
    unsigned long long  _currentWiFiScanChannelCount;
    unsigned long long  _currentWiFiScanNoChannelCount;
    NSObject<OS_dispatch_queue> * _dispatchQueue;
    bool  _ensureIP4Configured;
    CUNetInterfaceMonitor * _interfaceMonitor;
    bool  _invalidateCalled;
    NSObject<OS_dispatch_source> * _ip4Timeout;
    bool  _ip4WaitDone;
    bool  _isRetrySetup;
    unsigned long long  _joinStartTicks;
    bool  _reachabilityEnabled;
    CUReachabilityMonitor * _reachabilityMonitor;
    unsigned int  _repairFlags;
    id /* block */  _responseHandler;
    NSDictionary * _scanResult;
    unsigned long long  _scanStartTicks;
    unsigned int  _setupFlags;
    SFSession * _sfSession;
    int  _state;
    bool  _stepDone;
    NSError * _stepError;
    unsigned long long  _wiFiJoinLimit;
    NSMutableArray * _wiFiRetryMetrics;
    unsigned long long  _wiFiScanLimit;
    int  _wifiChannel;
    bool  _wifiDirected;
    id  _wifiEAPConfig;
    id  _wifiEAPTrustExceptions;
    bool  _wifiHomeNetwork;
    NSData * _wifiPSK;
    NSString * _wifiPassword;
    NSString * _wifiSSID;
    bool  _wifiSkipReachbility;
}

@property (nonatomic, retain) NSObject<OS_dispatch_queue> *dispatchQueue;
@property (nonatomic, retain) SFSession *sfSession;

- (void).cxx_destruct;
- (void)_activate;
- (void)_cleanupOldWiFiNetworks;
- (void)_completeError:(id)arg1;
- (void)_handleRequestBonjourTestDone:(id)arg1 responseHandler:(id /* block */)arg2;
- (void)_handleRequestBonjourTestStart:(id)arg1 responseHandler:(id /* block */)arg2;
- (void)_handleWiFiSetupRequest:(id)arg1 responseHandler:(id /* block */)arg2;
- (void)_run;
- (void)_runIP4AvailableStart;
- (void)_runJoinStart:(int)arg1;
- (void)_runReachabilityStart;
- (void)_runScanResults:(id)arg1 error:(id)arg2 channel:(int)arg3;
- (void)_runScanStart:(int)arg1;
- (void)activate;
- (void)addRetryMetric:(id)arg1;
- (id)createWiFiRetryMetricEvent:(id)arg1 duration:(double)arg2 channel:(int)arg3 isScan:(bool)arg4;
- (id)dispatchQueue;
- (id)init;
- (void)invalidate;
- (void)setDispatchQueue:(id)arg1;
- (void)setSfSession:(id)arg1;
- (id)sfSession;

@end