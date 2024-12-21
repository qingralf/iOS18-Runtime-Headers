/* Generated by RuntimeBrowser.
 */

@protocol SBHTodayViewControlling <SBHLegibility, SBIconViewQuerying, SBIconLocationPresenting, SBHVisibleContentPresenter>

@required

- (void)addObserver:(id <SBHTodayViewControllerVisibilityObserver>)arg1;
- (bool)isSpotlightVisible;
- (void)layoutIconListViewWithAnimationType:(long long)arg1 forceRelayout:(bool)arg2;
- (SBIconListView *)listView;
- (void)noteIconViewWillZoomDown:(SBIconView *)arg1;
- (void)removeObserver:(id <SBHTodayViewControllerVisibilityObserver>)arg1;
- (void)scrollIconToVisible:(void *)arg1 atPosition:(void *)arg2 animated:(void *)arg3 completion:(void *)arg4; // needs 4 arg types, found 8: SBIcon *, long long, bool, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, void*
- (UIScrollView *)scrollView;
- (void)setListLayoutProvider:(id <SBIconListLayoutProvider>)arg1 animated:(bool)arg2;
- (void)setSuppressesEditingStateForListViews:(bool)arg1;
- (bool)suppressesEditingStateForListViews;

@optional

- (<BSInvalidatable> *)cancelTouchesOnIconViews;
- (<BSInvalidatable> *)keepIconImageViewControllersStaticForReason:(NSString *)arg1;

@end