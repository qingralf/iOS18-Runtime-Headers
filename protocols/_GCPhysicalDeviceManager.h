/* Generated by RuntimeBrowser.
 */

@protocol _GCPhysicalDeviceManager <_GCDeviceManager>

@required

- (void)claimHIDService:(GCHIDServiceInfo *)arg1;
- (<_GCPhysicalDeviceRegistry> *)deviceRegistry;
- (NSNumber *)matchHIDService:(GCHIDServiceInfo *)arg1;
- (void)relinquishHIDService:(GCHIDServiceInfo *)arg1;
- (void)setDeviceRegistry:(id <_GCPhysicalDeviceRegistry>)arg1;

@optional

- (bool)acceptDriverConnection:(id <_GCDeviceDriverConnection>)arg1 forHIDService:(GCHIDServiceInfo *)arg2;
- (bool)acceptFilterConnection:(id <_GCDeviceDriverConnection>)arg1 forHIDService:(GCHIDServiceInfo *)arg2;

@end
