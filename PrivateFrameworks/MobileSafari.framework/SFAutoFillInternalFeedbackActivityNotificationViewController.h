/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/MobileSafari.framework/MobileSafari
 */

@interface SFAutoFillInternalFeedbackActivityNotificationViewController : SFActivityNotificationViewController {
    <SFAutoFillInternalFeedbackActivityNotificationViewControllerDelegate> * _delegate;
    WBSAutoFillInternalFeedbackDiagnosticsData * _diagnosticsData;
}

@property (nonatomic) <SFAutoFillInternalFeedbackActivityNotificationViewControllerDelegate> *delegate;
@property (nonatomic, readonly) WBSAutoFillInternalFeedbackDiagnosticsData *diagnosticsData;

- (void).cxx_destruct;
- (void)_handleThumbsDown:(id)arg1;
- (void)_handleThumbsUp:(id)arg1;
- (id)delegate;
- (id)diagnosticsData;
- (id)initWithDiagnosticsData:(id)arg1;
- (void)setDelegate:(id)arg1;

@end
