/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
 */

@interface UIDocumentViewController : UIViewController {
    UIDocument * _document;
    NSObject<OS_dispatch_queue> * _documentBackgroundQueue;
    struct { 
        unsigned int isPresentedFromDocumentBrowser : 1; 
        unsigned int hasReceivedDocumentDidOpen : 1; 
        unsigned int needsDocumentUnavailableConfigurationUpdate : 1; 
    }  _flags;
    unsigned long long  _lastKnownState;
    UIDocumentViewControllerLaunchOptions * _launchOptions;
    _UIDocumentLaunchViewController * _launchViewController;
    _UIBarButtonItemActionBinding * _undoManagerBinding;
    UIBarButtonItemGroup * _undoRedoItemGroup;
}

@property (nonatomic, retain) UIDocument *document;
@property (nonatomic, retain) UIDocumentViewControllerLaunchOptions *launchOptions;
@property (nonatomic, readonly) UIBarButtonItemGroup *undoRedoItemGroup;

- (void).cxx_destruct;
- (void)_closeDocumentIfNecessary:(id)arg1 completionHandler:(id /* block */)arg2;
- (void)_documentDidOpen;
- (void)_documentStateChanged:(id)arg1;
- (struct UIEdgeInsets { double x1; double x2; double x3; double x4; })_edgeInsetsForChildViewController:(id)arg1 insetsAreAbsolute:(bool*)arg2;
- (void)_intelligenceCollectContentIn:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1 collector:(id)arg2;
- (void)_localizedNameChanged:(id)arg1;
- (void)_performDocumentUnavailableConfigurationUpdate;
- (void)_registerDocumentAssociation;
- (void)_registerDocumentObservers;
- (void)_unregisterDocumentAssociation;
- (void)_unregisterDocumentObservers;
- (void)_updateIsPresentedFromDocumentBrowser;
- (void)_updateNavigationItem;
- (void)_updateUndoManagerBinding;
- (bool)canPerformAction:(SEL)arg1 withSender:(id)arg2;
- (void)dealloc;
- (void)didMoveToParentViewController:(id)arg1;
- (id)document;
- (void)documentDidOpen;
- (id)initWithDocument:(id)arg1;
- (id)launchOptions;
- (void)loadView;
- (void)navigationItemDidUpdate;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void*)arg4;
- (void)open:(id)arg1;
- (void)openDocumentWithCompletionHandler:(id /* block */)arg1;
- (void)redo:(id)arg1;
- (void)setDocument:(id)arg1;
- (void)setLaunchOptions:(id)arg1;
- (void)setView:(id)arg1;
- (void)undo:(id)arg1;
- (id)undoManager;
- (id)undoRedoItemGroup;
- (void)updateContentUnavailableConfigurationUsingState:(id)arg1;
- (void)viewIsAppearing:(bool)arg1;
- (void)viewWillLayoutSubviews;

@end