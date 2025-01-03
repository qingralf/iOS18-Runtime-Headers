/* Generated by RuntimeBrowser.
 */

@protocol CAFSpeedDisplayObserver <CAFServiceObserver>

@required

- (void)speedDisplayService:(CAFSpeedDisplay *)arg1 didUpdateSpeed:(NSMeasurement *)arg2;
- (void)speedDisplayService:(CAFSpeedDisplay *)arg1 didUpdateSpeedKMH:(NSMeasurement *)arg2;
- (void)speedDisplayService:(CAFSpeedDisplay *)arg1 didUpdateSpeedMPH:(NSMeasurement *)arg2;

@end
