/* Generated by RuntimeBrowser.
 */

@protocol SAUIElementSubcomponentPreferencesProviding <NSObject>

@required

- (double)customContentAlpha;
- (double)customContentBlurProgress;
- (double)leadingViewAlpha;
- (double)leadingViewBlurProgress;
- (double)leadingViewSquishProgress;
- (double)minimalViewAlpha;
- (double)minimalViewBlurProgress;
- (double)minimalViewSquishProgress;
- (double)snapshotViewAlpha;
- (double)snapshotViewBlurProgress;
- (double)trailingViewAlpha;
- (double)trailingViewBlurProgress;
- (double)trailingViewSquishProgress;

@optional

- (struct CGSize { double x1; double x2; })leadingViewScale;
- (struct CGAffineTransform { double x1; double x2; double x3; double x4; double x5; double x6; })leadingViewTransform;
- (struct CGSize { double x1; double x2; })minimalViewScale;
- (struct CGAffineTransform { double x1; double x2; double x3; double x4; double x5; double x6; })minimalViewTransform;
- (struct CGSize { double x1; double x2; })trailingViewScale;
- (struct CGAffineTransform { double x1; double x2; double x3; double x4; double x5; double x6; })trailingViewTransform;

@end