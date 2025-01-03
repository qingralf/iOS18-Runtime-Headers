/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/PhotosUIPrivate.framework/PhotosUIPrivate
 */

@interface PUStoryViewController : UIViewController <PXActionPerformerDelegate, PXAppIntentsViewAnnotationDelegate, PXAssetCollectionActionPerformerDelegate, PXGViewControllerTransitionEndPoint, PXStoryExportActivityHelper, PXStoryPlayerTestElement, PXStoryViewActionPerformer, PXStoryViewController, PXTapToRadarDiagnosticProvider, PXUserInterfaceFeatureViewController, UIAdaptivePresentationControllerDelegate> {
    void $__lazy_storage_$_analyticsController;
    void $__lazy_storage_$_eventTracker;
    void $__lazy_storage_$_tccStatusProvider;
    void $__lazy_storage_$_viewModel;
    void _prefersHomeIndicatorHidden;
    void actionPerformerProxy;
    void airPlayHelper;
    void appleMusicPreviewVC;
    void applicationState;
    void applicationStateObservation;
    void assetPicker;
    void boopableItemsProvider;
    void browserGridPhotoViewModel;
    void browserGridPhotoViewModelObservation;
    void didAppear;
    void didAppearOnce;
    void dismissalDelegate;
    void exportActivityCount;
    void exportConfigurationCompletionBlock;
    void exportHelper;
    void gridDecorationViewClass;
    void initialConfiguration;
    void isAppVisible;
    void isExportPending;
    union { in /* Warning: Unrecognized filer type: 'u' using 'void*' */ void*x1; long x2; long x3; }  lastAppVisibilityChangeDate;
    void navigationItemHelper;
    void onViewDidLoad;
    void originalToolbarScrollEdgeAppearance;
    void remainsActiveWhileApplicationIsHidden;
    void shareActionDelegate;
    void storyView;
    void transitionsCoordinator;
    void viewEnvironmentActionDelegate;
    void viewModelObservation;
}

@property (nonatomic, retain) <UIActivityItemsConfigurationReading> *activityItemsConfiguration;
@property (nonatomic, readonly) NSString *appIntentsDebugDescription;
@property (nonatomic, readonly) bool canBecomeFirstResponder;
@property (nonatomic, readonly) <PXDisplayCollection> *collection;
@property (nonatomic) <PXStoryViewControllerDismissalDelegate> *dismissalDelegate;
@property (nonatomic, readonly) <PXStoryExportActivityHelper> *exportActivityHelper;
@property (nonatomic) Class gridDecorationViewClass;
@property (nonatomic, readonly) <PXDisplayAsset> *iconAsset;
@property (nonatomic, retain) <PXStoryViewControllerNavigationItemHelper> *navigationItemHelper;
@property (nonatomic, readonly) bool needs79067616Workaround;
@property (nonatomic, readonly) NSString *preferredExportFilename;
@property (nonatomic, readonly) bool prefersHomeIndicatorAutoHidden;
@property (nonatomic, readonly) bool prefersViewEnvironmentChromeHidden;
@property (nonatomic, readonly) bool px_determinesPreferredStatusBarStyle;
@property (nonatomic, readonly) struct UIEdgeInsets { double x1; double x2; double x3; double x4; } px_layoutMargins;
@property (nonatomic) bool remainsActiveWhileApplicationIsHidden;
@property (nonatomic) <PXStoryViewControllerShareActionDelegate> *shareActionDelegate;
@property (nonatomic, retain) PXStoryView *storyView;
@property (nonatomic, readonly) long long userInterfaceFeature;
@property (nonatomic, retain) <PXStoryViewEnvironmentActionDelegate> *viewEnvironmentActionDelegate;

- (void).cxx_destruct;
- (void)a_customTapToRadar:(id)arg1;
- (bool)actionPerformer:(id)arg1 dismissViewController:(id)arg2 completionHandler:(id /* block */)arg3;
- (bool)actionPerformer:(id)arg1 transitionToViewController:(id)arg2 transitionType:(long long)arg3;
- (id)activityItemsConfiguration;
- (bool)allowsTransition:(id)arg1 withEndPoint:(id)arg2;
- (id)appIntentsDebugDescription;
- (void)appIntentsEnumerateAssetCollections:(id /* block */)arg1 completionHandler:(id /* block */)arg2;
- (bool)canBecomeFirstResponder;
- (bool)canPerformAction:(SEL)arg1 withSender:(id)arg2;
- (void)collectTapToRadarDiagnosticsIntoContainer:(id)arg1;
- (id)collection;
- (void)copyInternalURL;
- (void)deleteCurrentChapter;
- (void)deleteMemory;
- (void)deselectAll:(id)arg1;
- (id)detailItemReferenceForTransitionWithSummaryEndPoint:(id)arg1;
- (void)didBeginExportWithConfiguration:(id)arg1;
- (void)didEndExportWithConfiguration:(id)arg1;
- (void)didEndTransition:(id)arg1 withEndPoint:(id)arg2 finished:(bool)arg3;
- (void)dismissAppleMusicPreview;
- (void)dismissStoryViewController;
- (id)dismissStoryViewControllerInteractively;
- (id)dismissalDelegate;
- (id)exportActivityHelper;
- (void)fileRadar;
- (void)fileRadarForErrorRepository:(id)arg1;
- (Class)gridDecorationViewClass;
- (id)iconAsset;
- (id)initWithCoder:(id)arg1;
- (id)initWithConfiguration:(id)arg1;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;
- (void)installViewDidLoadHandler:(id /* block */)arg1;
- (id)itemPlacementControllerForItemReference:(id)arg1;
- (void)loadStoryViewIfNeeded;
- (void)makeAssetKeyPhoto:(id)arg1;
- (void)makeKeyPhoto:(id)arg1;
- (void)moveLeft:(id)arg1;
- (void)moveRight:(id)arg1;
- (id)musicFeedbackContextMenuDelegateWithAudioAssetProvidingBlock:(id /* block */)arg1;
- (id)navigationItemHelper;
- (bool)needs79067616Workaround;
- (void)performActionForChromeActionMenuItem:(long long)arg1 withValue:(long long)arg2 sender:(id)arg3;
- (id)preferredExportFilename;
- (bool)prefersHomeIndicatorAutoHidden;
- (bool)prefersViewEnvironmentChromeHidden;
- (bool)prepareForPopTransition;
- (void)presentAppleMusicPreviewForSelectedSong:(id)arg1 curatedSongs:(id)arg2;
- (void)presentAppleMusicSignupWithSender:(id)arg1;
- (void)presentAssetPicker;
- (void)presentBrowserGrid;
- (void)presentChapterEditor;
- (void)presentChapterInsertor;
- (void)presentColorGradeEditor;
- (void)presentMusicEditor;
- (void)presentSharingViewWithSender:(id)arg1;
- (void)presentStyleSwitcher;
- (void)presentTitleEditor;
- (void)presentationControllerDidDismiss:(id)arg1;
- (void)provideFeedback;
- (bool)px_determinesPreferredStatusBarStyle;
- (struct UIEdgeInsets { double x1; double x2; double x3; double x4; })px_layoutMargins;
- (bool)remainsActiveWhileApplicationIsHidden;
- (void)removeAssetsFromCuration:(id)arg1;
- (void)requestExportConfigurationWithCompletionHandler:(id /* block */)arg1;
- (void)selectAll:(id)arg1;
- (void)setActivityItemsConfiguration:(id)arg1;
- (void)setDismissalDelegate:(id)arg1;
- (void)setGridDecorationViewClass:(Class)arg1;
- (void)setNavigationItemHelper:(id)arg1;
- (void)setRemainsActiveWhileApplicationIsHidden:(bool)arg1;
- (void)setShareActionDelegate:(id)arg1;
- (void)setStoryView:(id)arg1;
- (void)setViewEnvironmentActionDelegate:(id)arg1;
- (id)shareActionDelegate;
- (void)showVisualDiagnostics;
- (id)storyView;
- (id)summaryItemReferenceForTransitionWithSummaryEndPoint:(id)arg1;
- (void)toggleFavoriteState;
- (void)toggleMuteState;
- (void)togglePlayback:(id)arg1;
- (void)toggleViewer:(id)arg1;
- (id)undoManagerForActionPerformer:(id)arg1;
- (long long)userInterfaceFeature;
- (void)validateCommand:(id)arg1;
- (void)viewDidAppear:(bool)arg1;
- (void)viewDidDisappear:(bool)arg1;
- (void)viewDidLoad;
- (id)viewEnvironmentActionDelegate;
- (void)viewWillAppear:(bool)arg1;
- (void)viewWillDisappear:(bool)arg1;
- (void)willBeginTransition:(id)arg1 withEndPoint:(id)arg2 anchorItemReference:(id)arg3;
- (void)willDismissWithoutTransitionToEndPoint:(id)arg1;

@end
