/* Generated by RuntimeBrowser.
 */

@protocol CAFClosureStateObserver <CAFServiceObserver>

@required

- (void)closureStateService:(CAFClosureState *)arg1 didUpdateLatchState:(bool)arg2;
- (void)closureStateService:(CAFClosureState *)arg1 didUpdateName:(NSString *)arg2;
- (void)closureStateService:(CAFClosureState *)arg1 didUpdateVehicleLayoutKey:(NSString *)arg2;

@end