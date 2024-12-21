/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
 */

@interface PXDemoViewWidget : NSObject <PXWidget> {
    long long  __animationCount;
    UIView * __containerView;
    struct CGSize { 
        double width; 
        double height; 
    }  __contentSize;
    UIView * __contentView;
    bool  __didLoadContent;
    long long  _contentViewAnchoringType;
    double  _height;
    bool  _isExpanded;
    PXWidgetSpec * _spec;
    <PXWidgetDelegate> * _widgetDelegate;
}

@property (setter=_setAnimationCount:, nonatomic) long long _animationCount;
@property (nonatomic, readonly) UIView *_containerView;
@property (setter=_setContentSize:, nonatomic) struct CGSize { double x1; double x2; } _contentSize;
@property (nonatomic, readonly) UIView *_contentView;
@property (setter=_setDidLoadContent:, nonatomic) bool _didLoadContent;
@property (nonatomic, readonly) bool allowUserInteractionWithSubtitle; /* unknown property attribute: ? */
@property (nonatomic, readonly) PXAssetActionManager *assetActionManager; /* unknown property attribute: ? */
@property (nonatomic, readonly) long long contentLayoutStyle; /* unknown property attribute: ? */
@property (nonatomic, readonly) PXTilingController *contentTilingController; /* unknown property attribute: ? */
@property (nonatomic, readonly) NSObject<PXAnonymousView> *contentView; /* unknown property attribute: ? */
@property (setter=_setContentViewAnchoringType:, nonatomic) long long contentViewAnchoringType;
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
- (long long)_animationCount;
- (id)_containerView;
- (struct CGSize { double x1; double x2; })_contentSize;
- (id)_contentView;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })_contentViewFrameForSize:(struct CGSize { double x1; double x2; })arg1;
- (bool)_didLoadContent;
- (void)_handleLongPressGestureRecognizer:(id)arg1;
- (void)_handleTapGestureRecognizer:(id)arg1;
- (void)_loadViews;
- (void)_setAnimationCount:(long long)arg1;
- (void)_setContentSize:(struct CGSize { double x1; double x2; })arg1;
- (void)_setContentViewAnchoringType:(long long)arg1;
- (void)_setDidLoadContent:(bool)arg1;
- (void)_updateContentViewColor;
- (id)contentView;
- (long long)contentViewAnchoringType;
- (void)contentViewWillTransitionToSize:(struct CGSize { double x1; double x2; })arg1 withTransitionCoordinator:(id)arg2;
- (bool)hasContentForCurrentInput;
- (id)init;
- (void)loadContentData;
- (id)localizedDisclosureTitle;
- (id)localizedTitle;
- (double)preferredContentHeightForWidth:(double)arg1;
- (void)setContentSize:(struct CGSize { double x1; double x2; })arg1;
- (void)setSpec:(id)arg1;
- (void)setWidgetDelegate:(id)arg1;
- (id)spec;
- (void)userDidSelectDisclosureControl;
- (id)widgetDelegate;

@end