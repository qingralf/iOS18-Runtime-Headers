/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/ChatKit.framework/ChatKit
 */

@interface ChatKit.TapbackPickerInputController : UITextView <UITextInputPayloadDelegate> {
    void inputControllerDelegate;
    void previousPayloadDelegate;
}

@property (nonatomic, readonly) bool canBecomeFirstResponder;
@property (nonatomic) bool supportsAdaptiveImageGlyph;
@property (nonatomic, readonly) bool supportsImagePaste;
@property (nonatomic, readonly) NSString *textInputContextIdentifier;

- (void).cxx_destruct;
- (bool)becomeFirstResponder;
- (bool)canBecomeFirstResponder;
- (void)handlePayload:(id)arg1 withPayloadId:(id)arg2;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1 textContainer:(id)arg2;
- (void)insertAdaptiveImageGlyph:(id)arg1 replacementRange:(id)arg2;
- (bool)resignFirstResponder;
- (void)setSupportsAdaptiveImageGlyph:(bool)arg1;
- (bool)supportsAdaptiveImageGlyph;
- (bool)supportsImagePaste;
- (id)textInputContextIdentifier;

@end