/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/CoreBrightness.framework/CoreBrightness
 */

@interface CBABModuleiOS : CBModule <CBAODProtocol, CBContainerModuleProtocol, CBHIDServiceProtocol, CBStatusInfoProtocol> {
    void * _AABC;
    AABRear * _AABRear;
    CBALSTelemetry * _alsTelemetry;
    CBBOLTSProvider * _boltsProvider;
    CBDisplayModuleiOS * _display;
    NSMutableArray * _frontALSServiceClients;
    NSMutableArray * _otherServiceClients;
    NSMutableArray * _rearALSServiceClients;
    <CBAdaptiveAutoBrightnessSettingsProvider> * _settingsProvider;
}

@property (readonly, copy) NSString *debugDescription; /* unknown property attribute: ? */
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (bool)addHIDServiceClient:(struct __IOHIDServiceClient { }*)arg1;
- (id)copyIdentifiers;
- (id)copyPropertyForKey:(id)arg1;
- (id)copyPropertyForKey:(id)arg1 withParameter:(id)arg2;
- (id)copyPropertyInternalForKey:(id)arg1;
- (void)dealloc;
- (bool)handleAODStateUpdate:(unsigned long long)arg1 transitionTime:(float)arg2 context:(id)arg3;
- (bool)handleHIDEvent:(struct __IOHIDEvent { }*)arg1 from:(struct __IOHIDServiceClient { }*)arg2;
- (void)handleNotificationForKey:(id)arg1 withProperty:(id)arg2;
- (id)initWithDisplayModule:(id)arg1 andQueue:(id)arg2;
- (id)newGrimaldiFactory:(int)arg1;
- (bool)removeHIDServiceClient:(struct __IOHIDServiceClient { }*)arg1;
- (void)sendNotificationForKey:(id)arg1 withValue:(id)arg2;
- (bool)setProperty:(id)arg1 forKey:(id)arg2;
- (void)setupAABRear;
- (bool)shouldMitigateHarmony:(struct __IOHIDServiceClient { }*)arg1;
- (void)start;
- (void)stop;
- (void)updateCurveStrategy:(struct UpdateCurveStrategy {}**)arg1 withSettingsProvider:(id)arg2;

@end