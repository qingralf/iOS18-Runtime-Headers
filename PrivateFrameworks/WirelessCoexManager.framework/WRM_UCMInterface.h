/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/WirelessCoexManager.framework/WirelessCoexManager
 */

@interface WRM_UCMInterface : NSObject {
    id /* block */  mBtConnectedLinksObserver;
    NSObject<OS_xpc_object> * mConnection;
    int (* mHomeKitBTLoadFunctionPointer;
    bool  mIsAwdlEnabled;
    bool  mIsNanEnabled;
    int (* mNRFrequencyUpdateForMicFuncPtr;
    id /* block */  mNotificationBlock;
    int  mProcessId;
    NSObject<OS_dispatch_queue> * mQueue;
    id /* block */  mULFrequencyUpdatesObserver;
}

- (void).cxx_destruct;
- (bool)checkConnection:(id)arg1;
- (void)dealloc;
- (unsigned int)getInstantLoad;
- (id)getWirelessFrequencyBandUpdatesForMIC:(int (*)arg1;
- (long long)getWirelessRadioManagerReportLoad:(int)arg1 loadDuration:(double)arg2 callback:(int (*)arg3;
- (id)getWirelessULFrequencyBandUpdates:(id /* block */)arg1;
- (void)handleNotification:(id)arg1 :(bool)arg2;
- (id)init;
- (void)processBTConnectedLinksNotification:(id)arg1;
- (void)reConnect;
- (void)registerClient:(int)arg1 queue:(id)arg2;
- (void)sendBtLoad:(id)arg1;
- (void)sendNRFrequencyUpdateForMic:(id)arg1;
- (void)sendULFrequencyUpdate:(id)arg1;
- (void)setAWDLEnabled:(bool)arg1;
- (void)setCriticalAirPlayEnabled:(bool)arg1 estimatedDuration:(unsigned int)arg2 criticalityPercentage:(unsigned short)arg3;
- (void)setNANEnabled:(bool)arg1;
- (unsigned int)startTimer:(double)arg1;
- (unsigned int)stopTimer;
- (void)subscribeBtConnectedLinksNotification:(id /* block */)arg1;
- (void)unregisterClient;

@end
