/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
 */

@interface PXPhotosViewConfiguration : NSObject <NSCopying> {
    unsigned long long  _allowedActions;
    unsigned long long  _allowedBehaviors;
    unsigned long long  _allowedInteractiveDismissBehaviors;
    bool  _allowsCaptions;
    bool  _allowsDragIn;
    bool  _allowsDragOut;
    bool  _allowsGridAppearanceActions;
    bool  _allowsInteractiveFavoriteBadges;
    bool  _allowsLinkInteractions;
    bool  _allowsMergeDuplicatesAction;
    bool  _allowsMultiSelectMenu;
    bool  _allowsSwipeToSelect;
    bool  _allowsUserDefaults;
    bool  _alwaysIncludeSharedWithYouAssets;
    PXAssetActionManager * _assetActionManager;
    PXAssetCollectionActionManager * _assetCollectionActionManager;
    <PXAssetImportStatusManager> * _assetImportStatusManager;
    long long  _backgroundStyle;
    id /* block */  _badgesModifier;
    id /* block */  _bannerControllerProvider;
    <PXPhotosBannerProvider> * _bannerProvider;
    NSString * _centerAccessoryActionType;
    bool  _containerProvidesSecondaryToolbar;
    NSString * _containerTitle;
    long long  _contentMode;
    long long  _contentShiftStrategy;
    long long  _contentStartingPosition;
    id /* block */  _customAssetSelectionHandler;
    id /* block */  _customDismissHandler;
    <PXZoomablePhotosUserDefaults> * _customUserDefaults;
    long long  _darkModeBackgroundStyle;
    PXAssetsDataSourceManager * _dataSourceManager;
    <PXPhotosCustomViewDecorationDataSource> * _decorationDataSource;
    Class  _decorationViewClass;
    <PXPhotosViewDelegate> * _delegate;
    long long  _dismissAffordance;
    PXStatusViewModel * _emptyPlaceholderStatusViewModel;
    bool  _enableFilterButton;
    bool  _enableSupportForTungstenUnderlay;
    NSURL * _footerLearnMoreURL;
    NSString * _footerSubtitle;
    PXFooterViewModel * _footerViewModel;
    long long  _footerVisibilityStyle;
    unsigned long long  _forbiddenBadges;
    NSArray * _fullscreenOverlayControllers;
    <PXPhotosGlobalHeaderLayoutProvider> * _globalHeaderLayoutProvider;
    unsigned char  _gridPresentationType;
    long long  _gridStyle;
    bool  _hidesAssetCountInFooter;
    bool  _hidesViewOptionsToolbar;
    bool  _ignoreContentFilterStateWhenNotFiltering;
    bool  _ignoreFilterPredicateAssert;
    id /* block */  _infoActionHandler;
    PXSectionedObjectReference * _initialNavigationObjectReference;
    long long  _initialNavigationScrollPosition;
    NSString * _initialScrollPositionDetentIdentifier;
    bool  _isEmbedded;
    double  _itemAspectRatio;
    long long  _lightModeBackgroundStyle;
    PXLoadingStatusManager * _loadingStatusManager;
    bool  _lowMemoryMode;
    PXMediaProvider * _mediaProvider;
    long long  _navBarStyle;
    long long  _noContentPlaceholderType;
    long long  _oneUpPresentationOrigin;
    <PXPhotosOverlayController> * _overlayController;
    long long  _overrideDefaultNumberOfColumns;
    NSString * _pickerClientBundleIdentifier;
    <PXPhotosPreferredAssetCropDelegate> * _preferredAssetCropDelegate;
    <PXPhotosPreferredColumnCountsDelegate> * _preferredColumnCountsDelegate;
    long long  _preferredUserInterfaceStyle;
    bool  _prefersActionsInToolbar;
    bool  _preventShowInAllPhotosAction;
    PXContentPrivacyController * _privacyController;
    Class  _scrollDetentsProviderClass;
    long long  _scrollIndicatorStyle;
    long long  _scrollingBehavior;
    PXSearchQueryMatchInfo * _searchQueryMatchInfo;
    <PXPhotosCustomSectionBodyLayoutProvider> * _sectionBodyLayoutProvider;
    long long  _sectionBodyStyle;
    <PXPhotosSectionHeaderLayoutProvider> * _sectionHeaderLayoutProvider;
    long long  _sectionHeaderStyle;
    long long  _selectionContextOverride;
    PXSectionedSelectionManager * _selectionManager;
    bool  _shouldOptOutOfChromelessBars;
    bool  _showLoadingPlaceholderWhenEmpty;
    bool  _showsOnlyAssetsInSelectedItemSectionInOneUp;
    bool  _startsInSelectMode;
    long long  _summaryStyle;
    <PXTapbackStatusManager> * _tapbackStatusManager;
    NSString * _title;
    long long  _toolbarStyle;
    NSString * _trailingAccessoryActionType;
    bool  _useLowMemoryDecode;
    PXPhotosViewOptionsModel * _viewOptionsModel;
    bool  _wantsAdaptiveSelectModeBarButton;
    bool  _wantsAssetIndexBadge;
    bool  _wantsCPLStatus;
    bool  _wantsContentFilterVisible;
    bool  _wantsDimmedSelectionStyle;
    bool  _wantsDynamicTitles;
    bool  _wantsExternallyRenderedSecondaryToolbar;
    bool  _wantsFileSizeBadge;
    bool  _wantsFooterMask;
    bool  _wantsFooterVisibleImmediately;
    bool  _wantsFooterVisibleWhenEmpty;
    bool  _wantsModernNavBarButtons;
    bool  _wantsNumberedSelectionStyle;
    bool  _wantsOneUpShowInLibraryButton;
    bool  _wantsRenderingStatus;
    bool  _wantsSelectModeCaptionInContextMenu;
    bool  _wantsShareGridButtonVisible;
    bool  _wantsSingleRowScrollingLayout;
    bool  _wantsTabBarHidden;
    bool  _wantsTitleInNavigationBar;
}

@property (nonatomic) unsigned long long allowedActions;
@property (nonatomic) unsigned long long allowedBehaviors;
@property (nonatomic) unsigned long long allowedInteractiveDismissBehaviors;
@property (nonatomic) bool allowsCaptions;
@property (nonatomic) bool allowsDragAndDrop;
@property (nonatomic) bool allowsDragIn;
@property (nonatomic) bool allowsDragOut;
@property (nonatomic) bool allowsGridAppearanceActions;
@property (nonatomic) bool allowsInteractiveFavoriteBadges;
@property (nonatomic) bool allowsLinkInteractions;
@property (nonatomic) bool allowsMergeDuplicatesAction;
@property (nonatomic) bool allowsMultiSelectMenu;
@property (nonatomic) bool allowsSwipeToSelect;
@property (nonatomic) bool allowsUserDefaults;
@property (nonatomic) bool alwaysIncludeSharedWithYouAssets;
@property (nonatomic, readonly) PXAssetActionManager *assetActionManager;
@property (nonatomic, readonly) PXAssetCollectionActionManager *assetCollectionActionManager;
@property (nonatomic, retain) <PXAssetImportStatusManager> *assetImportStatusManager;
@property (nonatomic) long long backgroundStyle;
@property (nonatomic, copy) id /* block */ badgesModifier;
@property (nonatomic, copy) id /* block */ bannerControllerProvider;
@property (nonatomic, retain) <PXPhotosBannerProvider> *bannerProvider;
@property (nonatomic, copy) NSString *centerAccessoryActionType;
@property (nonatomic) bool containerProvidesSecondaryToolbar;
@property (nonatomic, copy) NSString *containerTitle;
@property (nonatomic) long long contentMode;
@property (nonatomic) long long contentShiftStrategy;
@property (nonatomic) long long contentStartingPosition;
@property (nonatomic, copy) id /* block */ customAssetSelectionHandler;
@property (nonatomic, copy) id /* block */ customDismissHandler;
@property (nonatomic, retain) <PXZoomablePhotosUserDefaults> *customUserDefaults;
@property (nonatomic) long long darkModeBackgroundStyle;
@property (nonatomic, readonly) PXAssetsDataSourceManager *dataSourceManager;
@property (nonatomic, retain) <PXPhotosCustomViewDecorationDataSource> *decorationDataSource;
@property (nonatomic, retain) Class decorationViewClass;
@property (nonatomic) <PXPhotosViewDelegate> *delegate;
@property (nonatomic) long long dismissAffordance;
@property (nonatomic, retain) PXStatusViewModel *emptyPlaceholderStatusViewModel;
@property (nonatomic) bool enableFilterButton;
@property (nonatomic) bool enableSupportForTungstenUnderlay;
@property (nonatomic, copy) NSURL *footerLearnMoreURL;
@property (nonatomic, copy) NSString *footerSubtitle;
@property (nonatomic, retain) PXFooterViewModel *footerViewModel;
@property (nonatomic) long long footerVisibilityStyle;
@property (nonatomic) unsigned long long forbiddenBadges;
@property (nonatomic, copy) NSArray *fullscreenOverlayControllers;
@property (nonatomic, retain) <PXPhotosGlobalHeaderLayoutProvider> *globalHeaderLayoutProvider;
@property (nonatomic) unsigned char gridPresentationType;
@property (nonatomic) long long gridStyle;
@property (nonatomic) bool hidesAssetCountInFooter;
@property (nonatomic) bool hidesViewOptionsToolbar;
@property (nonatomic) bool ignoreContentFilterStateWhenNotFiltering;
@property (nonatomic) bool ignoreFilterPredicateAssert;
@property (nonatomic, copy) id /* block */ infoActionHandler;
@property (nonatomic, retain) PXSectionedObjectReference *initialNavigationObjectReference;
@property (nonatomic) long long initialNavigationScrollPosition;
@property (nonatomic, copy) NSString *initialScrollPositionDetentIdentifier;
@property (nonatomic) bool isEmbedded;
@property (nonatomic) double itemAspectRatio;
@property (nonatomic) long long lightModeBackgroundStyle;
@property (nonatomic, retain) PXLoadingStatusManager *loadingStatusManager;
@property (nonatomic) bool lowMemoryMode;
@property (nonatomic, readonly) PXMediaProvider *mediaProvider;
@property (nonatomic) long long navBarStyle;
@property (nonatomic) long long noContentPlaceholderType;
@property (nonatomic) long long oneUpPresentationOrigin;
@property (nonatomic, retain) <PXPhotosOverlayController> *overlayController;
@property (nonatomic) long long overrideDefaultNumberOfColumns;
@property (nonatomic, copy) NSString *pickerClientBundleIdentifier;
@property (nonatomic) <PXPhotosPreferredAssetCropDelegate> *preferredAssetCropDelegate;
@property (nonatomic) long long preferredBackgroundStyle;
@property (nonatomic) <PXPhotosPreferredColumnCountsDelegate> *preferredColumnCountsDelegate;
@property (nonatomic) long long preferredUserInterfaceStyle;
@property (nonatomic) bool prefersActionsInToolbar;
@property (nonatomic) bool preventShowInAllPhotosAction;
@property (nonatomic, retain) PXContentPrivacyController *privacyController;
@property (nonatomic, retain) Class scrollDetentsProviderClass;
@property (nonatomic) long long scrollIndicatorStyle;
@property (nonatomic) long long scrollingBehavior;
@property (nonatomic, copy) PXSearchQueryMatchInfo *searchQueryMatchInfo;
@property (nonatomic, retain) <PXPhotosCustomSectionBodyLayoutProvider> *sectionBodyLayoutProvider;
@property (nonatomic) long long sectionBodyStyle;
@property (nonatomic, retain) <PXPhotosSectionHeaderLayoutProvider> *sectionHeaderLayoutProvider;
@property (nonatomic) long long sectionHeaderStyle;
@property (nonatomic) long long selectionContextOverride;
@property (nonatomic, readonly) PXSectionedSelectionManager *selectionManager;
@property (nonatomic) bool shouldOptOutOfChromelessBars;
@property (nonatomic) bool showLoadingPlaceholderWhenEmpty;
@property (nonatomic) bool showsOnlyAssetsInSelectedItemSectionInOneUp;
@property (nonatomic) bool startsInSelectMode;
@property (nonatomic) long long summaryStyle;
@property (nonatomic, retain) <PXTapbackStatusManager> *tapbackStatusManager;
@property (nonatomic, copy) NSString *title;
@property (nonatomic) long long toolbarStyle;
@property (nonatomic, copy) NSString *trailingAccessoryActionType;
@property (nonatomic) bool useLowMemoryDecode;
@property (nonatomic, retain) PXPhotosViewOptionsModel *viewOptionsModel;
@property (nonatomic) bool wantsAdaptiveSelectModeBarButton;
@property (nonatomic) bool wantsAssetIndexBadge;
@property (nonatomic) bool wantsCPLStatus;
@property (nonatomic) bool wantsContentFilterVisible;
@property (nonatomic) bool wantsDimmedSelectionStyle;
@property (nonatomic) bool wantsDynamicTitles;
@property (nonatomic) bool wantsExternallyRenderedSecondaryToolbar;
@property (nonatomic) bool wantsFileSizeBadge;
@property (nonatomic) bool wantsFooterMask;
@property (nonatomic) bool wantsFooterVisibleImmediately;
@property (nonatomic) bool wantsFooterVisibleWhenEmpty;
@property (nonatomic) bool wantsModernNavBarButtons;
@property (nonatomic) bool wantsNumberedSelectionStyle;
@property (nonatomic) bool wantsOneUpShowInLibraryButton;
@property (nonatomic) bool wantsRenderingStatus;
@property (nonatomic) bool wantsSelectModeCaptionInContextMenu;
@property (nonatomic) bool wantsShareGridButtonVisible;
@property (nonatomic) bool wantsSingleRowScrollingLayout;
@property (nonatomic) bool wantsTabBarHidden;
@property (nonatomic) bool wantsTitleInNavigationBar;

- (void).cxx_destruct;
- (id)adjustedExtendedTraitCollection:(id)arg1;
- (unsigned long long)allowedActions;
- (unsigned long long)allowedBehaviors;
- (unsigned long long)allowedInteractiveDismissBehaviors;
- (bool)allowsCaptions;
- (bool)allowsDragAndDrop;
- (bool)allowsDragIn;
- (bool)allowsDragOut;
- (bool)allowsGridAppearanceActions;
- (bool)allowsInteractiveFavoriteBadges;
- (bool)allowsLinkInteractions;
- (bool)allowsMergeDuplicatesAction;
- (bool)allowsMultiSelectMenu;
- (bool)allowsSwipeToSelect;
- (bool)allowsUserDefaults;
- (bool)alwaysIncludeSharedWithYouAssets;
- (id)assetActionManager;
- (id)assetCollectionActionManager;
- (id)assetImportStatusManager;
- (long long)backgroundStyle;
- (id /* block */)badgesModifier;
- (id /* block */)bannerControllerProvider;
- (id)bannerProvider;
- (id)centerAccessoryActionType;
- (bool)containerProvidesSecondaryToolbar;
- (id)containerTitle;
- (long long)contentMode;
- (long long)contentShiftStrategy;
- (long long)contentStartingPosition;
- (void)copySwiftPropertiesFromConfiguration:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id /* block */)customAssetSelectionHandler;
- (id /* block */)customDismissHandler;
- (id)customUserDefaults;
- (long long)darkModeBackgroundStyle;
- (id)dataSourceManager;
- (id)decorationDataSource;
- (Class)decorationViewClass;
- (id)delegate;
- (long long)dismissAffordance;
- (id)emptyPlaceholderStatusViewModel;
- (bool)enableFilterButton;
- (bool)enableSupportForTungstenUnderlay;
- (id)footerLearnMoreURL;
- (id)footerSubtitle;
- (id)footerViewModel;
- (long long)footerVisibilityStyle;
- (unsigned long long)forbiddenBadges;
- (id)fullscreenOverlayControllers;
- (id)globalHeaderLayoutProvider;
- (unsigned char)gridPresentationType;
- (long long)gridStyle;
- (bool)hidesAssetCountInFooter;
- (bool)hidesViewOptionsToolbar;
- (bool)ignoreContentFilterStateWhenNotFiltering;
- (bool)ignoreFilterPredicateAssert;
- (id /* block */)infoActionHandler;
- (id)init;
- (id)initWithDataSourceManager:(id)arg1 mediaProvider:(id)arg2 selectionManager:(id)arg3 assetActionManager:(id)arg4 assetCollectionActionManager:(id)arg5;
- (id)initialNavigationObjectReference;
- (long long)initialNavigationScrollPosition;
- (id)initialScrollPositionDetentIdentifier;
- (bool)isEmbedded;
- (double)itemAspectRatio;
- (long long)lightModeBackgroundStyle;
- (id)loadingStatusManager;
- (bool)lowMemoryMode;
- (id)mediaProvider;
- (long long)navBarStyle;
- (long long)noContentPlaceholderType;
- (long long)oneUpPresentationOrigin;
- (id)overlayController;
- (long long)overrideDefaultNumberOfColumns;
- (id)pickerClientBundleIdentifier;
- (id)preferredAssetCropDelegate;
- (long long)preferredBackgroundStyle;
- (id)preferredColumnCountsDelegate;
- (long long)preferredUserInterfaceStyle;
- (bool)prefersActionsInToolbar;
- (bool)preventShowInAllPhotosAction;
- (id)privacyController;
- (Class)scrollDetentsProviderClass;
- (long long)scrollIndicatorStyle;
- (long long)scrollingBehavior;
- (id)searchQueryMatchInfo;
- (id)sectionBodyLayoutProvider;
- (long long)sectionBodyStyle;
- (id)sectionHeaderLayoutProvider;
- (long long)sectionHeaderStyle;
- (long long)selectionContextOverride;
- (id)selectionManager;
- (void)setAllowedActions:(unsigned long long)arg1;
- (void)setAllowedBehaviors:(unsigned long long)arg1;
- (void)setAllowedInteractiveDismissBehaviors:(unsigned long long)arg1;
- (void)setAllowsCaptions:(bool)arg1;
- (void)setAllowsDragAndDrop:(bool)arg1;
- (void)setAllowsDragIn:(bool)arg1;
- (void)setAllowsDragOut:(bool)arg1;
- (void)setAllowsGridAppearanceActions:(bool)arg1;
- (void)setAllowsInteractiveFavoriteBadges:(bool)arg1;
- (void)setAllowsLinkInteractions:(bool)arg1;
- (void)setAllowsMergeDuplicatesAction:(bool)arg1;
- (void)setAllowsMultiSelectMenu:(bool)arg1;
- (void)setAllowsSwipeToSelect:(bool)arg1;
- (void)setAllowsUserDefaults:(bool)arg1;
- (void)setAlwaysIncludeSharedWithYouAssets:(bool)arg1;
- (void)setAssetImportStatusManager:(id)arg1;
- (void)setBackgroundStyle:(long long)arg1;
- (void)setBadgesModifier:(id /* block */)arg1;
- (void)setBannerControllerProvider:(id /* block */)arg1;
- (void)setBannerProvider:(id)arg1;
- (void)setCenterAccessoryActionType:(id)arg1;
- (void)setContainerProvidesSecondaryToolbar:(bool)arg1;
- (void)setContainerTitle:(id)arg1;
- (void)setContentMode:(long long)arg1;
- (void)setContentShiftStrategy:(long long)arg1;
- (void)setContentStartingPosition:(long long)arg1;
- (void)setCustomAssetSelectionHandler:(id /* block */)arg1;
- (void)setCustomDismissHandler:(id /* block */)arg1;
- (void)setCustomUserDefaults:(id)arg1;
- (void)setDarkModeBackgroundStyle:(long long)arg1;
- (void)setDecorationDataSource:(id)arg1;
- (void)setDecorationViewClass:(Class)arg1;
- (void)setDelegate:(id)arg1;
- (void)setDismissAffordance:(long long)arg1;
- (void)setEmptyPlaceholderStatusViewModel:(id)arg1;
- (void)setEnableFilterButton:(bool)arg1;
- (void)setEnableSupportForTungstenUnderlay:(bool)arg1;
- (void)setFooterLearnMoreURL:(id)arg1;
- (void)setFooterSubtitle:(id)arg1;
- (void)setFooterViewModel:(id)arg1;
- (void)setFooterVisibilityStyle:(long long)arg1;
- (void)setForbiddenBadges:(unsigned long long)arg1;
- (void)setFullscreenOverlayControllers:(id)arg1;
- (void)setGlobalHeaderLayoutProvider:(id)arg1;
- (void)setGridPresentationType:(unsigned char)arg1;
- (void)setGridStyle:(long long)arg1;
- (void)setHidesAssetCountInFooter:(bool)arg1;
- (void)setHidesViewOptionsToolbar:(bool)arg1;
- (void)setIgnoreContentFilterStateWhenNotFiltering:(bool)arg1;
- (void)setIgnoreFilterPredicateAssert:(bool)arg1;
- (void)setInfoActionHandler:(id /* block */)arg1;
- (void)setInitialNavigationObjectReference:(id)arg1;
- (void)setInitialNavigationScrollPosition:(long long)arg1;
- (void)setInitialScrollPositionDetentIdentifier:(id)arg1;
- (void)setIsEmbedded:(bool)arg1;
- (void)setItemAspectRatio:(double)arg1;
- (void)setLightModeBackgroundStyle:(long long)arg1;
- (void)setLoadingStatusManager:(id)arg1;
- (void)setLowMemoryMode:(bool)arg1;
- (void)setNavBarStyle:(long long)arg1;
- (void)setNoContentPlaceholderType:(long long)arg1;
- (void)setOneUpPresentationOrigin:(long long)arg1;
- (void)setOverlayController:(id)arg1;
- (void)setOverrideDefaultNumberOfColumns:(long long)arg1;
- (void)setPickerClientBundleIdentifier:(id)arg1;
- (void)setPreferredAssetCropDelegate:(id)arg1;
- (void)setPreferredBackgroundStyle:(long long)arg1;
- (void)setPreferredColumnCountsDelegate:(id)arg1;
- (void)setPreferredUserInterfaceStyle:(long long)arg1;
- (void)setPrefersActionsInToolbar:(bool)arg1;
- (void)setPreventShowInAllPhotosAction:(bool)arg1;
- (void)setPrivacyController:(id)arg1;
- (void)setScrollDetentsProviderClass:(Class)arg1;
- (void)setScrollIndicatorStyle:(long long)arg1;
- (void)setScrollingBehavior:(long long)arg1;
- (void)setSearchQueryMatchInfo:(id)arg1;
- (void)setSectionBodyLayoutProvider:(id)arg1;
- (void)setSectionBodyStyle:(long long)arg1;
- (void)setSectionHeaderLayoutProvider:(id)arg1;
- (void)setSectionHeaderStyle:(long long)arg1;
- (void)setSelectionContextOverride:(long long)arg1;
- (void)setShouldOptOutOfChromelessBars:(bool)arg1;
- (void)setShowLoadingPlaceholderWhenEmpty:(bool)arg1;
- (void)setShowsOnlyAssetsInSelectedItemSectionInOneUp:(bool)arg1;
- (void)setStartsInSelectMode:(bool)arg1;
- (void)setSummaryStyle:(long long)arg1;
- (void)setTapbackStatusManager:(id)arg1;
- (void)setTitle:(id)arg1;
- (void)setToolbarStyle:(long long)arg1;
- (void)setTrailingAccessoryActionType:(id)arg1;
- (void)setUseLowMemoryDecode:(bool)arg1;
- (void)setViewOptionsModel:(id)arg1;
- (void)setWantsAdaptiveSelectModeBarButton:(bool)arg1;
- (void)setWantsAssetIndexBadge:(bool)arg1;
- (void)setWantsCPLStatus:(bool)arg1;
- (void)setWantsContentFilterVisible:(bool)arg1;
- (void)setWantsDimmedSelectionStyle:(bool)arg1;
- (void)setWantsDynamicTitles:(bool)arg1;
- (void)setWantsExternallyRenderedSecondaryToolbar:(bool)arg1;
- (void)setWantsFileSizeBadge:(bool)arg1;
- (void)setWantsFooterMask:(bool)arg1;
- (void)setWantsFooterVisibleImmediately:(bool)arg1;
- (void)setWantsFooterVisibleWhenEmpty:(bool)arg1;
- (void)setWantsModernNavBarButtons:(bool)arg1;
- (void)setWantsNumberedSelectionStyle:(bool)arg1;
- (void)setWantsOneUpShowInLibraryButton:(bool)arg1;
- (void)setWantsRenderingStatus:(bool)arg1;
- (void)setWantsSelectModeCaptionInContextMenu:(bool)arg1;
- (void)setWantsShareGridButtonVisible:(bool)arg1;
- (void)setWantsSingleRowScrollingLayout:(bool)arg1;
- (void)setWantsTabBarHidden:(bool)arg1;
- (void)setWantsTitleInNavigationBar:(bool)arg1;
- (bool)shouldOptOutOfChromelessBars;
- (bool)showLoadingPlaceholderWhenEmpty;
- (bool)showsOnlyAssetsInSelectedItemSectionInOneUp;
- (bool)startsInSelectMode;
- (long long)summaryStyle;
- (id)tapbackStatusManager;
- (id)title;
- (long long)toolbarStyle;
- (id)trailingAccessoryActionType;
- (bool)useLowMemoryDecode;
- (id)viewOptionsModel;
- (bool)wantsAdaptiveSelectModeBarButton;
- (bool)wantsAssetIndexBadge;
- (bool)wantsCPLStatus;
- (bool)wantsContentFilterVisible;
- (bool)wantsDimmedSelectionStyle;
- (bool)wantsDynamicTitles;
- (bool)wantsExternallyRenderedSecondaryToolbar;
- (bool)wantsFileSizeBadge;
- (bool)wantsFooterMask;
- (bool)wantsFooterVisibleImmediately;
- (bool)wantsFooterVisibleWhenEmpty;
- (bool)wantsModernNavBarButtons;
- (bool)wantsNumberedSelectionStyle;
- (bool)wantsOneUpShowInLibraryButton;
- (bool)wantsRenderingStatus;
- (bool)wantsSelectModeCaptionInContextMenu;
- (bool)wantsShareGridButtonVisible;
- (bool)wantsSingleRowScrollingLayout;
- (bool)wantsTabBarHidden;
- (bool)wantsTitleInNavigationBar;

@end