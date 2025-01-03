/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/MapsUI.framework/MapsUI
 */

@interface MUExpandingLabel : UIView <UIGestureRecognizerDelegate, UITextViewDelegate> {
    bool  _allowLessText;
    unsigned long long  _expansionMode;
    bool  _isPerformingLayout;
    id /* block */  _labelResizedBlock;
    unsigned long long  _numberOfLinesWhenCollapsed;
    UIFont * _showLessFont;
    NSString * _showLessText;
    UIColor * _showLessTextColor;
    UIButton * _showMoreButton;
    UIFont * _showMoreFont;
    UITapGestureRecognizer * _showMoreTapRecognizer;
    NSString * _showMoreText;
    UIColor * _showMoreTextColor;
    NSTextContainer * _textContainer;
    NSLayoutManager * _textLayoutManager;
    NSTextStorage * _textStorage;
    UITextView * _textView;
}

@property (nonatomic) bool allowLessText;
@property (copy) NSAttributedString *attributedText;
@property (readonly, copy) NSString *debugDescription; /* unknown property attribute: ? */
@property (readonly, copy) NSString *description;
@property (getter=isEditable, nonatomic) bool editable;
@property (getter=isExpanded, nonatomic) bool expanded;
@property (nonatomic, retain) UIFont *font;
@property (readonly) unsigned long long hash;
@property (nonatomic, copy) id /* block */ labelResizedBlock;
@property (nonatomic) unsigned long long numberOfLinesWhenCollapsed;
@property (getter=isSelectable, nonatomic) bool selectable;
@property (nonatomic, retain) UIFont *showLessFont;
@property (nonatomic, copy) NSString *showLessText;
@property (nonatomic, retain) UIColor *showLessTextColor;
@property (nonatomic, retain) UIFont *showMoreFont;
@property (nonatomic, copy) NSString *showMoreText;
@property (nonatomic, retain) UIColor *showMoreTextColor;
@property (readonly) Class superclass;
@property (nonatomic, copy) NSString *text;
@property (nonatomic) long long textAlignment;
@property (nonatomic, retain) UIColor *textColor;

- (void).cxx_destruct;
- (bool)_canShowAllText;
- (bool)_canShowLess;
- (void)_expand;
- (bool)_isShowingUserExpanded;
- (void)_mkExpandingLabelComonInit;
- (void)_setExpansionMode:(unsigned long long)arg1;
- (void)_setTextExclusionPath;
- (id)_showLessTextSeparator;
- (bool)allowLessText;
- (id)attributedText;
- (id)font;
- (void)infoCardThemeChanged;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (bool)isEditable;
- (bool)isExpanded;
- (bool)isSelectable;
- (bool)isShowingExpanded;
- (id /* block */)labelResizedBlock;
- (void)layoutSubviews;
- (unsigned long long)numberOfLinesWhenCollapsed;
- (void)setAllowLessText:(bool)arg1;
- (void)setAttributedText:(id)arg1;
- (void)setEditable:(bool)arg1;
- (void)setExpanded:(bool)arg1;
- (void)setFont:(id)arg1;
- (void)setLabelResizedBlock:(id /* block */)arg1;
- (void)setNumberOfLinesWhenCollapsed:(unsigned long long)arg1;
- (void)setSelectable:(bool)arg1;
- (void)setShowLessFont:(id)arg1;
- (void)setShowLessText:(id)arg1;
- (void)setShowLessTextColor:(id)arg1;
- (void)setShowMoreFont:(id)arg1;
- (void)setShowMoreText:(id)arg1;
- (void)setShowMoreTextColor:(id)arg1;
- (void)setText:(id)arg1;
- (void)setTextAlignment:(long long)arg1;
- (void)setTextColor:(id)arg1;
- (id)showLessFont;
- (id)showLessText;
- (id)showLessTextColor;
- (id)showMoreFont;
- (id)showMoreText;
- (id)showMoreTextColor;
- (id)text;
- (long long)textAlignment;
- (id)textColor;
- (bool)textView:(id)arg1 shouldInteractWithURL:(id)arg2 inRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg3 interaction:(long long)arg4;
- (id)viewForFirstBaselineLayout;
- (id)viewForLastBaselineLayout;

@end
