/* Generated by RuntimeBrowser.
 */

@protocol CAFExteriorConditionsObserver <CAFServiceObserver>

@required

- (void)exteriorConditionsService:(CAFExteriorConditions *)arg1 didUpdateAqi:(NSMeasurement *)arg2;
- (void)exteriorConditionsService:(CAFExteriorConditions *)arg1 didUpdateTemperature:(NSMeasurement *)arg2;

@end
