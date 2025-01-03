/* Generated by RuntimeBrowser.
 */

@protocol CAMSystemOverlayViewDelegate <NSObject>

@required

- (bool)isControlEnabledAtIndex:(unsigned long long)arg1;
- (NSString *)menuTitleForControlAtIndex:(unsigned long long)arg1;
- (CEKTickCellConfiguration *)overlayView:(CAMSystemOverlayView *)arg1 cellConfigurationForNumber:(NSNumber *)arg2;
- (void)overlayView:(CAMSystemOverlayView *)arg1 menuDidChangePresented:(bool)arg2;
- (void)overlayView:(CAMSystemOverlayView *)arg1 menuDidSelectControlAtIndex:(unsigned long long)arg2;
- (void)overlayView:(CAMSystemOverlayView *)arg1 menuWillChangePresented:(bool)arg2;
- (void)overlayView:(CAMSystemOverlayView *)arg1 performedDismissGesture:(UIGestureRecognizer *)arg2;
- (void)overlayViewSliderDidChangeCurrentValue:(CAMSystemOverlayView *)arg1;
- (void)overlayViewSliderDidEndScrolling:(CAMSystemOverlayView *)arg1;
- (void)overlayViewSliderWillBeginScrolling:(CAMSystemOverlayView *)arg1;
- (NSString *)valueTextForCurrentControl;

@end
