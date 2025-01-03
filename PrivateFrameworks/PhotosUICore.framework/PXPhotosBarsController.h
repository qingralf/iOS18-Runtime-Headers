/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
 */

@interface PXPhotosBarsController : PXBarsController <PXActionPerformerDelegate, PXAssetCollectionActionPerformerDelegate, PXChangeObserver, PXPhotosGridActionPerformerDelegate, PXSettingsKeyObserver> {
    NSMapTable * _actionTypeByBarButtonItem;
    PXActionPerformer * _activeActionPerformer;
    PXAssetSelectionTypeCounter * _assetTypeCounter;
    PXPhotosBarButtonItemsController * _barButtonItemsController;
    PXPhotosContentController * _contentController;
    long long  _contentSizeCategory;
    PLDateRangeFormatter * _dateRangeFormatter;
    double  _endButtonSpacing;
    <UITraitChangeRegistration> * _horizontalSizeClassObservation;
    double  _interButtonSpacing;
    PXActionPerformer * _lastActionPerformer;
    NSArray * _leftBarButtonItemIdentifiers;
    PXLibraryFilterState * _libraryFilterState;
    PXPhotosGridActionMenuController * _menuController;
    PXMoviePresenter * _moviePresenter;
    NSArray * _rightBarButtonItemIdentifiers;
    UILabel * _selectModeCaptionLabel;
    UIButton * _selectModeChevronButton;
    PXSharedLibraryStatusProvider * _sharedLibraryStatusProvider;
    NSArray * _toolbarItemIdentifiers;
    PXPhotosViewModel * _viewModel;
    bool  _wantsToggleSidebarButton;
    <PXBarsControllerDelegate><PXPhotosBarsControllerDelegate> * delegate;
}

@property (nonatomic, readonly) NSMapTable *actionTypeByBarButtonItem;
@property (nonatomic, retain) PXActionPerformer *activeActionPerformer;
@property (nonatomic, readonly) PXAssetSelectionTypeCounter *assetTypeCounter;
@property (nonatomic, readonly) PXPhotosBarButtonItemsController *barButtonItemsController;
@property (nonatomic, readonly) PXPhotosContentController *contentController;
@property (nonatomic) long long contentSizeCategory;
@property (nonatomic, readonly) PLDateRangeFormatter *dateRangeFormatter;
@property (readonly, copy) NSString *debugDescription; /* unknown property attribute: ? */
@property (nonatomic) <PXBarsControllerDelegate><PXPhotosBarsControllerDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (nonatomic) double endButtonSpacing;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) <UITraitChangeRegistration> *horizontalSizeClassObservation;
@property (nonatomic) double interButtonSpacing;
@property (nonatomic, retain) PXActionPerformer *lastActionPerformer;
@property (nonatomic, retain) NSArray *leftBarButtonItemIdentifiers;
@property (nonatomic, readonly) PXLibraryFilterState *libraryFilterState;
@property (nonatomic, readonly) <PXMemoryAssetsActionFactory> *memoryAssetsActionFactory; /* unknown property attribute: ? */
@property (nonatomic, retain) PXPhotosGridActionMenuController *menuController;
@property (nonatomic, retain) PXMoviePresenter *moviePresenter;
@property (nonatomic, readonly) <PXPresentationEnvironment> *presentationEnvironment;
@property (nonatomic, retain) NSArray *rightBarButtonItemIdentifiers;
@property (nonatomic, readonly) UILabel *selectModeCaptionLabel;
@property (nonatomic, readonly) NSString *selectModeCaptionText;
@property (nonatomic, readonly) UIButton *selectModeChevronButton;
@property (nonatomic, readonly) PXSharedLibraryStatusProvider *sharedLibraryStatusProvider;
@property (nonatomic, readonly) bool shouldUseCompactBarButtons;
@property (readonly) Class superclass;
@property (nonatomic, retain) NSArray *toolbarItemIdentifiers;
@property (nonatomic, readonly) PXPhotosViewModel *viewModel;
@property (nonatomic) bool wantsToggleSidebarButton;

- (void).cxx_destruct;
- (bool)_actionPerformer:(id)arg1 presentViewController:(id)arg2;
- (void)_handleActionTypeBarButtonItem:(id)arg1;
- (id)_identifierForActionType:(id)arg1;
- (void)_updateSelectModeCaption;
- (long long)abilityToPlayMovieForAssetCollection:(id)arg1;
- (void)actionPerformer:(id)arg1 didChangeState:(unsigned long long)arg2;
- (bool)actionPerformer:(id)arg1 dismissViewController:(id)arg2 completionHandler:(id /* block */)arg3;
- (bool)actionPerformer:(id)arg1 transitionToViewController:(id)arg2 transitionType:(long long)arg3;
- (id)actionPerformerHostViewControllerForPresentingToast:(id)arg1;
- (id)actionTypeByBarButtonItem;
- (id)activeActionPerformer;
- (void)assetCollectionActionPerformer:(id)arg1 playMovieForAssetCollection:(id)arg2;
- (id)assetTypeCounter;
- (id)barAppearance;
- (id)barButtonItemsController;
- (id)barItemIdentifiersToInvalidateForPhotosViewModelChange:(unsigned long long)arg1;
- (id)contentController;
- (long long)contentSizeCategory;
- (id)createActionMenuController;
- (id)createAssetActionManagerForAssetReference:(id)arg1;
- (id)createBarButtonItemForIdentifier:(id)arg1 placement:(unsigned long long)arg2;
- (id)dateRangeFormatter;
- (id)delegate;
- (double)endButtonSpacing;
- (id)existingBarItemForIdentifier:(id)arg1;
- (double)fixedSpaceForEndButtonSpacing;
- (double)fixedSpaceForInterButtonSpacing;
- (void)handleActionMenuBarButtonItem:(id)arg1;
- (void)handleAddButtonItem:(id)arg1;
- (void)handleCancelBarButtonItem:(id)arg1;
- (void)handleDeselectAllBarButtonItem:(id)arg1;
- (void)handleDismissButton:(id)arg1;
- (void)handleExplicitBackButton:(id)arg1;
- (void)handleInfoButton:(id)arg1;
- (void)handleMergeDuplicatesButton:(id)arg1;
- (void)handleSearchButton:(id)arg1;
- (void)handleSelectAllBarButtonItem:(id)arg1;
- (void)handleSelectBarButtonItem:(id)arg1;
- (void)handleToggleSidebar:(id)arg1;
- (id)horizontalSizeClassObservation;
- (id)hostViewControllerForActionPerformer:(id)arg1;
- (id)init;
- (id)initWithPhotosContentController:(id)arg1;
- (double)interButtonSpacing;
- (id)lastActionPerformer;
- (id)leftBarButtonItemIdentifiers;
- (id)libraryFilterState;
- (id)memoryAssetsActionFactory;
- (id)menuController;
- (id)moviePresenter;
- (void)observable:(id)arg1 didChange:(unsigned long long)arg2 context:(void*)arg3;
- (void)photosGridActionPerformer:(id)arg1 contentFilterStateChanged:(id)arg2;
- (id)presentationEnvironment;
- (id)presentationEnvironmentForActionPerformer:(id)arg1;
- (id)rightBarButtonItemIdentifiers;
- (id)selectModeCaptionLabel;
- (id)selectModeCaptionText;
- (id)selectModeChevronButton;
- (void)setActiveActionPerformer:(id)arg1;
- (void)setContentSizeCategory:(long long)arg1;
- (void)setDelegate:(id)arg1;
- (void)setEndButtonSpacing:(double)arg1;
- (void)setHorizontalSizeClassObservation:(id)arg1;
- (void)setInterButtonSpacing:(double)arg1;
- (void)setLastActionPerformer:(id)arg1;
- (void)setLeftBarButtonItemIdentifiers:(id)arg1;
- (void)setMenuController:(id)arg1;
- (void)setMoviePresenter:(id)arg1;
- (void)setRightBarButtonItemIdentifiers:(id)arg1;
- (void)setToolbarItemIdentifiers:(id)arg1;
- (void)setWantsToggleSidebarButton:(bool)arg1;
- (void)settings:(id)arg1 changedValueForKey:(id)arg2;
- (id)sharedLibraryStatusProvider;
- (bool)shouldUseCompactBarButtons;
- (id)toolbarItemIdentifiers;
- (id)undoManagerForActionPerformer:(id)arg1;
- (void)updateBars;
- (void)viewControllerDidChange:(id)arg1;
- (id)viewModel;
- (bool)wantsToggleSidebarButton;

@end
