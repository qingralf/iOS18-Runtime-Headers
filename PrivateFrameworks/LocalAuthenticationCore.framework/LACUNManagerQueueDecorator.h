/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/LocalAuthenticationCore.framework/LocalAuthenticationCore
 */

@interface LACUNManagerQueueDecorator : NSObject <LACUNManager, LACUNManagerDelegate> {
    <LACUNManagerDelegate> * _delegate;
    <LACUNManager> * _manager;
    NSObject<OS_dispatch_queue> * _replyQueue;
    NSObject<OS_dispatch_queue> * _workQueue;
}

@property (readonly, copy) NSString *debugDescription; /* unknown property attribute: ? */
@property (nonatomic) <LACUNManagerDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)cancelAllNotificationsWithCompletion:(id /* block */)arg1;
- (void)cancelNotificationsWithIdentifiers:(id)arg1 scheduledOnly:(bool)arg2 completion:(id /* block */)arg3;
- (id)delegate;
- (id)initWithManager:(id)arg1 replyQueue:(id)arg2;
- (id)initWithManager:(id)arg1 workQueue:(id)arg2 replyQueue:(id)arg3;
- (void)notificationManager:(id)arg1 didRespondToNotification:(id)arg2 fromCategory:(id)arg3 withAction:(id)arg4 completionHandler:(id /* block */)arg5;
- (void)postNotification:(id)arg1 completion:(id /* block */)arg2;
- (void)setDelegate:(id)arg1;

@end
