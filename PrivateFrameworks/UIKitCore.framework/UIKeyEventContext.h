/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
 */

@interface UIKeyEventContext : NSObject {
    bool  _documentIsEditable;
    UIKeyEvent * _keyEvent;
    bool  _shouldEvaluateForInputSystemHandling;
    bool  _shouldInsertChar;
}

@property (nonatomic) bool documentIsEditable;
@property (nonatomic, readonly) UIKeyEvent *keyEvent;
@property (nonatomic) bool shouldEvaluateForInputSystemHandling;
@property (nonatomic) bool shouldInsertChar;

- (void).cxx_destruct;
- (bool)documentIsEditable;
- (id)init;
- (id)initWithKeyEvent:(id)arg1;
- (id)keyEvent;
- (void)setDocumentIsEditable:(bool)arg1;
- (void)setShouldEvaluateForInputSystemHandling:(bool)arg1;
- (void)setShouldInsertChar:(bool)arg1;
- (bool)shouldEvaluateForInputSystemHandling;
- (bool)shouldInsertChar;

@end
