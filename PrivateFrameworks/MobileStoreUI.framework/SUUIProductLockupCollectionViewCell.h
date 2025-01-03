/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/MobileStoreUI.framework/MobileStoreUI
 */

@interface SUUIProductLockupCollectionViewCell : SUUIViewReuseCollectionViewCell <SUUIItemOfferButtonDelegate, SUUIOfferViewDelegate, SUUIPerspectiveView, SUUIViewElementView> {
    NSHashTable * _artworkRelatedChildViewElementViews;
    NSMapTable * _buyButtonDescriptorToButton;
    NSMapTable * _elementViews;
    NSMapTable * _imageViewToImageResourceCacheKey;
    SUUIProductLockupLayout * _layout;
    SUUILockupViewElement * _lockup;
    SUUIGradientView * _offerConfirmationGradientView;
    long long  _offerMetadataPosition;
    NSHashTable * _offerViews;
    NSMutableArray * _segmentedControlControllers;
}

@property (readonly, copy) NSString *debugDescription; /* unknown property attribute: ? */
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

+ (id)_attributedStringForButton:(id)arg1 context:(id)arg2;
+ (id)_attributedStringForLabel:(id)arg1 context:(id)arg2;
+ (void)_requestLayoutForViewElements:(id)arg1 width:(double)arg2 context:(id)arg3;
+ (double)maximumPerspectiveHeightForSize:(struct CGSize { double x1; double x2; })arg1;
+ (struct CGSize { double x1; double x2; })preferredSizeForViewElement:(id)arg1 context:(id)arg2;
+ (bool)prefetchResourcesForViewElement:(id)arg1 reason:(long long)arg2 context:(id)arg3;
+ (void)requestLayoutForViewElement:(id)arg1 width:(double)arg2 context:(id)arg3;
+ (struct CGSize { double x1; double x2; })sizeThatFitsWidth:(double)arg1 viewElement:(id)arg2 context:(id)arg3;

- (void).cxx_destruct;
- (void)_buttonAction:(id)arg1;
- (void)_cancelConfirmationAction:(id)arg1;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })_frameForSection:(long long)arg1;
- (void)_imageTapAction:(id)arg1;
- (void)_layoutConfirmationGradientRelativeToSection:(long long)arg1 alpha:(double)arg2;
- (void)_prepareOfferConfirmationGradientForView:(id)arg1;
- (void)_showConfirmationAction:(id)arg1;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })_stackBottomRightElements:(id)arg1 inRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg2;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })_stackElements:(id)arg1 alignment:(long long)arg2 inRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg3;
- (void)_updateLayoutToAnimateOfferTransitionForView:(id)arg1;
- (id)_viewElementForView:(id)arg1;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)itemOfferButtonDidAnimateTransition:(id)arg1;
- (void)itemOfferButtonWillAnimateTransition:(id)arg1;
- (void)layoutSubviews;
- (bool)offerViewAnimateTransition:(id)arg1;
- (void)offerViewDidAnimateTransition:(id)arg1;
- (void)offerViewWillAnimateTransition:(id)arg1;
- (void)reloadWithViewElement:(id)arg1 width:(double)arg2 context:(id)arg3;
- (bool)setImage:(id)arg1 forArtworkRequest:(id)arg2 context:(id)arg3;
- (void)setPerspectiveTargetView:(id)arg1;
- (void)setVanishingPoint:(struct CGPoint { double x1; double x2; })arg1;
- (void)updateForChangedDistanceFromVanishingPoint;
- (bool)updateWithItemState:(id)arg1 context:(id)arg2 animated:(bool)arg3;
- (id)viewForElementIdentifier:(id)arg1;

@end
