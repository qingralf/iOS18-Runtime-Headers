/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/TVMLKit.framework/TVMLKit
 */

@interface TVMLUtilities : NSObject

+ (id)TVKitBundle;
+ (id)TVMLKitBundle;
+ (id)TVUIKitBundle;
+ (id)_bgImageElementForProductTemplate:(id)arg1;
+ (bool)_cornerRadiiFromElement:(id)arg1 cornerRadii:(struct TVCornerRadii { double x1; double x2; double x3; double x4; }*)arg2 circle:(bool*)arg3;
+ (bool)_cornerRadiiFromImageLayout:(id)arg1 cornerRadii:(struct TVCornerRadii { double x1; double x2; double x3; double x4; }*)arg2 circle:(bool*)arg3;
+ (bool)_cornerRadiiFromImgTreatmentValue:(id)arg1 width:(double)arg2 cornerRadii:(struct TVCornerRadii { double x1; double x2; double x3; double x4; }*)arg3 circle:(bool*)arg4;
+ (bool)_cornerRadiiWithBorderRadius:(id)arg1 cornerRadii:(struct TVCornerRadii { double x1; double x2; double x3; double x4; }*)arg2 imageWidth:(double)arg3 imageTreatmentValue:(id)arg4 circle:(bool*)arg5;
+ (id)_defaultPlaceholderImageForUserInterfaceStyle:(long long)arg1;
+ (id)_defaultPlaceholderImageForUserInterfaceStyle:(long long)arg1 withCornerRadii:(struct TVCornerRadii { double x1; double x2; double x3; double x4; })arg2 andSize:(struct CGSize { double x1; double x2; })arg3;
+ (double)_headerFadeForShowcaseFactor:(double)arg1;
+ (long long)_interfaceStyleForElement:(id)arg1;
+ (id)_mobileGestaltStringForKey:(struct __CFString { }*)arg1;
+ (long long)_overrideInterfaceStyleForElement:(id)arg1;
+ (id)_placeholderImageForValue:(id)arg1 userInterfaceStyle:(long long)arg2;
+ (id)_placeholderImageForValue:(id)arg1 userInterfaceStyle:(long long)arg2 withCornerRadii:(struct TVCornerRadii { double x1; double x2; double x3; double x4; })arg3 andScaledSize:(struct CGSize { double x1; double x2; })arg4;
+ (id)_placeholderImageForViewElement:(id)arg1;
+ (id)_placeholderImageForViewElement:(id)arg1 imageLayout:(id)arg2;
+ (id)_placeholderImageForViewElement:(id)arg1 withCornerRadii:(struct TVCornerRadii { double x1; double x2; double x3; double x4; })arg2 andScaledSize:(struct CGSize { double x1; double x2; })arg3;
+ (id)_placeholderImageForViewElement:(id)arg1 withImageLayout:(id)arg2 cornerRadii:(struct TVCornerRadii { double x1; double x2; double x3; double x4; })arg3 andScaledSize:(struct CGSize { double x1; double x2; })arg4;
+ (bool)canHandleDecodingOnRenderThread;
+ (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })centerRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1 inRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg2;
+ (long long)contentModeForPosition:(long long)arg1 defaultMode:(long long)arg2;
+ (bool)cornerRadiiFromElement:(id)arg1 cornerRadii:(struct TVCornerRadii { double x1; double x2; double x3; double x4; }*)arg2 circle:(bool*)arg3;
+ (void)disassociateIKViewElementsRecursivelyFromView:(id)arg1;
+ (double)focusedSizeIncreaseForSize:(struct CGSize { double x1; double x2; })arg1 upscaleFactor:(double)arg2;
+ (double)focusedSizeIncreaseForSize:(struct CGSize { double x1; double x2; })arg1 upscaleFactor:(double)arg2 useInSearchPartial:(bool)arg3;
+ (id)fontFromStyle:(id)arg1;
+ (id)fontFromTextStyle:(id)arg1 fontWeight:(id)arg2 fontSize:(double)arg3 symbolicTraits:(unsigned int)arg4;
+ (void)getValuesFromTransform:(struct CGAffineTransform { double x1; double x2; double x3; double x4; double x5; double x6; })arg1 translation:(struct CGPoint { double x1; double x2; }*)arg2 rotation:(struct CGPoint { double x1; double x2; }*)arg3;
+ (id)imageWithRadialGradientOverlayFromImage:(id)arg1;
+ (id)indexPathForFirstItemAttributeValue:(id)arg1;
+ (long long)interfaceStyleForTemplateElement:(id)arg1;
+ (bool)isAXLargeEnabled:(id)arg1;
+ (bool)isAXSmallEnabled:(id)arg1;
+ (bool)isFlowcaseAtTopOfStackFromElement:(id)arg1;
+ (bool)mainBundleSupportsSFSymbols;
+ (long long)overrideInterfaceStyleForTemplateElement:(id)arg1;
+ (id)placeholderImageForViewElement:(id)arg1;
+ (id)placeholderImageForViewElement:(id)arg1 withCornerRadii:(struct TVCornerRadii { double x1; double x2; double x3; double x4; })arg2 andScaledSize:(struct CGSize { double x1; double x2; })arg3;
+ (id)randomColor;
+ (id)rowSpacingMetricsForRowMetrics:(id)arg1;
+ (id)rowSpacingMetricsForRowMetrics:(id)arg1 forShowcase:(bool)arg2;
+ (long long)semanticAlignmentForAlignment:(long long)arg1 semanticContentAttribute:(long long)arg2;
+ (long long)semanticContentAttributeForTemplateElement:(id)arg1;
+ (long long)semanticPositionForPosition:(long long)arg1 semanticContentAttribute:(long long)arg2;
+ (struct CGPath { }*)shadowPathForViewElement:(id)arg1 withCornerRadii:(struct TVCornerRadii { double x1; double x2; double x3; double x4; })arg2 andScaledSize:(struct CGSize { double x1; double x2; })arg3;
+ (struct CGPath { }*)shadowPathWithCornerRadii:(struct TVCornerRadii { double x1; double x2; double x3; double x4; })arg1 andScaledSize:(struct CGSize { double x1; double x2; })arg2;
+ (double)uiFontWeightFromCSSFontWeight:(id)arg1;

@end
