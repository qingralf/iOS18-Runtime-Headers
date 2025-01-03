/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/TVMLKit.framework/TVMLKit
 */

@interface _TVCarouselViewController : UIViewController <TVAppTemplateImpressionable, TVCarouselViewDataSource, TVCarouselViewDelegate, TVCollectionViewLockupCellDelegate> {
    TVCarouselLayout * _carouselLayout;
    _TVCarouselView * _carouselView;
    IKCollectionElement * _collectionElement;
    struct { 
        bool didAppear; 
        bool indexesDirty; 
    }  _flags;
    IKViewElement * _headerElement;
}

@property (readonly, copy) NSString *debugDescription; /* unknown property attribute: ? */
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

+ (id)headerElementFromCollectionElement:(id)arg1;

- (void).cxx_destruct;
- (void)_applicationDidBecomeActive:(id)arg1;
- (void)_applicationWillResignActive:(id)arg1;
- (void)_cancelImpressionsUpdate;
- (void)_dispatchEvent:(id)arg1 forItemAtIndex:(unsigned long long)arg2 cell:(id)arg3;
- (bool)_needsDefaultCarouselCells;
- (void)_playButtonAction:(id)arg1;
- (void)_recordImpressionsForVisibleView;
- (void)_registerCellClasses;
- (void)_selectButtonAction:(id)arg1;
- (void)_updateAutoScrollInterval;
- (void)_updateHeaderView;
- (void)_updateImpressions;
- (void)_updateLayout;
- (void)_updateLayoutAndReload;
- (id)carouselView:(id)arg1 cellForItemAtIndex:(unsigned long long)arg2;
- (void)carouselView:(id)arg1 didEndDisplayingCell:(id)arg2 forItemAtIndex:(unsigned long long)arg3;
- (void)carouselView:(id)arg1 didEndDisplayingItemAtIndex:(unsigned long long)arg2;
- (void)carouselView:(id)arg1 didFocusItemAtIndex:(unsigned long long)arg2;
- (void)carouselView:(id)arg1 didSelectItemAtIndex:(unsigned long long)arg2;
- (void)carouselView:(id)arg1 willDisplayCell:(id)arg2 forItemAtIndex:(unsigned long long)arg3;
- (void)carouselView:(id)arg1 willDisplayItemAtIndex:(unsigned long long)arg2;
- (void)carouselViewDidScroll:(id)arg1;
- (void)centerItemAtPageIndex:(long long)arg1;
- (void)collectionViewCellDidSelect:(id)arg1;
- (void)dealloc;
- (id)impressionableElementsContainedInDocument:(id)arg1;
- (void)loadView;
- (unsigned long long)numberOfItemsInCarouselView:(id)arg1;
- (id)preferredFocusEnvironments;
- (void)updateWithViewElement:(id)arg1 layout:(id)arg2;
- (void)viewDidAppear:(bool)arg1;
- (void)viewDidDisappear:(bool)arg1;
- (struct CGSize { double x1; double x2; })viewSizeThatFits:(struct CGSize { double x1; double x2; })arg1;

@end
