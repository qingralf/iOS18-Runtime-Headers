/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/TextInputUI.framework/TextInputUI
 */

@interface TUIPredictionViewCell : UIView <UIScrollViewDelegate> {
    <_NSTextAnimator> * _activeAnimator;
    UITextView * _animationsLabelView;
    UIView * _backgroundView;
    UIColor * _backgroundViewHighlightColor;
    TIKeyboardCandidate * _candidate;
    UIView * _customView;
    UIColor * _highlightColor;
    double  _highlightCornerRadius;
    double  _highlightMargin;
    bool  _highlighted;
    UIColor * _imageTintColor;
    UIImageView * _imageView;
    bool  _labelTruncated;
    UIView * _leftSeparatorView;
    TUIGradientView * _lightEffectsContainer;
    UIScrollView * _maskingScrollView;
    UIMorphingLabel * _morphingLabel;
    UILabel * _normalLabel;
    unsigned long long  _predictionPosition;
    UIColor * _preferredBackgroundColor;
    UIColor * _preferredForegroundColor;
    UIKBRenderConfig * _renderConfig;
    UIView * _rightSeparatorView;
    unsigned long long  _roundedHighlightEdges;
    UIView * _secureCandidateLabel;
    UIColor * _separatorColor;
    double  _separatorMargin;
    bool  _shouldShowScalingAnimation;
    _UIDirectionalLightConfiguration * _smartReplyLightConfiguration;
    UIColor * _textColor;
    bool  _useContinuousCornerInHighlight;
    UIKBVisualEffectView * _vibrantBackgroundView;
    unsigned long long  _visibleSeparatorEdges;
}

@property (nonatomic) <_NSTextAnimator> *activeAnimator;
@property (nonatomic, retain) UITextView *animationsLabelView;
@property (nonatomic, retain) UIView *backgroundView;
@property (nonatomic, retain) UIColor *backgroundViewHighlightColor;
@property (nonatomic, retain) TIKeyboardCandidate *candidate;
@property (nonatomic, retain) UIView *customView;
@property (readonly, copy) NSString *debugDescription; /* unknown property attribute: ? */
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) UIColor *highlightColor;
@property (nonatomic) double highlightCornerRadius;
@property (nonatomic) double highlightMargin;
@property (nonatomic) bool highlighted;
@property (nonatomic, retain) UIImage *image;
@property (nonatomic, retain) UIColor *imageTintColor;
@property (nonatomic, retain) UIImageView *imageView;
@property (nonatomic, retain) UIFont *labelFont;
@property (getter=isLabelTruncated, nonatomic) bool labelTruncated;
@property (nonatomic, readonly) long long layoutType;
@property (nonatomic, retain) UIView *leftSeparatorView;
@property (nonatomic, retain) TUIGradientView *lightEffectsContainer;
@property (nonatomic, retain) UIScrollView *maskingScrollView;
@property (nonatomic, retain) UIMorphingLabel *morphingLabel;
@property (nonatomic, retain) UILabel *normalLabel;
@property (nonatomic) unsigned long long predictionPosition;
@property (nonatomic, retain) UIColor *preferredBackgroundColor;
@property (nonatomic, retain) UIColor *preferredForegroundColor;
@property (nonatomic, retain) UIKBRenderConfig *renderConfig;
@property (nonatomic, retain) UIView *rightSeparatorView;
@property (nonatomic) unsigned long long roundedHighlightEdges;
@property (nonatomic, retain) UIView *secureCandidateLabel;
@property (nonatomic, retain) UIColor *separatorColor;
@property (nonatomic) double separatorMargin;
@property (nonatomic) bool shouldShowScalingAnimation;
@property (nonatomic, retain) _UIDirectionalLightConfiguration *smartReplyLightConfiguration;
@property (readonly) Class superclass;
@property (nonatomic, retain) UIColor *textColor;
@property (nonatomic) bool useContinuousCornerInHighlight;
@property (nonatomic, retain) UIKBVisualEffectView *vibrantBackgroundView;
@property (nonatomic) unsigned long long visibleSeparatorEdges;

+ (bool)_useSeparatorViews;
+ (id)cellHighlightColorForDarkStyle:(bool)arg1;
+ (id)cellHighlightColorForRenderConfig:(id)arg1;

- (void).cxx_destruct;
- (void)_applyTextEffectAnimationAttribute:(id)arg1 attributedCandidateString:(id)arg2;
- (void)_applyTextEffectStyleAttribute:(id)arg1 attributedCandidateString:(id)arg2 fontDescriptor:(id)arg3;
- (id)_displayLabelForCandidate:(id)arg1;
- (bool)_isEmojiCandidate:(id)arg1;
- (bool)_isSecureCandidate:(id)arg1;
- (bool)_isSmartReplyCandidate:(id)arg1;
- (bool)_isStickerCandidate:(id)arg1;
- (bool)_isTextEffectsCandidate:(id)arg1;
- (bool)_isWritingToolsCandidate:(id)arg1;
- (id)_localizedTitleForAnimationName:(id)arg1;
- (id)_preferredBackgroundColor;
- (id)_preferredTextColorForHighlighted:(bool)arg1 useDarkStyle:(bool)arg2;
- (id)_preferredTextColorForRenderConfig:(id)arg1 highlighted:(bool)arg2;
- (bool)_renderConfigUsesDarkStyle:(id)arg1;
- (void)_resetViewForUnanimatedBackdrop:(id)arg1;
- (void)_setMorphingLabelWithCandidate:(id)arg1 animated:(bool)arg2;
- (void)_setNormalLabelWithCandidate:(id)arg1 animated:(bool)arg2;
- (void)_setSecureCandidate:(id)arg1 animated:(bool)arg2;
- (void)_setSmartReplyCandidate:(id)arg1 animated:(bool)arg2;
- (void)_setTextEffectsCandidate:(id)arg1 animated:(bool)arg2;
- (void)_updateColorsForRenderConfig:(id)arg1 highlighted:(bool)arg2;
- (void)_updateCornerRadius;
- (void)_updateForAnimatedBackdropIfNeeded:(id)arg1 highlighted:(bool)arg2;
- (void)_updateViewForAnimatedBackdrop:(id)arg1 usingAlpha:(double)arg2 darkConfiguration:(bool)arg3;
- (bool)_useFloatingStyle;
- (bool)_usePadStyle;
- (bool)_usesMorphingLabelForCandidate:(id)arg1;
- (id)activeAnimator;
- (id)animationsLabelView;
- (id)attributedStringRepresentationOfCandidate:(id)arg1;
- (id)backgroundView;
- (id)backgroundViewHighlightColor;
- (id)candidate;
- (bool)candidateRequiresShrinkingForBoundingWidth:(double)arg1;
- (bool)candidateRequiresTruncationForBoundingWidth:(double)arg1;
- (id)centerTruncatedStringForString:(id)arg1 withAttributes:(id)arg2 fittingWidth:(double)arg3;
- (id)currentBackgroundView;
- (id)currentTextSuggestion;
- (id)customView;
- (id)displayTextAttributesForMultiline:(bool)arg1 header:(bool)arg2 shrink:(bool)arg3;
- (void)endAnimations;
- (id)headerTextAttributes;
- (id)highlightColor;
- (double)highlightCornerRadius;
- (double)highlightMargin;
- (bool)highlighted;
- (id)image;
- (id)imageTintColor;
- (id)imageView;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (struct CGSize { double x1; double x2; })intrinsicContentSize;
- (bool)isLabelTruncated;
- (id)labelFont;
- (struct CGSize { double x1; double x2; })labelTextSizeForCandidate:(id)arg1;
- (id)labelView;
- (id)labelViewForCandidate:(id)arg1;
- (void)layoutSubviews;
- (long long)layoutType;
- (id)leftSeparatorView;
- (id)lightEffectsContainer;
- (id)maskingScrollView;
- (id)morphingLabel;
- (id)normalLabel;
- (unsigned long long)predictionPosition;
- (id)preferredBackgroundColor;
- (id)preferredForegroundColor;
- (id)renderConfig;
- (id)rightSeparatorView;
- (unsigned long long)roundedHighlightEdges;
- (void)scrollViewDidScroll:(id)arg1;
- (id)secureCandidateLabel;
- (id)separatorColor;
- (double)separatorMargin;
- (void)setActiveAnimator:(id)arg1;
- (void)setAnimationsLabelView:(id)arg1;
- (void)setBackgroundView:(id)arg1;
- (void)setBackgroundViewHighlightColor:(id)arg1;
- (void)setCandidate:(id)arg1;
- (void)setCandidate:(id)arg1 animated:(bool)arg2;
- (void)setCustomView:(id)arg1;
- (void)setHighlightColor:(id)arg1;
- (void)setHighlightCornerRadius:(double)arg1;
- (void)setHighlightMargin:(double)arg1;
- (void)setHighlighted:(bool)arg1;
- (void)setImage:(id)arg1;
- (void)setImageTintColor:(id)arg1;
- (void)setImageView:(id)arg1;
- (void)setLabelFont:(id)arg1;
- (void)setLabelTruncated:(bool)arg1;
- (void)setLeftSeparatorView:(id)arg1;
- (void)setLightEffectsContainer:(id)arg1;
- (void)setLightingEffectEnabled:(bool)arg1;
- (void)setMaskingScrollView:(id)arg1;
- (void)setMorphingLabel:(id)arg1;
- (void)setNormalLabel:(id)arg1;
- (void)setPredictionPosition:(unsigned long long)arg1;
- (void)setPreferredBackgroundColor:(id)arg1;
- (void)setPreferredForegroundColor:(id)arg1;
- (void)setRenderConfig:(id)arg1;
- (void)setRightSeparatorView:(id)arg1;
- (void)setRoundedHighlightEdges:(unsigned long long)arg1;
- (void)setSecureCandidateLabel:(id)arg1;
- (void)setSeparatorColor:(id)arg1;
- (void)setSeparatorMargin:(double)arg1;
- (void)setShouldShowScalingAnimation:(bool)arg1;
- (void)setSmartReplyLightConfiguration:(id)arg1;
- (void)setTextColor:(id)arg1;
- (void)setUseContinuousCornerInHighlight:(bool)arg1;
- (void)setVibrantBackgroundView:(id)arg1;
- (void)setVisibleSeparatorEdges:(unsigned long long)arg1;
- (bool)shouldShowScalingAnimation;
- (bool)shouldUseRTLForMathEquations;
- (id)smartReplyLightConfiguration;
- (id)textColor;
- (void)updateTextLabelVibrancyIfNeeded;
- (bool)useAutofillStyle;
- (bool)useContinuousCornerInHighlight;
- (bool)useWritingToolsStyle;
- (id)vibrantBackgroundView;
- (unsigned long long)visibleSeparatorEdges;

@end
