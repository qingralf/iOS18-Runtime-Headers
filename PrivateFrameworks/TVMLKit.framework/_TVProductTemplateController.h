/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/TVMLKit.framework/TVMLKit
 */

@interface _TVProductTemplateController : _TVBgImageLoadingViewController <CAAnimationDelegate, TVAppTemplateImpressionable, UICollectionViewDataSource, UICollectionViewDelegate, UICollectionViewDelegateFlowLayout, UIPopoverPresentationControllerDelegate> {
    NSIndexPath * _autoHighlightIndexPath;
    IKViewElement * _backdropTintElement;
    UIView * _backdropTintView;
    UIViewController * _backdropTintViewController;
    UIView * _backdropView;
    _TVProductCollectionViewCell * _bannerCell;
    UIViewController * _bannerViewController;
    IKAudioElement * _bgAudioElement;
    CALayer * _bgBlurSublayer;
    UIImage * _bgImage;
    IKImageElement * _bgImageElement;
    UIImageView * _bgImageView;
    UICollectionView * _collectionView;
    bool  _fadedIn;
    IKImageElement * _heroImageElement;
    double  _impressionThreshold;
    IKViewElement * _infoListElement;
    bool  _isPartialScrollingTemplate;
    double  _largeTitleHeight;
    NSIndexPath * _lastFocusedIndexPath;
    bool  _lightStatusBar;
    struct CGSize { 
        double width; 
        double height; 
    }  _preloadContentSize;
    bool  _preloadOnLayout;
    IKViewElement * _productBannerElement;
    double  _productBannerHeight;
    NSArray * _rowSpacingMetricsList;
    bool  _sportsProductTemplate;
    IKViewElement * _templateElement;
    IKViewElement * _titleElement;
    UIImageView * _topHeroGradientView;
    IKImageElement * _topHeroImageElement;
    UIImageView * _topHeroImageView;
    bool  _topHeroImageVisible;
    UIView * _topHeroSeparatorView;
    UIImageView * _tvVignetteView;
    NSArray * _viewControllers;
    UIImageView * _vignetteView;
}

@property (readonly, copy) NSString *debugDescription; /* unknown property attribute: ? */
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)_adamIDForElement:(id)arg1;
- (id)_backgroundImageProxy;
- (struct CGSize { double x1; double x2; })_backgroundImageProxySize;
- (bool)_backgroundImageRequiresBlur;
- (long long)_blurEffectStyle;
- (void)_cancelImpressionsUpdate;
- (id)_canonicalIDForElement:(id)arg1;
- (struct UIEdgeInsets { double x1; double x2; double x3; double x4; })_cellMarginForIndex:(long long)arg1 partialMargins:(struct UIEdgeInsets { double x1; double x2; double x3; double x4; }*)arg2;
- (void)_configureBackgroundTintView;
- (void)_configureTopHeroImage:(id)arg1;
- (void)_configureWithBannerElement:(id)arg1;
- (void)_configureWithBgElement:(id)arg1;
- (void)_configureWithBgImage:(id)arg1 backdropImage:(id)arg2;
- (bool)_isBackdropNeeded;
- (double)_largeTitleHeight;
- (unsigned long long)_lastFocusableCellIndex;
- (struct CGSize { double x1; double x2; })_maxContentSize;
- (long long)_overrideLargeTitleDisplayMode;
- (void)_recordImpressionsForVisibleView;
- (id)_relatedSectionHeaderView;
- (bool)_shouldShowTopHeroImage;
- (bool)_shouldUsePartialScrollingTemplate;
- (id)_spacingMetricsForViewControllers:(id)arg1 contentSize:(struct CGSize { double x1; double x2; }*)arg2;
- (bool)_sportsLandscapePhone;
- (bool)_sportsLandscapePhoneIsOverlaySection:(id)arg1;
- (struct CGSize { double x1; double x2; })_topHeroImageViewSize;
- (void)_updateBackgroundTintView;
- (void)_updateBackgroundTintViewEffects;
- (void)_updateImpressions;
- (void)_updateTopHeroImageOverlay;
- (void)_updateTopHeroImageVisibility:(id)arg1;
- (id)_yOffsetForView:(id)arg1 withScrollView:(id)arg2 targetYOffset:(double)arg3;
- (void)animationDidStop:(id)arg1 finished:(bool)arg2;
- (bool)automaticallyAdjustsScrollViewInsets;
- (id)collectionView:(id)arg1 cellForItemAtIndexPath:(id)arg2;
- (void)collectionView:(id)arg1 didEndDisplayingCell:(id)arg2 forItemAtIndexPath:(id)arg3;
- (void)collectionView:(id)arg1 didHighlightItemAtIndexPath:(id)arg2;
- (struct UIEdgeInsets { double x1; double x2; double x3; double x4; })collectionView:(id)arg1 layout:(id)arg2 insetForSectionAtIndex:(long long)arg3;
- (struct CGSize { double x1; double x2; })collectionView:(id)arg1 layout:(id)arg2 referenceSizeForHeaderInSection:(long long)arg3;
- (struct CGSize { double x1; double x2; })collectionView:(id)arg1 layout:(id)arg2 sizeForItemAtIndexPath:(id)arg3;
- (long long)collectionView:(id)arg1 numberOfItemsInSection:(long long)arg2;
- (bool)collectionView:(id)arg1 shouldHighlightItemAtIndexPath:(id)arg2;
- (id)collectionView:(id)arg1 viewForSupplementaryElementOfKind:(id)arg2 atIndexPath:(id)arg3;
- (void)collectionView:(id)arg1 willDisplayCell:(id)arg2 forItemAtIndexPath:(id)arg3;
- (void)configureAppearanceTransition;
- (id)impressionableElementsContainedInDocument:(id)arg1;
- (id)indexPathForPreferredFocusedViewInCollectionView:(id)arg1;
- (void)loadView;
- (long long)numberOfSectionsInCollectionView:(id)arg1;
- (id)preferredFocusEnvironments;
- (long long)preferredStatusBarStyle;
- (long long)preferredStatusBarUpdateAnimation;
- (void)scrollViewDidScroll:(id)arg1;
- (void)scrollViewWillEndDragging:(id)arg1 withVelocity:(struct CGPoint { double x1; double x2; })arg2 targetContentOffset:(inout struct CGPoint { double x1; double x2; }*)arg3;
- (void)updateWithProductTemplate:(id)arg1;
- (void)updateWithViewElement:(id)arg1;
- (void)viewDidAppear:(bool)arg1;
- (void)viewDidDisappear:(bool)arg1;
- (void)viewDidLayoutSubviews;
- (void)viewWillAppear:(bool)arg1;
- (void)viewWillDisappear:(bool)arg1;
- (void)viewWillTransitionToSize:(struct CGSize { double x1; double x2; })arg1 withTransitionCoordinator:(id)arg2;

@end
