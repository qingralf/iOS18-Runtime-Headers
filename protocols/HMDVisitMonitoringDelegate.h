/* Generated by RuntimeBrowser.
 */

@protocol HMDVisitMonitoringDelegate

@required

- (void)visitEntry:(CLVisit *)arg1;
- (void)visitExit:(CLVisit *)arg1 nextPredictedLocations:(NSArray *)arg2 error:(NSError *)arg3;

@end