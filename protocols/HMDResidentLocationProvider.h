/* Generated by RuntimeBrowser.
 */

@protocol HMDResidentLocationProvider

@required

- (CLLocation *)location;
- (HMFFuture *)locationUpdatedFuture;
- (void)requestResidentLocation;

@end