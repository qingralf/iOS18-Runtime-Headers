/* Generated by RuntimeBrowser.
 */

@protocol SUUIPerspectiveView <NSObject>

@required

+ (double)maximumPerspectiveHeightForSize:(struct CGSize { double x1; double x2; })arg1;

- (void)setPerspectiveTargetView:(UIView *)arg1;
- (void)setVanishingPoint:(struct CGPoint { double x1; double x2; })arg1;
- (void)updateForChangedDistanceFromVanishingPoint;

@end
