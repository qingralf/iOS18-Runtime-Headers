/* Generated by RuntimeBrowser.
 */

@protocol SBHWidgetStyleManagerDelegate <NSObject>

@optional

- (void)widgetStyleManager:(SBHWidgetStyleManager *)arg1 needsToAddBackgroundView:(UIView *)arg2;
- (void)widgetStyleManager:(SBHWidgetStyleManager *)arg1 needsToAddFilter:(CAFilter *)arg2;
- (void)widgetStyleManager:(SBHWidgetStyleManager *)arg1 needsToRemoveBackgroundView:(UIView *)arg2;
- (void)widgetStyleManager:(SBHWidgetStyleManager *)arg1 needsToRemoveFilter:(CAFilter *)arg2;
- (void)widgetStyleManagerDidUpdateConfiguration:(SBHWidgetStyleManager *)arg1;

@end
