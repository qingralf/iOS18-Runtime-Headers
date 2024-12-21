/* Generated by RuntimeBrowser.
 */

@protocol MRUNowPlayingControllerManagerObserver <NSObject>

@required

- (long long)discoveryMode;
- (void)nowPlayingControllerManager:(MRUNowPlayingControllerManager *)arg1 didChangeActiveController:(MRUNowPlayingController *)arg2;
- (void)nowPlayingControllerManager:(MRUNowPlayingControllerManager *)arg1 didChangeControllers:(NSArray *)arg2;
- (void)setDiscoveryMode:(long long)arg1;

@end