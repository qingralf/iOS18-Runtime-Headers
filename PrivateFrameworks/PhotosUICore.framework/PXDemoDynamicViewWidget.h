/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
 */

@interface PXDemoDynamicViewWidget : NSObject <PXWidget> {
    double  __preferredHeightPhase;
    UIView * __view;
    <PXWidgetDelegate> * _widgetDelegate;
}

@property (setter=_setPreferredHeight:, nonatomic) double _preferredHeightPhase;
@property (nonatomic, readonly) UIView *_view;
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
@property (nonatomic, readonly) NSString *localizedSubtitle; /* unknown property attribute: ? */
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
- (void)_heartBeatIncreaseHeightPhase:(bool)arg1;
- (void)_loadView;
- (double)_preferredHeightPhase;
- (void)_setPreferredHeight:(double)arg1;
- (void)_setPreferredHeightPhase:(double)arg1;
- (id)_view;
- (id)contentView;
- (bool)hasContentForCurrentInput;
- (id)localizedTitle;
- (double)preferredContentHeightForWidth:(double)arg1;
- (void)setWidgetDelegate:(id)arg1;
- (id)widgetDelegate;

@end