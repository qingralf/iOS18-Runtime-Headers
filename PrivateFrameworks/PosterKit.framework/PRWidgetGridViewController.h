/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/PosterKit.framework/PosterKit
 */

@interface PRWidgetGridViewController : UIViewController <BSInvalidatable, CHUISWidgetHostViewControllerDelegate, PRWidgetGridModelPresenting, PRWidgetIconViewControllerDelegate, SBHRecycledViewsContainerProviding, SBHReusableViewMapDelegate, SBIconDragManagerDelegate, SBIconListLayoutObserver, SBIconViewDelegate, SBIconViewObserver, SBIconViewProviding> {
    unsigned long long  _contentType;
    <PRWidgetGridViewControllerDelegate> * _delegate;
    SBIconDragManager * _dragManager;
    bool  _focused;
    struct SBHIconGridSize { 
        unsigned short columns; 
        unsigned short rows; 
    }  _gridSize;
    SBHReusableViewMap * _iconViewMap;
    <SBIconViewProviding> * _iconViewProvider;
    SBIconListView * _listView;
    PRWidgetGridModel * _model;
    unsigned long long  _presentationMode;
    UIView * _recycledViewsContainerView;
    bool  _requiresFocusForLaunchRequests;
    BSUIVibrancyConfiguration * _vibrancyConfiguration;
    bool  _widgetInteractionDisabled;
}

@property (nonatomic) unsigned long long contentType;
@property (readonly, copy) NSString *debugDescription; /* unknown property attribute: ? */
@property (nonatomic) <PRWidgetGridViewControllerDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (nonatomic, retain) SBIconDragManager *dragManager;
@property (getter=isEditing, nonatomic) bool editing; /* unknown property attribute: ? */
@property (getter=isFocused, nonatomic) bool focused;
@property (nonatomic) struct SBHIconGridSize { unsigned short x1; unsigned short x2; } gridSize;
@property (readonly) unsigned long long hash;
@property (getter=isIconContentPossiblyVisibleOverApplication, nonatomic, readonly) bool iconContentPossiblyVisibleOverApplication; /* unknown property attribute: ? */
@property (nonatomic) double iconContentScale;
@property (nonatomic, readonly) SBHIconModel *iconModel; /* unknown property attribute: ? */
@property (nonatomic) <SBIconViewProviding> *iconViewProvider;
@property (nonatomic, retain) SBIconListView *listView;
@property (getter=isMainDisplayLibraryViewVisible, nonatomic) bool mainDisplayLibraryViewVisible; /* unknown property attribute: ? */
@property (nonatomic, readonly) PRWidgetGridModel *model;
@property (getter=isOverlayTodayViewVisible, nonatomic) bool overlayTodayViewVisible; /* unknown property attribute: ? */
@property (nonatomic) unsigned long long presentationMode;
@property (nonatomic, readonly) UIView *recycledViewsContainer;
@property (nonatomic) bool requiresFocusForLaunchRequests;
@property (getter=isRootFolderContentVisible, nonatomic, readonly) bool rootFolderContentVisible; /* unknown property attribute: ? */
@property (getter=isScrolling, nonatomic) bool scrolling; /* unknown property attribute: ? */
@property (readonly) Class superclass;
@property (getter=isTrackingScroll, nonatomic) bool trackingScroll; /* unknown property attribute: ? */
@property (nonatomic, retain) BSUIVibrancyConfiguration *vibrancyConfiguration;
@property (getter=isWidgetInteractionDisabled, nonatomic) bool widgetInteractionDisabled;

- (void).cxx_destruct;
- (bool)_canShowWhileLocked;
- (id)_descriptorFromWidgetIcon:(id)arg1;
- (void)_intentsUpdated;
- (void)_layoutInsetsModeUpdated;
- (void)_listModelUpdated;
- (bool)_shouldDisableWidgetInteraction;
- (void)_tapGestureRecognized:(id)arg1;
- (id)_widgetIconViewControllerForIcon:(id)arg1;
- (bool)allowsSnappingIconsToGridForIconDragManager:(id)arg1;
- (long long)closeBoxTypeForIconView:(id)arg1;
- (void)configureIconView:(id)arg1 forIcon:(id)arg2;
- (bool)containsIconsInRow:(unsigned long long)arg1;
- (unsigned long long)contentType;
- (id)customImageViewControllerForIconView:(id)arg1;
- (void)dealloc;
- (id)delegate;
- (id)dequeueReusableIconViewOfClass:(Class)arg1;
- (id)dragManager;
- (id)draggingDelegateForIconView:(id)arg1;
- (void)ensureContentWithTimeout:(double)arg1 completion:(id /* block */)arg2;
- (struct SBHIconGridSize { unsigned short x1; unsigned short x2; })gridSize;
- (void)handleLaunchRequestForIcon:(id)arg1;
- (void)iconCloseBoxTapped:(id)arg1;
- (double)iconContentScale;
- (bool)iconDragManager:(id)arg1 canAddDragItemsToSession:(id)arg2 fromIconView:(id)arg3;
- (bool)iconDragManager:(id)arg1 canMakeIconViewDragRecipient:(id)arg2;
- (bool)iconDragManager:(id)arg1 canSnapIconsToGridInLocation:(id)arg2;
- (void)iconDragManager:(id)arg1 didEndDragWithResult:(id)arg2;
- (id)iconDragManager:(id)arg1 dragItemsForIconView:(id)arg2;
- (id)iconDragManager:(id)arg1 targetedDragPreviewForIconView:(id)arg2 item:(id)arg3 session:(id)arg4 previewParameters:(id)arg5;
- (unsigned long long)iconDragManager:(id)arg1 willMoveDragPlaceholderToGridCellIndex:(unsigned long long)arg2 inIconListView:(id)arg3 draggedIcons:(id)arg4;
- (void)iconView:(id)arg1 didChangeCustomImageViewController:(id)arg2;
- (id)iconViewMap;
- (id)iconViewProvider;
- (id)iconViewQueryableForIconDragManager:(id)arg1;
- (id)initWithModel:(id)arg1;
- (id)initWithModel:(id)arg1 iconViewProvider:(id)arg2;
- (id)initWithModel:(id)arg1 iconViewProvider:(id)arg2 contentType:(unsigned long long)arg3 presentationMode:(unsigned long long)arg4;
- (bool)interpretsViewAsContent:(id)arg1;
- (void)invalidate;
- (bool)isEditing;
- (bool)isFocused;
- (bool)isIconViewRecycled:(id)arg1;
- (bool)isWidgetInteractionDisabled;
- (id)listView;
- (void)loadView;
- (id)model;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void*)arg4;
- (void)performAnimatedInsertionForIcon:(id)arg1;
- (void)performAnimatedRemovalForIcon:(id)arg1;
- (unsigned long long)presentationMode;
- (void)recycleIconView:(id)arg1;
- (id)recycledViewsContainer;
- (id)recycledViewsContainerProviderForViewMap:(id)arg1;
- (bool)requiresFocusForLaunchRequests;
- (id)rootFolderForIconDragManager:(id)arg1;
- (id)rootViewForIconDragManager:(id)arg1;
- (void)setContentType:(unsigned long long)arg1;
- (void)setDelegate:(id)arg1;
- (void)setDragManager:(id)arg1;
- (void)setFocused:(bool)arg1;
- (void)setFocused:(bool)arg1 animated:(bool)arg2;
- (void)setFocused:(bool)arg1 animationSettings:(id)arg2;
- (void)setGridSize:(struct SBHIconGridSize { unsigned short x1; unsigned short x2; })arg1;
- (void)setIconContentScale:(double)arg1;
- (void)setIconViewProvider:(id)arg1;
- (void)setListView:(id)arg1;
- (void)setPresentationMode:(unsigned long long)arg1;
- (void)setRequiresFocusForLaunchRequests:(bool)arg1;
- (void)setVibrancyConfiguration:(id)arg1;
- (void)setWidgetInteractionDisabled:(bool)arg1;
- (bool)shouldNonDefaultGridSizeClassesUseClusterAnimationForIconDragManager:(id)arg1;
- (id)vibrancyConfiguration;
- (void)viewDidLayoutSubviews;
- (void)viewDidLoad;
- (unsigned long long)viewMap:(id)arg1 maxRecycledViewsOfClass:(Class)arg2;
- (void)widgetHostViewController:(id)arg1 requestsLaunchWithAction:(id)arg2;
- (id)widgetHostViewControllerForComplicationDescriptor:(id)arg1;
- (void)widgetIconViewControllerDidReceiveTap:(id)arg1;

@end
