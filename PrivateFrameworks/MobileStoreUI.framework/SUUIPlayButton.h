/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/MobileStoreUI.framework/MobileStoreUI
 */

@interface SUUIPlayButton : SUUIPlayButtonControl {
    SUUIPlayButtonImageCache * _imageCache;
    long long  _itemIdentifier;
    NSString * _mediaURLString;
    NSString * _playItemIdentifier;
    bool  _showOnDemand;
    bool  _showStop;
    long long  _style;
}

@property (nonatomic, readonly) SUUIPlayButtonImageCache *imageCache;
@property (nonatomic) long long itemIdentifier;
@property (nonatomic, copy) NSString *mediaURLString;
@property (nonatomic, copy) NSString *playItemIdentifier;
@property (getter=isRadio, nonatomic) bool radio;
@property (nonatomic) bool showOnDemand;
@property (nonatomic) long long style;
@property (nonatomic) bool useLargeButton;

+ (struct CGSize { double x1; double x2; })sizeThatFitsWidth:(double)arg1 viewElement:(id)arg2 context:(id)arg3;

- (void).cxx_destruct;
- (void)_updateEnabledState;
- (float)buttonCornerRadius;
- (struct CGSize { double x1; double x2; })buttonSize;
- (id)cancelImage;
- (id)defaultBackgroundColor;
- (id)imageCache;
- (id)images;
- (bool)isRadio;
- (long long)itemIdentifier;
- (void)layoutSubviews;
- (id)mediaURLString;
- (id)outerBorderColor;
- (id)playImage;
- (void)playIndicatorDidChange:(bool)arg1;
- (id)playItemIdentifier;
- (void)refresh;
- (void)reloadWithItemStatus:(id)arg1 animated:(bool)arg2;
- (void)setBackgroundType:(long long)arg1;
- (void)setEnabled:(bool)arg1;
- (void)setItemIdentifier:(long long)arg1;
- (void)setMediaURLString:(id)arg1;
- (void)setPlayItemIdentifier:(id)arg1;
- (void)setRadio:(bool)arg1;
- (void)setShowOnDemand:(bool)arg1;
- (void)setStyle:(long long)arg1;
- (void)setUseLargeButton:(bool)arg1;
- (bool)showOnDemand;
- (bool)showOuterBorder;
- (long long)style;
- (void)tintColorDidChange;
- (bool)useLargeButton;

@end
