/* Generated by RuntimeBrowser.
 */

@protocol CAFCarObserver <NSObject>

@required

- (void)carDidUpdateAccessories:(CAFCar *)arg1;

@optional

- (void)carDidUpdate:(CAFCar *)arg1 accessory:(CAFAccessory *)arg2 service:(CAFService *)arg3 characteristic:(CAFCharacteristic *)arg4;
- (void)carDidUpdate:(CAFCar *)arg1 accessory:(CAFAccessory *)arg2 service:(CAFService *)arg3 control:(CAFControl *)arg4;
- (void)carDidUpdate:(CAFCar *)arg1 receivedAllValues:(bool)arg2;

@end