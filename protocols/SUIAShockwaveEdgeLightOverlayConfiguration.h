/* Generated by RuntimeBrowser.
 */

@protocol SUIAShockwaveEdgeLightOverlayConfiguration <SUIAShockwaveConfiguration>

@required

- (double)edgeLightIntensity;
- (struct CGPoint { double x1; double x2; })edgeLightMaskCenter;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })edgeLightMaskFrame;
- (NSArray *)edgeLightMaskGradientColors;
- (NSArray *)edgeLightMaskGradientLocations;
- (double)edgeLightMaskInnerRadius;
- (double)edgeLightMaskOuterRadius;
- (double)edgeLightMaskSourceBlurRadius;
- (double)edgeLightMaskSourceRadius;
- (double)fillLightIntensity;
- (struct CGPoint { double x1; double x2; })fillLightMaskCenter;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })fillLightMaskFrame;
- (NSArray *)fillLightMaskGradientColors;
- (NSArray *)fillLightMaskGradientLocations;
- (double)fillLightMaskInnerRadius;
- (double)fillLightMaskOuterRadius;
- (double)fillLightMaskSourceBlurRadius;
- (double)fillLightMaskSourceRadius;

@end