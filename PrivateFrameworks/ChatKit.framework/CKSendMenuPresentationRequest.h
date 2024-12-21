/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/ChatKit.framework/ChatKit
 */

@interface CKSendMenuPresentationRequest : NSObject {
    UIViewController * _appCardContentViewController;
    id /* block */  _completionHandler;
    <CKSceneOverlayPresentationContext> * _presentationContext;
    unsigned long long  _resolvedAppCardPresentationStyle;
    CKSendMenuViewController * _sendMenuViewController;
}

@property (nonatomic, retain) UIViewController *appCardContentViewController;
@property (nonatomic, copy) id /* block */ completionHandler;
@property (nonatomic, retain) <CKSceneOverlayPresentationContext> *presentationContext;
@property (nonatomic) unsigned long long resolvedAppCardPresentationStyle;
@property (nonatomic, retain) CKSendMenuViewController *sendMenuViewController;

+ (id)requestWithPresentationContext:(id)arg1 appCardContentViewController:(id)arg2 resolvedAppCardPresentationStyle:(unsigned long long)arg3 completion:(id /* block */)arg4;
+ (id)requestWithPresentationContext:(id)arg1 sendMenuViewController:(id)arg2 completion:(id /* block */)arg3;

- (void).cxx_destruct;
- (id)appCardContentViewController;
- (id /* block */)completionHandler;
- (void)didFinishPresentTransition;
- (id)initWithPresentationContext:(id)arg1 sendMenuViewController:(id)arg2 appCardContentViewController:(id)arg3 resolvedAppCardPresentationStyle:(unsigned long long)arg4 completion:(id /* block */)arg5;
- (id)newSendMenuPresentationWithPresentingViewController:(id)arg1 delegate:(id)arg2;
- (id)presentationContext;
- (unsigned long long)resolvedAppCardPresentationStyle;
- (id)sendMenuViewController;
- (void)setAppCardContentViewController:(id)arg1;
- (void)setCompletionHandler:(id /* block */)arg1;
- (void)setPresentationContext:(id)arg1;
- (void)setResolvedAppCardPresentationStyle:(unsigned long long)arg1;
- (void)setSendMenuViewController:(id)arg1;

@end