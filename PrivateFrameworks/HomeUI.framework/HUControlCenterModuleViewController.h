/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/HomeUI.framework/HomeUI
 */

@interface HUControlCenterModuleViewController : HUControllableItemCollectionViewController <CCUIContentModuleContentViewController, HFHomeManagerObserver, HMHomeManagerDelegate, HMHomeManagerDelegatePrivate, HUCollectionLayoutManagerDelegate> {
    void $__lazy_storage_$_layoutManager;
    void accessAllowedForCurrentLockState;
    void allowsCharacteristicNotifications;
    void analyticsController;
    void backgroundView;
    void cellBackgroundDisplayStyle;
    void cellInsetsLayoutMarginsFromSafeArea;
    void compactContinuousCornerRadius;
    void contentMetrics;
    void delegate;
    void errorViewController;
    void expandedModuleKind;
    void galleryPreviewViewModel;
    void gridSizeClass;
    void insetContent;
    void isExpanded;
    void isPreviewMode;
    void kind;
    void moduleState;
    void notificationsDisabled;
    void placeholderViewController;
    void presentedAccessoryControlsViewController;
    void previewRegistry;
    void reloadsForGridSizeClassChanges;
    void showTilePrefixes;
    void supplementalView;
    void updatesUIOnEditingChanged;
}

@property (nonatomic) bool accessAllowedForCurrentLockState;
@property (nonatomic) bool allowsCharacteristicNotifications;
@property (nonatomic) double compactContinuousCornerRadius;
@property (nonatomic, retain) CCUIModuleContentMetrics *contentMetrics;
@property (nonatomic) unsigned long long contentRenderingMode;
@property (nonatomic, readonly) NSString *debugDescription;
@property (nonatomic, readonly) INIntent *defaultConfigurationIntent;
@property (nonatomic) <HUControlCenterModuleViewControllerDelegate> *delegate;
@property (nonatomic, readonly) NSString *fullDescription;
@property (nonatomic) long long gridSizeClass;
@property (nonatomic, readonly) long long kind;
@property (nonatomic, readonly) double preferredExpandedContentHeight;
@property (nonatomic, readonly) double preferredExpandedContentWidth;
@property (nonatomic, readonly) bool promptsForUserConfiguration;
@property (nonatomic, readonly) bool providesOwnPlatter;
@property (nonatomic, readonly) bool shouldPerformClickInteraction;
@property (nonatomic, readonly) bool shouldPerformHoverInteraction;
@property (nonatomic, readonly) bool wantsConfigurationIntent;

- (void).cxx_destruct;
- (bool)_canShowWhileLocked;
- (bool)accessAllowedForCurrentLockState;
- (void)accessoryControlViewControllerFor:(void *)arg1 tileItem:(void *)arg2 completionHandler:(void *)arg3; // needs 3 arg types, found 85: id, /* Warning: Unrecognized filer type: '"' using 'void*' */ void*, /* Warning: Unrecognized filer type: 'H' using 'void*' */ void*, /* Warning: Unrecognized filer type: 'F' using 'void*' */ void*, unsigned int, /* Warning: Unrecognized filer type: 't' using 'void*' */ void*, /* Warning: Unrecognized filer type: 'e' using 'void*' */ void*, /* Warning: Unrecognized filer type: 'm' using 'void*' */ void*, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, /* Warning: Unrecognized filer type: 'H' using 'void*' */ void*, /* Warning: Unrecognized filer type: 'F' using 'void*' */ void*, _Atomic /* Warning: Unrecognized filer type: '' using 'void*' */ void*, BOOL, BOOL, /* Warning: Unrecognized filer type: 'e' using 'void*' */ void*, short, short, out const /* Warning: Unrecognized filer type: 'y' using 'void*' */ void*, byref /* Warning: Unrecognized filer type: '' using 'void*' */ void*, /* Warning: Unrecognized filer type: 'e' using 'void*' */ void*, /* Warning: Unrecognized filer type: 'p' using 'void*' */ void*, const /* Warning: Unrecognized filer type: 'e' using 'void*' */ void*, short, /* Warning: Unrecognized filer type: 'e' using 'void*' */ void*, in /* Warning: Unrecognized filer type: 't' using 'void*' */ void*, /* Warning: Unrecognized filer type: 'a' using 'void*' */ void*, /* Warning: unhandled bit fieldencoding: 'b' */ unsigned int, long, /* Warning: Unrecognized filer type: 'e' using 'void*' */ void*, unsigned int, /* Warning: Unrecognized filer type: 't' using 'void*' */ void*, /* Warning: Unrecognized filer type: 'e' using 'void*' */ void*, /* Warning: Unrecognized filer type: 'm' using 'void*' */ void*, /* Warning: Unrecognized filer type: '>' using 'void*' */ void*, /* Warning: Unrecognized filer type: '"' using 'void*' */ void*, id, /* Warning: Unrecognized filer type: '"' using 'void*' */ void*, /* Warning: Unrecognized filer type: 'H' using 'void*' */ void*, /* Warning: Unrecognized filer type: 'F' using 'void*' */ void*, unsigned int, /* Warning: Unrecognized filer type: 't' using 'void*' */ void*, /* Warning: Unrecognized filer type: 'e' using 'void*' */ void*, /* Warning: Unrecognized filer type: 'm' using 'void*' */ void*, /* Warning: Unrecognized filer type: '"' using 'void*' */ void*, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, id, /* Warning: Unrecognized filer type: '"' using 'void*' */ void*, /* Warning: Unrecognized filer type: 'U' using 'void*' */ void*, unsigned int, oneway int, /* Warning: Unrecognized filer type: 'e' using 'void*' */ void*, /* Warning: Unrecognized filer type: 'w' using 'void*' */ void*, unsigned char, out in /* Warning: Unrecognized filer type: 't' using 'void*' */ void*, const out long, long, /* Warning: Unrecognized filer type: 'e' using 'void*' */ void*, const /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, /* Warning: Unrecognized filer type: 'H' using 'void*' */ void*, /* Warning: Unrecognized filer type: 'U' using 'void*' */ void*, /* Warning: Unrecognized filer type: 'P' using 'void*' */ void*, const /* Warning: Unrecognized filer type: 'e' using 'void*' */ void*, short, /* Warning: Unrecognized filer type: 'e' using 'void*' */ void*, in /* Warning: Unrecognized filer type: 't' using 'void*' */ void*, /* Warning: Unrecognized filer type: 'a' using 'void*' */ void*, /* Warning: Unrecognized filer type: 't' using 'void*' */ void*, int, out in long double, /* Warning: Unrecognized filer type: 'e' using 'void*' */ void*, long, /* Warning: Unrecognized filer type: 'e' using 'void*' */ void*, /* Warning: Unrecognized filer type: 'g' using 'void*' */ void*, /* Warning: Unrecognized filer type: 'a' using 'void*' */ void*, /* Warning: Unrecognized filer type: 't' using 'void*' */ void*, /* Warning: Unrecognized filer type: 'e' using 'void*' */ void*, /* Warning: Unrecognized filer type: 'H' using 'void*' */ void*, out short, /* Warning: Unrecognized filer type: 't' using 'void*' */ void*, /* Warning: Unrecognized filer type: '>' using 'void*' */ void*, /* Warning: Unrecognized filer type: '"' using 'void*' */ void*, /* Warning: Unrecognized filer type: '>' using 'void*' */ void*
- (bool)allowsCharacteristicNotifications;
- (void)applyGridSizeClass:(void *)arg1 completionBlock:(void *)arg2; // needs 2 arg types, found 11: long long, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, id, /* Warning: Unrecognized filer type: '"' using 'void*' */ void*, inout unsigned short, /* Warning: Unrecognized filer type: 'E' using 'void*' */ void*, const const out const /* Warning: Unrecognized filer type: '"' using 'void*' */ void*, /* Warning: Unrecognized filer type: '>' using 'void*' */ void*
- (bool)canDismissPresentedContent;
- (bool)canReorderItemAtIndexPath:(id)arg1;
- (Class)cellClassForItem:(id)arg1 indexPath:(id)arg2;
- (double)compactContinuousCornerRadius;
- (void)configureCell:(id)arg1 forItem:(id)arg2;
- (id)contentMetrics;
- (unsigned long long)contentRenderingMode;
- (void)dealloc;
- (id)debugDescription;
- (id)defaultConfigurationIntent;
- (id)delegate;
- (void)dismissPresentedContentAnimated:(bool)arg1 completion:(id /* block */)arg2;
- (id)displayedItemsInSection:(id)arg1;
- (id)fullDescription;
- (long long)gridSizeClass;
- (bool)hasDetailsActionForPresentationCoordinator:(id)arg1 item:(id)arg2;
- (void)homeKitDispatcher:(id)arg1 manager:(id)arg2 didChangeHome:(id)arg3;
- (id)initUsingCompositionalLayoutWithItemManager:(id)arg1;
- (id)initWithDelegate:(id)arg1 ofKind:(long long)arg2 itemManager:(id)arg3 withPreviews:(id)arg4;
- (id)initWithDelegate:(id)arg1 ofKind:(long long)arg2 withPreviews:(id)arg3;
- (id)initWithItemManager:(id)arg1 collectionViewLayout:(id)arg2;
- (bool)interpretsLocationAsContent:(struct CGPoint { double x1; double x2; })arg1 inView:(id)arg2;
- (void)itemManagerDidUpdate:(id)arg1;
- (long long)kind;
- (id)layoutSectionForSection:(long long)arg1 layoutEnvironment:(id)arg2;
- (struct CGSize { double x1; double x2; })overrideContentSize;
- (double)preferredExpandedContentHeight;
- (double)preferredExpandedContentWidth;
- (id)prepareToPerformToggleActionForItem:(id)arg1 sourceItem:(id)arg2;
- (id)presentAccessoryControlsForItem:(id)arg1;
- (bool)presentationCoordinator:(id)arg1 shouldBeginLongPressPresentationWithContext:(id)arg2;
- (bool)presentationCoordinator:(id)arg1 shouldBeginPresentationWithContext:(id)arg2;
- (void)presentationCoordinatorSendTileInteractionEventOfType:(unsigned long long)arg1 withPresentationContext:(id)arg2 presentationCoordinator:(id)arg3;
- (bool)promptsForUserConfiguration;
- (bool)providesOwnPlatter;
- (void)setAccessAllowedForCurrentLockState:(bool)arg1;
- (void)setAllowsCharacteristicNotifications:(bool)arg1;
- (void)setCompactContinuousCornerRadius:(double)arg1;
- (void)setConfigurationIntent:(id)arg1;
- (void)setContentMetrics:(id)arg1;
- (void)setContentRenderingMode:(unsigned long long)arg1;
- (void)setDelegate:(id)arg1;
- (void)setEditing:(bool)arg1 animated:(bool)arg2;
- (void)setGridSizeClass:(long long)arg1;
- (bool)shouldPerformClickInteraction;
- (bool)shouldPerformHoverInteraction;
- (bool)shouldShowHeaderForSection:(id)arg1;
- (bool)shouldUseCompactContentFrameForExpandedContent;
- (id)transform:(id)arg1;
- (void)viewDidAppear:(bool)arg1;
- (void)viewDidDisappear:(bool)arg1;
- (void)viewDidLoad;
- (void)viewWillAppear:(bool)arg1;
- (void)viewWillTransitionToSize:(struct CGSize { double x1; double x2; })arg1 withTransitionCoordinator:(id)arg2;
- (bool)wantsConfigurationIntent;
- (void)willDismissWithViewController:(id)arg1;
- (void)willTransitionToExpandedContentMode:(bool)arg1;

@end