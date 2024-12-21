/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/SystemWake.framework/SystemWake
 */

@interface SWSystemSleepMonitorAggregateState : NSObject {
    unsigned long long  _powerManagementPhase;
    unsigned long long  _powerManagementPhaseTimestamp;
    unsigned long long  _sleepMonitorState;
    unsigned long long  _sleepMonitorStateTimestamp;
}

@property (getter=isAwakeOrAbortingSleep, readonly) bool awakeOrAbortingSleep;
@property (readonly) unsigned long long powerManagementPhase;
@property (readonly) unsigned long long powerManagementPhaseTimestamp;
@property (getter=isSleepImminent, readonly) bool sleepImminent;
@property (readonly) unsigned long long sleepMonitorState;
@property (readonly) unsigned long long sleepMonitorStateTimestamp;
@property (getter=hasSleepBeenRequested, readonly) bool sleepRequested;

- (id)description;
- (id)descriptionForTimestamp:(unsigned long long)arg1;
- (bool)hasSleepBeenRequested;
- (id)initWithSleepMonitorState:(unsigned long long)arg1 stateTimestamp:(unsigned long long)arg2 powerManagementPhase:(unsigned long long)arg3 phaseTimestamp:(unsigned long long)arg4;
- (bool)isAwakeOrAbortingSleep;
- (bool)isSleepImminent;
- (unsigned long long)powerManagementPhase;
- (unsigned long long)powerManagementPhaseTimestamp;
- (unsigned long long)sleepMonitorState;
- (unsigned long long)sleepMonitorStateTimestamp;

@end