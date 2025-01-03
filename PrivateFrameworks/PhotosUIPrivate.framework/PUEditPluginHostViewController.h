/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/PhotosUIPrivate.framework/PhotosUIPrivate
 */

@interface PUEditPluginHostViewController : UIViewController <PUEditingExtensionUndoButtonHost, PXForcedDismissableViewController> {
    NSNumber * _allowsFullScreen;
    <PUEditPluginHostViewControllerDataSource> * _dataSource;
    <PUEditPluginHostViewControllerDelegate> * _delegate;
    bool  _didHandleCancel;
    bool  _didHandleDone;
    id  _disablingIdleTimerToken;
    bool  _extensionDidBeginContentEditing;
    PUEditPlugin * _plugin;
    UIBarButtonItem * _redoBarButtonItem;
    UIViewController * _remoteViewController;
    <NSCopying> * _request;
    bool  _showUndoRedoButtons;
    UIBarButtonItem * _undoBarButtonItem;
    PUEditingExtensionUndoProxyHostSide * _undoProxy;
}

@property (nonatomic, retain) NSNumber *allowsFullScreen;
@property (nonatomic) <PUEditPluginHostViewControllerDataSource> *dataSource;
@property (readonly, copy) NSString *debugDescription; /* unknown property attribute: ? */
@property (nonatomic) <PUEditPluginHostViewControllerDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (nonatomic) bool didHandleCancel;
@property (nonatomic) bool didHandleDone;
@property (nonatomic, retain) id disablingIdleTimerToken;
@property (nonatomic) bool extensionDidBeginContentEditing;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) PUEditPlugin *plugin;
@property (nonatomic) UIBarButtonItem *redoBarButtonItem;
@property (retain) UIViewController *remoteViewController;
@property (copy) <NSCopying> *request;
@property (nonatomic) bool showUndoRedoButtons;
@property (readonly) Class superclass;
@property (nonatomic) UIBarButtonItem *undoBarButtonItem;
@property (nonatomic, retain) PUEditingExtensionUndoProxyHostSide *undoProxy;

- (void).cxx_destruct;
- (void)_addRemoteViewControllerIfNeededAllowingFullscreen:(bool)arg1;
- (void)_beginContentEditingWithCompletionHandler:(id /* block */)arg1 timeout:(double)arg2;
- (void)_beginDisablingIdleTimer;
- (void)_dismiss;
- (void)_endDisablingIdleTimerIfNecessary;
- (id)_extensionVendorProxy;
- (void)_handleCancel;
- (void)_handleCancelButton:(id)arg1;
- (void)_handleDoneButton:(id)arg1;
- (void)_handleVendorVersion:(unsigned int)arg1 completion:(id /* block */)arg2;
- (id)_hostContext;
- (void)_queryAllowsFullScreen:(id /* block */)arg1;
- (void)_queryShouldShowCancelConfirmationWithResponseHandler:(id /* block */)arg1 timeout:(double)arg2;
- (void)_setupUndoProxy;
- (void)_updateBarButtonsWithUndoRedoVisible:(bool)arg1;
- (id)allowsFullScreen;
- (id)dataSource;
- (void)dealloc;
- (id)delegate;
- (bool)didHandleCancel;
- (bool)didHandleDone;
- (id)disablingIdleTimerToken;
- (bool)extensionDidBeginContentEditing;
- (void)handleRedoButton:(id)arg1;
- (void)handleUndoButton:(id)arg1;
- (id)initWithPlugin:(id)arg1;
- (void)loadRemoteViewControllerWithCompletionHandler:(id /* block */)arg1;
- (void)loadView;
- (id)plugin;
- (long long)preferredUserInterfaceStyle;
- (bool)prefersStatusBarHidden;
- (bool)prepareForDismissingForced:(bool)arg1;
- (void)queryHandlingCapabilityForAdjustmentData:(id)arg1 withResponseHandler:(id /* block */)arg2 timeout:(double)arg3;
- (id)redoBarButtonItem;
- (id)remoteViewController;
- (id)request;
- (void)setAllowsFullScreen:(id)arg1;
- (void)setDataSource:(id)arg1;
- (void)setDelegate:(id)arg1;
- (void)setDidHandleCancel:(bool)arg1;
- (void)setDidHandleDone:(bool)arg1;
- (void)setDisablingIdleTimerToken:(id)arg1;
- (void)setExtensionDidBeginContentEditing:(bool)arg1;
- (void)setRedoBarButtonItem:(id)arg1;
- (void)setRemoteViewController:(id)arg1;
- (void)setRequest:(id)arg1;
- (void)setShowUndoRedo:(bool)arg1;
- (void)setShowUndoRedoButtons:(bool)arg1;
- (void)setUndoBarButtonItem:(id)arg1;
- (void)setUndoEnabled:(bool)arg1 redoEnabled:(bool)arg2;
- (void)setUndoProxy:(id)arg1;
- (bool)showUndoRedoButtons;
- (id)undoBarButtonItem;
- (id)undoProxy;
- (void)viewDidDisappear:(bool)arg1;
- (void)viewWillAppear:(bool)arg1;

@end
