/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/PowerUI.framework/PowerUI
 */

@interface PowerUIDrainMonitor : NSObject <PowerUISignalMonitorDelegate, UNUserNotificationCenterDelegatePrivate> {
    <_CDLocalContext> * _context;
    NSUserDefaults * _defaults;
    bool  _didEnableLPM;
    PowerUILocationSignalMonitor * _locationSignalMonitor;
    NSObject<OS_os_log> * _log;
    int  _notifyTestToken;
    int  _notifyToken;
    NSObject<OS_dispatch_queue> * _queue;
    UNUserNotificationCenter * _unCenter;
}

@property (nonatomic, retain) <_CDLocalContext> *context;
@property (readonly, copy) NSString *debugDescription; /* unknown property attribute: ? */
@property (nonatomic, retain) NSUserDefaults *defaults;
@property (readonly, copy) NSString *description;
@property (nonatomic) bool didEnableLPM;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) PowerUILocationSignalMonitor *locationSignalMonitor;
@property (nonatomic, retain) NSObject<OS_os_log> *log;
@property (nonatomic) int notifyTestToken;
@property (nonatomic) int notifyToken;
@property (nonatomic, retain) NSObject<OS_dispatch_queue> *queue;
@property (readonly) Class superclass;
@property (nonatomic, retain) UNUserNotificationCenter *unCenter;

+ (id)sharedInstance;

- (void).cxx_destruct;
- (id)context;
- (id)defaults;
- (bool)didEnableLPM;
- (void)disableLPM;
- (void)enableLPM;
- (void)evaluateNudgeForLPM;
- (bool)hasVariationForMedianLevels:(id)arg1;
- (id)init;
- (bool)isAtKnownChargingLocation;
- (id)isTrendingLowerWithBatteryLevel:(long long)arg1 atDate:(id)arg2;
- (id)locationSignalMonitor;
- (id)log;
- (int)notifyTestToken;
- (int)notifyToken;
- (void)postLPMNudgeNotificationWithInfo:(id)arg1;
- (id)queue;
- (void)setContext:(id)arg1;
- (void)setDefaults:(id)arg1;
- (void)setDidEnableLPM:(bool)arg1;
- (void)setLocationSignalMonitor:(id)arg1;
- (void)setLog:(id)arg1;
- (void)setNotifyTestToken:(int)arg1;
- (void)setNotifyToken:(int)arg1;
- (void)setQueue:(id)arg1;
- (void)setUnCenter:(id)arg1;
- (unsigned long long)slotForDate:(id)arg1 withTimeSlotWidth:(unsigned long long)arg2;
- (void)start;
- (id)unCenter;

@end
