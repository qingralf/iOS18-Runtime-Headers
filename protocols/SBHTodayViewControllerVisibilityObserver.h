/* Generated by RuntimeBrowser.
 */

@protocol SBHTodayViewControllerVisibilityObserver <NSObject>

@optional

- (void)todayViewController:(id <SBHTodayViewControlling>)arg1 contentVisibilityDidChange:(unsigned long long)arg2;
- (void)todayViewController:(id <SBHTodayViewControlling>)arg1 contentVisibilityWillChange:(unsigned long long)arg2;
- (void)todayViewController:(id <SBHTodayViewControlling>)arg1 didChangePresentationProgress:(double)arg2 newPresentationProgress:(double)arg3 fromLeading:(bool)arg4;
- (void)todayViewControllerDidAppear:(id <SBHTodayViewControlling>)arg1;
- (void)todayViewControllerDidDisappear:(id <SBHTodayViewControlling>)arg1;
- (void)todayViewControllerDidEndScrolling:(id <SBHTodayViewControlling>)arg1;
- (void)todayViewControllerWillDisappear:(id <SBHTodayViewControlling>)arg1;

@end
