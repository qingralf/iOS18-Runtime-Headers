/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/FindMyBluetooth.framework/FindMyBluetooth
 */

@interface _TtC15FindMyBluetoothP33_70F3B43C606FCD1D14F1E1CF221D31A750DelegateTrampoline_CBCentralManagerPrivateDelegate : NSObject <CBCentralManagerPrivateDelegate> {
    void centralManager;
    void delegateQueue;
}

- (void).cxx_destruct;
- (void)centralManager:(id)arg1 connectionEventDidOccur:(long long)arg2 forPeripheral:(id)arg3;
- (void)centralManager:(id)arg1 didConnectPeripheral:(id)arg2;
- (void)centralManager:(id)arg1 didDisconnectPeripheral:(id)arg2 error:(id)arg3;
- (void)centralManager:(id)arg1 didDiscoverPeripheral:(id)arg2 advertisementData:(id)arg3 RSSI:(id)arg4;
- (void)centralManager:(id)arg1 didFailToConnectPeripheral:(id)arg2 error:(id)arg3;
- (void)centralManagerDidUpdateState:(id)arg1;
- (id)init;

@end