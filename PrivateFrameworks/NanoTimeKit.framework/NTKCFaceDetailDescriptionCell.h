/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/NanoTimeKit.framework/NanoTimeKit
 */

@interface NTKCFaceDetailDescriptionCell : NTKCDetailTableViewCell <UITextViewDelegate> {
    UITextView * _textView;
}

@property (nonatomic, copy) NSAttributedString *attributedText;
@property (readonly, copy) NSString *debugDescription; /* unknown property attribute: ? */
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (nonatomic, copy) NSString *text;
@property (nonatomic, retain) UITextView *textView;

+ (id)reuseIdentifier;

- (void).cxx_destruct;
- (id)_fontDescriptor;
- (void)_fontSizeDidChange;
- (id)attributedText;
- (id)init;
- (void)layoutSubviews;
- (double)rowHeight;
- (void)setAttributedText:(id)arg1;
- (void)setText:(id)arg1;
- (void)setTextView:(id)arg1;
- (id)text;
- (id)textView;
- (bool)textView:(id)arg1 shouldInteractWithURL:(id)arg2 inRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg3 interaction:(long long)arg4;

@end
