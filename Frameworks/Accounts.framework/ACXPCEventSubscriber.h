/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/Accounts.framework/Accounts
 */

@interface ACXPCEventSubscriber : NSObject <HomeKitDaemon.HMDACXPCEventSubscriber, HomeKitDaemonLegacy.HMDACXPCEventSubscriber> {
    NSObject<OS_dispatch_queue> * _replyQueue;
}

@property (nonatomic, readonly) NSObject<OS_dispatch_queue> *replyQueue;

+ (id)sharedSubscriber;

- (void).cxx_destruct;
- (id)init;
- (void)registerAccountChangeEventHandler:(id /* block */)arg1;
- (id)replyQueue;

@end