/* Generated by RuntimeBrowser.
 */

@protocol ICAudioRecordingViewControllerDelegate <NSObject>

@required

- (UITextView *)textView;

@optional

- (void)exportCallRecordingForDataCollectionForAttachment:(ICAttachment *)arg1;
- (void)presentCallRecordingExportViewForAttachment:(ICAttachment *)arg1;
- (void)presentExportViewForAttachment:(ICAttachment *)arg1;
- (void)presentSharingViewForAttachment:(ICAttachment *)arg1 fromSourceView:(UIView *)arg2;
- (void)recordingDetailViewShouldDismiss:(id)arg1;
- (void)viewWasDismissed;

@end