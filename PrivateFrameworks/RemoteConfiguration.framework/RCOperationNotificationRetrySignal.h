/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/RemoteConfiguration.framework/RemoteConfiguration
 */

@interface RCOperationNotificationRetrySignal : NSObject <RCOperationRetrySignal> {
    NSObject<OS_dispatch_group> * _group;
    NSString * _notificationName;
    <NSObject> * _notificationObserver;
    double  _timeout;
    unsigned long long  _timeoutTime;
}

@property (readonly, copy) NSString *debugDescription; /* unknown property attribute: ? */
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)dealloc;
- (id)description;
- (id)initWithNotificationName:(id)arg1 timeout:(double)arg2;
- (void)onQueue:(id)arg1 signal:(id /* block */)arg2;

@end
