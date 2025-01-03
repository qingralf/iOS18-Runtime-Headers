/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/MobileSafari.framework/MobileSafari
 */

@interface SFBannerMessageAndButtonsCell : SFStartPageFilledBackgroundCell <UITextViewDelegate> {
    WBSStartPageBanner * _banner;
    UITextView * _messageTextView;
    UIButton * _primaryButton;
    UIButton * _secondaryButton;
    UILabel * _titleLabel;
}

@property (readonly, copy) NSString *debugDescription; /* unknown property attribute: ? */
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

+ (id)reuseIdentifier;

- (void).cxx_destruct;
- (void)_primaryButtonSelected;
- (void)_secondaryButtonSelected;
- (void)configureUsingBanner:(id)arg1;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (id)textView:(id)arg1 primaryActionForTextItem:(id)arg2 defaultAction:(id)arg3;

@end
