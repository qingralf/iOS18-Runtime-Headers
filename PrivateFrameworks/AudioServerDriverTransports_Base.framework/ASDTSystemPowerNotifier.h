/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/AudioServerDriverTransports_Base.framework/AudioServerDriverTransports_Base
 */

@interface ASDTSystemPowerNotifier : NSObject <ASDTSystemPowerStatus> {
    NSString * _bundleName;
    <ASDTSystemPowerNotifierDelegate> * _delegate;
    unsigned int  _powerConnection;
    struct IONotificationPort { } * _powerNotificationPort;
    NSObject<OS_dispatch_queue> * _powerNotificationQueue;
    unsigned int  _powerNotifier;
    bool  _systemIsSleeping;
    bool  _wakeForEarlyWake;
}

@property (nonatomic, retain) NSString *bundleName;
@property (readonly, copy) NSString *debugDescription; /* unknown property attribute: ? */
@property (nonatomic) <ASDTSystemPowerNotifierDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) NSObject<OS_dispatch_queue> *powerNotificationQueue;
@property (readonly) Class superclass;
@property bool systemIsSleeping;
@property (nonatomic) bool wakeForEarlyWake;

+ (id)notifierForBundleName:(id)arg1 delegate:(id)arg2 earlyWake:(bool)arg3;

- (void).cxx_destruct;
- (bool)allowSleepStateNotification:(int)arg1;
- (id)bundleName;
- (void)dealloc;
- (id)delegate;
- (void)deregisterForSystemSleepNotificationsSystemPower;
- (void)handlePowerNotificationWithMessageType:(unsigned int)arg1 andArgument:(void*)arg2;
- (id)initForBundleName:(id)arg1 delegate:(id)arg2 earlyWake:(bool)arg3;
- (id)powerNotificationQueue;
- (bool)registerForSystemSleepNotificationsSystemPower;
- (void)setBundleName:(id)arg1;
- (void)setDelegate:(id)arg1;
- (void)setPowerNotificationQueue:(id)arg1;
- (void)setSystemIsSleeping:(bool)arg1;
- (void)setWakeForEarlyWake:(bool)arg1;
- (bool)systemIsSleeping;
- (bool)wakeForEarlyWake;

@end
