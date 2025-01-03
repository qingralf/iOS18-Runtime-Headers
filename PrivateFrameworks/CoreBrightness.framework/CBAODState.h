/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/CoreBrightness.framework/CoreBrightness
 */

@interface CBAODState : NSObject {
    unsigned long long  _AODState;
    unsigned long long  _AODStateExternal;
    unsigned long long  _AODTransitionProfile;
    float  _AODTransitionProfileEaseInOut_K;
    float  _AODTransitionProfileSpring_damping;
    float  _AODTransitionProfileSpring_mass;
    float  _AODTransitionProfileSpring_stiffness;
    float  _AODTransitionProfileSpring_velocity;
    float  _AODTransitionTargetAlgoOptimised_dimmingThreshold;
    struct { 
        float _E[20]; 
        float _L[20]; 
        int size; 
    }  _curve;
    struct { 
        float _E[20]; 
        float _L[20]; 
        int size; 
    }  _darkerCurve;
    NSUserDefaults * _defaults;
    bool  _enableAODLiveON;
    bool  _isAODSupported;
    NSObject<OS_os_log> * _logHandle;
    float  _nitsCap;
    float  _pullALSUpdatePeriod;
    SWSystemActivityAssertion * _systemActivityAssertion;
    float  _thresholdPCCLuxDelta;
    NSMutableArray * _thresholdsAPDeltaPBrightenBuckets;
    NSMutableArray * _thresholdsAPDeltaPDimBuckets;
    NSMutableArray * _thresholdsAPLuxBuckets;
    NSMutableArray * _thresholdsDeltaPBrightenBuckets;
    NSMutableArray * _thresholdsDeltaPDimBuckets;
    NSMutableArray * _thresholdsLuxBuckets;
    float  _whitepointDeltaThreshold;
    float  _whitepointTransitionLength;
    float  _whitepointTransitionLengthLowLux;
    float  _whitepointTransitionLengthLuxThreshold;
}

@property unsigned long long AODState;
@property unsigned long long AODStateExternal;
@property unsigned long long AODTransitionProfile;
@property float AODTransitionProfileEaseInOut_K;
@property float AODTransitionProfileSpring_damping;
@property float AODTransitionProfileSpring_mass;
@property float AODTransitionProfileSpring_stiffness;
@property float AODTransitionProfileSpring_velocity;
@property float AODTransitionTargetAlgoOptimised_dimmingThreshold;
@property (readonly) struct { float x1[20]; float x2[20]; int x3; } curve;
@property (readonly) struct { float x1[20]; float x2[20]; int x3; } darkerCurve;
@property (nonatomic) bool enableAODLiveON;
@property (nonatomic) bool isAODSupported;
@property (readonly) float maxAODNits;
@property (readonly) float minAODNits;
@property float nitsCap;
@property float pullALSUpdatePeriod;
@property (readonly) float thresholdPCCLuxDelta;
@property (readonly) NSMutableArray *thresholdsAPDeltaPBrightenBuckets;
@property (readonly) NSMutableArray *thresholdsAPDeltaPDimBuckets;
@property (readonly) NSMutableArray *thresholdsAPLuxBuckets;
@property (readonly) NSMutableArray *thresholdsDeltaPBrightenBuckets;
@property (readonly) NSMutableArray *thresholdsDeltaPDimBuckets;
@property (readonly) NSMutableArray *thresholdsLuxBuckets;
@property float whitepointDeltaThreshold;
@property float whitepointTransitionLength;
@property float whitepointTransitionLengthLowLux;
@property float whitepointTransitionLengthLuxThreshold;

+ (id)sharedInstance;

- (unsigned long long)AODState;
- (unsigned long long)AODStateExternal;
- (char *)AODStateString;
- (unsigned long long)AODTransitionProfile;
- (float)AODTransitionProfileEaseInOut_K;
- (float)AODTransitionProfileSpring_damping;
- (float)AODTransitionProfileSpring_mass;
- (float)AODTransitionProfileSpring_stiffness;
- (float)AODTransitionProfileSpring_velocity;
- (float)AODTransitionTargetAlgoOptimised_dimmingThreshold;
- (void)acquirePowerAssertion;
- (void)checkBootArgsConfiguration;
- (void)checkDefaultsConfiguration;
- (id)copyNumberFromPrefsForKey:(id)arg1;
- (struct { float x1[20]; float x2[20]; int x3; })curve;
- (struct { float x1[20]; float x2[20]; int x3; })darkerCurve;
- (void)dealloc;
- (bool)enableAODLiveON;
- (bool)handleAODCurveUpdate:(id)arg1;
- (bool)handleAODDarkerCurveUpdate:(id)arg1;
- (id)init;
- (bool)isAODActive;
- (bool)isAODSupported;
- (void)logAODCurve:(struct { float x1[20]; float x2[20]; int x3; })arg1 name:(id)arg2;
- (float)maxAODNits;
- (float)minAODNits;
- (float)nitsCap;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void*)arg4;
- (float)pullALSUpdatePeriod;
- (void)releasePowerAssertion;
- (void)setAODState:(unsigned long long)arg1;
- (void)setAODStateExternal:(unsigned long long)arg1;
- (void)setAODTransitionProfile:(unsigned long long)arg1;
- (void)setAODTransitionProfileEaseInOut_K:(float)arg1;
- (void)setAODTransitionProfileSpring_damping:(float)arg1;
- (void)setAODTransitionProfileSpring_mass:(float)arg1;
- (void)setAODTransitionProfileSpring_stiffness:(float)arg1;
- (void)setAODTransitionProfileSpring_velocity:(float)arg1;
- (void)setAODTransitionTargetAlgoOptimised_dimmingThreshold:(float)arg1;
- (void)setEnableAODLiveON:(bool)arg1;
- (void)setIsAODSupported:(bool)arg1;
- (void)setNitsCap:(float)arg1;
- (bool)setProperty:(id)arg1 forKey:(id)arg2;
- (void)setPullALSUpdatePeriod:(float)arg1;
- (void)setWhitepointDeltaThreshold:(float)arg1;
- (void)setWhitepointTransitionLength:(float)arg1;
- (void)setWhitepointTransitionLengthLowLux:(float)arg1;
- (void)setWhitepointTransitionLengthLuxThreshold:(float)arg1;
- (float)thresholdPCCLuxDelta;
- (id)thresholdsAPDeltaPBrightenBuckets;
- (id)thresholdsAPDeltaPDimBuckets;
- (id)thresholdsAPLuxBuckets;
- (id)thresholdsDeltaPBrightenBuckets;
- (id)thresholdsDeltaPDimBuckets;
- (id)thresholdsLuxBuckets;
- (float)whitepointDeltaThreshold;
- (float)whitepointTransitionLength;
- (float)whitepointTransitionLengthLowLux;
- (float)whitepointTransitionLengthLuxThreshold;

@end
