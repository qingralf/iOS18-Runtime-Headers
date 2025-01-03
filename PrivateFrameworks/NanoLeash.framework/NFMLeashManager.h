/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/NanoLeash.framework/NanoLeash
 */

@interface NFMLeashManager : NSObject <CBCentralManagerDelegate, CBPeripheralDelegate, CBScalablePipeManagerDelegate> {
    CBCentralManager * _centralManager;
    long long  _centralPhase;
    NSObject<OS_dispatch_queue> * _centralQueue;
    bool  _connected;
    CBPeripheral * _discoveredPeripheral;
    NSObject<OS_dispatch_queue> * _externalQueue;
    <NFMLLeashBreakDelegate> * _leashDelegate;
    NSObject<OS_dispatch_source> * _leashDispatchSourceTimer;
    NSString * _leashIdentifier;
    long long  _leashMode;
    bool  _needsToScanForPeripheral;
    CBPeripheral * _peripheral;
    CBScalablePipe * _pipe;
    CBScalablePipeManager * _pipeManager;
    id /* block */  _proximityChangeHandler;
    NSString * _serviceUUID;
    bool  _testMode;
}

@property (nonatomic, retain) CBCentralManager *centralManager;
@property (nonatomic) long long centralPhase;
@property (nonatomic) bool connected;
@property (readonly, copy) NSString *debugDescription; /* unknown property attribute: ? */
@property (readonly, copy) NSString *description;
@property (nonatomic, retain) CBPeripheral *discoveredPeripheral;
@property (nonatomic, retain) NSObject<OS_dispatch_queue> *externalQueue;
@property (readonly) unsigned long long hash;
@property (nonatomic) <NFMLLeashBreakDelegate> *leashDelegate;
@property (nonatomic, retain) NSObject<OS_dispatch_source> *leashDispatchSourceTimer;
@property (nonatomic, copy) NSString *leashIdentifier;
@property (nonatomic) long long leashMode;
@property (nonatomic) bool needsToScanForPeripheral;
@property (nonatomic, retain) CBPeripheral *peripheral;
@property (nonatomic, retain) CBScalablePipe *pipe;
@property (nonatomic, retain) CBScalablePipeManager *pipeManager;
@property (nonatomic, copy) NSString *serviceUUID;
@property (readonly) Class superclass;
@property (nonatomic) bool testMode;

- (void).cxx_destruct;
- (void)beginMonitoringLeash;
- (id)centralManager;
- (void)centralManager:(id)arg1 didConnectPeripheral:(id)arg2;
- (void)centralManager:(id)arg1 didDiscoverPeripheral:(id)arg2 advertisementData:(id)arg3 RSSI:(id)arg4;
- (void)centralManager:(id)arg1 didFailToConnectPeripheral:(id)arg2 error:(id)arg3;
- (void)centralManagerDidUpdateState:(id)arg1;
- (long long)centralPhase;
- (void)connect;
- (bool)connected;
- (void)dealloc;
- (id)discoveredPeripheral;
- (id)externalQueue;
- (id)init;
- (id)leashDelegate;
- (id)leashDispatchSourceTimer;
- (id)leashIdentifier;
- (long long)leashMode;
- (void)leashTest;
- (bool)needsToScanForPeripheral;
- (id)peripheral;
- (void)peripheralDidUpdateRSSI:(id)arg1 error:(id)arg2;
- (id)pipe;
- (id)pipeManager;
- (void)scalablePipeManager:(id)arg1 didRegisterEndpoint:(id)arg2 error:(id)arg3;
- (void)scalablePipeManager:(id)arg1 didUnregisterEndpoint:(id)arg2;
- (void)scalablePipeManager:(id)arg1 pipeDidConnect:(id)arg2;
- (void)scalablePipeManager:(id)arg1 pipeDidDisconnect:(id)arg2 error:(id)arg3;
- (void)scalablePipeManagerDidUpdateState:(id)arg1;
- (id)serviceUUID;
- (void)setCentralManager:(id)arg1;
- (void)setCentralPhase:(long long)arg1;
- (void)setConnected:(bool)arg1;
- (void)setDelegate:(id)arg1 queue:(id)arg2;
- (void)setDiscoveredPeripheral:(id)arg1;
- (void)setExternalQueue:(id)arg1;
- (void)setLeashDelegate:(id)arg1;
- (void)setLeashDispatchSourceTimer:(id)arg1;
- (void)setLeashIdentifier:(id)arg1;
- (void)setLeashMode:(long long)arg1;
- (void)setNeedsToScanForPeripheral:(bool)arg1;
- (void)setPeripheral:(id)arg1;
- (void)setPipe:(id)arg1;
- (void)setPipeManager:(id)arg1;
- (void)setProximityChangeHandler:(id /* block */)arg1;
- (void)setServiceUUID:(id)arg1;
- (void)setTestMode:(bool)arg1;
- (void)stopMonitoringLeash;
- (bool)testMode;
- (void)update:(id)arg1;

@end
