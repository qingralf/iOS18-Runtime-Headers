/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/MicroLocationDaemon.framework/MicroLocationDaemon
 */

@interface ULAirplaneModeMonitor : ULEventMonitor <RadiosPreferencesDelegate> {
    bool  _airplaneMode;
    RadiosPreferences * _radiosPref;
}

@property (nonatomic) bool airplaneMode;
@property (nonatomic, retain) RadiosPreferences *radiosPref;

- (void).cxx_destruct;
- (bool)_checkAirplaneMode;
- (bool)airplaneMode;
- (void)airplaneModeChanged;
- (id)latestEventAfterAddingObserverForEventName:(id)arg1;
- (id)radiosPref;
- (void)setAirplaneMode:(bool)arg1;
- (void)setRadiosPref:(id)arg1;
- (void)startMonitoring:(id)arg1;
- (void)stopMonitoring:(id)arg1;

@end
