/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/NotesEditor.framework/NotesEditor
 */

@interface ICTK2InlineTextAttachmentViewProvider : ICTK2TextAttachmentViewProvider <ICAttachmentFindable> {
    NSLayoutManager * _displayTextLayoutManager;
    NSTextContainer * _displayTextTextContainer;
    NSTextStorage * _displayTextTextStorage;
    struct _NSRange { 
        unsigned long long location; 
        unsigned long long length; 
    }  _selectedSearchRange;
    NSTextContentStorage * _tk2displayTextContentStorage;
    NSTextLayoutManager * _tk2displayTextLayoutManager;
}

@property (readonly, copy) NSString *debugDescription; /* unknown property attribute: ? */
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) NSLayoutManager *displayTextLayoutManager;
@property (nonatomic, readonly) NSTextContainer *displayTextTextContainer;
@property (nonatomic, readonly) NSTextStorage *displayTextTextStorage;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) ICInlineAttachmentView *inlineAttachmentView;
@property (nonatomic, readonly) ICInlineTextAttachment *inlineTextAttachment;
@property (nonatomic) struct _NSRange { unsigned long long x1; unsigned long long x2; } selectedSearchRange;
@property (readonly) Class superclass;
@property (nonatomic, readonly) NSTextContentStorage *tk2displayTextContentStorage;
@property (nonatomic, readonly) NSTextLayoutManager *tk2displayTextLayoutManager;

- (void).cxx_destruct;
- (id)displayTextLayoutManager;
- (id)displayTextTextContainer;
- (id)displayTextTextStorage;
- (void)drawCharactersInRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg1 inFindableString:(id)arg2 forContentView:(id)arg3;
- (id)initWithTextAttachment:(id)arg1 parentView:(id)arg2 textLayoutManager:(id)arg3 location:(id)arg4;
- (id)inlineAttachmentView;
- (id)inlineTextAttachment;
- (void)loadView;
- (id)rectsForRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg1 inFindableString:(id)arg2;
- (void)replaceCharactersInRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg1 withString:(id)arg2 inFindableString:(id)arg3;
- (void)scrollToRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg1 inFindableString:(id)arg2;
- (struct _NSRange { unsigned long long x1; unsigned long long x2; })selectedRangeWithinRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg1 inFindableString:(id)arg2;
- (struct _NSRange { unsigned long long x1; unsigned long long x2; })selectedSearchRange;
- (void)setSelectedRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg1 inFindableString:(id)arg2;
- (void)setSelectedSearchRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg1;
- (id)tk2displayTextContentStorage;
- (id)tk2displayTextLayoutManager;
- (void)updateDisplayTextTextStorage;
- (id)viewForRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg1 inFindableString:(id)arg2;

@end