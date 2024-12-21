/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/MapsUI.framework/MapsUI
 */

@interface MUWebViewMessageHandlerProxy : NSObject <WKScriptMessageHandler> {
    <WKScriptMessageHandler> * _target;
}

@property (readonly, copy) NSString *debugDescription; /* unknown property attribute: ? */
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (nonatomic) <WKScriptMessageHandler> *target;

- (void).cxx_destruct;
- (void)setTarget:(id)arg1;
- (id)target;
- (void)userContentController:(id)arg1 didReceiveScriptMessage:(id)arg2;

@end