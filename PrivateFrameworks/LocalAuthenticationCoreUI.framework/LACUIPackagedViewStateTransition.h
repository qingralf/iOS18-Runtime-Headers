/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/LocalAuthenticationCoreUI.framework/LocalAuthenticationCoreUI
 */

@interface LACUIPackagedViewStateTransition : NSObject {
    LACUIPackagedViewState * _fromState;
    id /* block */  _handler;
    LACUIPackagedViewState * _toState;
}

@property (nonatomic, readonly) LACUIPackagedViewState *fromState;
@property (nonatomic, readonly) LACUIPackagedViewState *toState;

- (void).cxx_destruct;
- (void)complete:(bool)arg1;
- (void)dealloc;
- (id)fromState;
- (id)initWithFromState:(id)arg1 toState:(id)arg2 completion:(id /* block */)arg3;
- (id)toState;

@end