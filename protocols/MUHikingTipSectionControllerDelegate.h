/* Generated by RuntimeBrowser.
 */

@protocol MUHikingTipSectionControllerDelegate <NSObject>

@required

- (void)didTapHikingTip:(MUHikingTipSectionController *)arg1;
- (UIView *)hikingTipViewForHikingTipSectionController:(MUHikingTipSectionController *)arg1 viewModel:(MUHikingTipViewModel *)arg2;
- (void)requestHikingToolTipRegionIDForLocationCoordinate:(struct CLLocationCoordinate2D { double x1; double x2; })arg1;

@end