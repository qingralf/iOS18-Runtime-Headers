/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/CoreBrightness.framework/CoreBrightness
 */

@interface CBSliderCommitTelemetry : CBModule <CBAODProtocol, CBContainerModuleProtocol> {
    unsigned long long  _bufferEntriesFilled;
    unsigned long long  _bufferIndex;
    NSObject<OS_os_log> * _bufferLogHandle;
    long long  _delayedAPCEDelay;
    NSObject<OS_dispatch_source> * _delayedAPCETimer;
    CBDisplayContaineriOS * _displayContainer;
    double  _displayOffTimestamp;
    struct array<CBSliderCommitInfo, 100UL> { 
        struct CBSliderCommitInfo { 
            long long timestamp; 
            long long localTimestamp; 
            int trustedLux; 
            float frontLux; 
            float rearLux; 
            bool rearLuxInUse; 
            float nits; 
            float slider; 
            float apce; 
            float delayedAPCE; 
            int delayedAPCEStatus; 
            bool autobrightnessEnabled; 
            bool ecoModeEnabled; 
            float ecoModeFactor; 
            struct CBAABParams { 
                float e0a; 
                float e0b; 
                float e1; 
                float e2; 
                float l0a; 
                float l0b; 
                float l1; 
                float l2; 
                float thirdSlope; 
                int curveType; 
            } aabParams; 
            struct CBAABParams { 
                float e0a; 
                float e0b; 
                float e1; 
                float e2; 
                float l0a; 
                float l0b; 
                float l1; 
                float l2; 
                float thirdSlope; 
                int curveType; 
            } aabAlternativeParams; 
            bool aabParamsUpdateOnly; 
            int aabParamsUpdateReason; 
            float nitsDelta; 
            float nitsDeltaAlternative; 
            long long restoreTimeTarget; 
            float inactiveLength; 
            long long inactiveStart; 
            bool cpmsMitigationLimitingBrightness; 
            bool touchMitigationTriggered; 
            bool proxMitigationTriggered; 
            float auroraFactor; 
            float edrHeadroom; 
            float colorAdaptationStrength; 
            int colorAdaptationMode; 
            bool darkThemeApplied; 
            bool landscapeOrientation; 
            NSString *trialExperimentId; 
            int trialDeploymentId; 
            NSString *trialTreatmentId; 
        } __elems_[100]; 
    }  _entryBuffer;
    double  _inactivityStartTimestamp;
    bool  _initialFactorUpdateArrived;
    struct __IOMobileFramebuffer { } * _iomfb;
    struct CBAABParams { 
        float e0a; 
        float e0b; 
        float e1; 
        float e2; 
        float l0a; 
        float l0b; 
        float l1; 
        float l2; 
        float thirdSlope; 
        int curveType; 
    }  _lastAABAlternativeParams;
    struct CBAABParams { 
        float e0a; 
        float e0b; 
        float e1; 
        float e2; 
        float l0a; 
        float l0b; 
        float l1; 
        float l2; 
        float thirdSlope; 
        int curveType; 
    }  _lastAABParams;
    NSObject<OS_dispatch_queue> * _loggingQueue;
    double  _longestInactivityLength;
    struct TrackedState { 
        bool darkThemeApplied; 
        bool landscapeOrientation; 
        bool autobrightnessEnabled; 
        bool ecoModeEnabled; 
    }  _state;
}

@property (readonly, copy) NSString *debugDescription; /* unknown property attribute: ? */
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

+ (id)sliderInfoToNSDictionary:(const struct CBSliderCommitInfo { long long x1; long long x2; int x3; float x4; float x5; bool x6; float x7; float x8; float x9; float x10; int x11; bool x12; bool x13; float x14; struct CBAABParams { float x_15_1_1; float x_15_1_2; float x_15_1_3; float x_15_1_4; float x_15_1_5; float x_15_1_6; float x_15_1_7; float x_15_1_8; float x_15_1_9; int x_15_1_10; } x15; struct CBAABParams { float x_16_1_1; float x_16_1_2; float x_16_1_3; float x_16_1_4; float x_16_1_5; float x_16_1_6; float x_16_1_7; float x_16_1_8; float x_16_1_9; int x_16_1_10; } x16; bool x17; int x18; float x19; float x20; long long x21; float x22; long long x23; bool x24; bool x25; bool x26; float x27; float x28; float x29; int x30; bool x31; bool x32; id x33; int x34; id x35; }*)arg1;

- (id).cxx_construct;
- (struct CBSliderCommitInfo { long long x1; long long x2; int x3; float x4; float x5; bool x6; float x7; float x8; float x9; float x10; int x11; bool x12; bool x13; float x14; struct CBAABParams { float x_15_1_1; float x_15_1_2; float x_15_1_3; float x_15_1_4; float x_15_1_5; float x_15_1_6; float x_15_1_7; float x_15_1_8; float x_15_1_9; int x_15_1_10; } x15; struct CBAABParams { float x_16_1_1; float x_16_1_2; float x_16_1_3; float x_16_1_4; float x_16_1_5; float x_16_1_6; float x_16_1_7; float x_16_1_8; float x_16_1_9; int x_16_1_10; } x16; bool x17; int x18; float x19; float x20; long long x21; float x22; long long x23; bool x24; bool x25; bool x26; float x27; float x28; float x29; int x30; bool x31; bool x32; id x33; int x34; id x35; }*)addOrUpdateEntryWithTimestamp:(long long)arg1 slider:(float)arg2 apce:(float)arg3 andTrackedState:(struct TrackedState { bool x1; bool x2; bool x3; bool x4; })arg4;
- (void)cancelDelayedAPCETimer;
- (id)copyPropertyForKey:(id)arg1;
- (id)copyPropertyForKey:(id)arg1 withParameter:(id)arg2;
- (void)delayedAPCETimerHandler:(struct CBSliderCommitInfo { long long x1; long long x2; int x3; float x4; float x5; bool x6; float x7; float x8; float x9; float x10; int x11; bool x12; bool x13; float x14; struct CBAABParams { float x_15_1_1; float x_15_1_2; float x_15_1_3; float x_15_1_4; float x_15_1_5; float x_15_1_6; float x_15_1_7; float x_15_1_8; float x_15_1_9; int x_15_1_10; } x15; struct CBAABParams { float x_16_1_1; float x_16_1_2; float x_16_1_3; float x_16_1_4; float x_16_1_5; float x_16_1_6; float x_16_1_7; float x_16_1_8; float x_16_1_9; int x_16_1_10; } x16; bool x17; int x18; float x19; float x20; long long x21; float x22; long long x23; bool x24; bool x25; bool x26; float x27; float x28; float x29; int x30; bool x31; bool x32; id x33; int x34; id x35; }*)arg1;
- (void)fillEntry:(struct CBSliderCommitInfo { long long x1; long long x2; int x3; float x4; float x5; bool x6; float x7; float x8; float x9; float x10; int x11; bool x12; bool x13; float x14; struct CBAABParams { float x_15_1_1; float x_15_1_2; float x_15_1_3; float x_15_1_4; float x_15_1_5; float x_15_1_6; float x_15_1_7; float x_15_1_8; float x_15_1_9; int x_15_1_10; } x15; struct CBAABParams { float x_16_1_1; float x_16_1_2; float x_16_1_3; float x_16_1_4; float x_16_1_5; float x_16_1_6; float x_16_1_7; float x_16_1_8; float x_16_1_9; int x_16_1_10; } x16; bool x17; int x18; float x19; float x20; long long x21; float x22; long long x23; bool x24; bool x25; bool x26; float x27; float x28; float x29; int x30; bool x31; bool x32; id x33; int x34; id x35; }*)arg1 withTimestamp:(long long)arg2 andAABParams:(struct CBAABParams { float x1; float x2; float x3; float x4; float x5; float x6; float x7; float x8; float x9; int x10; }*)arg3 andAlternativeAABParams:(struct CBAABParams { float x1; float x2; float x3; float x4; float x5; float x6; float x7; float x8; float x9; int x10; }*)arg4;
- (void)fillEntry:(struct CBSliderCommitInfo { long long x1; long long x2; int x3; float x4; float x5; bool x6; float x7; float x8; float x9; float x10; int x11; bool x12; bool x13; float x14; struct CBAABParams { float x_15_1_1; float x_15_1_2; float x_15_1_3; float x_15_1_4; float x_15_1_5; float x_15_1_6; float x_15_1_7; float x_15_1_8; float x_15_1_9; int x_15_1_10; } x15; struct CBAABParams { float x_16_1_1; float x_16_1_2; float x_16_1_3; float x_16_1_4; float x_16_1_5; float x_16_1_6; float x_16_1_7; float x_16_1_8; float x_16_1_9; int x_16_1_10; } x16; bool x17; int x18; float x19; float x20; long long x21; float x22; long long x23; bool x24; bool x25; bool x26; float x27; float x28; float x29; int x30; bool x31; bool x32; id x33; int x34; id x35; }*)arg1 withTimestamp:(long long)arg2 andRestoreTimeTarget:(long long)arg3 andAABParams:(struct CBAABParams { float x1; float x2; float x3; float x4; float x5; float x6; float x7; float x8; float x9; int x10; }*)arg4 andAlternativeAABParams:(struct CBAABParams { float x1; float x2; float x3; float x4; float x5; float x6; float x7; float x8; float x9; int x10; }*)arg5;
- (void)fillEntry:(struct CBSliderCommitInfo { long long x1; long long x2; int x3; float x4; float x5; bool x6; float x7; float x8; float x9; float x10; int x11; bool x12; bool x13; float x14; struct CBAABParams { float x_15_1_1; float x_15_1_2; float x_15_1_3; float x_15_1_4; float x_15_1_5; float x_15_1_6; float x_15_1_7; float x_15_1_8; float x_15_1_9; int x_15_1_10; } x15; struct CBAABParams { float x_16_1_1; float x_16_1_2; float x_16_1_3; float x_16_1_4; float x_16_1_5; float x_16_1_6; float x_16_1_7; float x_16_1_8; float x_16_1_9; int x_16_1_10; } x16; bool x17; int x18; float x19; float x20; long long x21; float x22; long long x23; bool x24; bool x25; bool x26; float x27; float x28; float x29; int x30; bool x31; bool x32; id x33; int x34; id x35; }*)arg1 withTimestamp:(long long)arg2 slider:(float)arg3 apce:(float)arg4 andTrackedState:(struct TrackedState { bool x1; bool x2; bool x3; bool x4; })arg5;
- (float)getAPCE;
- (struct CBSliderCommitInfo { long long x1; long long x2; int x3; float x4; float x5; bool x6; float x7; float x8; float x9; float x10; int x11; bool x12; bool x13; float x14; struct CBAABParams { float x_15_1_1; float x_15_1_2; float x_15_1_3; float x_15_1_4; float x_15_1_5; float x_15_1_6; float x_15_1_7; float x_15_1_8; float x_15_1_9; int x_15_1_10; } x15; struct CBAABParams { float x_16_1_1; float x_16_1_2; float x_16_1_3; float x_16_1_4; float x_16_1_5; float x_16_1_6; float x_16_1_7; float x_16_1_8; float x_16_1_9; int x_16_1_10; } x16; bool x17; int x18; float x19; float x20; long long x21; float x22; long long x23; bool x24; bool x25; bool x26; float x27; float x28; float x29; int x30; bool x31; bool x32; id x33; int x34; id x35; }*)getLastFilledEntry;
- (struct CBSliderCommitInfo { long long x1; long long x2; int x3; float x4; float x5; bool x6; float x7; float x8; float x9; float x10; int x11; bool x12; bool x13; float x14; struct CBAABParams { float x_15_1_1; float x_15_1_2; float x_15_1_3; float x_15_1_4; float x_15_1_5; float x_15_1_6; float x_15_1_7; float x_15_1_8; float x_15_1_9; int x_15_1_10; } x15; struct CBAABParams { float x_16_1_1; float x_16_1_2; float x_16_1_3; float x_16_1_4; float x_16_1_5; float x_16_1_6; float x_16_1_7; float x_16_1_8; float x_16_1_9; int x_16_1_10; } x16; bool x17; int x18; float x19; float x20; long long x21; float x22; long long x23; bool x24; bool x25; bool x26; float x27; float x28; float x29; int x30; bool x31; bool x32; id x33; int x34; id x35; }*)getNextEntryAndAdvanceBufferIndex;
- (bool)getUserAABParams:(struct CBAABParams { float x1; float x2; float x3; float x4; float x5; float x6; float x7; float x8; float x9; int x10; }*)arg1;
- (bool)getUserAABParams:(struct CBAABParams { float x1; float x2; float x3; float x4; float x5; float x6; float x7; float x8; float x9; int x10; }*)arg1 alternativeAABParams:(struct CBAABParams { float x1; float x2; float x3; float x4; float x5; float x6; float x7; float x8; float x9; int x10; }*)arg2;
- (bool)getUserAABParams:(struct CBAABParams { float x1; float x2; float x3; float x4; float x5; float x6; float x7; float x8; float x9; int x10; }*)arg1 key:(id)arg2;
- (bool)handleAODStateUpdate:(unsigned long long)arg1 transitionTime:(float)arg2 context:(id)arg3;
- (void)handleNotificationForKey:(id)arg1 withProperty:(id)arg2;
- (id)initWithQueue:(id)arg1 andDisplayContainer:(id)arg2;
- (void)logAfterUserBrightnessCommitWithTimestamp:(long long)arg1 slider:(float)arg2 apce:(float)arg3 andTrackedState:(struct TrackedState { bool x1; bool x2; bool x3; bool x4; })arg4;
- (void)logAllFilledEntries;
- (void)reportCommit:(struct CBSliderCommitInfo { long long x1; long long x2; int x3; float x4; float x5; bool x6; float x7; float x8; float x9; float x10; int x11; bool x12; bool x13; float x14; struct CBAABParams { float x_15_1_1; float x_15_1_2; float x_15_1_3; float x_15_1_4; float x_15_1_5; float x_15_1_6; float x_15_1_7; float x_15_1_8; float x_15_1_9; int x_15_1_10; } x15; struct CBAABParams { float x_16_1_1; float x_16_1_2; float x_16_1_3; float x_16_1_4; float x_16_1_5; float x_16_1_6; float x_16_1_7; float x_16_1_8; float x_16_1_9; int x_16_1_10; } x16; bool x17; int x18; float x19; float x20; long long x21; float x22; long long x23; bool x24; bool x25; bool x26; float x27; float x28; float x29; int x30; bool x31; bool x32; id x33; int x34; id x35; }*)arg1;
- (void)sendNotificationForKey:(id)arg1 withValue:(id)arg2;
- (bool)setProperty:(id)arg1 forKey:(id)arg2;
- (void)start;
- (void)stop;
- (double)timestampFromCurveDistionary:(id)arg1;

@end
