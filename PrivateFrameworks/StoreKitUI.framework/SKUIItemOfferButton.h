/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
 */

@interface SKUIItemOfferButton : UIControl <SKUIViewElementOfferButton> {
    UIColor * _backgroundColor;
    double  _borderColorAlphaMultiplier;
    bool  _borderCornerRadiusMatchesHalfBoundingDimension;
    UIView * _borderView;
    UIImage * _borderedImage;
    UIImageView * _borderedImageView;
    SKUIBuyButtonDescriptor * _buttonDescriptor;
    NSString * _buyType;
    SKUIFocusedTouchGestureRecognizer * _cancelGestureRecognizer;
    id /* block */  _centerImageProvider;
    UIImage * _cloudImage;
    UIColor * _cloudTintColor;
    UIColor * _confirmationColor;
    NSMutableAttributedString * _confirmationTitleAttributedString;
    struct CGSize { 
        double width; 
        double height; 
    }  _confirmationTitleFitSize;
    long long  _confirmationTitleStyle;
    <SKUIItemOfferButtonDelegate> * _delegate;
    bool  _disabledButSelectable;
    bool  _downloadRestores;
    SKUIButtonViewElement * _element;
    long long  _fillStyle;
    UIImage * _image;
    UIImageView * _imageView;
    NSString * _offerButtonStateDescription;
    double  _progress;
    SKUICircleProgressIndicator * _progressIndicator;
    bool  _showsConfirmationState;
    NSMutableAttributedString * _titleAttributedString;
    struct CGSize { 
        double width; 
        double height; 
    }  _titleFitSize;
    UILabel * _titleLabel;
    long long  _titleStyle;
    bool  _universal;
    UIImageView * _universalImageView;
    bool  _usesDrawRectPath;
}

@property (nonatomic) double borderColorAlphaMultiplier;
@property (nonatomic, retain) UIImage *borderedImage;
@property (nonatomic, retain) SKUIBuyButtonDescriptor *buttonDescriptor;
@property (nonatomic, copy) NSString *buyType;
@property (nonatomic, copy) id /* block */ centerImageProvider;
@property (nonatomic, copy) UIColor *cloudTintColor;
@property (nonatomic, copy) NSString *confirmationTitle;
@property (nonatomic) long long confirmationTitleStyle;
@property (readonly, copy) NSString *debugDescription; /* unknown property attribute: ? */
@property (nonatomic) <SKUIItemOfferButtonDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (getter=isDisabledButSelectable, nonatomic) bool disabledButSelectable;
@property (nonatomic, retain) SKUIButtonViewElement *element;
@property (nonatomic) long long fillStyle;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) UIImage *image;
@property (nonatomic) <SKUIItemOfferButtonDelegate> *itemOfferDelegate;
@property (nonatomic, readonly) NSString *offerButtonStateDescription;
@property (nonatomic) double progress;
@property (nonatomic) long long progressType;
@property (nonatomic, readonly) bool restores;
@property (getter=isShowingConfirmation, nonatomic, readonly) bool showingConfirmation;
@property (nonatomic) bool showsConfirmationState;
@property (readonly) Class superclass;
@property (nonatomic, readonly) bool supportsPlayButton;
@property (nonatomic, copy) NSString *title;
@property (nonatomic) long long titleStyle;
@property (getter=isUniversal, nonatomic) bool universal;

+ (id)_basicAnimationWithKeyPath:(id)arg1;
+ (id)_cachedImageForAttributedTitle:(id)arg1 titleStyle:(long long)arg2 size:(struct CGSize { double x1; double x2; })arg3 fillStyle:(long long)arg4 universal:(bool)arg5 tintColor:(id)arg6 interfaceStyle:(long long)arg7;
+ (id)_defaultTitleAttributes;
+ (id)_imageForAttributedTitle:(id)arg1 titleStyle:(long long)arg2 size:(struct CGSize { double x1; double x2; })arg3 fillStyle:(long long)arg4 universal:(bool)arg5 tintColor:(id)arg6;
+ (id)_imageForProgressType:(long long)arg1;
+ (struct UIEdgeInsets { double x1; double x2; double x3; double x4; })_imageInsetsForProgressType:(long long)arg1;
+ (bool)_sizeMattersForTitleStyle:(long long)arg1;
+ (struct CGSize { double x1; double x2; })_titleSizeThatFitsForSize:(struct CGSize { double x1; double x2; })arg1 titleStyle:(long long)arg2 mutableAttributedString:(id)arg3;
+ (id)_universalPlusImageWithTintColor:(id)arg1;
+ (bool)canOpenItemForItemState:(id)arg1 clientContext:(id)arg2;
+ (id)cloudImageWithTintColor:(id)arg1 arrowTintColor:(id)arg2;
+ (id)cloudTintColorForBackgroundColor:(id)arg1;
+ (id)itemOfferButtonWithAppearance:(id)arg1;
+ (id)localizedTitleForItemState:(id)arg1 clientContext:(id)arg2;
+ (id)playHighlightImageWithTintColor:(id)arg1;
+ (id)playImageWithTintColor:(id)arg1;
+ (id)playTintColorForBackgroundColor:(id)arg1;

- (void).cxx_destruct;
- (void)_adjustViewOrderingForProperties:(id)arg1;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })_borderedImageViewFrame;
- (id)_buttonPropertiesForState:(id)arg1;
- (void)_cancelGestureAction:(id)arg1;
- (double)_horizontalInsetForTitleStyle:(long long)arg1;
- (id)_imageForProgressType:(long long)arg1;
- (void)_insertBorderView;
- (void)_insertBorderedImageView;
- (void)_insertCancelGestureRecognizer;
- (void)_insertImageView;
- (void)_insertLabel;
- (void)_insertProgressIndicator;
- (void)_insertUniversalView;
- (void)_reloadForCurrentState:(bool)arg1;
- (void)_removeAllAnimations:(bool)arg1;
- (void)_removeCancelGestureRecognizer;
- (void)_sendDidAnimate;
- (void)_sendWillAnimate;
- (bool)_touchInBounds:(id)arg1;
- (void)_transitionFromBorderedImage:(id)arg1 toTitle:(id)arg2 withDuration:(double)arg3 completion:(id /* block */)arg4;
- (void)_transitionFromImage:(id)arg1 toImage:(id)arg2 withDuration:(double)arg3 completion:(id /* block */)arg4;
- (void)_transitionFromProgress:(id)arg1 toProgress:(id)arg2 withDuration:(double)arg3 completion:(id /* block */)arg4;
- (void)_transitionFromProgress:(id)arg1 toTitleOrImage:(id)arg2 withDuration:(double)arg3 completion:(id /* block */)arg4;
- (void)_transitionFromTitle:(id)arg1 toTitle:(id)arg2 withDuration:(double)arg3 completion:(id /* block */)arg4;
- (void)_transitionFromTitleOrImage:(id)arg1 toProgress:(id)arg2 withDuration:(double)arg3 completion:(id /* block */)arg4;
- (void)_updateForChangedConfirmationTitleProperty;
- (void)_updateForChangedTitleProperty;
- (bool)beginTrackingWithTouch:(id)arg1 withEvent:(id)arg2;
- (double)borderColorAlphaMultiplier;
- (id)borderedImage;
- (id)buttonDescriptor;
- (id)buyType;
- (void)cancelTrackingWithEvent:(id)arg1;
- (id /* block */)centerImageProvider;
- (id)cloudTintColor;
- (id)confirmationTitle;
- (long long)confirmationTitleStyle;
- (bool)continueTrackingWithTouch:(id)arg1 withEvent:(id)arg2;
- (void)dealloc;
- (id)delegate;
- (void)didMoveToWindow;
- (void)drawRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (id)element;
- (void)endTrackingWithTouch:(id)arg1 withEvent:(id)arg2;
- (long long)fillStyle;
- (bool)hasBorderedImage;
- (bool)hasNonBorderedImage;
- (id)image;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (bool)isDisabledButSelectable;
- (bool)isShowingConfirmation;
- (bool)isUniversal;
- (id)itemOfferDelegate;
- (struct CGSize { double x1; double x2; })layoutSizeThatFits:(struct CGSize { double x1; double x2; })arg1;
- (void)layoutSubviews;
- (id)offerButtonStateDescription;
- (double)progress;
- (long long)progressType;
- (void)removeButtonStateAnimations;
- (bool)restores;
- (void)setBackgroundColor:(id)arg1;
- (void)setBorderColorAlphaMultiplier:(double)arg1;
- (void)setBorderedImage:(id)arg1;
- (void)setButtonDescriptor:(id)arg1;
- (void)setBuyType:(id)arg1;
- (void)setCenterImageProvider:(id /* block */)arg1;
- (void)setCloudTintColor:(id)arg1;
- (void)setColoringWithAppearance:(id)arg1;
- (void)setConfirmationTitle:(id)arg1;
- (void)setConfirmationTitleStyle:(long long)arg1;
- (void)setDelegate:(id)arg1;
- (void)setDisabledButSelectable:(bool)arg1;
- (void)setElement:(id)arg1;
- (void)setEnabled:(bool)arg1;
- (void)setFillStyle:(long long)arg1;
- (void)setFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)setImage:(id)arg1;
- (void)setItemOfferDelegate:(id)arg1;
- (void)setProgress:(double)arg1;
- (void)setProgress:(double)arg1 animated:(bool)arg2;
- (void)setProgressType:(long long)arg1;
- (void)setProgressType:(long long)arg1 animated:(bool)arg2;
- (void)setShowingConfirmation:(bool)arg1 animated:(bool)arg2;
- (void)setShowsConfirmationState:(bool)arg1;
- (void)setTitle:(id)arg1;
- (bool)setTitle:(id)arg1 confirmationTitle:(id)arg2 itemState:(id)arg3 clientContext:(id)arg4 animated:(bool)arg5;
- (void)setTitleStyle:(long long)arg1;
- (void)setUniversal:(bool)arg1;
- (bool)setValuesUsingBuyButtonDescriptor:(id)arg1 itemState:(id)arg2 clientContext:(id)arg3 animated:(bool)arg4;
- (bool)setValuesUsingItemOffer:(id)arg1 itemState:(id)arg2 clientContext:(id)arg3 animated:(bool)arg4;
- (void)showCloudImage;
- (bool)showsConfirmationState;
- (struct CGSize { double x1; double x2; })sizeThatFits:(struct CGSize { double x1; double x2; })arg1;
- (bool)supportsPlayButton;
- (void)tintColorDidChange;
- (id)title;
- (long long)titleStyle;

@end
