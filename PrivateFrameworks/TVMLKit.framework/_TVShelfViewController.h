/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/TVMLKit.framework/TVMLKit
 */

@interface _TVShelfViewController : _TVMLCollectionViewController <TVShelfViewLayoutDelegate, UICollectionViewDelegateFlowLayout> {
    unsigned long long  _autohighlightScrollPosition;
    bool  _centered;
    bool  _configureForListTemplate;
    <__TVShelfViewControllerDelegate> * _delegate;
    struct { 
        bool hasUpdateRelatedView; 
        bool hasDidSelectItemAtIndexPath; 
        bool hasDidPlayItemAtIndexPath; 
        bool hasDidSettleOnItemAtIndexPath; 
        bool hasDidSnapToItemAtIndexPath; 
        bool hasFocusDependentMethods; 
    }  _delegateFlags;
    double  _lastPreviewDelay;
    NSIndexPath * _lastPreviewedIndexPath;
    long long  _listTemplateAlignment;
    NSIndexPath * _pendingPreviewedIndexPath;
    long long  _prominentSectionIndex;
    unsigned long long  _speedBumpEdges;
}

@property (getter=isCentered, nonatomic) bool centered;
@property (readonly, copy) NSString *debugDescription; /* unknown property attribute: ? */
@property (nonatomic) <__TVShelfViewControllerDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic) bool hideHeader;
@property (nonatomic) long long prominentSectionIndex;
@property (nonatomic) unsigned long long speedBumpEdges;
@property (readonly) Class superclass;

+ (void)_contentForCell:(id)arg1 shouldHide:(bool)arg2;

- (void).cxx_destruct;
- (void)_delayedUpdatePreview;
- (void)_didSettleOnItemAtIndexPath:(id)arg1;
- (id)collectionView:(id)arg1 cellForItemAtIndexPath:(id)arg2;
- (struct UIEdgeInsets { double x1; double x2; double x3; double x4; })collectionView:(id)arg1 layout:(id)arg2 insetForSectionAtIndex:(long long)arg3;
- (struct CGSize { double x1; double x2; })collectionView:(id)arg1 layout:(id)arg2 referenceSizeForHeaderInSection:(long long)arg3;
- (struct CGSize { double x1; double x2; })collectionView:(id)arg1 layout:(id)arg2 sizeForItemAtIndexPath:(id)arg3;
- (id)collectionView:(id)arg1 viewForSupplementaryElementOfKind:(id)arg2 atIndexPath:(id)arg3;
- (void)collectionView:(id)arg1 willDisplayCell:(id)arg2 forItemAtIndexPath:(id)arg3;
- (bool)contentFlowsVertically;
- (id)delegate;
- (void)didMoveToParentViewController:(id)arg1;
- (void)dispatchEvent:(id)arg1 forItemAtIndexPath:(id)arg2 completionBlock:(id /* block */)arg3;
- (struct CGSize { double x1; double x2; })expectedCellSizeForElement:(id)arg1 atIndexPath:(id)arg2;
- (bool)hideHeader;
- (bool)isCentered;
- (id)makeCollectionViewWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (id)preferredFocusEnvironments;
- (unsigned long long)preferredScrollPosition;
- (long long)prominentSectionIndex;
- (void)setCentered:(bool)arg1;
- (void)setDelegate:(id)arg1;
- (void)setHideHeader:(bool)arg1;
- (void)setProminentSectionIndex:(long long)arg1;
- (void)setSpeedBumpEdges:(unsigned long long)arg1;
- (unsigned long long)speedBumpEdges;
- (void)updateFocusInContext:(id)arg1 withAnimationCoordinator:(id)arg2;
- (void)updateViewLayoutAnimated:(bool)arg1 relayout:(bool)arg2;
- (void)updateWithViewElement:(id)arg1;
- (void)updateWithViewElement:(id)arg1 cellMetrics:(struct TVCellMetrics { struct CGSize { double x_1_1_1; double x_1_1_2; } x1; struct UIEdgeInsets { double x_2_1_1; double x_2_1_2; double x_2_1_3; double x_2_1_4; } x2; struct UIEdgeInsets { double x_3_1_1; double x_3_1_2; double x_3_1_3; double x_3_1_4; } x3; struct UIEdgeInsets { double x_4_1_1; double x_4_1_2; double x_4_1_3; double x_4_1_4; } x4; struct UIEdgeInsets { double x_5_1_1; double x_5_1_2; double x_5_1_3; double x_5_1_4; } x5; })arg2;
- (void)viewDidLayoutSubviews;
- (void)viewDidLoad;
- (void)viewWillTransitionToSize:(struct CGSize { double x1; double x2; })arg1 withTransitionCoordinator:(id)arg2;

@end
