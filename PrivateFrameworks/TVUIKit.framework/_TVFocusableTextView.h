/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/TVUIKit.framework/TVUIKit
 */

@interface _TVFocusableTextView : UIView <UIGestureRecognizerDelegate, _UIFloatingContentViewDelegate> {
    bool  _alwaysFocusable;
    bool  _alwaysShowBackground;
    UITextView * _auxilliaryTextView;
    UIColor * _backgroundColor;
    UIVisualEffectView * _backgroundView;
    long long  _descriptionTextAlignment;
    UIColor * _descriptionTextColor;
    UIColor * _descriptionTextHighlightColor;
    UITextView * _descriptionTextView;
    bool  _disableFocus;
    _UIFloatingContentView * _floatingView;
    unsigned long long  _focusSizeIncrease;
    UIColor * _highlightBackgroundColor;
    double  _moreHighlightPadding;
    UILabel * _moreLabel;
    bool  _moreLabelOnNewLine;
    UITapGestureRecognizer * _moreLabelTapGestureRecognizer;
    NSString * _moreLabelText;
    UIColor * _moreLabelTextColor;
    bool  _needsTextSizeComputation;
    struct UIEdgeInsets { 
        double top; 
        double left; 
        double bottom; 
        double right; 
    }  _padding;
    id /* block */  _playHandler;
    UITapGestureRecognizer * _playRecognizer;
    UITapGestureRecognizer * _selectRecognizer;
    id /* block */  _selectionHandler;
    bool  _textTruncating;
    bool  _trackHorizontal;
    UIVisualEffectView * _vibrantEffectView;
}

@property (getter=isAlwaysFocusable, nonatomic) bool alwaysFocusable;
@property (nonatomic) bool alwaysShowBackground;
@property (nonatomic, retain) UIVisualEffectView *backgroundView;
@property (readonly, copy) NSString *debugDescription; /* unknown property attribute: ? */
@property (readonly, copy) NSString *description;
@property (nonatomic, retain) NSAttributedString *descriptionText;
@property (nonatomic) long long descriptionTextAlignment;
@property (nonatomic, retain) UIColor *descriptionTextColor;
@property (nonatomic, retain) UIColor *descriptionTextHighlightColor;
@property (nonatomic, retain) UITextView *descriptionTextView;
@property (nonatomic) bool disableFocus;
@property (nonatomic, retain) _UIFloatingContentView *floatingView;
@property (nonatomic) unsigned long long focusSizeIncrease;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) UIColor *highlightBackgroundColor;
@property (nonatomic) unsigned long long maximumNumberOfLines;
@property (nonatomic) double moreHighlightPadding;
@property (nonatomic, retain) UILabel *moreLabel;
@property (nonatomic) bool moreLabelOnNewLine;
@property (nonatomic, readonly) UITapGestureRecognizer *moreLabelTapGestureRecognizer;
@property (nonatomic, retain) NSString *moreLabelText;
@property (nonatomic, retain) UIColor *moreLabelTextColor;
@property (nonatomic) bool needsTextSizeComputation;
@property (nonatomic) struct UIEdgeInsets { double x1; double x2; double x3; double x4; } padding;
@property (nonatomic, copy) id /* block */ playHandler;
@property (nonatomic, retain) UITapGestureRecognizer *playRecognizer;
@property (nonatomic, retain) UITapGestureRecognizer *selectRecognizer;
@property (nonatomic, copy) id /* block */ selectionHandler;
@property (readonly) Class superclass;
@property (getter=isTextTruncating, nonatomic) bool textTruncating;
@property (nonatomic) bool trackHorizontal;

+ (double)cornerRadius;

- (void).cxx_destruct;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })_moreLabelExclusionPathFrame;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })_moreLabelFrame;
- (void)_playButtonAction:(id)arg1;
- (void)_recomputeTextSizeIfNeeded;
- (void)_selectButtonAction:(id)arg1;
- (void)_setNeedsTextSizeComputation;
- (void)_updateBackgroundColors;
- (void)_updateTextColorsForFocusState:(bool)arg1;
- (void)_updateTextColorsIfNeeded;
- (bool)alwaysShowBackground;
- (id)backgroundView;
- (bool)canBecomeFocused;
- (id)descriptionText;
- (long long)descriptionTextAlignment;
- (id)descriptionTextColor;
- (id)descriptionTextHighlightColor;
- (id)descriptionTextView;
- (void)didUpdateFocusInContext:(id)arg1 withAnimationCoordinator:(id)arg2;
- (bool)disableFocus;
- (void)floatingContentView:(id)arg1 isTransitioningFromState:(unsigned long long)arg2 toState:(unsigned long long)arg3;
- (id)floatingView;
- (unsigned long long)focusSizeIncrease;
- (bool)gestureRecognizerShouldBegin:(id)arg1;
- (id)highlightBackgroundColor;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (struct CGSize { double x1; double x2; })intrinsicContentSize;
- (bool)isAlwaysFocusable;
- (bool)isTextTruncating;
- (void)layoutSubviews;
- (unsigned long long)maximumNumberOfLines;
- (double)moreHighlightPadding;
- (id)moreLabel;
- (bool)moreLabelOnNewLine;
- (id)moreLabelTapGestureRecognizer;
- (id)moreLabelText;
- (id)moreLabelTextColor;
- (bool)needsTextSizeComputation;
- (struct UIEdgeInsets { double x1; double x2; double x3; double x4; })padding;
- (id /* block */)playHandler;
- (id)playRecognizer;
- (void)pressesBegan:(id)arg1 withEvent:(id)arg2;
- (id)selectRecognizer;
- (id /* block */)selectionHandler;
- (void)setAlwaysFocusable:(bool)arg1;
- (void)setAlwaysShowBackground:(bool)arg1;
- (void)setBackgroundColor:(id)arg1;
- (void)setBackgroundView:(id)arg1;
- (void)setDescriptionText:(id)arg1;
- (void)setDescriptionTextAlignment:(long long)arg1;
- (void)setDescriptionTextColor:(id)arg1;
- (void)setDescriptionTextHighlightColor:(id)arg1;
- (void)setDescriptionTextView:(id)arg1;
- (void)setDisableFocus:(bool)arg1;
- (void)setFloatingView:(id)arg1;
- (void)setFocusSizeIncrease:(unsigned long long)arg1;
- (void)setFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)setHighlightBackgroundColor:(id)arg1;
- (void)setMaximumNumberOfLines:(unsigned long long)arg1;
- (void)setMoreHighlightPadding:(double)arg1;
- (void)setMoreLabel:(id)arg1;
- (void)setMoreLabelOnNewLine:(bool)arg1;
- (void)setMoreLabelText:(id)arg1;
- (void)setMoreLabelTextColor:(id)arg1;
- (void)setNeedsTextSizeComputation:(bool)arg1;
- (void)setPadding:(struct UIEdgeInsets { double x1; double x2; double x3; double x4; })arg1;
- (void)setPlayHandler:(id /* block */)arg1;
- (void)setPlayRecognizer:(id)arg1;
- (void)setSelectRecognizer:(id)arg1;
- (void)setSelected:(bool)arg1 animated:(bool)arg2;
- (void)setSelected:(bool)arg1 animated:(bool)arg2 withAnimationCoordinator:(id)arg3;
- (void)setSelectionHandler:(id /* block */)arg1;
- (void)setTextTruncating:(bool)arg1;
- (void)setTrackHorizontal:(bool)arg1;
- (struct CGSize { double x1; double x2; })sizeThatFits:(struct CGSize { double x1; double x2; })arg1;
- (void)tintColorDidChange;
- (bool)trackHorizontal;

@end
