/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/GameController.framework/GameController
 */

@interface GCControllerCBDelegate : NSObject <CBCentralManagerDelegate, CBPeripheralDelegate> {
    CBCentralManager * _centralManager;
    id /* block */  _completionHandler;
    NSMutableArray * _connectedPeripherals;
    NSMutableArray * _foundPeripherals;
}

@property (nonatomic, retain) CBCentralManager *centralManager;
@property (nonatomic, copy) id /* block */ completionHandler;
@property (readonly, copy) NSString *debugDescription; /* unknown property attribute: ? */
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)centralManager;
- (void)centralManager:(id)arg1 didConnectPeripheral:(id)arg2;
- (void)centralManager:(id)arg1 didDisconnectPeripheral:(id)arg2 error:(id)arg3;
- (void)centralManager:(id)arg1 didDiscoverPeripheral:(id)arg2 advertisementData:(id)arg3 RSSI:(id)arg4;
- (void)centralManager:(id)arg1 didFailToConnectPeripheral:(id)arg2 error:(id)arg3;
- (void)centralManager:(id)arg1 didRetrieveConnectedPeripherals:(id)arg2;
- (void)centralManager:(id)arg1 didRetrievePeripherals:(id)arg2;
- (void)centralManagerDidUpdateState:(id)arg1;
- (id /* block */)completionHandler;
- (void)fireCompletionHandler;
- (id)init;
- (void)peripheral:(id)arg1 didDiscoverCharacteristicsForService:(id)arg2 error:(id)arg3;
- (void)peripheral:(id)arg1 didDiscoverDescriptorsForCharacteristic:(id)arg2 error:(id)arg3;
- (void)peripheral:(id)arg1 didDiscoverIncludedServicesForService:(id)arg2 error:(id)arg3;
- (void)peripheral:(id)arg1 didDiscoverServices:(id)arg2;
- (void)peripheral:(id)arg1 didUpdateValueForCharacteristic:(id)arg2 error:(id)arg3;
- (void)peripheral:(id)arg1 didUpdateValueForDescriptor:(id)arg2 error:(id)arg3;
- (void)setCentralManager:(id)arg1;
- (void)setCompletionHandler:(id /* block */)arg1;
- (void)startScan;
- (void)startScanWithTimeout:(double)arg1;
- (void)stopScan;

@end
