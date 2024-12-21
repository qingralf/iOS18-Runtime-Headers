/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/WorkflowUIServices.framework/WorkflowUIServices
 */

@interface WFApertureIconView : UIView {
    NSString * _associatedAppBundleIdentifier;
    UIView * _colorView;
    UIView * _colorViewContainer;
    bool  _enabled;
    WFIcon * _icon;
    CALayer * _iconBlendedBorderLayer;
    UIImageView * _iconImageView;
    UIView * _iconImageViewContainer;
    long long  _iconStyle;
    UIColor * _keyColorOverride;
    long long  _mode;
    UIColor * _primaryColor;
    struct CGSize { 
        double width; 
        double height; 
    }  _resolution;
    UIColor * _symbolColorOverride;
}

@property (nonatomic, retain) NSString *associatedAppBundleIdentifier;
@property (nonatomic, retain) UIView *colorView;
@property (nonatomic, retain) UIView *colorViewContainer;
@property (getter=isEnabled, nonatomic, readonly) bool enabled;
@property (nonatomic, retain) WFIcon *icon;
@property (nonatomic, retain) CALayer *iconBlendedBorderLayer;
@property (nonatomic, retain) UIImageView *iconImageView;
@property (nonatomic, retain) UIView *iconImageViewContainer;
@property (nonatomic) long long iconStyle;
@property (nonatomic, readonly) UIColor *keyColor;
@property (nonatomic, retain) UIColor *keyColorOverride;
@property (nonatomic) long long mode;
@property (nonatomic, retain) UIColor *primaryColor;
@property (nonatomic) struct CGSize { double x1; double x2; } resolution;
@property (nonatomic, retain) UIColor *symbolColorOverride;

+ (id)configurationForSymbol:(id)arg1;
+ (id)defaultSymbolConfiguration;
+ (id)downscaledImageForOriginalImage:(id)arg1;
+ (struct CGSize { double x1; double x2; })opticalAlignmentForSymbol:(id)arg1;
+ (id)preferredImageForSymbolName:(id)arg1;

- (void).cxx_destruct;
- (id)associatedAppBundleIdentifier;
- (id)colorView;
- (id)colorViewContainer;
- (void)dealloc;
- (id)icon;
- (id)iconBlendedBorderLayer;
- (id)iconImageView;
- (id)iconImageViewContainer;
- (id)iconStackPlatterColorForImage:(id)arg1;
- (long long)iconStyle;
- (bool)inSiri;
- (id)initWithApplicationBundleIdentifier:(id)arg1;
- (id)initWithIcon:(id)arg1;
- (bool)isEnabled;
- (id)keyColor;
- (id)keyColorOverride;
- (void)layoutSubviews;
- (long long)mode;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void*)arg4;
- (id)primaryColor;
- (struct CGSize { double x1; double x2; })resolution;
- (void)setAssociatedAppBundleIdentifier:(id)arg1;
- (void)setBlendedBorderLayerHidden:(bool)arg1;
- (void)setColorView:(id)arg1;
- (void)setColorViewContainer:(id)arg1;
- (void)setEnabled:(bool)arg1 animated:(bool)arg2;
- (void)setIcon:(id)arg1;
- (void)setIcon:(id)arg1 animated:(bool)arg2;
- (void)setIcon:(id)arg1 associatedAppBundleIdentifier:(id)arg2 animated:(bool)arg3;
- (void)setIconBlendedBorderLayer:(id)arg1;
- (void)setIconImage:(id)arg1 associatedIcon:(id)arg2 style:(long long)arg3 previousIconStyle:(long long)arg4 animated:(bool)arg5;
- (void)setIconImageView:(id)arg1;
- (void)setIconImageViewContainer:(id)arg1;
- (void)setIconStyle:(long long)arg1;
- (void)setKeyColorOverride:(id)arg1;
- (void)setMode:(long long)arg1;
- (void)setMode:(long long)arg1 animated:(bool)arg2;
- (void)setPrimaryColor:(id)arg1;
- (void)setResolution:(struct CGSize { double x1; double x2; })arg1;
- (void)setSymbolColorOverride:(id)arg1;
- (struct CGSize { double x1; double x2; })sizeThatFits:(struct CGSize { double x1; double x2; })arg1;
- (id)symbolColor;
- (id)symbolColorOverride;

@end