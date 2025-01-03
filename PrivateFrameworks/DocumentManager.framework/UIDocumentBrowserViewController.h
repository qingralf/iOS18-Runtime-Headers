/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/DocumentManager.framework/DocumentManager
 */

@interface UIDocumentBrowserViewController : UIViewController <DOCAppearanceCustomization, DOCHostDocumentBrowserViewControllerInterface, DOCRemoteViewControllerDelegate, NSCoding, UIAdaptivePresentationControllerDelegate, _UIRemoteViewControllerContaining> {
    DOCDocBrowserVC_UIActivityViewController * _activityViewController;
    NSArray * _additionalLeadingNavigationBarButtonItems;
    NSArray * _additionalTrailingNavigationBarButtonItems;
    bool  _allowsDocumentCreation;
    bool  _allowsPickingMultipleItems;
    DOCAppearance * _appearance;
    bool  _attachedToLaunchOptionsForUIPDocumentLanding;
    UIColor * _backgroundColor;
    DOCConfiguration * _configuration;
    bool  _configuredForUIPDocumentLanding;
    NSArray * _customActions;
    <UIDocumentBrowserViewControllerDelegate> * _delegate;
    DOCDocumentCreationController * _documentCreationController;
    <_UIDocumentLandingPresenter> * _documentLandingPresenter;
    UIViewController * _dummySplitViewController;
    bool  _hasScheduledAppearanceUpdateXPC;
    bool  _isDelayingParentPresentation;
    bool  _isDelayingRemotePresentation;
    bool  _isDisplayingRemoteViewController;
    NSArray * _leadingBarButtonTrackingViews;
    UISheetPresentationController * _observedUIPPresentationController;
    DOCUIPBrowserState * _preferredUIPBrowserState;
    NSArray * _remoteAdditionalLeadingNavigationBarButtonItems;
    NSArray * _remoteAdditionalTrailingNavigationBarButtonItems;
    bool  _remoteHasReceivedInitialUIPBrowserState;
    DOCRemoteContainerViewController * _remoteViewController;
    <DOCServiceDocumentBrowserViewControllerInterface> * _serviceProxy;
    NSOperationQueue * _serviceQueue;
    UIView * _trackingViewsContainer;
    NSArray * _trailingBarButtonTrackingViews;
    UIDocumentBrowserTransitionController * _uipTransitionCoordinator;
    NSURL * _urlCurrentlyBeingImported;
}

@property (nonatomic, readonly) NSString *_activeDocumentCreationIntent;
@property (nonatomic, readonly) _UIRemoteViewController *_containedRemoteViewController;
@property (nonatomic, readonly) NSString *activeDocumentCreationIntent;
@property (nonatomic) DOCDocBrowserVC_UIActivityViewController *activityViewController;
@property (nonatomic, retain) NSArray *additionalLeadingNavigationBarButtonItems;
@property (nonatomic, retain) NSArray *additionalTrailingNavigationBarButtonItems;
@property (nonatomic, readonly, copy) NSArray *allowedContentTypes;
@property (nonatomic) bool allowsDocumentCreation;
@property (nonatomic) bool allowsPickingMultipleItems;
@property (nonatomic, copy) UIColor *backgroundColor;
@property (nonatomic) unsigned long long browserUserInterfaceStyle;
@property (nonatomic, retain) DOCConfiguration *configuration;
@property (nonatomic, readonly, copy) NSArray *contentTypesForRecentDocuments;
@property (nonatomic, copy) NSString *createButtonTitle;
@property (nonatomic, copy) NSArray *customActions;
@property (readonly, copy) NSString *debugDescription; /* unknown property attribute: ? */
@property (nonatomic) double defaultDocumentAspectRatio;
@property (nonatomic) <UIDocumentBrowserViewControllerDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) DOCDocumentCreationController *documentCreationController;
@property (nonatomic) <_UIDocumentLandingPresenter> *documentLandingPresenter;
@property (nonatomic, retain) UIViewController *dummySplitViewController;
@property (readonly) DOCAppearance *effectiveAppearance;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) NSArray *leadingBarButtonTrackingViews;
@property (nonatomic, copy) NSString *localizedCreateDocumentActionTitle;
@property (nonatomic, readonly) UISheetPresentationController *observedUIPPresentationController;
@property (nonatomic, retain) DOCUIPBrowserState *preferredUIPBrowserState;
@property (nonatomic, readonly, copy) NSArray *recentDocumentsContentTypes;
@property (nonatomic, retain) NSArray *remoteAdditionalLeadingNavigationBarButtonItems;
@property (nonatomic, retain) NSArray *remoteAdditionalTrailingNavigationBarButtonItems;
@property (nonatomic) bool remoteHasReceivedInitialUIPBrowserState;
@property (nonatomic, retain) DOCRemoteContainerViewController *remoteViewController;
@property (nonatomic, retain) <DOCServiceDocumentBrowserViewControllerInterface> *serviceProxy;
@property (nonatomic, retain) NSOperationQueue *serviceQueue;
@property (nonatomic) bool shouldShowFileExtensions;
@property (readonly) Class superclass;
@property (nonatomic, retain) NSArray *trailingBarButtonTrackingViews;

+ (id)placeholderURLForDownloadsFolder;

- (void).cxx_destruct;
- (void)__commonInit;
- (id)_activeDocumentCreationIntent;
- (id)_activityViewControllerWithItemBookmarks:(id)arg1 isForTitleMenuFolderSharing:(bool)arg2 popoverTracker:(id)arg3 isContentManaged:(bool)arg4 additionalActivities:(id)arg5 activityRunner:(id)arg6;
- (void)_applyBrowserStateChange:(id)arg1 serviceProxy:(id)arg2 animated:(bool)arg3;
- (void)_beginMonitoringUIPPresentationController;
- (void)_beginTransitionCoordinatorSessionForDocumentURL:(id)arg1;
- (bool)_canSendDocumentLandingDidPickDocumentsAtURLs;
- (void)_checkIfObservedUIPPresentationControllerDetentDidChangeForReason:(id)arg1;
- (void)_clearCurrentOpenInteractionUnlessUIPDocumentLanding;
- (void)_clearShownViewControllers;
- (void)_commitDocumentURLPreview:(id)arg1;
- (id)_containedRemoteViewController;
- (void)_core_didImportDocumentAtURL:(id)arg1 toDestinationURL:(id)arg2;
- (void)_core_didRequestDocumentCreationWithHandler:(id /* block */)arg1;
- (void)_core_failedToImportDocumentAtURL:(id)arg1 error:(id)arg2;
- (long long)_currentLandingModeBasedForObservedPresentationController;
- (bool)_delegateRespondsToSelector:(SEL)arg1;
- (void)_didAttachToDocumentLaunchOptionsForUseInUIPDocumentLanding;
- (void)_didDenyCreateDocumentSessionWithError:(id)arg1;
- (void)_didImportDocumentAtURL:(id)arg1 toDestinationItemBookmark:(id)arg2;
- (void)_didPickItemBookmarks:(id)arg1;
- (void)_didRequestDocumentCreationWithHandler:(id /* block */)arg1;
- (void)_didTapTryAgainButton;
- (void)_didTriggerBarButtonWithUUID:(id)arg1 overflowAction:(bool)arg2;
- (void)_didTriggerCustomActionWithIdentifier:(id)arg1 onItemBookmarks:(id)arg2;
- (void)_displayActivityControllerWithItemBookmarks:(id)arg1 popoverTracker:(id)arg2 isContentManaged:(bool)arg3 additionalActivities:(id)arg4 activityProxy:(id)arg5;
- (void)_displayRemoteControllerIfNeeded;
- (void)_doc_endDelayingRemotePresentation;
- (void)_doc_performRemoteUpdateAppearanceForReason:(unsigned long long)arg1;
- (void)_documentPickerWasCancelled;
- (void)_embedDocumentBrowserViewController;
- (void)_embedViewController:(id)arg1;
- (void)_endMonitoringUIPPresentationController;
- (void)_endTransitionCoordinatorSession;
- (void)_ensurePreparedForAPIRequringXPC;
- (void)_ensurePreparedForAPIRequringXPC_asLegacy;
- (void)_ensurePreparedForAPIRequringXPC_asUIP;
- (void)_establishFirstResponderOnServiceSideForKeyCommand:(id)arg1;
- (bool)_expectsRemoteViewController;
- (void)_failedToImportDocumentAtURL:(id)arg1 error:(id)arg2;
- (void)_fallbackRenameDocumentAtURL:(id)arg1 proposedName:(id)arg2 completionHandler:(id /* block */)arg3;
- (bool)_hasExistingRemoteViewControllerWithInUIPDocumentLanding:(bool)arg1;
- (void)_iOS_didImportDocumentAtURL:(id)arg1 toDestinationItemBookmark:(id)arg2;
- (void)_iOS_didRequestDocumentCreationWithHandler:(id /* block */)arg1;
- (void)_iOS_failedToImportDocumentAtURL:(id)arg1 error:(id)arg2;
- (void)_importDocumentAtURL:(id)arg1 neighbourURL:(id)arg2 mode:(unsigned long long)arg3 completionHandler:(id /* block */)arg4;
- (void)_initiateDocumentCreationWithIntent:(id)arg1;
- (void)_instantiateRemoteViewControllerWithCompletion:(id /* block */)arg1;
- (long long)_preferredModalPresentationStyle;
- (void)_prepareForPresentingInUIPDocumentLanding;
- (void)_presentActivityViewControllerForItemBookmarks:(id)arg1 withPopoverTracker:(id)arg2 isContentManaged:(bool)arg3 additionalActivities:(id)arg4 activityProxy:(id)arg5;
- (void)_renameDocumentAtURL:(id)arg1 newName:(id)arg2 completionBlock:(id /* block */)arg3;
- (void)_requestAnimationInfoForDocumentAtURL:(id)arg1 completion:(id /* block */)arg2;
- (id)_sandboxingURLWrapperForURL:(id)arg1 readonly:(bool)arg2 error:(id*)arg3;
- (void)_sendBrowserChange:(id)arg1 serviceProxy:(id)arg2;
- (void)_sendBrowserLandingModeChangeForReason:(id)arg1;
- (void)_sendDocumentLandingDidPickDocumentsAtURLs:(id)arg1;
- (void)_setURLCurrentlyBeingImported:(id)arg1;
- (bool)_shouldConsultDelegateShouldShowActivityViewControllerForItemBookmarks:(id)arg1;
- (void)_showDocumentBrowserViewController:(bool)arg1;
- (void)_showErrorViewController;
- (id)_unavailableConfigurationForTryAgain;
- (bool)_updateAppearanceShowsCreateButton;
- (void)_updateRemoteBarButtonFrames:(id)arg1 forUUID:(id)arg2;
- (void)_viewControllerPresentationDidInitiate;
- (id)activeDocumentCreationIntent;
- (id)activityViewController;
- (void)addDummySplitViewControllerForPreferredContentSize;
- (void)addOperationToServiceQueue:(id /* block */)arg1;
- (id)additionalLeadingNavigationBarButtonItems;
- (id)additionalTrailingNavigationBarButtonItems;
- (id)allowedContentTypes;
- (bool)allowsDocumentCreation;
- (bool)allowsPickingMultipleItems;
- (void)applicationDidBecomeActive:(id)arg1;
- (id)backgroundColor;
- (unsigned long long)browserUserInterfaceStyle;
- (bool)canBecomeFirstResponder;
- (bool)canPerformAction:(SEL)arg1 withSender:(id)arg2;
- (id)childViewControllerForScreenEdgesDeferringSystemGestures;
- (void)clearCurrentOpenInteraction;
- (id)configuration;
- (id)configurationForOpeningDocumentsWithContentTypes:(id)arg1;
- (id)contentTypesForRecentDocuments;
- (id)createButtonTitle;
- (id)customActions;
- (void)dealloc;
- (double)defaultDocumentAspectRatio;
- (id)delegate;
- (void)didMoveToParentViewController:(id)arg1;
- (void)dismissAllPresentedViewControllers:(bool)arg1 completion:(id /* block */)arg2;
- (id)documentCreationController;
- (id)documentLandingPresenter;
- (id)dummySplitViewController;
- (void)effectiveAppearanceDidChange:(id)arg1;
- (bool)enclosedInUIPDocumentLanding;
- (void)encodeWithCoder:(id)arg1;
- (void)forwardHostSceneIdentifier:(id)arg1;
- (void)getTrackingViews:(id*)arg1 remoteButtons:(id*)arg2 fromBarButtons:(id)arg3;
- (void)importDocumentAtURL:(id)arg1 byMoving:(bool)arg2 toCurrentBrowserLocationWithCompletion:(id /* block */)arg3;
- (void)importDocumentAtURL:(id)arg1 mode:(unsigned long long)arg2 toCurrentBrowserLocationWithCompletion:(id /* block */)arg3;
- (void)importDocumentAtURL:(id)arg1 nextToDocumentAtURL:(id)arg2 mode:(unsigned long long)arg3 completionHandler:(id /* block */)arg4;
- (id)init;
- (id)initForOpeningContentTypes:(id)arg1;
- (id)initForOpeningFilesWithContentTypes:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithConfiguration:(id)arg1;
- (id)keyCommands;
- (id)leadingBarButtonTrackingViews;
- (id)localizedCreateDocumentActionTitle;
- (void)manageOverrideIfNecessaryForPresentationController:(id)arg1;
- (id)observedUIPPresentationController;
- (void)performBrowserStateChange:(id)arg1;
- (void)performBrowserStateChange:(id)arg1 animated:(bool)arg2;
- (void)performKeyCommandNoOpOnHostSide:(id)arg1;
- (struct CGSize { double x1; double x2; })preferredContentSize;
- (void)preferredContentSizeDidChangeForChildContentContainer:(id)arg1;
- (id)preferredFocusEnvironments;
- (long long)preferredStatusBarStyle;
- (id)preferredUIPBrowserState;
- (void)prepareItemBookmarks:(id)arg1 forMode:(unsigned long long)arg2 usingBookmark:(bool)arg3 completionBlock:(id /* block */)arg4;
- (void)prepareItemBookmarks:(id)arg1 usingBookmark:(bool)arg2 completionBlock:(id /* block */)arg3;
- (void)presentViewController:(id)arg1 animated:(bool)arg2 completion:(id /* block */)arg3;
- (void)presentationController:(id)arg1 prepareAdaptivePresentationController:(id)arg2;
- (id)recentDocumentsContentTypes;
- (id)recentDocumentsContentTypesFromInfoPlist;
- (id)remoteAdditionalLeadingNavigationBarButtonItems;
- (id)remoteAdditionalTrailingNavigationBarButtonItems;
- (id)remoteBarButtonForUUID:(id)arg1;
- (bool)remoteHasReceivedInitialUIPBrowserState;
- (id)remoteViewController;
- (void)remoteViewControllerDidTerminateViewServiceWithError:(id)arg1;
- (void)renameDocumentAtURL:(id)arg1 proposedName:(id)arg2 completionHandler:(id /* block */)arg3;
- (void)revealDocumentAtURL:(id)arg1 importIfNeeded:(bool)arg2 completion:(id /* block */)arg3;
- (id)serviceProxy;
- (id)serviceQueue;
- (void)setActivityViewController:(id)arg1;
- (void)setAdditionalLeadingNavigationBarButtonItems:(id)arg1;
- (void)setAdditionalTrailingNavigationBarButtonItems:(id)arg1;
- (void)setAllowsDocumentCreation:(bool)arg1;
- (void)setAllowsPickingMultipleItems:(bool)arg1;
- (void)setBackgroundColor:(id)arg1;
- (void)setBrowserUserInterfaceStyle:(unsigned long long)arg1;
- (void)setConfiguration:(id)arg1;
- (void)setCreateButtonTitle:(id)arg1;
- (void)setCustomActions:(id)arg1;
- (void)setDefaultDocumentAspectRatio:(double)arg1;
- (void)setDelegate:(id)arg1;
- (void)setDocumentLandingPresenter:(id)arg1;
- (void)setDummySplitViewController:(id)arg1;
- (void)setEditing:(bool)arg1 animated:(bool)arg2;
- (void)setLeadingBarButtonTrackingViews:(id)arg1;
- (void)setLocalizedCreateDocumentActionTitle:(id)arg1;
- (void)setPreferredUIPBrowserState:(id)arg1;
- (void)setRemoteAdditionalLeadingNavigationBarButtonItems:(id)arg1;
- (void)setRemoteAdditionalTrailingNavigationBarButtonItems:(id)arg1;
- (void)setRemoteHasReceivedInitialUIPBrowserState:(bool)arg1;
- (void)setRemoteViewController:(id)arg1;
- (void)setServiceProxy:(id)arg1;
- (void)setServiceQueue:(id)arg1;
- (void)setShouldShowFileExtensions:(bool)arg1;
- (void)setTrailingBarButtonTrackingViews:(id)arg1;
- (bool)shouldShowFileExtensions;
- (bool)supportsRemovableFileProvidersForConfiguration:(id)arg1;
- (id)trackingViewForUUID:(id)arg1;
- (id)trailingBarButtonTrackingViews;
- (id)transitionControllerForDocumentAtURL:(id)arg1;
- (id)transitionControllerForDocumentURL:(id)arg1;
- (void)updateBackgroundColor;
- (void)updateForChangedTraitsAffectingColors;
- (void)viewDidLoad;
- (void)viewDidMoveToWindow:(id)arg1 shouldAppearOrDisappear:(bool)arg2;
- (void)viewWillAppear:(bool)arg1;
- (void)viewWillTransitionToSize:(struct CGSize { double x1; double x2; })arg1 withTransitionCoordinator:(id)arg2;

@end
