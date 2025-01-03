/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/WebKit.framework/WebKit
 */

@interface WKScrollViewDelegateForwarder : NSObject <BEScrollViewDelegate> {
    struct WeakObjCPtr<id<UIScrollViewDelegate>> { 
        id m_weakReference; 
    }  _externalDelegate;
    WKWebView * _internalDelegate;
}

@property (readonly, copy) NSString *debugDescription; /* unknown property attribute: ? */
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (id).cxx_construct;
- (void).cxx_destruct;
- (void)forwardInvocation:(id)arg1;
- (id)forwardingTargetForSelector:(SEL)arg1;
- (id)initWithInternalDelegate:(id)arg1 externalDelegate:(id)arg2;
- (id)methodSignatureForSelector:(SEL)arg1;
- (bool)respondsToSelector:(SEL)arg1;

@end
