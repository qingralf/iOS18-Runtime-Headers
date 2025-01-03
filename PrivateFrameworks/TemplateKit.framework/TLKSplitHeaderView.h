/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/TemplateKit.framework/TemplateKit
 */

@interface TLKSplitHeaderView : TLKView <NUIContainerViewDelegate> {
    TLKMultilineText * _centerLeadingTitle;
    TLKMultilineText * _centerTrailingTitle;
    <TLKSplitHeaderViewDelegate> * _delegate;
    bool  _isLeadingButtonEnabled;
    bool  _isTrailingButtonEnabled;
    TLKTextButton * _leadingButton;
    TLKImage * _leadingImage;
    TLKMultilineText * _leadingSubtitle;
    TLKLabel * _leadingSubtitleLabel;
    TLKMultilineText * _leadingTitle;
    TLKLabel * _leadingTitleLabel;
    bool  _shouldBadgeSubtitle;
    TLKMultilineText * _subtitle1;
    TLKLabel * _subtitle1Label;
    TLKMultilineText * _subtitle2;
    TLKEmbossedLabel * _subtitle2Label;
    NUIContainerStackView * _subtitleStackView;
    TLKMultilineText * _title;
    TLKSplitTitleContainer * _titleContainerView;
    TLKTextButton * _trailingButton;
    TLKImage * _trailingImage;
    TLKMultilineText * _trailingSubtitle;
    TLKLabel * _trailingSubtitleLabel;
    TLKMultilineText * _trailingTitle;
    TLKLabel * _trailingTitleLabel;
    bool  _useCompactWidth;
    bool  _useLargeTitle;
}

@property (nonatomic, retain) TLKMultilineText *centerLeadingTitle;
@property (nonatomic, retain) TLKMultilineText *centerTrailingTitle;
@property (nonatomic, retain) NUIContainerGridView *contentView;
@property (readonly, copy) NSString *debugDescription; /* unknown property attribute: ? */
@property <TLKSplitHeaderViewDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic) bool isLeadingButtonEnabled;
@property (nonatomic) bool isTrailingButtonEnabled;
@property (nonatomic, retain) TLKTextButton *leadingButton;
@property (nonatomic, retain) TLKImage *leadingImage;
@property (nonatomic, retain) TLKMultilineText *leadingSubtitle;
@property (nonatomic, retain) TLKLabel *leadingSubtitleLabel;
@property (nonatomic, retain) TLKMultilineText *leadingTitle;
@property (nonatomic, retain) TLKLabel *leadingTitleLabel;
@property (nonatomic) bool shouldBadgeSubtitle;
@property (nonatomic, retain) TLKMultilineText *subtitle1;
@property (nonatomic, retain) TLKLabel *subtitle1Label;
@property (nonatomic, retain) TLKMultilineText *subtitle2;
@property (nonatomic, retain) TLKEmbossedLabel *subtitle2Label;
@property (nonatomic, retain) NUIContainerStackView *subtitleStackView;
@property (readonly) Class superclass;
@property (nonatomic, retain) TLKMultilineText *title;
@property (nonatomic, retain) TLKSplitTitleContainer *titleContainerView;
@property (nonatomic, retain) TLKTextButton *trailingButton;
@property (nonatomic, retain) TLKImage *trailingImage;
@property (nonatomic, retain) TLKMultilineText *trailingSubtitle;
@property (nonatomic, retain) TLKLabel *trailingSubtitleLabel;
@property (nonatomic, retain) TLKMultilineText *trailingTitle;
@property (nonatomic, retain) TLKLabel *trailingTitleLabel;
@property (nonatomic) bool useCompactWidth;
@property (nonatomic) bool useLargeTitle;

- (void).cxx_destruct;
- (id)centerLeadingTitle;
- (id)centerLeadingTitleLabel;
- (id)centerTrailingTitle;
- (id)centerTrailingTitleLabel;
- (struct CGSize { double x1; double x2; })containerView:(id)arg1 systemLayoutSizeFittingSize:(struct CGSize { double x1; double x2; })arg2 forArrangedSubview:(id)arg3;
- (void)containerView:(id)arg1 willMeasureArrangedSubviewsFittingSize:(struct CGSize { double x1; double x2; })arg2 forReason:(long long)arg3;
- (id)delegate;
- (id)firstRowOfViews;
- (id)grid;
- (bool)isLeadingButtonEnabled;
- (bool)isTrailingButtonEnabled;
- (id)leadingButton;
- (id)leadingImage;
- (id)leadingImageInView;
- (id)leadingSubtitle;
- (id)leadingSubtitleLabel;
- (id)leadingTitle;
- (id)leadingTitleLabel;
- (void)observedPropertiesChanged;
- (void)performLeadingButtonSelector;
- (void)performTrailingButtonSelector;
- (bool)secondRowIsHidden;
- (id)secondRowOfViews;
- (void)setCenterLeadingTitle:(id)arg1;
- (void)setCenterTrailingTitle:(id)arg1;
- (void)setDelegate:(id)arg1;
- (void)setIsLeadingButtonEnabled:(bool)arg1;
- (void)setIsTrailingButtonEnabled:(bool)arg1;
- (void)setLeadingButton:(id)arg1;
- (void)setLeadingImage:(id)arg1;
- (void)setLeadingSubtitle:(id)arg1;
- (void)setLeadingSubtitleLabel:(id)arg1;
- (void)setLeadingTitle:(id)arg1;
- (void)setLeadingTitleLabel:(id)arg1;
- (void)setShouldBadgeSubtitle:(bool)arg1;
- (void)setSubtitle1:(id)arg1;
- (void)setSubtitle1Label:(id)arg1;
- (void)setSubtitle2:(id)arg1;
- (void)setSubtitle2Label:(id)arg1;
- (void)setSubtitleStackView:(id)arg1;
- (void)setTitle:(id)arg1;
- (void)setTitleContainerView:(id)arg1;
- (void)setTrailingButton:(id)arg1;
- (void)setTrailingImage:(id)arg1;
- (void)setTrailingSubtitle:(id)arg1;
- (void)setTrailingSubtitleLabel:(id)arg1;
- (void)setTrailingTitle:(id)arg1;
- (void)setTrailingTitleLabel:(id)arg1;
- (void)setUseCompactWidth:(bool)arg1;
- (void)setUseLargeTitle:(bool)arg1;
- (id)setupContentView;
- (bool)shouldBadgeSubtitle;
- (id)subtitle1;
- (id)subtitle1Label;
- (id)subtitle2;
- (id)subtitle2Label;
- (id)subtitleLabel;
- (id)subtitleStackView;
- (id)thirdRowOfViews;
- (id)title;
- (id)titleContainerView;
- (id)titleLabel;
- (id)trailingButton;
- (id)trailingImage;
- (id)trailingImageInView;
- (id)trailingSubtitle;
- (id)trailingSubtitleLabel;
- (id)trailingTitle;
- (id)trailingTitleLabel;
- (bool)useCompactWidth;
- (bool)useLargeTitle;
- (bool)usesDefaultLayoutMargins;

@end
