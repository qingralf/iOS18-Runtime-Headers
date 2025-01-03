/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/NotesUI.framework/NotesUI
 */

@interface ICCalculateRecognitionController : NSObject {
    void $__lazy_storage_$_errorInteractionController;
    void attachmentInsertionController;
    void didTriggerResultPreviewAfterUnmarkingText;
    void insertsResults;
    void isKeyboardMathSolvingAllowedObservation;
    void isMathPaperSolvingAllowedObservation;
    void isUpdatingMarkedTextExpressions;
    void note;
    void previewBehavior;
    void previewedExpression;
    void suggestionsDelegate;
    void textView;
}

@property (nonatomic) ICAttachmentInsertionController *attachmentInsertionController;
@property (nonatomic) bool insertsResults;
@property (nonatomic, readonly) bool isPreviewingResult;
@property (nonatomic) ICNote *note;
@property (nonatomic) long long previewBehavior;
@property (nonatomic) <ICCalculateRecognitionControllerSuggestionsDelegate> *suggestionsDelegate;
@property (nonatomic) UITextView *textView;

- (void).cxx_destruct;
- (void)addErrorInteraction;
- (id)attachmentInsertionController;
- (void)commitPreviewedResultAtRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg1 asLiteral:(bool)arg2;
- (void)didInsertString:(id)arg1 atRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg2;
- (void)didUnmarkString:(id)arg1 atRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg2;
- (void)discardPreviewedResult;
- (id)init;
- (id)initWithNote:(id)arg1;
- (void)insertLiteralResultAtRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg1;
- (void)insertResultAtRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg1;
- (bool)insertsResults;
- (bool)isPreviewingResult;
- (id)note;
- (long long)previewBehavior;
- (void)previewResultAtRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg1;
- (void)setAttachmentInsertionController:(id)arg1;
- (void)setInsertsResults:(bool)arg1;
- (void)setNote:(id)arg1;
- (void)setPreviewBehavior:(long long)arg1;
- (void)setSuggestionsDelegate:(id)arg1;
- (void)setTextView:(id)arg1;
- (id)suggestionsDelegate;
- (id)textView;
- (void)willUpdateMarkedText:(id)arg1;

@end
