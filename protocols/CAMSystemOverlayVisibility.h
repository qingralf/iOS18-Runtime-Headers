/* Generated by RuntimeBrowser.
 */

@protocol CAMSystemOverlayVisibility <NSObject>

@required

- (void)addReason:(long long)arg1;
- (double)delayedHideDuration;
- (<CAMSystemOverlayVisibilityDelegate> *)delegate;
- (void)hideImmediately;
- (bool)isVisible;
- (NSString *)name;
- (void)removeReason:(long long)arg1;
- (void)setDelayedHideDuration:(double)arg1;
- (void)setDelegate:(id <CAMSystemOverlayVisibilityDelegate>)arg1;
- (void)setName:(NSString *)arg1;
- (void)showTransiently;

@end