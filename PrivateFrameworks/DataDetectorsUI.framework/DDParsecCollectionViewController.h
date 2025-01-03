/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/DataDetectorsUI.framework/DataDetectorsUI
 */

@interface DDParsecCollectionViewController : UINavigationController <DDParsecHostVCInterface, UIAdaptivePresentationControllerDelegate, UINavigationControllerDelegate, _UIRemoteViewControllerContaining> {
    NSArray * _actions;
    NSDictionary * _context;
    bool  _dictionaryMode;
    id /* block */  _dismissCompletionHandler;
    bool  _dismissed;
    RVItem * _item;
    bool  _needsBackground;
    <DDParsecCollectionDelegate> * _parsecDelegate;
    bool  _popoverMode;
    DDDelegateMultiplexer * _presentationDelegateMultiplexer;
    DDDelegateMultiplexer * _presentationDelegateProxy;
    bool  _previewMode;
    long long  _previousStatusBarStyle;
    RVQuery * _query;
    struct _NSRange { 
        unsigned long long location; 
        unsigned long long length; 
    }  _queryRange;
    NSString * _queryString;
    DDParsecRemoteCollectionViewController * _remoteViewController;
    id /* block */  _reportAnIssueBlock;
    id /* block */  _reportAnIssueMetadataFetchingBlock;
    bool  _requestingPopoverPresentationController;
    DDScannerResult * _result;
    bool  _sheetMode;
    bool  _showingError;
    bool  _showingFTE;
    long long  _style;
    UITapGestureRecognizer * _tapGesture;
}

@property (nonatomic, readonly) _UIRemoteViewController *_containedRemoteViewController;
@property (copy) NSArray *actions;
@property (readonly, copy) NSString *debugDescription; /* unknown property attribute: ? */
@property (readonly, copy) NSString *description;
@property (copy) id /* block */ dismissCompletionHandler;
@property (readonly) unsigned long long hash;
@property <DDParsecCollectionDelegate> *parsecDelegate;
@property (nonatomic, copy) id /* block */ reportAnIssueBlock;
@property (nonatomic, copy) id /* block */ reportAnIssueMetadataFetchingBlock;
@property (nonatomic) long long style;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (bool)_allowsStylingSheetsAsCards;
- (bool)_canShowWhileLocked;
- (id)_containedRemoteViewController;
- (void)_interactionEnded;
- (long long)_preferredModalPresentationStyle;
- (void)_presentationController:(id)arg1 prepareAdaptivePresentationController:(id)arg2;
- (id)actions;
- (void)adaptForPresentationInPopover:(bool)arg1;
- (void)appDidEnterBackground;
- (void)appWillEnterForeground;
- (id /* block */)dismissCompletionHandler;
- (void)doneButtonPressed:(id)arg1;
- (void)doneButtonPressed:(id)arg1 punchout:(bool)arg2;
- (void)fetchRemoteViewControllerWithValidInput:(bool)arg1;
- (void)getStatusBarHidden:(id /* block */)arg1;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;
- (id)initWithQuery:(id)arg1;
- (id)initWithRVItem:(id)arg1;
- (id)initWithResult:(struct __DDResult { }*)arg1 context:(id)arg2;
- (id)initWithString:(id)arg1 range:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg2;
- (id)initWithString:(id)arg1 range:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg2 dictionaryOnly:(bool)arg3;
- (void)interactionEndedWithPunchout:(bool)arg1;
- (void)loadReportAnIssueImage:(id /* block */)arg1;
- (long long)modalPresentationStyle;
- (void)openParsecURL:(id)arg1;
- (void)openTrailerPunchout:(id)arg1;
- (id)overrideTraitCollectionForChildViewController:(id)arg1;
- (id)parsecDelegate;
- (void)performClientQueryWithServerAccessPermitted:(bool)arg1 localSearchPermitted:(bool)arg2;
- (void)performClientTextQueryWithTerm:(id)arg1 queryId:(unsigned long long)arg2 sessionId:(id)arg3 userAgent:(id)arg4 reply:(id /* block */)arg5;
- (id)popoverPresentationController;
- (struct CGSize { double x1; double x2; })preferredContentSize;
- (void)presentRemoteCollection:(id)arg1;
- (id)presentationController;
- (void)presentationController:(id)arg1 willPresentWithAdaptiveStyle:(long long)arg2 transitionCoordinator:(id)arg3;
- (void)presentationControllerDidDismiss:(id)arg1;
- (bool)presentationControllerShouldDismiss:(id)arg1;
- (void)remoteVCIsReady;
- (void)replaceControllerWithController:(id)arg1;
- (id /* block */)reportAnIssueBlock;
- (id /* block */)reportAnIssueMetadataFetchingBlock;
- (void)reportAnIssueWithReportIdentifier:(id)arg1 sfReportData:(id)arg2;
- (void)setActions:(id)arg1;
- (void)setDismissCompletionHandler:(id /* block */)arg1;
- (void)setParsecDelegate:(id)arg1;
- (void)setPreviewMode:(bool)arg1;
- (void)setReportAnIssueBlock:(id /* block */)arg1;
- (void)setReportAnIssueMetadataFetchingBlock:(id /* block */)arg1;
- (void)setSheetMode:(bool)arg1;
- (void)setStyle:(long long)arg1;
- (void)setTitle:(id)arg1;
- (void)showError:(id)arg1;
- (void)showSpinner;
- (void)showingErrorView:(bool)arg1;
- (void)showingFTE:(bool)arg1;
- (long long)style;
- (void)updateDelegateOfPresentationController:(id)arg1;
- (void)updateVisualMode;
- (void)viewDidDisappear:(bool)arg1;
- (void)viewWillAppear:(bool)arg1;
- (void)viewWillDisappear:(bool)arg1;

@end
