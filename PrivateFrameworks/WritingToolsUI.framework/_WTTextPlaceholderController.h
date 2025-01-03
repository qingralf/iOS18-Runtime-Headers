/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/WritingToolsUI.framework/WritingToolsUI
 */

@interface _WTTextPlaceholderController : NSObject <_WTTextPreviewAsyncSource> {
    NSMutableArray * _completionHandlers;
    struct os_unfair_lock_s { 
        unsigned int _os_unfair_lock_opaque; 
    }  _completionLock;
    id  _delegate;
    _WTTextEffectView * _effectView;
    long long  _pattern;
    UITextPlaceholder * _placeholder;
    _WTSweepTextEffect * _ponderingEffect;
    NSUUID * _ponderingEffectUUID;
    NSUUID * _replaceEffectUUID;
    _WTReplaceTextEffect * _replaceTextEffect;
    _WTTextPreview * _textPreview;
}

@property (readonly, copy) NSString *debugDescription; /* unknown property attribute: ? */
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic) long long pattern;
@property (readonly) Class superclass;

+ (bool)_delegateImplementsInsertionMethods:(id)arg1;
+ (bool)_delegateImplementsRemovalMethods:(id)arg1;
+ (id)placeholderControllerForDelegate:(id)arg1;
+ (void)removePlaceholderControllerForDelegate:(id)arg1;

- (void).cxx_destruct;
- (void)_beginShowingShimmerHighlightsWithCaretRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)_endShowingShimmerHighlightsWithCompletion:(id /* block */)arg1;
- (void)_insertPlaceholderAndBeginShimmerWithCaretRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1 placeholderSize:(struct CGSize { double x1; double x2; })arg2;
- (id)_visualRectsForRects:(id)arg1 containerBounds:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg2 caretRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg3;
- (double)_widthRatioForIteration:(int)arg1 isFinal:(bool)arg2;
- (void)beginPlaceholder;
- (void)endPlaceholderAndWillInsertText:(bool)arg1 completion:(id /* block */)arg2;
- (id)initWithDelegate:(id)arg1;
- (long long)pattern;
- (void)setPattern:(long long)arg1;
- (void)textPreviewForRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1 completion:(id /* block */)arg2;
- (void)textPreviewsForChunk:(id)arg1 completion:(id /* block */)arg2;
- (void)updateIsTextVisible:(bool)arg1 forChunk:(id)arg2 completion:(id /* block */)arg3;

@end
