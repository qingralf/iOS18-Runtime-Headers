/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/SafetyMonitor.framework/SafetyMonitor
 */

@interface SMActivityManagerInternal : NSObject {
    void activities;
    void silentAudioFileName;
}

+ (id)shared;

- (void).cxx_destruct;
- (void)endActivities;
- (bool)hasActivity;
- (id)init;
- (void)startActivityWith:(id)arg1 localState:(id)arg2;
- (void)updateActivityWith:(id)arg1 localState:(id)arg2 shouldNotify:(bool)arg3;

@end
