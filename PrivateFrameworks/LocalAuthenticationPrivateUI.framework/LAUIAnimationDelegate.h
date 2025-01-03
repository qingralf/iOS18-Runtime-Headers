/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/LocalAuthenticationPrivateUI.framework/LocalAuthenticationPrivateUI
 */

@interface LAUIAnimationDelegate : NSObject <CAAnimationDelegate> {
    id /* block */  _didStartHandler;
    id /* block */  _didStopHandler;
}

@property (readonly, copy) NSString *debugDescription; /* unknown property attribute: ? */
@property (readonly, copy) NSString *description;
@property (nonatomic, copy) id /* block */ didStartHandler;
@property (nonatomic, copy) id /* block */ didStopHandler;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)animationDidStart:(id)arg1;
- (void)animationDidStop:(id)arg1 finished:(bool)arg2;
- (void)dealloc;
- (id /* block */)didStartHandler;
- (id /* block */)didStopHandler;
- (void)setDidStartHandler:(id /* block */)arg1;
- (void)setDidStopHandler:(id /* block */)arg1;

@end
