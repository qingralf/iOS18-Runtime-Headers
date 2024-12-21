/* Generated by RuntimeBrowser.
 */

@protocol ICNoteUI <NSObject>

@optional

- (void)createMissingAttachmentsInTextStorage;
- (void)formatExpressionsInAttributedString:(NSMutableAttributedString *)arg1 range:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg2 textStorageOffset:(long long)arg3 skipStaleExpressions:(bool)arg4;
- (void)noteDidApplyAttachmentViewTypeToAllAttachments;
- (void)noteDidClearDecryptedData;
- (void)noteDidMergeNoteDocumentWithUserInfo:(NSMutableDictionary *)arg1;
- (void)noteDidReplaceDocument;
- (void)noteWillMergeDocumentWithUserInfo:(NSMutableDictionary *)arg1;
- (void)noteWillReleaseTextStorage;
- (void)noteWillTurnIntoFault;
- (bool)shouldReleaseTextStorageWhenTurningIntoFault;
- (NSAttributedString *)uiAttributedString;

@end