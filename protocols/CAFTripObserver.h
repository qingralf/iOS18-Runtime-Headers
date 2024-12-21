/* Generated by RuntimeBrowser.
 */

@protocol CAFTripObserver <CAFServiceObserver>

@required

- (void)tripService:(CAFTrip *)arg1 didUpdateAverageSpeed:(NSMeasurement *)arg2;
- (void)tripService:(CAFTrip *)arg1 didUpdateDistance:(NSMeasurement *)arg2;
- (void)tripService:(CAFTrip *)arg1 didUpdateDuration:(NSMeasurement *)arg2;
- (void)tripService:(CAFTrip *)arg1 didUpdateEnergy:(NSMeasurement *)arg2;
- (void)tripService:(CAFTrip *)arg1 didUpdateEnergyEfficiency:(NSMeasurement *)arg2;
- (void)tripService:(CAFTrip *)arg1 didUpdateFuelEfficiency:(NSMeasurement *)arg2;
- (void)tripService:(CAFTrip *)arg1 didUpdateName:(NSString *)arg2;
- (void)tripService:(CAFTrip *)arg1 didUpdateShowOdometer:(bool)arg2;
- (void)tripService:(CAFTrip *)arg1 didUpdateSortOrder:(unsigned char)arg2;
- (void)tripService:(CAFTrip *)arg1 didUpdateUserVisibleLabel:(NSString *)arg2;

@end