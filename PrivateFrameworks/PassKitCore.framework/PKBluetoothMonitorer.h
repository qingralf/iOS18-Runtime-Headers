/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/PassKitCore.framework/PassKitCore
 */

@interface PKBluetoothMonitorer : NSObject <CBCentralManagerDelegate> {
    CBCentralManager * _bluetoothManager;
    <PKBluetoothMonitorerDelegate> * _delegate;
    long long  _state;
}

@property (readonly, copy) NSString *debugDescription; /* unknown property attribute: ? */
@property (nonatomic) <PKBluetoothMonitorerDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic) long long state;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)centralManagerDidUpdateState:(id)arg1;
- (id)delegate;
- (id)initWithManagerOptions:(id)arg1;
- (void)setDelegate:(id)arg1;
- (void)setState:(long long)arg1;
- (long long)state;

@end