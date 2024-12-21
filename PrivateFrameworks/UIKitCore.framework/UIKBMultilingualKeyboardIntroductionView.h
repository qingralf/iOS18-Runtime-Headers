/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
 */

@interface UIKBMultilingualKeyboardIntroductionView : UIView {
    UIKBMultilingualIntroductionArrowView * _arrowView;
    UIView * _artworkView;
    _UIBackdropView * _backdropView;
    UIButton * _continueButton;
    UILabel * _descriptionLabel;
    UIView * _highlight;
    UIKeyboardInputMode * _inputMode;
    UIMultiscriptCandidateView * _multiscriptCandidateView;
    TUIPredictionView * _predictionView;
    UILabel * _titleLabel;
}

@property (nonatomic, retain) UIKBMultilingualIntroductionArrowView *arrowView;
@property (nonatomic, retain) UIView *artworkView;
@property (nonatomic, retain) _UIBackdropView *backdropView;
@property (nonatomic, retain) UIButton *continueButton;
@property (nonatomic, retain) UILabel *descriptionLabel;
@property (nonatomic, retain) UIView *highlight;
@property (nonatomic, retain) UIKeyboardInputMode *inputMode;
@property (nonatomic, retain) UIMultiscriptCandidateView *multiscriptCandidateView;
@property (nonatomic, retain) TUIPredictionView *predictionView;
@property (nonatomic, retain) UILabel *titleLabel;

+ (id)displayArtwork:(id)arg1;
+ (id)displayDescription:(id)arg1;
+ (id)displayTitle:(id)arg1;
+ (bool)shouldShowIntroductionForInputMode:(id)arg1;

- (void).cxx_destruct;
- (void)_updateContainer;
- (void)_updatePath;
- (id)arrowView;
- (id)artworkView;
- (long long)backdropStyleForRenderConfig:(id)arg1;
- (id)backdropView;
- (id)continueButton;
- (void)continueButtonTapped;
- (id)descriptionLabel;
- (id)highlight;
- (id)initWithInputMode:(id)arg1 frame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg2;
- (id)inputMode;
- (void)layoutSubviews;
- (id)multiscriptCandidateView;
- (id)predictionView;
- (void)setArrowView:(id)arg1;
- (void)setArtworkView:(id)arg1;
- (void)setBackdropView:(id)arg1;
- (void)setContinueButton:(id)arg1;
- (void)setDescriptionLabel:(id)arg1;
- (void)setHighlight:(id)arg1;
- (void)setInputMode:(id)arg1;
- (void)setMultiscriptCandidateView:(id)arg1;
- (void)setPredictionView:(id)arg1;
- (void)setTitleLabel:(id)arg1;
- (id)titleLabel;

@end