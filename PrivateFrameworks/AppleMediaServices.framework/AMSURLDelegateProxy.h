/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/AppleMediaServices.framework/AppleMediaServices
 */

@interface AMSURLDelegateProxy : NSObject {
    id  _delegate;
    AMSURLSession * _session;
}

@property id delegate;
@property (nonatomic) AMSURLSession *session;

- (void).cxx_destruct;
- (id)delegate;
- (void)forwardInvocation:(id)arg1;
- (id)forwardingTargetForSelector:(SEL)arg1;
- (id)initWithSession:(id)arg1 delegate:(id)arg2;
- (void)invalidate;
- (id)methodSignatureForSelector:(SEL)arg1;
- (bool)respondsToSelector:(SEL)arg1;
- (id)session;
- (void)setDelegate:(id)arg1;
- (void)setSession:(id)arg1;

@end
