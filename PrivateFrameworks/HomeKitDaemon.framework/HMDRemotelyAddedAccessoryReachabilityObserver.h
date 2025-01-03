/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/HomeKitDaemon.framework/HomeKitDaemon
 */

@interface HMDRemotelyAddedAccessoryReachabilityObserver : HMFObject <HMFLogging, HMFTimerDelegate> {
    HMDAccessory * _accessory;
    HMFMessage * _message;
    NSNotificationCenter * _notificationCenter;
    <NSObject> * _notificationToken;
    HMFTimer * _timer;
    NSObject<OS_dispatch_queue> * _workQueue;
}

@property (readonly) HMDAccessory *accessory;
@property (readonly, copy) NSString *debugDescription; /* unknown property attribute: ? */
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) HMFMessage *message;
@property (readonly) NSNotificationCenter *notificationCenter;
@property (retain) <NSObject> *notificationToken;
@property (readonly) Class superclass;
@property (retain) HMFTimer *timer;
@property (readonly) NSObject<OS_dispatch_queue> *workQueue;

+ (id)logCategory;

- (void).cxx_destruct;
- (void)_respondToMessage;
- (id)accessory;
- (id)initWithAccessory:(id)arg1 message:(id)arg2 workQueue:(id)arg3;
- (id)initWithAccessory:(id)arg1 message:(id)arg2 workQueue:(id)arg3 timer:(id)arg4 notificationCenter:(id)arg5;
- (id)logIdentifier;
- (id)message;
- (id)notificationCenter;
- (id)notificationToken;
- (void)setNotificationToken:(id)arg1;
- (void)setTimer:(id)arg1;
- (void)start;
- (id)timer;
- (void)timerDidFire:(id)arg1;
- (id)workQueue;

@end
