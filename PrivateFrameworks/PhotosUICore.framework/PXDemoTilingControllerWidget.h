/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
 */

@interface PXDemoTilingControllerWidget : NSObject <PXAssetsSceneDelegate, PXTileSource, PXTilingControllerTransitionDelegate, PXWidget> {
    PXAssetsDataSourceManager * __dataSourceManager;
    PXPhotoKitUIMediaProvider * __mediaProvider;
    PXUIAssetsScene * __scene;
    PXBasicUIViewTileAnimator * __tileAnimator;
    NSMutableSet * __tilesInUse;
    PXTilingController * __tilingController;
    PXPhotosDetailsContext * _context;
    NSString * _localizedSubtitle;
    <PXWidgetDelegate> * _widgetDelegate;
}

@property (nonatomic, readonly) PXAssetsDataSourceManager *_dataSourceManager;
@property (nonatomic, readonly) PXPhotoKitUIMediaProvider *_mediaProvider;
@property (nonatomic, readonly) PXUIAssetsScene *_scene;
@property (nonatomic, readonly) PXBasicUIViewTileAnimator *_tileAnimator;
@property (nonatomic, readonly) NSMutableSet *_tilesInUse;
@property (nonatomic, readonly) PXTilingController *_tilingController;
@property (nonatomic, readonly) bool allowUserInteractionWithSubtitle; /* unknown property attribute: ? */
@property (nonatomic, readonly) PXAssetActionManager *assetActionManager; /* unknown property attribute: ? */
@property (nonatomic, readonly) long long contentLayoutStyle; /* unknown property attribute: ? */
@property (nonatomic, readonly) PXTilingController *contentTilingController; /* unknown property attribute: ? */
@property (nonatomic, readonly) NSObject<PXAnonymousView> *contentView; /* unknown property attribute: ? */
@property (nonatomic, readonly) long long contentViewAnchoringType; /* unknown property attribute: ? */
@property (nonatomic, retain) PXPhotosDetailsContext *context; /* unknown property attribute: ? */
@property (readonly, copy) NSString *debugDescription; /* unknown property attribute: ? */
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) double extraSpaceNeededAtContentBottom; /* unknown property attribute: ? */
@property (getter=isFaceModeEnabled, nonatomic) bool faceModeEnabled; /* unknown property attribute: ? */
@property (nonatomic, readonly) bool hasContentForCurrentInput; /* unknown property attribute: ? */
@property (nonatomic, readonly) bool hasLoadedContentData; /* unknown property attribute: ? */
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) bool isInEditMode; /* unknown property attribute: ? */
@property (nonatomic, readonly) NSString *localizedCaption; /* unknown property attribute: ? */
@property (nonatomic, readonly) NSString *localizedDisclosureTitle; /* unknown property attribute: ? */
@property (setter=_setLocalizedSubtitle:, nonatomic, retain) NSString *localizedSubtitle;
@property (nonatomic, readonly) NSString *localizedTitle; /* unknown property attribute: ? */
@property (nonatomic) struct CGSize { double x1; double x2; } maxVisibleSizeInEditMode; /* unknown property attribute: ? */
@property (getter=isSelecting, nonatomic) bool selecting; /* unknown property attribute: ? */
@property (nonatomic, readonly) PXSectionedSelectionManager *selectionManager; /* unknown property attribute: ? */
@property (nonatomic, readonly) NSString *snappableWidgetIdentifier; /* unknown property attribute: ? */
@property (nonatomic, retain) PXWidgetSpec *spec; /* unknown property attribute: ? */
@property (readonly) Class superclass;
@property (nonatomic, readonly) bool supportsFaceMode; /* unknown property attribute: ? */
@property (nonatomic, readonly) bool supportsSelection; /* unknown property attribute: ? */
@property (getter=isUserInteractionEnabled, nonatomic) bool userInteractionEnabled; /* unknown property attribute: ? */
@property (nonatomic, readonly) bool wantsFocus; /* unknown property attribute: ? */
@property (nonatomic, readonly) bool wantsNoSpaceAfterContentBottom; /* unknown property attribute: ? */
@property (nonatomic) <PXWidgetDelegate> *widgetDelegate; /* unknown property attribute: ? */
@property (nonatomic) <PXWidgetEditingDelegate> *widgetEditingDelegate; /* unknown property attribute: ? */
@property (nonatomic) <PXWidgetInteractionDelegate> *widgetInteractionDelegate; /* unknown property attribute: ? */
@property (nonatomic) <PXWidgetUnlockDelegate> *widgetUnlockDelegate; /* unknown property attribute: ? */

- (void).cxx_destruct;
- (id)_dataSourceManager;
- (id)_demoTilingLayoutForDataSource:(id)arg1;
- (void)_loadTilingController;
- (id)_mediaProvider;
- (id)_scene;
- (void)_setLocalizedSubtitle:(id)arg1;
- (id)_tileAnimator;
- (id)_tilesInUse;
- (id)_tilingController;
- (id)assetsScene:(id)arg1 layoutForDataSource:(id)arg2;
- (void)checkInTile:(void*)arg1 withIdentifier:(struct PXTileIdentifier { unsigned long long x1; unsigned long long x2[10]; })arg2;
- (void*)checkOutTileForIdentifier:(struct PXTileIdentifier { unsigned long long x1; unsigned long long x2[10]; })arg1 layout:(id)arg2;
- (id)contentTilingController;
- (id)context;
- (bool)hasContentForCurrentInput;
- (id)init;
- (id)localizedCaption;
- (id)localizedSubtitle;
- (id)localizedTitle;
- (double)preferredContentHeightForWidth:(double)arg1;
- (void)setContext:(id)arg1;
- (void)setWidgetDelegate:(id)arg1;
- (id)tilingController:(id)arg1 tileIdentifierConverterForChange:(id)arg2;
- (void)userDidSelectSubtitle;
- (id)widgetDelegate;

@end