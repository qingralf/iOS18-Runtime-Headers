/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/SwiftUI.framework/SwiftUI
 */

@interface _TtGC7SwiftUI19UIHostingControllerV16MagnifierSupport18MFReaderAnchorView_ : UIViewController {
    void allowedBehaviors;
    void alwaysOnBridge;
    void backgroundBridge;
    void barAppearanceBridge;
    void contentScrollViewBridge;
    void customTabItem;
    void deferredEdges;
    void dialogBridge;
    void fileImportExportBridge;
    void host;
    void inspectorBridgeV5;
    void keyboardShortcutBridge;
    void modernNavigationBridge;
    void navigationBridge;
    void overrides;
    void persistentSystemOverlays;
    void persistentSystemOverlaysSeedTracker;
    void requiredBridges;
    void screenEdgesSystemGestureSeedTracker;
    void shouldDeferPersistentSystemOverlaysToChildViewController;
    void shouldDeferScreenEdgesSystemGestureToChildViewController;
    void sizingOptions;
    void testBridge;
    void toolbarBridge;
}

@property (nonatomic, readonly) UIViewController *childViewControllerForHomeIndicatorAutoHidden;
@property (nonatomic, readonly) UIViewController *childViewControllerForScreenEdgesDeferringSystemGestures;
@property (nonatomic, readonly) UIViewController *childViewControllerForStatusBarHidden;
@property (nonatomic, readonly) UIViewController *childViewControllerForStatusBarStyle;
@property (nonatomic, readonly) NSArray *keyCommands;
@property (nonatomic) bool modalInPresentation;
@property (nonatomic, readonly) unsigned long long preferredScreenEdgesDeferringSystemGestures;
@property (nonatomic, readonly) long long preferredStatusBarStyle;
@property (nonatomic, readonly) long long preferredStatusBarUpdateAnimation;
@property (nonatomic, readonly) bool prefersHomeIndicatorAutoHidden;
@property (nonatomic, readonly) bool prefersStatusBarHidden;
@property (nonatomic, readonly) NSUndoManager *undoManager;

- (void).cxx_destruct;
- (id)_timelinesForDateInterval:(id)arg1;
- (void)_updateWithFrameSpecifier:(id)arg1 completion:(id /* block */)arg2;
- (bool)_wantsTransparentBackground;
- (id)childViewControllerForHomeIndicatorAutoHidden;
- (id)childViewControllerForScreenEdgesDeferringSystemGestures;
- (id)childViewControllerForStatusBarHidden;
- (id)childViewControllerForStatusBarStyle;
- (void)didMoveToParentViewController:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;
- (bool)isModalInPresentation;
- (id)keyCommands;
- (void)loadView;
- (void)preferredContentSizeDidChangeForChildContentContainer:(id)arg1;
- (unsigned long long)preferredScreenEdgesDeferringSystemGestures;
- (long long)preferredStatusBarStyle;
- (long long)preferredStatusBarUpdateAnimation;
- (bool)prefersHomeIndicatorAutoHidden;
- (bool)prefersStatusBarHidden;
- (void)setModalInPresentation:(bool)arg1;
- (id)targetForAction:(SEL)arg1 withSender:(id)arg2;
- (id)undoManager;
- (void)viewDidAppear:(bool)arg1;
- (void)viewDidDisappear:(bool)arg1;
- (void)viewWillAppear:(bool)arg1;
- (void)viewWillDisappear:(bool)arg1;
- (void)viewWillLayoutSubviews;
- (void)viewWillTransitionToSize:(struct CGSize { double x1; double x2; })arg1 withTransitionCoordinator:(id)arg2;
- (void)willMoveToParentViewController:(id)arg1;

@end