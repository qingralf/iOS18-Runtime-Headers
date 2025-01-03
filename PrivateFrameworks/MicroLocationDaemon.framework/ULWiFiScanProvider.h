/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/MicroLocationDaemon.framework/MicroLocationDaemon
 */

@interface ULWiFiScanProvider : NSObject <ULWiFiBridgeDelegate> {
    <ULWiFiScanProviderDelegate> * _delegate;
    ULTimer * _internalTimer;
    bool  _isScanInProgress;
    NSObject<OS_dispatch_queue> * _queue;
    ULTimer * _timer;
    ULWiFiBridge * _wiFiBridge;
}

@property (readonly, copy) NSString *debugDescription; /* unknown property attribute: ? */
@property (nonatomic) <ULWiFiScanProviderDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) ULTimer *internalTimer;
@property (nonatomic) bool isScanInProgress;
@property (nonatomic, retain) NSObject<OS_dispatch_queue> *queue;
@property (readonly) Class superclass;
@property (nonatomic, retain) ULTimer *timer;
@property (nonatomic, retain) ULWiFiBridge *wiFiBridge;

+ (id)_filterGoodAPs:(id)arg1;
+ (bool)_isGoodAp:(id)arg1;
+ (struct WiFiRssi { struct WiFiRssi { int (**x_1_1_1)(); double x_1_1_2; int x_1_1_3; float x_1_1_4; unsigned long long x_1_1_5; int x_1_1_6; int x_1_1_7; unsigned int x_1_1_8[1]; } x1; unsigned int x2; })_protoWiFiRssiFromRawScanSingleAp:(id)arg1;

- (void).cxx_destruct;
- (void)_createAndStartWifiBridge;
- (id)delegate;
- (id)initWithDelegate:(id)arg1 andQueue:(id)arg2;
- (id)internalTimer;
- (bool)isScanInProgress;
- (void)issueNextScanIterrationOrStopScan:(id)arg1;
- (void)onAssociatedStateChange:(id)arg1;
- (void)onInterfaceInvalidation;
- (void)onWifiScanResults:(id)arg1 withError:(id)arg2;
- (id)queue;
- (void)setDelegate:(id)arg1;
- (void)setInternalTimer:(id)arg1;
- (void)setIsScanInProgress:(bool)arg1;
- (void)setQueue:(id)arg1;
- (void)setTimer:(id)arg1;
- (void)setWiFiBridge:(id)arg1;
- (void)startScanTimerWithInterval:(double)arg1;
- (void)startScanWithStrategyType:(id)arg1 initialDelay:(double)arg2;
- (void)stopScan;
- (void)stopScanTimer;
- (id)timer;
- (id)wiFiBridge;

@end
