/* Generated by RuntimeBrowser.
 */

@protocol CAFFanObserver <CAFServiceObserver>

@required

- (void)fanService:(CAFFan *)arg1 didUpdateAutoMode:(bool)arg2;
- (void)fanService:(CAFFan *)arg1 didUpdateFanLevel:(unsigned char)arg2;
- (void)fanService:(CAFFan *)arg1 didUpdateName:(NSString *)arg2;
- (void)fanService:(CAFFan *)arg1 didUpdateOn:(bool)arg2;
- (void)fanService:(CAFFan *)arg1 didUpdateVehicleLayoutKey:(NSString *)arg2;

@end
