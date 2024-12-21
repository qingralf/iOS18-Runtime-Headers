/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/ControlCenterUIServices.framework/ControlCenterUIServices
 */

@interface ControlCenterUIServices.ControlsGalleryIconListLayout : NSObject <SBIconListLayout> {
    void $__lazy_storage_$_defaultRootListLayout;
    void $__lazy_storage_$_displayScale;
    void $__lazy_storage_$_gridGeometryInfo;
    void realIconGridSizeClassSizes;
}

@property (nonatomic, readonly) SBHIconGridSizeClassSizeMap *iconGridSizeClassSizes;
@property (nonatomic, readonly) struct SBIconImageInfo { struct CGSize { double x_1_1_1; double x_1_1_2; } x1; double x2; double x3; } iconImageInfo;
@property (nonatomic, readonly) SBHIconGridSizeClassSet *supportedIconGridSizeClasses;

- (void).cxx_destruct;
- (id)iconGridSizeClassSizes;
- (struct SBIconImageInfo { struct CGSize { double x_1_1_1; double x_1_1_2; } x1; double x2; double x3; })iconImageInfo;
- (struct SBIconImageInfo { struct CGSize { double x_1_1_1; double x_1_1_2; } x1; double x2; double x3; })iconImageInfoForGridSizeClass:(id)arg1;
- (struct CGSize { double x1; double x2; })iconSpacingForOrientation:(long long)arg1;
- (id)init;
- (struct UIEdgeInsets { double x1; double x2; double x3; double x4; })layoutInsetsForOrientation:(long long)arg1;
- (unsigned long long)numberOfColumnsForOrientation:(long long)arg1;
- (unsigned long long)numberOfRowsForOrientation:(long long)arg1;
- (id)supportedIconGridSizeClasses;

@end