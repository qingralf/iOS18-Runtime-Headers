/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/SpringBoardHome.framework/SpringBoardHome
 */

@interface SBHCalendarApplicationIcon : SBHApplicationIcon <SBCalendarIconImageProviderDelegate> {
    SBCalendarIconImageProvider * _imageProvider;
}

@property (nonatomic, readonly) SBCalendarIconImageProvider *imageProvider;

+ (bool)canGenerateIconsInBackground;

- (void).cxx_destruct;
- (void)_boldTextStatusDidChange:(id)arg1;
- (void)calendarIconImageProviderHasChanged:(id)arg1;
- (bool)canMakeIconLayerQuicklyWithInfo:(struct SBIconImageInfo { struct CGSize { double x_1_1_1; double x_1_1_2; } x1; double x2; double x3; })arg1 traitCollection:(id)arg2 options:(unsigned long long)arg3;
- (void)dealloc;
- (id)generateIconImageWithInfo:(struct SBIconImageInfo { struct CGSize { double x_1_1_1; double x_1_1_2; } x1; double x2; double x3; })arg1;
- (id)imageProvider;
- (id)initWithLeafIdentifier:(id)arg1 applicationBundleID:(id)arg2;
- (void)localeChanged;
- (id)makeIconImageWithInfo:(struct SBIconImageInfo { struct CGSize { double x_1_1_1; double x_1_1_2; } x1; double x2; double x3; })arg1 traitCollection:(id)arg2 options:(unsigned long long)arg3;
- (id)makeIconLayerWithInfo:(struct SBIconImageInfo { struct CGSize { double x_1_1_1; double x_1_1_2; } x1; double x2; double x3; })arg1 traitCollection:(id)arg2 options:(unsigned long long)arg3;
- (id)unmaskedIconImageWithInfo:(struct SBIconImageInfo { struct CGSize { double x_1_1_1; double x_1_1_2; } x1; double x2; double x3; })arg1;

@end
