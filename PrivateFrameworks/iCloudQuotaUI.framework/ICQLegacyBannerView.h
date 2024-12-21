/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/iCloudQuotaUI.framework/iCloudQuotaUI
 */

@interface ICQLegacyBannerView : UIView <UITextViewDelegate> {
    NSArray * _activeConstraints;
    <ICQLegacyBannerViewDelegate> * _delegate;
    UIColor * _detailMessageColor;
    UIFont * _detailMessageFont;
    ICQUpgradeFlowOptions * _flowOptions;
    UIFont * _font;
    UIColor * _linkMessageColor;
    UIFont * _linkMessageFont;
    UIColor * _linkTextColor;
    UIFont * _linkTextFont;
    UIButton * _manageStorageButton;
    ICQOffer * _offer;
    long long  _textAlignment;
    UIColor * _textColor;
    double  _textLineSpacing;
    struct NSDirectionalEdgeInsets { 
        double top; 
        double leading; 
        double bottom; 
        double trailing; 
    }  _textMargins;
    _ICQTextView * _textView;
    UIColor * _titleColor;
    UIFont * _titleFont;
}

@property (nonatomic, retain) NSArray *activeConstraints;
@property (readonly, copy) NSString *debugDescription; /* unknown property attribute: ? */
@property (nonatomic) <ICQLegacyBannerViewDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (nonatomic, retain) UIColor *detailMessageColor;
@property (nonatomic, retain) UIFont *detailMessageFont;
@property (nonatomic, copy) ICQUpgradeFlowOptions *flowOptions;
@property (nonatomic, retain) UIFont *font;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) UIColor *linkMessageColor;
@property (nonatomic, retain) UIFont *linkMessageFont;
@property (nonatomic, copy) UIColor *linkTextColor;
@property (nonatomic, copy) UIFont *linkTextFont;
@property (nonatomic, retain) ICQOffer *offer;
@property (readonly) Class superclass;
@property (nonatomic) long long textAlignment;
@property (nonatomic, retain) UIColor *textColor;
@property (nonatomic) double textLineSpacing;
@property (nonatomic) struct NSDirectionalEdgeInsets { double x1; double x2; double x3; double x4; } textMargins;
@property (nonatomic, readonly) _ICQTextView *textView;
@property (nonatomic, retain) UIColor *titleColor;
@property (nonatomic, retain) UIFont *titleFont;

+ (id)replaceWordsIn:(id)arg1 with:(id)arg2;

- (void).cxx_destruct;
- (void)_applyTextParagraphAttributes;
- (void)_applyTextStorageAttributes;
- (void)_configureManageStorageButtonWithICQLink:(id)arg1;
- (id)_getOffer;
- (id)_initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1 offer:(id)arg2;
- (bool)_performActionWithICQLink:(id)arg1;
- (void)_updateBannerViewConstraints;
- (id)activeConstraints;
- (id)attributedText;
- (id)delegate;
- (id)detailAttributedText;
- (id)detailMessageAttributes;
- (id)detailMessageColor;
- (id)detailMessageFont;
- (id)flowOptions;
- (id)font;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (id)initWithOffer:(id)arg1;
- (id)linkAttributes;
- (id)linkMessageColor;
- (id)linkMessageFont;
- (id)linkTextColor;
- (id)linkTextFont;
- (id)messageAttributes;
- (id)offer;
- (long long)semanticContentAttribute;
- (void)setActiveConstraints:(id)arg1;
- (void)setDelegate:(id)arg1;
- (void)setDetailMessageColor:(id)arg1;
- (void)setDetailMessageFont:(id)arg1;
- (void)setFlowOptions:(id)arg1;
- (void)setFont:(id)arg1;
- (void)setLinkMessageColor:(id)arg1;
- (void)setLinkMessageFont:(id)arg1;
- (void)setLinkTextColor:(id)arg1;
- (void)setLinkTextFont:(id)arg1;
- (void)setOffer:(id)arg1;
- (void)setTextAlignment:(long long)arg1;
- (void)setTextColor:(id)arg1;
- (void)setTextLineSpacing:(double)arg1;
- (void)setTextMargins:(struct NSDirectionalEdgeInsets { double x1; double x2; double x3; double x4; })arg1;
- (void)setTitleColor:(id)arg1;
- (void)setTitleFont:(id)arg1;
- (struct CGSize { double x1; double x2; })sizeThatFits:(struct CGSize { double x1; double x2; })arg1;
- (long long)textAlignment;
- (id)textColor;
- (double)textLineSpacing;
- (struct NSDirectionalEdgeInsets { double x1; double x2; double x3; double x4; })textMargins;
- (id)textParagraphStyle;
- (id)textParagraphStyleAttributes;
- (id)textView;
- (id)textView:(id)arg1 menuConfigurationForTextItem:(id)arg2 defaultMenu:(id)arg3;
- (id)textView:(id)arg1 primaryActionForTextItem:(id)arg2 defaultAction:(id)arg3;
- (void)textViewDidChangeSelection:(id)arg1;
- (id)titleAttributes;
- (id)titleColor;
- (id)titleFont;
- (void)updateBannerView;
- (void)updateConstraints;
- (long long)userInterfaceLayoutDirection;

@end