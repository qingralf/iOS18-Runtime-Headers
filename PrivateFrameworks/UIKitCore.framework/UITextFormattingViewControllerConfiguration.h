/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
 */

@interface UITextFormattingViewControllerConfiguration : NSObject <NSCopying, NSSecureCoding> {
    bool  __allowContentToScroll;
    NSArray * __emphasisStyles;
    bool  __hasParentViewController;
    bool  __hasPopoverPresentation;
    bool  __includeDefaultFont;
    bool  __preferringDimmingVisible;
    bool  __textAnimationsConfiguration;
    bool  __textViewConfiguration;
    bool  __useLandscapeLayout;
    bool  __useReducedMetrics;
    UIFontPickerViewControllerConfiguration * _fontPickerConfiguration;
    NSArray * _formattingStyles;
    NSArray * _groups;
}

@property (nonatomic) bool _allowContentToScroll;
@property (nonatomic, copy) NSArray *_emphasisStyles;
@property (setter=_setHasParentViewController:, nonatomic) bool _hasParentViewController;
@property (setter=_setHasPopoverPresentation:, nonatomic) bool _hasPopoverPresentation;
@property (nonatomic) bool _includeDefaultFont;
@property (nonatomic) bool _preferringDimmingVisible;
@property (nonatomic) bool _textAnimationsConfiguration;
@property (nonatomic) bool _textViewConfiguration;
@property (setter=_setUseLandscapeLayout:, nonatomic) bool _useLandscapeLayout;
@property (nonatomic) bool _useReducedMetrics;
@property (nonatomic, copy) UIFontPickerViewControllerConfiguration *fontPickerConfiguration;
@property (nonatomic, copy) NSArray *formattingStyles;
@property (nonatomic, readonly, copy) NSArray *groups;

+ (id)_forTextAnimationsUIWithSupportedAnimationNames:(id)arg1 titles:(id)arg2 accessibilityHints:(id)arg3;
+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (bool)_allowContentToScroll;
- (id)_emphasisStyles;
- (bool)_hasParentViewController;
- (bool)_hasPopoverPresentation;
- (bool)_includeDefaultFont;
- (bool)_isTextAnimationsConfiguration;
- (bool)_isTextViewConfiguration;
- (bool)_isUsingReducedMetrics;
- (bool)_preferringDimmingVisible;
- (void)_setHasParentViewController:(bool)arg1;
- (void)_setHasPopoverPresentation:(bool)arg1;
- (void)_setUseLandscapeLayout:(bool)arg1;
- (bool)_textAnimationsConfiguration;
- (bool)_textViewConfiguration;
- (bool)_useLandscapeLayout;
- (bool)_useReducedMetrics;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)fontPickerConfiguration;
- (id)formattingStyles;
- (id)groups;
- (unsigned long long)hash;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (id)initWithGroups:(id)arg1;
- (bool)isEqual:(id)arg1;
- (void)setFontPickerConfiguration:(id)arg1;
- (void)setFormattingStyles:(id)arg1;
- (void)set_allowContentToScroll:(bool)arg1;
- (void)set_emphasisStyles:(id)arg1;
- (void)set_includeDefaultFont:(bool)arg1;
- (void)set_preferringDimmingVisible:(bool)arg1;
- (void)set_textAnimationsConfiguration:(bool)arg1;
- (void)set_textViewConfiguration:(bool)arg1;
- (void)set_useReducedMetrics:(bool)arg1;

@end
