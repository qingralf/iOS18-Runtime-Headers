/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/Navigation.framework/Navigation
 */

@interface MNObserverHashTable : NSObject {
    NSObject<OS_dispatch_queue> * _callbackQueue;
    geo_isolater * _observerLock;
    NSHashTable * _observers;
    Protocol * _protocol;
}

@property (nonatomic, retain) NSObject<OS_dispatch_queue> *callbackQueue;
@property (readonly) bool hasObservers;

- (void).cxx_destruct;
- (id)callbackQueue;
- (unsigned long long)count;
- (id)description;
- (void)forwardInvocation:(id)arg1;
- (bool)hasObservers;
- (id)initWithProtocol:(id)arg1;
- (id)methodSignatureForSelector:(SEL)arg1;
- (void)registerObserver:(id)arg1;
- (void)setCallbackQueue:(id)arg1;
- (void)unregisterObserver:(id)arg1;

@end
