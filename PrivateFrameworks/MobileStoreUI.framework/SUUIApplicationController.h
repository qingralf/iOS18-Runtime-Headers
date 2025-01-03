/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/MobileStoreUI.framework/MobileStoreUI
 */

@interface SUUIApplicationController : NSObject <IKAppContextDelegate, IKApplication, SUUIModalDocumentDelegate, SUUIModalSourceViewProvider, SUUINavigationControllerDelegate, SUUINavigationDocumentDelegate, SUUITabBarControllerDelegate, SUUIURLResolverDelegate, UINavigationControllerDelegate, UITabBarControllerDelegate> {
    SUUIURL * _activationURL;
    NSURL * _applicationScriptURL;
    SUUIClientContext * _clientContext;
    Class  _clientContextClass;
    <SUUIApplicationDelegate> * _delegate;
    SUUIAppDeviceConfig * _deviceConfig;
    bool  _didDisplayFirstPage;
    UIViewController * _floatingStatusOverlayViewController;
    bool  _hidesTabBar;
    bool  _ignoreDidBecomeActive;
    unsigned long long  _indexOfLastTabNeedingContent;
    long long  _lastNavigationControllerOperation;
    UIViewController * _lastPoppedViewController;
    NSDictionary * _launchOptions;
    SUUIURL * _legacyLaunchURL;
    <IKAppDataStoring> * _localStorage;
    bool  _mescalPrimeEnabledForXHRRequests;
    SUUIMetricsController * _metricsController;
    SUUIModalDocumentController * _modalDocumentController;
    SUUISimpleContainerViewController * _navigationContainerViewController;
    NSMutableArray * _navigationDocumentControllers;
    NSOperationQueue * _operationQueue;
    SUUIApplicationControllerOptions * _options;
    SUUIPreviewDocumentController * _previewDocumentController;
    bool  _reloadApplicationOnForegroundNotification;
    unsigned long long  _resignActiveTaskID;
    UIViewController * _rootViewController;
    IKAppContext * _scriptContext;
    long long  _scriptLoadState;
    SUUIScrollingTabBarController * _scrollingTabBarController;
    _SUUIApplicationShutdownHelper * _shutdownHelper;
    <SUUIStatusOverlayProvider> * _statusOverlayProvider;
    bool  _stopApplicationOnBackgroundNotification;
    SUUITabBarController * _tabBarController;
    NSArray * _tabBarItems;
    SUUINavigationDocumentController * _transientNavigationDocument;
    SUUIURLResolver * _urlResolver;
    <IKAppDataStoring> * _vendorStorage;
    NSMutableArray * _whenLoadedBlocks;
}

@property (nonatomic, readonly) long long _applicationMode;
@property (setter=_setHidesTabBar:, nonatomic) bool _hidesTabBar;
@property (nonatomic, readonly) NSArray *_navigationControllers;
@property (nonatomic, readonly) SUUIPreviewDocumentController *_previewOverlayDocumentController;
@property (setter=_setSelectedTabBarIndex:, nonatomic) long long _selectedTabBarIndex;
@property (nonatomic, readonly) SUUINavigationDocumentController *_transientNavigationController;
@property (nonatomic, readonly) SUUIClientContext *clientContext;
@property (readonly, copy) NSString *debugDescription; /* unknown property attribute: ? */
@property (nonatomic) <SUUIApplicationDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic) bool mescalPrimeEnabledForXHRRequests;
@property (nonatomic, readonly) SUUIModalDocumentController *modalDocumentController;
@property (nonatomic, readonly) SUUIApplicationControllerOptions *options;
@property (nonatomic, readonly) UIViewController *rootViewController;
@property (nonatomic, readonly) SUUIScrollingTabBarController *scrollingTabBarController;
@property (readonly) Class superclass;
@property (nonatomic, readonly) UITabBarController *tabBarController;
@property (nonatomic, copy) NSArray *tabBarItems;

+ (id)_referrerAppForSourceApplication:(id)arg1 launchURL:(id*)arg2;
+ (id)applicationOptionsWithLaunchOptions:(id)arg1;
+ (id)configurationPreloader;
+ (void)finishedWithConfigurationPreloader;
+ (void)prepareForLaunch;

- (void).cxx_destruct;
- (void)URLResolver:(id)arg1 didFinishWithResult:(bool)arg2;
- (bool)URLResolver:(id)arg1 shouldPerformDefaultActionForURL:(id)arg2;
- (void)URLResolver:(id)arg1 showTransientViewController:(id)arg2;
- (void)URLResolver:(id)arg1 showURL:(id)arg2 withTabIdentifier:(id)arg3;
- (Class)_JSITunesStoreClass;
- (id)_activeNavigationController;
- (void)_applicationDidEnterBackground:(id)arg1;
- (long long)_applicationMode;
- (void)_applicationWillEnterForeground:(id)arg1;
- (void)_attemptAMSURLHandlingIfPossibleForExternalURL:(id)arg1 fallback:(id /* block */)arg2;
- (void)_dispatchTabBarOnNeedsContentForTabAtIndex:(unsigned long long)arg1;
- (void)_dispatchTabBarOnSelect;
- (id)_documentControllerForNavigationController:(id)arg1;
- (void)_ensureStackConsistencyForNavigationController:(id)arg1;
- (id)_existingTabBarController;
- (void)_failReloadWithError:(id)arg1;
- (void)_failWithError:(id)arg1;
- (void)_finishWillResignActiveWithDialogState:(bool)arg1;
- (void)_fireBlocksAfterLoad;
- (void)_handleScriptUnavailable;
- (bool)_hidesTabBar;
- (void)_invalidateApplication;
- (bool)_isDisplayingAccountViewController;
- (bool)_isStoreFront:(id)arg1 equalToStoreFront:(id)arg2;
- (void)_jsLaunchFinishedWithLaunchMetrics:(id)arg1;
- (id)_launchOptionsWithURL:(id)arg1;
- (void)_legacyResolveExternalURL:(id)arg1;
- (void)_loadApplicationScript;
- (id)_navigationContainerViewController;
- (id)_navigationControllers;
- (bool)_needsStatusOverlay;
- (id)_newNavigationControllerWithTabBarItem:(id)arg1;
- (id)_operationQueue;
- (id)_overlayNavigationControllerForViewController:(id)arg1;
- (void)_pageDidDisplayNotification:(id)arg1;
- (bool)_playPreviewForPreviewTemplate:(id)arg1;
- (void)_previewDocumentIsActiveChangeNotification:(id)arg1;
- (id)_previewOverlayDocumentController;
- (void)_recordTabBarMetricsEventToSelectViewController:(id)arg1;
- (void)_reloadAfterNetworkChange:(id)arg1;
- (void)_reloadApplication;
- (void)_reloadRootViewControllers;
- (void)_reloadTabBarWithClientContext:(id)arg1;
- (void)_removeObserversForReloadNotifications;
- (void)_removeStatusOverlayFromAllNavigationControllers;
- (void)_resetDocumentControllers;
- (void)_resetUserInteraceForAccountViewDisappear:(id)arg1;
- (void)_resetUserInterfaceAfterStoreFrontChange;
- (void)_retryAfterFailure;
- (id)_rootDocuments;
- (Class)_scrollingTabBarControllerClass;
- (long long)_selectedTabBarIndex;
- (void)_sendClientContextDidChange;
- (void)_sendDidDisplayFirstPageIfNecessary;
- (bool)_sendNativeBackButtonMetricEvents;
- (void)_setClientContextWithDictionary:(id)arg1;
- (void)_setHidesTabBar:(bool)arg1;
- (void)_setSelectedTabBarIndex:(long long)arg1;
- (bool)_shouldUseLegacyURLHandlingForExternalURL:(id)arg1;
- (void)_showFloatingStatusOverlayAnimated:(bool)arg1;
- (void)_showStatusOverlayForNavigationController:(id)arg1 viewController:(id)arg2 animated:(bool)arg3;
- (void)_startScriptContextWithURL:(id)arg1;
- (id)_statusOverlayProviderForViewController:(id)arg1;
- (void)_stopApplication;
- (void)_stopScriptContextForReload;
- (void)_storeFrontChangeNotification:(id)arg1;
- (id)_tabBarController;
- (Class)_tabBarControllerClass;
- (void)_tintTabBarWithViewController:(id)arg1;
- (id)_transientNavigationController;
- (id)_transientNavigationDocument;
- (void)_updateOverlayNavigationController:(id)arg1;
- (bool)_usesFloatingStatusOverlayForWidth:(double)arg1;
- (id)activeDocument;
- (void)appContext:(id)arg1 didCompletePurchase:(id)arg2;
- (void)appContext:(id)arg1 didCompleteSoftwarePurchase:(id)arg2;
- (void)appContext:(id)arg1 didExitWithOptions:(id)arg2;
- (void)appContext:(id)arg1 didFailWithError:(id)arg2;
- (void)appContext:(id)arg1 didStartWithOptions:(id)arg2;
- (void)appContext:(id)arg1 didStopWithOptions:(id)arg2;
- (void)appContext:(id)arg1 evaluateAppJavaScriptInContext:(id)arg2;
- (void)appContext:(id)arg1 needsReloadWithUrgency:(unsigned long long)arg2;
- (void)appContext:(id)arg1 needsReloadWithUrgency:(unsigned long long)arg2 options:(id)arg3;
- (void)appContext:(id)arg1 setPreviewOverlayDocument:(id)arg2 withOptions:(id)arg3;
- (void)appContextNeedsRestart:(id)arg1;
- (id)appIdentifier;
- (bool)appIsTrusted;
- (id)appJSURL;
- (bool)appJSURLTrusted;
- (id)appLaunchParams;
- (void)application:(id)arg1 didReceiveURL:(id)arg2;
- (void)applicationDidBecomeActive:(id)arg1;
- (void)applicationWillResignActive:(id)arg1;
- (id)clientContext;
- (void)dealloc;
- (id)delegate;
- (id)deviceConfigForContext:(id)arg1;
- (void)evaluateBlockWhenLoaded:(id /* block */)arg1;
- (void)getModalSourceViewForElementIdentifier:(id)arg1 completionBlock:(id /* block */)arg2;
- (void)hideStatusOverlayForProvider:(id)arg1 animated:(bool)arg2;
- (id)init;
- (id)initWithClientContextClass:(Class)arg1;
- (id)initWithClientContextClass:(Class)arg1 options:(id)arg2;
- (id)initWithClientContextClass:(Class)arg1 tabBarControllerStyle:(long long)arg2;
- (id)jsNavigationDocumentForNavigationController:(id)arg1 inContext:(id)arg2;
- (id)jsNavigationDocumentForNavigationDocumentController:(id)arg1 inContext:(id)arg2;
- (void)loadApplication;
- (void)loadApplicationWithOptions:(id)arg1;
- (id)localStorage;
- (bool)mescalPrimeEnabledForXHRRequests;
- (id)modalDocumentController;
- (long long)modalDocumentController:(id)arg1 barStyleForStackItem:(id)arg2;
- (void)modalDocumentControllerDidFinish:(id)arg1;
- (void)navigationController:(id)arg1 didShowViewController:(id)arg2 animated:(bool)arg3;
- (void)navigationController:(id)arg1 willShowViewController:(id)arg2 animated:(bool)arg3;
- (id)navigationControllerForContext:(id)arg1;
- (unsigned long long)navigationControllerSupportedInterfaceOrientations:(id)arg1;
- (void)navigationDocumentController:(id)arg1 requestsAccessToAppContextUsingBlock:(id /* block */)arg2;
- (void)navigationDocumentStackDidChange:(id)arg1;
- (id)options;
- (id)presentationViewControllerForAppContext:(id)arg1;
- (id)presentationViewControllerForURLResolver:(id)arg1;
- (void)recordMetricsEvent:(id)arg1 flushImmediately:(bool)arg2;
- (void)resumeApplicationWithOptions:(id)arg1;
- (id)rootViewController;
- (id)scrollingTabBarController;
- (id)selectTabWithIdentifier:(id)arg1;
- (void)setClientContext:(id)arg1;
- (void)setDelegate:(id)arg1;
- (void)setMescalPrimeEnabledForXHRRequests:(bool)arg1;
- (void)setTabBarItems:(id)arg1;
- (void)setUserInterfaceOverrideOnTabBarController:(id)arg1 forViewController:(id)arg2;
- (bool)shouldIgnoreJSValidation;
- (void)showErrorViewForLaunchFailure;
- (void)showErrorViewWithTitle:(id)arg1 message:(id)arg2;
- (void)showErrorViewWithTitle:(id)arg1 message:(id)arg2 buttonTitle:(id)arg3 buttonAction:(id /* block */)arg4;
- (void)showExternalURL:(id)arg1;
- (void)showStatusOverlayUsingProvider:(id)arg1 animated:(bool)arg2;
- (void)showTransientViewController:(id)arg1;
- (struct CGSize { double x1; double x2; })sizeForNavigationDocument:(id)arg1;
- (void)suspendApplicationWithOptions:(id)arg1;
- (id)tabBarController;
- (void)tabBarController:(id)arg1 didEndCustomizingViewControllers:(id)arg2 changed:(bool)arg3;
- (void)tabBarController:(id)arg1 didReselectViewController:(id)arg2;
- (void)tabBarController:(id)arg1 didSelectViewController:(id)arg2;
- (bool)tabBarController:(id)arg1 shouldFallbackToRootForController:(id)arg2;
- (bool)tabBarController:(id)arg1 shouldSelectViewController:(id)arg2;
- (void)tabBarController:(id)arg1 willDisplayViewController:(id)arg2;
- (void)tabBarController:(id)arg1 willTransitionToSize:(struct CGSize { double x1; double x2; })arg2 withTransitionCoordinator:(id)arg3;
- (unsigned long long)tabBarControllerSupportedInterfaceOrientations:(id)arg1;
- (id)tabBarItems;
- (void)updateTabBarWithItems:(id)arg1 animated:(bool)arg2;
- (void)updateTabBarWithItems:(id)arg1 animated:(bool)arg2 completion:(id /* block */)arg3;
- (id)vendorIdentifier;
- (id)vendorStorage;

@end
