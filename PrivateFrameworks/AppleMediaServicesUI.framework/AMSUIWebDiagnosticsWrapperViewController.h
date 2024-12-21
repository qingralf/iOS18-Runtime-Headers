/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/AppleMediaServicesUI.framework/AppleMediaServicesUI
 */

@interface AMSUIWebDiagnosticsWrapperViewController : AMSUICommonViewController <AMSUIWebPagePresenter, DADiagnosticsRemoteViewControllerDelegate> {
    AMSUIWebClientContext * _context;
    DADiagnosticsRemoteViewController * _diagnosticsViewController;
    AMSUIWebDiagnosticsPageModel * _model;
}

@property (nonatomic, retain) AMSUIWebClientContext *context;
@property (readonly, copy) NSString *debugDescription; /* unknown property attribute: ? */
@property (readonly, copy) NSString *description;
@property (nonatomic) DADiagnosticsRemoteViewController *diagnosticsViewController;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) AMSUIWebDiagnosticsPageModel *model;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)context;
- (id)diagnosticsViewController;
- (id)initWithContext:(id)arg1;
- (id)model;
- (void)remoteViewController:(id)arg1 didFinishWithReason:(unsigned long long)arg2;
- (void)reportFinishWithReason:(unsigned long long)arg1;
- (void)setContext:(id)arg1;
- (void)setDiagnosticsViewController:(id)arg1;
- (void)setModel:(id)arg1;
- (void)viewDidLayoutSubviews;
- (void)viewWillAppear:(bool)arg1;
- (void)willPresentPageModel:(id)arg1 appearance:(id)arg2;

@end