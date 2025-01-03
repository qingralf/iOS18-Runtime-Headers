/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/CoreBluetooth.framework/CoreBluetooth
 */

@interface CBCentralManager : CBManager {
    <CBCentralManagerDelegate> * _delegate;
    struct { 
        unsigned int willRestoreState : 1; 
        unsigned int didDiscoverPeripheral : 1; 
        unsigned int didConnectPeripheral : 1; 
        unsigned int didFailToConnectPeripheral : 1; 
        unsigned int didDisconnectPeripheral : 1; 
        unsigned int didDisconnectPeripheralWithTimestamp : 1; 
        unsigned int didUpdatePeripheralConnectionState : 1; 
        unsigned int didFindPeripheral : 1; 
        unsigned int didLosePeripheral : 1; 
        unsigned int didLoseZone : 1; 
        unsigned int didUpdateConnectionParameters : 1; 
        unsigned int connectionEventDidOccur : 1; 
        unsigned int didSendBytesToPeripheralWithError : 1; 
        unsigned int didReceiveDataFromPeripheral : 1; 
        unsigned int didDiscoverMultiplePeripherals : 1; 
        unsigned int didUpdateANCSAuthorizationForPeripheral : 1; 
        unsigned int canSendDataToPeripheral : 1; 
        unsigned int didFailToStartScanWithError : 1; 
        unsigned int didUpdateControllerBTClockForPeripheral : 1; 
        unsigned int didUpdateControllerBTClockDictForPeripheral : 1; 
        unsigned int didUpdateMTUForPeripheral : 1; 
        unsigned int didUpdateRSSIStatisticsDetectionForPeripheral : 1; 
        unsigned int didUpdateUsageStatisticEvent : 1; 
        unsigned int didUpdatePhyStatisticEvent : 1; 
        unsigned int didChannelSoundingProcedureEvent : 1; 
        unsigned int didUpdateScanParams : 1; 
        unsigned int didUpdateFindMyPeripherals : 1; 
    }  _delegateFlags;
    NSMutableArray * _discoveredPeripherals;
    bool  _isScanning;
    bool  _observingKeyPaths;
    NSMapTable * _peripherals;
    id /* block */  _scanCompletion;
    NSObject<OS_dispatch_source> * _updateTimer;
}

@property (nonatomic) <CBCentralManagerDelegate> *delegate;
@property (retain) NSMutableArray *discoveredPeripherals;
@property (nonatomic) bool isScanning;
@property (nonatomic, readonly, retain) NSMapTable *peripherals;
@property (nonatomic, copy) id /* block */ scanCompletion;
@property (nonatomic, retain) NSObject<OS_dispatch_source> *updateTimer;

+ (bool)supportsFeatures:(unsigned long long)arg1;

- (void).cxx_destruct;
- (void)HandleBluetoothPhyStatisticEventMsg:(id)arg1;
- (void)HandleBluetoothUsageEventMsg:(id)arg1;
- (void)HandleCSProcedureEventMsg:(id)arg1;
- (void)HandleControllerBTClockUpdateMsg:(id)arg1;
- (void)HandleRssiDetectionUpdateMsg:(id)arg1;
- (void)_scanForPeripheralsWithServices:(id)arg1 options:(id)arg2;
- (void)activateWhbCnxForCBPeripheral:(id)arg1 infoDict:(id)arg2;
- (void)addAdvancedMatchingRule:(id)arg1;
- (void)addIRKwithBTAddress:(id)arg1 irk:(id)arg2;
- (void)cancelPeripheralConnection:(id)arg1;
- (void)cancelPeripheralConnection:(id)arg1 force:(bool)arg2;
- (void)cancelPeripheralConnection:(id)arg1 options:(id)arg2;
- (void)clearDuplicateFilterCache:(id)arg1;
- (void)connectPeripheral:(id)arg1 options:(id)arg2;
- (void)connectWhbCBPeripheral:(id)arg1 withCompletion:(id /* block */)arg2;
- (id)createCBPeripheralsFromIDs:(id)arg1;
- (void)createOfflineLEPairing:(unsigned short)arg1;
- (void)createPeripheralFromIdentifier:(id)arg1 completion:(id /* block */)arg2;
- (id)createPeripheralWithAddress:(id)arg1 andIdentifier:(id)arg2;
- (void)csCreateConfig:(id)arg1 options:(id)arg2;
- (void)csProcedureEnable:(id)arg1 options:(id)arg2;
- (void)csReadLocalFAETable;
- (void)csReadLocalSupportedCapabilities;
- (void)csReadRemoteFAETable:(id)arg1;
- (void)csReadRemoteSupportedCapabilities:(id)arg1;
- (void)csRemoveConfig:(id)arg1 options:(id)arg2;
- (void)csSecurityEnable:(id)arg1;
- (void)csSetAfh:(id)arg1;
- (void)csSetDefaultSettings:(id)arg1 options:(id)arg2;
- (void)csSetProcedureParams:(id)arg1 options:(id)arg2;
- (void)csTest:(id)arg1;
- (void)csWriteCachedRemoteSupportedCapabilities:(id)arg1 options:(id)arg2;
- (void)csWriteRemoteFAETable:(id)arg1 options:(id)arg2;
- (id)dataArrayToUUIDArray:(id)arg1;
- (void)dealloc;
- (id)delegate;
- (void)deleteDevice:(id)arg1;
- (id)discoveredPeripherals;
- (void)enableMrc:(id)arg1 options:(id)arg2;
- (void)enablePrivateModeForPeripheral:(id)arg1 forDuration:(unsigned short)arg2;
- (void)enablePrivateModeForSessionWithIdentifier:(id)arg1 forDuration:(unsigned short)arg2;
- (void)forEachPeripheral:(id /* block */)arg1;
- (id)getLPEMData:(id)arg1;
- (unsigned short)getRemainingAdvancedMatchingRule;
- (unsigned short)getTotalSupportedAdvancedMatchingRules;
- (void)handleAdvertisingAddressChanged:(id)arg1;
- (void)handleAncsAuthChanged:(id)arg1;
- (void)handleApplicationActivityEvent:(id)arg1;
- (void)handleApplicationConnectionEventDidOccur:(id)arg1;
- (void)handleConnectionParametersUpdated:(id)arg1;
- (void)handleDidReceiveDataFromPeripheral:(id)arg1;
- (void)handleDidSendBytesToPeripheralwithError:(id)arg1;
- (void)handleFindMyDevicesUpdated:(id)arg1;
- (void)handleMsg:(unsigned short)arg1 args:(id)arg2;
- (void)handlePeerMTUChanged:(id)arg1;
- (void)handlePeripheralCLReady:(id)arg1;
- (void)handlePeripheralConnectionCompleted:(id)arg1;
- (void)handlePeripheralConnectionStateUpdated:(id)arg1;
- (void)handlePeripheralDisconnectionCompleted:(id)arg1;
- (void)handlePeripheralDiscovered:(id)arg1;
- (void)handlePeripheralInvalidated:(id)arg1;
- (void)handlePeripheralTrackingUpdated:(id)arg1;
- (void)handleReadyForUpdates:(id)arg1;
- (void)handleRestoringState:(id)arg1;
- (void)handleScanComplete:(id)arg1;
- (void)handleScanFailedToStartWithError:(id)arg1;
- (void)handleScanParamsUpdated:(id)arg1;
- (void)handleSupportedFeatures:(id)arg1;
- (void)handleUpdateUsageNotificationForPeripheral:(id)arg1;
- (void)handleZoneLost:(id)arg1;
- (id)init;
- (id)initWithDelegate:(id)arg1 queue:(id)arg2;
- (id)initWithDelegate:(id)arg1 queue:(id)arg2 options:(id)arg3;
- (id)isApplicationConnectedToAnyPeripherals:(id)arg1;
- (bool)isMsgAllowedAlways:(unsigned short)arg1;
- (bool)isMsgAllowedWhenOff:(unsigned short)arg1;
- (bool)isScanning;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void*)arg4;
- (void)orphanPeripherals;
- (void)pauseLeConnectionManager;
- (void)pauseScans;
- (id)peerWithInfo:(id)arg1;
- (id)peripheralWithIdentifier:(id)arg1;
- (id)peripheralWithInfo:(id)arg1;
- (id)peripherals;
- (void)powerAssertionNearCompletion;
- (void)randomizeAFHMapForPeripheral:(id)arg1;
- (void)readLocalFastLeConnectionCachedControllerInfoWithcompletion:(id /* block */)arg1;
- (void)registerForConnectionEventsWithOptions:(id)arg1;
- (void)removeAdvancedMatchingRule:(id)arg1;
- (void)removeIRKwithBTAddress:(id)arg1;
- (void)removeMultipleEntriesDuplicateFilter:(id)arg1;
- (void)removeSingleEntryDuplicateFilter:(id)arg1;
- (void)resumeLeConnectionManager;
- (void)resumeScans;
- (id)retrieveAddressForPeripheral:(id)arg1;
- (void)retrieveBTDeviceCacheInfo:(id)arg1 withCompletion:(id /* block */)arg2;
- (void)retrieveConnectedPeripherals;
- (id)retrieveConnectedPeripheralsWithServices:(id)arg1;
- (id)retrieveConnectedPeripheralsWithServices:(id)arg1 allowAll:(bool)arg2;
- (void)retrieveConnectedPeripheralsWithServices:(id)arg1 completion:(id /* block */)arg2;
- (id)retrieveConnectingPeripherals;
- (void)retrieveConnectionHandleWithIdentifier:(id)arg1 completion:(id /* block */)arg2;
- (unsigned short)retrieveMaxConnectionForUsecase:(unsigned int)arg1;
- (id)retrievePairingInfoForPeripheral:(id)arg1;
- (id)retrievePeripheralWithAddress:(id)arg1;
- (void)retrievePeripherals:(id)arg1;
- (void)retrievePeripheralsWithCustomProperties:(id)arg1 completion:(id /* block */)arg2;
- (void)retrievePeripheralsWithFindMyIds:(id)arg1 completion:(id /* block */)arg2;
- (void)retrievePeripheralsWithFindMySerialNumberStrings:(id)arg1 completion:(id /* block */)arg2;
- (void)retrievePeripheralsWithFindMySerialNumbers:(id)arg1 completion:(id /* block */)arg2;
- (id)retrievePeripheralsWithIdentifiers:(id)arg1;
- (void)retrievePeripheralsWithIdentifiers:(id)arg1 completion:(id /* block */)arg2;
- (void)retrievePeripheralsWithTags:(id)arg1 completion:(id /* block */)arg2;
- (id)retrieveState;
- (id)retrieveWhbCBPeripheralWithInfo:(id)arg1;
- (id /* block */)scanCompletion;
- (void)scanForPeripheralsWithServices:(id)arg1 options:(id)arg2;
- (void)scanForPeripheralsWithServices:(id)arg1 options:(id)arg2 completion:(id /* block */)arg3;
- (void)sendData:(id)arg1 toPeripheral:(id)arg2;
- (void)setBluetoothPhyStatisticsNotifications:(id)arg1 options:(id)arg2;
- (void)setBluetoothUsageNotifications:(id)arg1 options:(id)arg2;
- (void)setConnectionEventOptions:(id)arg1;
- (void)setDataLengthChange:(id)arg1 options:(id)arg2;
- (void)setDelegate:(id)arg1;
- (void)setDesiredConnectionLatency:(long long)arg1 forPeripheral:(id)arg2;
- (void)setDesiredConnectionLatency:(long long)arg1 forPeripheral:(id)arg2 completion:(id /* block */)arg3;
- (void)setDiscoveredPeripherals:(id)arg1;
- (void)setEnhancedScanEnable:(id)arg1;
- (void)setEnhancedSetScanParamtersMultiCore:(id)arg1;
- (void)setHostState:(bool)arg1;
- (void)setIsScanning:(bool)arg1;
- (void)setLESetPhy:(id)arg1 options:(id)arg2;
- (void)setLeAFHMap:(id)arg1;
- (void)setLePowerControl:(id)arg1 options:(id)arg2 completion:(id /* block */)arg3;
- (void)setMatchActionRules:(id)arg1;
- (void)setRSSIStatisticsDetection:(id)arg1 options:(id)arg2;
- (void)setScanCompletion:(id /* block */)arg1;
- (void)setUpdateTimer:(id)arg1;
- (id)startConnectionEventCounterForPeripheral:(id)arg1;
- (void)startTrackingPeripheral:(id)arg1 options:(id)arg2;
- (id)stopConnectionEventCounterForPeripheral:(id)arg1;
- (void)stopScan;
- (void)stopTrackingPeripheral:(id)arg1 options:(id)arg2;
- (void)updatePeripheral:(id)arg1 options:(id)arg2;
- (id)updateTimer;
- (void)wipeDuplicateFilterList:(id)arg1;

@end
