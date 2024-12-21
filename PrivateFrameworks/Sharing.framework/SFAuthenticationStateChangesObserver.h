/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/Sharing.framework/Sharing
 */

@interface SFAuthenticationStateChangesObserver : NSObject <SFAuthenticationStateChangesObserverProtocol> {
    NSUUID * _identifier;
    id /* block */  _observer;
    NSObject<OS_dispatch_queue> * _queue;
}

@property (nonatomic, readonly) NSUUID *identifier;
@property (nonatomic, readonly) id /* block */ observer;
@property (nonatomic, readonly) NSObject<OS_dispatch_queue> *queue;

- (void).cxx_destruct;
- (id)identifier;
- (id)initWithObserver:(id /* block */)arg1 queue:(id)arg2;
- (id /* block */)observer;
- (id)queue;
- (void)stateDidChange;

@end