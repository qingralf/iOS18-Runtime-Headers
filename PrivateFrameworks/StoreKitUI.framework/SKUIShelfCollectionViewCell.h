/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
 */

@interface SKUIShelfCollectionViewCell : SKUICollectionViewCell <SKUIPerspectiveView> {
    UICollectionView * _collectionView;
    struct UIEdgeInsets { 
        double top; 
        double left; 
        double bottom; 
        double right; 
    }  _contentInset;
    bool  _rendersWithParallax;
    bool  _rendersWithPerspective;
}

@property (nonatomic, retain) UICollectionView *collectionView;
@property (nonatomic) struct UIEdgeInsets { double x1; double x2; double x3; double x4; } contentInset;
@property (readonly, copy) NSString *debugDescription; /* unknown property attribute: ? */
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic) bool rendersWithParallax;
@property (nonatomic) bool rendersWithPerspective;
@property (readonly) Class superclass;

+ (double)maximumPerspectiveHeightForSize:(struct CGSize { double x1; double x2; })arg1;

- (void).cxx_destruct;
- (void)applyLayoutAttributes:(id)arg1;
- (id)collectionView;
- (struct UIEdgeInsets { double x1; double x2; double x3; double x4; })contentInset;
- (void)layoutSubviews;
- (bool)rendersWithParallax;
- (bool)rendersWithPerspective;
- (void)setBackgroundColor:(id)arg1;
- (void)setCollectionView:(id)arg1;
- (void)setContentInset:(struct UIEdgeInsets { double x1; double x2; double x3; double x4; })arg1;
- (void)setPerspectiveTargetView:(id)arg1;
- (void)setRendersWithParallax:(bool)arg1;
- (void)setRendersWithPerspective:(bool)arg1;
- (void)setSemanticContentAttribute:(long long)arg1;
- (void)setVanishingPoint:(struct CGPoint { double x1; double x2; })arg1;
- (void)updateForChangedDistanceFromVanishingPoint;

@end
