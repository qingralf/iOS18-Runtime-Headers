/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/CoreBrightness.framework/CoreBrightness
 */

@interface BLControl : NSObject <SWSystemSleepObserver> {
    unsigned long long  _builtInDisplayCount;
    id /* block */  _callback;
    void * _callbackContext;
    NSMutableDictionary * _clientDisplayMap;
    NSMutableArray * _displayContainers;
    long long  _displayMode;
    NSObject<OS_dispatch_source> * _displayModeCompletionTimer;
    id /* block */  _ecoModeNotificationHandler;
    int  _ecoModeNotificationToken;
    id /* block */  _ecoModePreferencesUpdateNotificationHandler;
    int  _ecoModePreferencesUpdateNotificationToken;
    NSMutableArray * _hidServiceClients;
    struct __IOHIDEventSystemClient { } * _hidSystemClient;
    bool  _ignoreALSEvents;
    bool  _ignoreBrightnessKey;
    HIDManager * _keyboardBacklightHIDManager;
    NSMutableDictionary * _keyboardContainers;
    NSObject<OS_os_log> * _logHandle;
    bool  _monitorALSOnly;
    NightModeControl * _nightModeControl;
    bool  _overrideIgnoreBrightness;
    NSObject<OS_dispatch_queue> * _queue;
    SWSystemSleepMonitor * _systemSleepMonitor;
    bool  _useMultiCurves;
    unsigned long long  _userActiveNotificationHandle;
    NSObject<OS_dispatch_workloop> * _workloop;
}

@property (readonly, copy) NSString *debugDescription; /* unknown property attribute: ? */
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void)addDisplayContainer:(id)arg1;
- (void)cancelHIDSystemClient;
- (id)copyBLControlPropertyWithkey:(id)arg1;
- (id)copyDisplayInfo;
- (id)copyDisplayList;
- (id)copyPropertyInternalWithKey:(id)arg1 forClient:(id)arg2;
- (id)copyPropertyWithKey:(id)arg1 client:(id)arg2;
- (id)copyStatusInfo;
- (void)dealloc;
- (bool)findBacklight;
- (bool)findDisplays;
- (void)handleCADisplay:(id)arg1;
- (void)handleCADisplayArrival:(id)arg1;
- (void)handleCADisplayRemoval:(id)arg1;
- (void)handleCAWindowServerDisplay:(id)arg1;
- (bool)handleDisplayModeUpdatePropertyHandler:(id)arg1;
- (void)handleExternalDisplayChange;
- (void)handleHIDEvent:(struct __IOHIDEvent { }*)arg1 from:(struct __IOHIDServiceClient { }*)arg2;
- (void)handleNotificationInternalForKey:(id)arg1 withValue:(id)arg2;
- (void)handlePresetChange;
- (void)handleUserIsActiveStateChange:(bool)arg1;
- (void)hidServiceArrival:(struct __IOHIDServiceClient { }*)arg1;
- (id)init;
- (bool)initKeyboardBacklightHIDManager;
- (void)keyboardBacklightHIDDeviceArrived:(id)arg1;
- (void)keyboardBacklightHIDDeviceRemoved:(id)arg1;
- (void)keyboardBacklightHIDDeviceRemovedInternal:(id)arg1;
- (id)newDevicePariMatchingDictionaryWithPage:(unsigned int)arg1 andUsage:(unsigned int)arg2;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void*)arg4;
- (void)registerNotificationBlock:(id /* block */)arg1;
- (void)releaseDisplayModeCompletionTimer;
- (void)removeDisplayContainer:(id)arg1;
- (void)removeHIDService:(struct __IOHIDServiceClient { }*)arg1;
- (void)scheduleDisplayModeCompletionTimerIn:(float)arg1 forDisplayMode:(long long)arg2;
- (void)sendNotificationFor:(id)arg1 withValue:(id)arg2;
- (void)sendNotificationWithKeyboardIDs;
- (void)sendSyncNotificationFor:(id)arg1 withValue:(id)arg2;
- (bool)setBLControlPropertyWithKey:(id)arg1 property:(id)arg2;
- (bool)setDisplayFactor:(float)arg1 transitionLength:(float)arg2;
- (bool)setPropertyInternalWithKey:(id)arg1 property:(id)arg2 client:(id)arg3;
- (bool)setPropertyWithKey:(id)arg1 property:(id)arg2 client:(id)arg3;
- (bool)start;
- (bool)startHIDSystemClient;
- (void)stop;
- (void)stopDisplayLookup;
- (void)systemSleepMonitor:(id)arg1 prepareForSleepWithCompletion:(id /* block */)arg2;
- (void)systemSleepMonitorDidWakeFromSleep:(id)arg1;
- (void)systemSleepMonitorWillWakeFromSleep:(id)arg1;
- (bool)useSyncBrightnessTransactionForDisplay:(id)arg1;
- (void)waitForALSArrival;

@end
