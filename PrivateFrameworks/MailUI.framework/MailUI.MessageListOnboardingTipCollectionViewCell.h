/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/MailUI.framework/MailUI
 */

@interface MailUI.MessageListOnboardingTipCollectionViewCell : UICollectionViewCell {
    void $__lazy_storage_$_appBadgeImageView;
    void $__lazy_storage_$_infoLabel;
    void $__lazy_storage_$_learnMoreButton;
    void $__lazy_storage_$_separatorView;
    union { in /* Warning: Unrecognized filer type: 'u' using 'void*' */ void*x1; long x2; long x3; }  $__lazy_storage_$_titleTextAttributesTransformer;
    void bucketTipInfo;
    void cancelButton;
    void horizontalStackView;
    void subtitleLabel;
    void tipContentView;
    void titleLabel;
    void verticalStackView;
}

@property (nonatomic, retain) UIImageView *appBadgeImageView;
@property (nonatomic, retain) UIButton *cancelButton;
@property (nonatomic, retain) UIStackView *horizontalStackView;
@property (nonatomic, retain) UILabel *infoLabel;
@property (nonatomic, retain) UIButton *learnMoreButton;
@property (nonatomic, retain) UIView *separatorView;
@property (nonatomic, retain) UILabel *subtitleLabel;
@property (nonatomic, retain) UIView *tipContentView;
@property (nonatomic, retain) UILabel *titleLabel;
@property (nonatomic, retain) UIStackView *verticalStackView;

- (void).cxx_destruct;
- (id)appBadgeImageView;
- (id)attributedStringWithImageWithReplacingKeyword:(id)arg1 inLocalizedString:(id)arg2 imageName:(id)arg3 bucketColor:(id)arg4;
- (id)cancelButton;
- (void)configureForBucket:(long long)arg1;
- (id)horizontalStackView;
- (id)infoLabel;
- (id)initWithCoder:(id)arg1;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (id)learnMoreButton;
- (id)separatorView;
- (void)setAppBadgeImageView:(id)arg1;
- (void)setCancelButton:(id)arg1;
- (void)setHorizontalStackView:(id)arg1;
- (void)setInfoLabel:(id)arg1;
- (void)setLearnMoreButton:(id)arg1;
- (void)setSeparatorView:(id)arg1;
- (void)setSubtitleLabel:(id)arg1;
- (void)setTipContentView:(id)arg1;
- (void)setTitleLabel:(id)arg1;
- (void)setVerticalStackView:(id)arg1;
- (id)subtitleLabel;
- (id)tipContentView;
- (id)titleLabel;
- (id)verticalStackView;

@end
