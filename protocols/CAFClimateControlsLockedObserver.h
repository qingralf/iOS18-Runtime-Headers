/* Generated by RuntimeBrowser.
 */

@protocol CAFClimateControlsLockedObserver <CAFServiceObserver>

@required

- (void)climateControlsLockedService:(CAFClimateControlsLocked *)arg1 didUpdateLockState:(unsigned char)arg2;
- (void)climateControlsLockedService:(CAFClimateControlsLocked *)arg1 didUpdateName:(NSString *)arg2;
- (void)climateControlsLockedService:(CAFClimateControlsLocked *)arg1 didUpdateVehicleLayoutKey:(NSString *)arg2;

@end
