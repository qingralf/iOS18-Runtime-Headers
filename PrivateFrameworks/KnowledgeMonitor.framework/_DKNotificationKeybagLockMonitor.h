/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/KnowledgeMonitor.framework/KnowledgeMonitor
 */

@interface _DKNotificationKeybagLockMonitor : _DKMonitor <_DKHistoricalMonitor, _DKInstantMonitor, _DKNotificationReceiver> {
    bool  _activated;
    NSObject<OS_dispatch_queue> * _donationQueue;
    bool  _donationQueueResumed;
    BMDeviceKeybagLocked * _lastEvent;
    double  _lastUpdate;
    BMSource * _source;
}

@property (nonatomic, readonly) _DKEvent *currentEvent;
@property (readonly, copy) NSString *debugDescription; /* unknown property attribute: ? */
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, copy) id /* block */ historicalHandler;
@property (nonatomic, copy) id /* block */ instantHandler;
@property (nonatomic, readonly) NSDate *lastUpdate;
@property (nonatomic, copy) id /* block */ shutdownHandler;
@property (readonly) Class superclass;

+ (id)_eventWithState:(id)arg1;
+ (id)entitlements;
+ (id)eventStream;
+ (int)getCurrentLockState;
+ (id)log;
+ (void)setIsLocked:(bool)arg1;
+ (bool)shouldMergeUnchangedEvents;

- (void).cxx_destruct;
- (void)_activate;
- (void)_deactivate;
- (void)_enqueueKeybagLockedUpdate:(int)arg1 timestamp:(double)arg2;
- (void)_receiveNotificationEvent:(id)arg1;
- (void)_resume;
- (void)_updateWithKeybagLocked:(id)arg1 timestamp:(double)arg2;
- (void)receiveNotificationEvent:(id)arg1;
- (void)start;
- (void)stop;
- (void)synchronouslyReflectCurrentValue;

@end