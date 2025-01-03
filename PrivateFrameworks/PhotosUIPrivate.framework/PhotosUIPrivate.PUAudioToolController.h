/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/PhotosUIPrivate.framework/PhotosUIPrivate
 */

@interface PhotosUIPrivate.PUAudioToolController : PUPhotoEditToolController <CEKSliderDelegate, UICollectionViewDataSource, UICollectionViewDelegateFlowLayout> {
    void audioMixModeCollectionView;
    void audioMixModeCollectionViewContainerView;
    void audioMixModes;
    void dialogMixBiasCache;
    void gradientMask;
    void isPerformingLiveInteractionWithSlider;
    void mixBiasLabel;
    void mixBiasLabelAlwaysVisible;
    void muteButton;
    void slider;
    void sliderSnappingController;
    void toolTitleLabel;
}

@property (nonatomic, readonly) UIView *centerToolbarView;
@property (nonatomic, readonly) NSArray *leadingToolbarViews;
@property (nonatomic, readonly) NSString *localizedName;
@property (nonatomic, readonly) NSString *selectedToolbarIconGlyphName;
@property (nonatomic, readonly) long long toolControllerTag;
@property (nonatomic, readonly) NSString *toolbarIconAccessibilityLabel;
@property (nonatomic, readonly) NSString *toolbarIconGlyphName;
@property (nonatomic, readonly) bool wantsZoomAndPanEnabled;

- (void).cxx_destruct;
- (id)centerToolbarView;
- (id)collectionView:(id)arg1 cellForItemAtIndexPath:(id)arg2;
- (void)collectionView:(id)arg1 didSelectItemAtIndexPath:(id)arg2;
- (struct CGSize { double x1; double x2; })collectionView:(id)arg1 layout:(id)arg2 sizeForItemAtIndexPath:(id)arg3;
- (long long)collectionView:(id)arg1 numberOfItemsInSection:(long long)arg2;
- (void)compositionControllerDidChangeForAdjustments:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;
- (id)leadingToolbarViews;
- (id)localizedName;
- (id)selectedToolbarIconGlyphName;
- (void)setupWithAsset:(id)arg1 compositionController:(id)arg2 editSource:(id)arg3 valuesCalculator:(id)arg4;
- (void)slider:(id)arg1 willUpdateValue:(double*)arg2 withVelocity:(double)arg3;
- (void)sliderDidEndScrolling:(id)arg1;
- (void)sliderDidScroll:(id)arg1;
- (void)sliderWillBeginScrolling:(id)arg1;
- (void)sliderWillEndScrolling:(id)arg1 withVelocity:(struct CGPoint { double x1; double x2; })arg2 targetContentOffset:(struct CGPoint { double x1; double x2; }*)arg3;
- (long long)toolControllerTag;
- (id)toolbarIconAccessibilityLabel;
- (id)toolbarIconGlyphName;
- (void)viewDidAppear:(bool)arg1;
- (void)viewDidLayoutSubviews;
- (void)viewDidLoad;
- (void)viewWillAppear:(bool)arg1;
- (bool)wantsZoomAndPanEnabled;

@end
