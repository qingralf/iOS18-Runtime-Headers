/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/ShareSheet.framework/ShareSheet
 */

@interface UICreatePDFActivity : UIPrintActivity <QLPreviewControllerDataSource, QLPreviewControllerDelegate, UIDocumentPickerDelegate> {
    QLPreviewController * _previewController;
    UICreatePDFActivityItem * _previewURLItem;
}

@property (readonly, copy) NSString *debugDescription; /* unknown property attribute: ? */
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) QLPreviewController *previewController;
@property (nonatomic, retain) UICreatePDFActivityItem *previewURLItem;
@property (readonly) Class superclass;

+ (unsigned long long)_xpcAttributes;

- (void).cxx_destruct;
- (void)_cleanup;
- (id)_embeddedActivityViewController;
- (void)_setupQuickLookWithURL:(id)arg1 activityItems:(id)arg2 isPreview:(bool)arg3;
- (id)_systemImageName;
- (id)activityTitle;
- (id)activityType;
- (id)activityViewController;
- (bool)canPerformWithActivityItems:(id)arg1;
- (id)dismissActionsForPreviewController:(id)arg1;
- (void)documentPicker:(id)arg1 didPickDocumentsAtURLs:(id)arg2;
- (id)excludedActivityTypesForPreviewController:(id)arg1;
- (long long)numberOfPreviewItemsInPreviewController:(id)arg1;
- (void)performActivity;
- (void)prepareWithActivityItems:(id)arg1;
- (id)previewController;
- (bool)previewController:(id)arg1 canEditItem:(id)arg2;
- (id)previewController:(id)arg1 previewItemAtIndex:(long long)arg2;
- (bool)previewController:(id)arg1 shouldSaveEditedItem:(id)arg2;
- (void)previewControllerDidDismiss:(id)arg1;
- (id)previewURLItem;
- (void)setPreviewController:(id)arg1;
- (void)setPreviewURLItem:(id)arg1;
- (bool)shouldAppendDefaultDismissActionsForPreviewController:(id)arg1;
- (bool)shouldPresentDismissActionsWithoutEditedItemsForPreviewController:(id)arg1;

@end
