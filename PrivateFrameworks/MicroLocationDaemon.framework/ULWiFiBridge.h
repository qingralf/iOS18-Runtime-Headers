/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/MicroLocationDaemon.framework/MicroLocationDaemon
 */

@interface ULWiFiBridge : NSObject {
    <ULWiFiBridgeDelegate> * _delegate;
    ULScanProviderMutableBool * _doSendResultsToClient;
    bool  _isScanInProgress;
    NSObject<OS_dispatch_queue> * _queue;
    CWFInterface * _wifiInterface;
}

@property (nonatomic) <ULWiFiBridgeDelegate> *delegate;
@property (nonatomic, retain) ULScanProviderMutableBool *doSendResultsToClient;
@property (nonatomic) bool isScanInProgress;
@property (nonatomic, readonly) bool isWifiEnabled;
@property (nonatomic, retain) NSObject<OS_dispatch_queue> *queue;
@property (nonatomic, retain) CWFInterface *wifiInterface;

+ (unsigned long long)_ulBandFromCWFBand:(unsigned int)arg1;
+ (unsigned int)_ulBandToCWFBand:(unsigned long long)arg1;
+ (id)_ulRawScanResultsFromCWFScanResults:(id)arg1 receivedDate:(id)arg2;
+ (id)_ulSingleRawScanResultsFromCWFScanResult:(id)arg1 receivedDate:(id)arg2;
+ (id)_wiFiScanParametersFromStrategy:(id)arg1;

- (void).cxx_destruct;
- (void)_onBSSIDChanged:(id)arg1;
- (void)_onInterfaceInvalidation;
- (id)delegate;
- (id)doSendResultsToClient;
- (id)initWithDelegate:(id)arg1 queue:(id)arg2;
- (bool)isScanInProgress;
- (bool)isWifiEnabled;
- (id)queue;
- (void)setDelegate:(id)arg1;
- (void)setDoSendResultsToClient:(id)arg1;
- (void)setIsScanInProgress:(bool)arg1;
- (void)setQueue:(id)arg1;
- (void)setWifiInterface:(id)arg1;
- (void)start;
- (void)startScanWithStrategy:(id)arg1;
- (void)stopScan;
- (id)wifiInterface;

@end