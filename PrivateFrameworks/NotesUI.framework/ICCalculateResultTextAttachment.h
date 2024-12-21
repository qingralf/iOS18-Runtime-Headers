/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/NotesUI.framework/NotesUI
 */

@interface ICCalculateResultTextAttachment : ICInlineTextAttachment

@property (nonatomic, readonly, copy) NSString *expression;
@property (nonatomic, readonly) struct _NSRange { unsigned long long x1; unsigned long long x2; } expressionRangeInTextStorage;
@property (nonatomic, readonly, copy) NSString *localizedError;

// Image: /System/Library/PrivateFrameworks/NotesUI.framework/NotesUI

- (id)calculateDocumentController;
- (id)expression;
- (struct _NSRange { unsigned long long x1; unsigned long long x2; })expressionRangeInTextStorage;
- (id)localizedError;

// Image: /System/Library/PrivateFrameworks/NotesEditor.framework/NotesEditor

- (Class)attachmentViewClassForTextContainer:(id)arg1;

@end