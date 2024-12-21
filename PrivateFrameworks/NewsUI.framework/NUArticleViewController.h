/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/NewsUI.framework/NewsUI
 */

@interface NUArticleViewController : UIViewController <NUANFDebugSettingsObserver, NUBarCompressible, NULoadable, SXAnalyticsReporting, SXScrollViewControllerDelegate> {
    <SXAnalyticsReporting> * _analyticsReporting;
    NUArticleContext * _articleContext;
    <NUArticleDataProvider> * _articleDataProvider;
    bool  _articleIsPresentingFullscreen;
    double  _articleLoadedTime;
    <NUArticleScrollPositionManagerType> * _articleScrollPositionManager;
    FCObservable * _articleViewStyler;
    <NUChromeControl> * _chromeControl;
    long long  _contentScale;
    NSString * _contentSizeCategory;
    <NUANFDebugSettingsProvider> * _debugSettingsProvider;
    <NUArticleViewControllerDelegate> * _delegate;
    bool  _didRestoreScrollPosition;
    <NUDocumentSectionBlueprintProvider> * _documentSectionBlueprintProvider;
    <NUEndOfArticleDataProvider> * _endOfArticleDataProvider;
    NFEventManager * _eventManager;
    <NUArticleKeyCommandManager> * _keyCommandManager;
    <NULoadingDelegate> * _loadingDelegate;
    NSHashTable * _loadingListeners;
    NSDate * _manualScrollingStartDate;
    unsigned long long  _presentationMode;
    UIScrollView * _scrollView;
    SXScrollViewController * _scrollViewController;
    bool  _shouldAutoPlayVideo;
    bool  _shouldDisableTransparentNavigationBar;
    <NUSpotlightManager> * _spotlightManager;
    SXVideoPlayerViewControllerManager * _videoPlayerViewControllerManager;
}

@property (nonatomic) <SXAnalyticsReporting> *analyticsReporting;
@property (nonatomic, retain) NUArticleContext *articleContext;
@property (nonatomic, readonly) <NUArticleDataProvider> *articleDataProvider;
@property (nonatomic) bool articleIsPresentingFullscreen;
@property (nonatomic) double articleLoadedTime;
@property (nonatomic, readonly) <NUArticleScrollPositionManagerType> *articleScrollPositionManager;
@property (nonatomic, readonly) FCObservable *articleViewStyler;
@property (nonatomic, readonly) <NUChromeControl> *chromeControl;
@property (nonatomic) long long contentScale;
@property (nonatomic, retain) NSString *contentSizeCategory;
@property (readonly, copy) NSString *debugDescription; /* unknown property attribute: ? */
@property (nonatomic, readonly) <NUANFDebugSettingsProvider> *debugSettingsProvider;
@property (nonatomic) <NUArticleViewControllerDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (nonatomic) bool didRestoreScrollPosition;
@property (nonatomic, readonly) <NUDocumentSectionBlueprintProvider> *documentSectionBlueprintProvider;
@property (nonatomic, readonly) <NUEndOfArticleDataProvider> *endOfArticleDataProvider;
@property (nonatomic, readonly) NFEventManager *eventManager;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) <NUArticleKeyCommandManager> *keyCommandManager;
@property (nonatomic) <NULoadingDelegate> *loadingDelegate;
@property (nonatomic, readonly) NSHashTable *loadingListeners;
@property (nonatomic, retain) NSDate *manualScrollingStartDate;
@property (nonatomic) unsigned long long presentationMode;
@property (nonatomic, readonly) UIResponder *responder;
@property (nonatomic, readonly) UIScrollView *scrollView;
@property (nonatomic, readonly) SXScrollViewController *scrollViewController;
@property (nonatomic, readonly, copy) NSString *selectedText;
@property (nonatomic) bool shouldAutoPlayVideo;
@property (nonatomic) bool shouldDisableTransparentNavigationBar;
@property (nonatomic, readonly) <NUSpotlightManager> *spotlightManager;
@property (readonly) Class superclass;
@property (nonatomic, readonly) SXVideoPlayerViewControllerManager *videoPlayerViewControllerManager;

+ (id)_parentOrPresentingViewControllerFor:(id)arg1;

- (void).cxx_destruct;
- (bool)accessibilityShouldScrollForScrollViewController:(id)arg1 defaultValue:(bool)arg2;
- (id)analyticsReporting;
- (void)applicationDidBecomeActive:(id)arg1;
- (void)applicationWillEnterForeground:(id)arg1;
- (id)articleContext;
- (id)articleDataProvider;
- (bool)articleIsPresentingFullscreen;
- (double)articleLoadedTime;
- (id)articleMessager;
- (id)articleScrollPositionManager;
- (id)articleViewStyler;
- (bool)becomeFirstResponder;
- (bool)canBecomeFirstResponder;
- (id)chromeControl;
- (long long)contentScale;
- (id)contentSizeCategory;
- (id)currentPresentationAttributes;
- (id)debugSettingsProvider;
- (id)delegate;
- (bool)didRestoreScrollPosition;
- (id)documentSectionBlueprintProvider;
- (id)endOfArticleDataProvider;
- (id)eventManager;
- (void)finalizeArticleLoadingWithContext:(id)arg1;
- (id)initWithArticleDataProvider:(id)arg1 scrollViewController:(id)arg2 appStateMonitor:(id)arg3 keyCommandManager:(id)arg4 loadingListeners:(id)arg5 headerBlueprintProvider:(id)arg6 debugSettingsProvider:(id)arg7 videoPlayerViewControllerManager:(id)arg8 articleScrollPositionManager:(id)arg9 chromeControl:(id)arg10 spotlightManager:(id)arg11;
- (bool)isPreviewingOrShowingHardPaywall;
- (id)keyCommandManager;
- (void)loadArticle;
- (id)loadingDelegate;
- (id)loadingListeners;
- (id)manualScrollingStartDate;
- (double)navigationBarHeightForScrollViewController:(id)arg1;
- (void)nowPlayingDidDisappear:(id)arg1;
- (void)nowPlayingWillDisappear:(id)arg1;
- (long long)preferredStatusBarStyle;
- (bool)prefersStatusBarHidden;
- (unsigned long long)presentationMode;
- (void)reportEvent:(id)arg1;
- (bool)resignFirstResponder;
- (id)responder;
- (void)saveScrollPosition:(id)arg1;
- (void)scrollToAudioPositionAndHideMessageAfterEvent:(id)arg1;
- (void)scrollToTopAnimated:(bool)arg1;
- (id)scrollView;
- (id)scrollViewController;
- (void)scrollViewController:(id)arg1 didApplyDocumentStyle:(id)arg2;
- (void)scrollViewController:(id)arg1 enableNavigation:(bool)arg2;
- (bool)scrollViewController:(id)arg1 shouldOccludeAccessibilityElement:(id)arg2;
- (void)scrollViewControllerDidLayoutContent:(id)arg1;
- (void)scrollViewControllerDidScroll:(id)arg1;
- (void)scrollViewControllerDidScrollToBottomOfPrimaryContent:(id)arg1;
- (void)scrollViewControllerDidStopScrolling:(id)arg1;
- (void)scrollViewControllerDismissFullscreen:(id)arg1;
- (void)scrollViewControllerRequestsFullscreen:(id)arg1;
- (void)scrollViewControllerWillDismissFullscreen:(id)arg1;
- (id)selectedText;
- (void)setAnalyticsReporting:(id)arg1;
- (void)setArticleContext:(id)arg1;
- (void)setArticleIsPresentingFullscreen:(bool)arg1;
- (void)setArticleLoadedTime:(double)arg1;
- (void)setContentScale:(long long)arg1;
- (void)setContentSizeCategory:(id)arg1;
- (void)setDelegate:(id)arg1;
- (void)setDidRestoreScrollPosition:(bool)arg1;
- (void)setLoadingDelegate:(id)arg1;
- (void)setManualScrollingStartDate:(id)arg1;
- (void)setPresentationMode:(unsigned long long)arg1;
- (void)setShouldAutoPlayVideo:(bool)arg1;
- (void)setShouldDisableTransparentNavigationBar:(bool)arg1;
- (bool)shouldAutoPlayVideo;
- (bool)shouldDisableTransparentNavigationBar;
- (bool)shouldSaveScrollPosition;
- (void)showArticleMessage:(long long)arg1 hideAfterEvent:(id)arg2;
- (id)spotlightManager;
- (void)testingConditionEnabled:(bool)arg1;
- (double)toolBarHeightForScrollViewController:(id)arg1;
- (void)traitCollectionDidChange:(id)arg1;
- (void)updatePresentationAttributes;
- (void)updateScrollPositionFromContext;
- (void)updateScrollViewControllerWithContentOverlayBlueprint:(id)arg1 topOffset:(double)arg2;
- (void)updateScrollViewControllerWithFooterBlueprint:(id)arg1;
- (void)updateScrollViewControllerWithHeaderBlueprint:(id)arg1;
- (void)updateTextSelectionForPaywallPresentation;
- (bool)useTransparentNavigationBar;
- (id)videoPlayerViewControllerManager;
- (void)viewDidAppear:(bool)arg1;
- (void)viewDidDisappear:(bool)arg1;
- (void)viewDidLayoutSubviews;
- (void)viewDidLoad;
- (void)viewSafeAreaInsetsDidChange;
- (void)viewWillAppear:(bool)arg1;
- (void)viewWillDisappear:(bool)arg1;
- (void)viewportDebuggingEnabled:(bool)arg1;
- (void)willReturnToFullscreen:(id)arg1;

@end