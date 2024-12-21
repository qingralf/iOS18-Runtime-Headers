/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/WorkflowKit.framework/WorkflowKit
 */

@interface WFLinkResultDialogRequest : WFLinkSnippetDialogRequest <NSSecureCoding> {
    <LNDialogResult> * _catResult;
    WFDialogButton * _doneButton;
    LNSuccessResult * _result;
}

@property (nonatomic, retain) <LNDialogResult> *catResult;
@property (nonatomic, readonly, copy) WFDialogButton *doneButton;
@property (nonatomic, readonly, copy) LNSuccessResult *result;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)catResult;
- (id)doneButton;
- (void)encodeWithCoder:(id)arg1;
- (void)getCATResultWithCompletionHandler:(id /* block */)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithSuccessResult:(id)arg1 attribution:(id)arg2;
- (id)result;
- (void)setCatResult:(id)arg1;

@end