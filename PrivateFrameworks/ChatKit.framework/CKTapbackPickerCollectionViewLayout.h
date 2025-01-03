/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/ChatKit.framework/ChatKit
 */

@interface CKTapbackPickerCollectionViewLayout : UICollectionViewCompositionalLayout {
    void $__lazy_storage_$_dynamicAnimator;
    void lastPanGestureRecognizerPositionInCollectionViewCoordinates;
    void tapbackPickerLayoutDelegate;
}

- (void).cxx_destruct;
- (id)initWithCoder:(id)arg1;
- (id)initWithSection:(id)arg1;
- (id)initWithSection:(id)arg1 configuration:(id)arg2;
- (id)initWithSection:(id)arg1 sectionProvider:(id /* block */)arg2 configuration:(id)arg3;
- (id)initWithSectionProvider:(id /* block */)arg1;
- (id)initWithSectionProvider:(id /* block */)arg1 configuration:(id)arg2;
- (id)layoutAttributesForElementsInRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (id)layoutAttributesForItemAtIndexPath:(id)arg1;
- (void)prepareLayout;
- (bool)shouldInvalidateLayoutForBoundsChange:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;

@end
