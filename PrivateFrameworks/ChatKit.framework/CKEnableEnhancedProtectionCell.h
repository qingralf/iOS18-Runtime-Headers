/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/ChatKit.framework/ChatKit
 */

@interface CKEnableEnhancedProtectionCell : CKDetailsCell {
    UILabel * _ktTitleLabel;
    UILabel * _macHeaderLabel;
    UIView * _separatorView;
    bool  _shouldShowMacHeader;
}

@property (nonatomic, retain) UILabel *ktTitleLabel;
@property (nonatomic, retain) UILabel *macHeaderLabel;
@property (nonatomic, retain) UIView *separatorView;
@property (nonatomic, readonly) bool shouldShowMacHeader;

+ (id)reuseIdentifier;
+ (bool)shouldHighlight;

- (void).cxx_destruct;
- (void)addConstraints;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2 conversation:(id)arg3 shouldShowMacHeader:(bool)arg4;
- (id)ktTitleLabel;
- (void)layoutSubviews;
- (id)macHeaderLabel;
- (id)separatorView;
- (void)setKtTitleLabel:(id)arg1;
- (void)setMacHeaderLabel:(id)arg1;
- (void)setSeparatorView:(id)arg1;
- (void)setupMacHeaderLabel;
- (void)setupSeparatorView;
- (void)setupTitleLabel;
- (void)setupView;
- (bool)shouldShowMacHeader;
- (struct CGSize { double x1; double x2; })sizeThatFits:(struct CGSize { double x1; double x2; })arg1;

@end
