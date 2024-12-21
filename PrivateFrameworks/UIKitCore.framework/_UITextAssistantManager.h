/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
 */

@interface _UITextAssistantManager : NSObject <UIWritingToolsCoordinatorDelegate, _UIWTCTemporaryBridging> {
    UIWritingToolsCoordinatorContext * _activeContext;
    long long  _externalEditAction;
    <_UIAssertion> * _grabberSuppression;
    UITextRange * _initialSelectedRangeInDocument;
    bool  _isReplacingTextByRequest;
    unsigned long long  _offsetToContextualRange;
    <_UIInvalidatable> * _selectionUIHiddenAssertion;
    NSMutableDictionary * _textAnimationContextsByAnimationType;
    UITextView * _textView;
    <NSObject> * _viewportLayoutObservationToken;
}

@property (readonly, copy) NSString *debugDescription; /* unknown property attribute: ? */
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) bool isReplacingTextByRequest;
@property (readonly) Class superclass;
@property (nonatomic, readonly) UITextView *textView;

- (void).cxx_destruct;
- (void)_invalidateViewportLayoutForTextRange:(id)arg1;
- (void)_wtc_highlightProofreadingReviewingRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg1;
- (void)_wtc_invalidateGrabberSuppression;
- (void)_wtc_invalidateSelectionUIHidden;
- (void)_wtc_removeUnderlineForProofreadingSuggestionID:(id)arg1;
- (void)_wtc_underlineTextInCharacterRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg1 proofreadingSuggestionID:(id)arg2;
- (void)cleanUpAnimatedTextLayoutInfoIfNecessary;
- (id)contextForWritingToolsForScope:(long long)arg1;
- (void)dealloc;
- (id)description;
- (void)finishUndoRedoChanges;
- (id)initWithTextView:(id)arg1;
- (bool)isReplacingTextByRequest;
- (struct _NSRange { unsigned long long x1; unsigned long long x2; })paragraphRangeForRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg1;
- (bool)performExternalEditsForWritingToolsSessionIdentifier:(id)arg1 action:(long long)arg2 usingBlock:(id /* block */)arg3;
- (void)removeTextAnimationAttributesAtRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg1;
- (id)replaceRange:(id)arg1 withWritingToolsReplacement:(id)arg2;
- (void)reportTextChunkVisibilityUpdateForDelivery:(id)arg1 textRange:(id)arg2 visible:(bool)arg3;
- (void)sessionCleanup;
- (void)setUpTextAnimationContextForRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg1 animation:(long long)arg2;
- (void)tearDownTextAnimationContextForAnimation:(long long)arg1;
- (id)textView;
- (void)updateForCharactersInRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg1 withReplacement:(id)arg2 isUndoRedo:(bool)arg3;
- (void)writingToolsCoordinator:(id)arg1 adjustForUpdatedRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg2 forTextAnimation:(long long)arg3 inContext:(id)arg4 completion:(id /* block */)arg5;
- (void)writingToolsCoordinator:(id)arg1 finishTextAnimation:(long long)arg2 forRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg3 inContext:(id)arg4 completion:(id /* block */)arg5;
- (void)writingToolsCoordinator:(id)arg1 prepareForTextAnimation:(long long)arg2 forRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg3 inContext:(id)arg4 completion:(id /* block */)arg5;
- (void)writingToolsCoordinator:(id)arg1 replaceRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg2 inContext:(id)arg3 proposedText:(id)arg4 reason:(long long)arg5 animationParameters:(id)arg6 completion:(id /* block */)arg7;
- (void)writingToolsCoordinator:(id)arg1 requestsBoundingBezierPathsForRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg2 inContext:(id)arg3 completion:(id /* block */)arg4;
- (void)writingToolsCoordinator:(id)arg1 requestsContextsForScope:(long long)arg2 completion:(id /* block */)arg3;
- (void)writingToolsCoordinator:(id)arg1 requestsPreviewForTextAnimation:(long long)arg2 ofRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg3 inContext:(id)arg4 completion:(id /* block */)arg5;
- (void)writingToolsCoordinator:(id)arg1 requestsRangeInContextWithIdentifierForPoint:(struct CGPoint { double x1; double x2; })arg2 completion:(id /* block */)arg3;
- (void)writingToolsCoordinator:(id)arg1 requestsUnderlinePathsForRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg2 inContext:(id)arg3 completion:(id /* block */)arg4;
- (void)writingToolsCoordinator:(id)arg1 selectRanges:(id)arg2 inContext:(id)arg3 completion:(id /* block */)arg4;
- (void)writingToolsCoordinator:(id)arg1 willChangeToState:(long long)arg2 completion:(id /* block */)arg3;

@end