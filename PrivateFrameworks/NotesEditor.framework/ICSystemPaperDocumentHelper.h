/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/NotesEditor.framework/NotesEditor
 */

@interface ICSystemPaperDocumentHelper : NSObject {
    void attachment;
    void textView;
}

@property (nonatomic, readonly) ICAttachment *attachment;
@property (nonatomic) UITextView *textView;

+ (id)drawingForPaperAttachment:(id)arg1;

- (void).cxx_destruct;
- (void)addWithItemProviders:(id)arg1 itemsAnchor:(long long)arg2;
- (id)attachment;
- (id)init;
- (id)initWithPaperAttachment:(id)arg1 textView:(id)arg2;
- (void)setTextView:(id)arg1;
- (id)textView;

@end