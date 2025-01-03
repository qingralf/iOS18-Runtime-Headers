/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/Message.framework/Message
 */

@interface MFAppStateMonitor : NSObject {
    _Atomic bool  _isVisible;
    EFObservable<EFObserver> * _observable;
    RBSProcessMonitor * _underlyingMonitor;
}

@property (nonatomic, readonly) EFObservable *appIsVisibleObservable;
@property (getter=isVisible, nonatomic, readonly) bool visible;

+ (id)sharedInstance;

- (void).cxx_destruct;
- (id)appIsVisibleObservable;
- (void)dealloc;
- (id)initWithBundleId:(id)arg1;
- (bool)isVisible;

@end
