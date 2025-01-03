/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/CoreBrightness.framework/CoreBrightness
 */

@interface CBAODTransitionController : CBModule {
    CBAmmolite * _ammolite;
    float  _brightnessFactor;
    <CBBrightnessProxy> * _brtCtl;
    float  _currentAAPFactor;
    float  _currentBrightnessLimit;
    float  _currentDisplayNits;
    float  _currentEDRHeadroom;
    struct { 
        unsigned int ID; 
        bool brightness_set; 
        float brightness; 
        bool whitepoint_set; 
        float whitepoint[3][3]; 
        bool pccfactor_set; 
        float pccfactor; 
        bool brightnessLimit_set; 
        float brightnessLimit; 
        bool lowAmbientAdaptationStrength_set; 
        float lowAmbientAdaptationStrength; 
        float lowAmbientAdaptationLux; 
        bool ammoliteStrength_set; 
        float ammoliteStrength; 
        float ammoliteLux; 
        unsigned char reserved[5]; 
    }  _currentFlipBookEntry;
    int  _currentFrequency;
    float  _currentLumaBoostFactor;
    float  _currentSDRBrightness;
    id  _currentState;
    id  _currentTarget;
    float  _currentTrustedLux;
    struct { 
        float matrix[3][3]; 
        struct { 
            float x; 
            float y; 
        } xy; 
        float Y; 
    }  _currentWhitepoint;
    unsigned long long  _displayID;
    bool  _displayON;
    float  _edrRampDurationPerStop;
    CBAPEndpoint * _endpoint;
    CBAODFlipBookWrapper * _flipbookCache;
    CBIndicatorBrightnessModule * _indicator;
    NSObject<OS_dispatch_source> * _lastUpdateSwappedTimer;
    bool  _liveUpdatesOverride;
    float  _maxNits;
    float  _minNits;
    float  _nitsOverride;
    id  _pendingState;
    id /* block */  _rampCanceledCallback;
    id /* block */  _rampDoneCallback;
    CBRampManager * _rampManager;
    float  _remainingTransitionLength;
    float  _targetAAPFactor;
    float  _targetBrightnessLimit;
    float  _targetEDRHeadroom;
    float  _targetLumaBoostFactor;
    float  _targetSDRBrightness;
    struct { 
        float matrix[3][3]; 
        struct { 
            float x; 
            float y; 
        } xy; 
        float Y; 
    }  _targetWhitepoint;
    CBAODThresholdModule * _thresholdModule;
    CBTwilight * _twilight;
    struct ColorEffects { } * cfx;
}

@property (retain) CBAmmolite *ammolite;
@property (nonatomic) float brightnessFactor;
@property (nonatomic) float currentDisplayNits;
@property (nonatomic) bool displayON;
@property (retain) CBIndicatorBrightnessModule *indicator;
@property bool liveUpdates;
@property bool liveUpdatesOverride;
@property float nitsOverride;
@property float remainingTransitionLength;
@property (retain) CBTwilight *twilight;

- (void)activateLastUpdateSwappedTimerWithTimeout:(float)arg1;
- (void)addFlipBookEntry:(struct { unsigned int x1; bool x2; float x3; bool x4; float x5[3][3]; bool x6; float x7; bool x8; float x9; bool x10; float x11; float x12; bool x13; float x14; float x15; unsigned char x16[5]; })arg1;
- (id)ammolite;
- (bool)applyPendingUpdates;
- (float)brightnessFactor;
- (float)brightnessLimitProgressCallback:(float)arg1 rampContext:(id)arg2;
- (float)calculateSigmoidProgressForLinearProgress:(float)arg1;
- (float)calculateSpringProgressForLinearProgress:(float)arg1;
- (bool)cancelDCPTransition;
- (bool)cancelTransition;
- (void)checkBootArgsConfiguration;
- (void)chromaticity:(struct { float x1; float x2; }*)arg1 andIlluminance:(float*)arg2 fromMatrix:(float)arg3;
- (void)clockUpdateHandler:(id)arg1;
- (void)colorMatrix:(float)arg1 fromState:(id)arg2;
- (void)colorRampRoutine:(const struct { float x1; float x2[9]; unsigned int x3; float x4; struct { float x_5_1_1; float x_5_1_2; } x5; int x6; double x7; }*)arg1;
- (bool)commitBrightness:(float)arg1 force:(bool)arg2;
- (id)copyColourRampStatsWithLength:(float)arg1 frequency:(float)arg2 origin:(struct { float x1; float x2; })arg3 target:(struct { float x1; float x2; })arg4;
- (id)copyContext;
- (id)copyRampStatsWithLength:(float)arg1 frequency:(float)arg2 origin:(float)arg3 target:(float)arg4;
- (float)currentAmmoliteLux;
- (float)currentDisplayNits;
- (bool)currentFlipBookEntry:(struct { unsigned int x1; bool x2; float x3; bool x4; float x5[3][3]; bool x6; float x7; bool x8; float x9; bool x10; float x11; float x12; bool x13; float x14; float x15; unsigned char x16[5]; }*)arg1;
- (int)currentTransitionUpdateID;
- (float)currentTwilightLux;
- (void)dealloc;
- (bool)displayON;
- (void)enableDCPFlipBookUpdates:(bool)arg1;
- (bool)flipBookEntryForID:(int)arg1 entry:(struct { unsigned int x1; bool x2; float x3; bool x4; float x5[3][3]; bool x6; float x7; bool x8; float x9; bool x10; float x11; float x12; bool x13; float x14; float x15; unsigned char x16[5]; }*)arg2;
- (float)getFloatValueFrom:(id)arg1 key:(id)arg2;
- (float)getFloatValueFrom:(id)arg1 key:(id)arg2 subkey:(id)arg3;
- (id)indicator;
- (bool)initAPEndpoint;
- (void)initColorEffects;
- (id)initWithCBBrtControl:(id)arg1 andQueue:(id)arg2;
- (id)initWithCBBrtControl:(id)arg1 andThresholdModule:(id)arg2 andQueue:(id)arg3;
- (void)initialiseFlipBookWithLength:(float)arg1 frequency:(int)arg2 lux:(float)arg3;
- (bool)liveUpdates;
- (bool)liveUpdatesOverride;
- (void)logTransitionParameters:(struct { bool x1; bool x2; bool x3; bool x4; float x5; bool x6; float x7; bool x8; float x9; bool x10; float x11; bool x12; float x13; bool x14; float x15; })arg1;
- (float)nitsOverride;
- (void)processInitialColorMatrixFromState:(id)arg1;
- (void)rampsDoneCallback:(id)arg1;
- (void)releaseCallbacks;
- (void)releaseLastUpdateSwappedTimer;
- (float)remainingTransitionLength;
- (bool)requestColorRampTransitionStop;
- (bool)requestTransitionStopForIdentifier:(id)arg1;
- (float)sdrBrightnessProgressCallback:(float)arg1 rampContext:(id)arg2;
- (float)sdrBrightnessProgressCallback:(float)arg1 rampContext:(id)arg2 profile:(unsigned long long)arg3;
- (bool)sendCurrentFlipBook;
- (void)sendNotificationForKey:(id)arg1 andValue:(id)arg2;
- (void)setAmmolite:(id)arg1;
- (void)setBrightnessFactor:(float)arg1;
- (void)setCurrentDisplayNits:(float)arg1;
- (void)setCurrentWhitepointFromMatrix:(float)arg1;
- (void)setDisplayON:(bool)arg1;
- (void)setDurationOfEDRRamp:(float)arg1;
- (void)setIndicator:(id)arg1;
- (void)setInitialState:(id)arg1;
- (void)setLiveUpdates:(bool)arg1;
- (void)setLiveUpdatesOverride:(bool)arg1;
- (void)setNitsOverride:(float)arg1;
- (void)setRemainingTransitionLength:(float)arg1;
- (void)setTargetWhitepointFromMatrix:(float)arg1;
- (void)setTwilight:(id)arg1;
- (void)setWhitepoint:(struct { float x1[3][3]; struct { float x_2_1_1; float x_2_1_2; } x2; float x3; }*)arg1 fromMatrix:(float)arg2;
- (bool)shallUpdateWhitepointFrom:(float)arg1 target:(float)arg2;
- (float)sigmoidFunction:(float)arg1;
- (bool)startTransition:(id)arg1 length:(float)arg2 forceUpdate:(bool)arg3 rampDoneCallback:(id /* block */)arg4 rampCanceledCallback:(id /* block */)arg5;
- (bool)startTransition:(id)arg1 transitionParameters:(struct { bool x1; bool x2; bool x3; bool x4; float x5; bool x6; float x7; bool x8; float x9; bool x10; float x11; bool x12; float x13; bool x14; float x15; })arg2 rampDoneCallback:(id /* block */)arg3 rampCanceledCallback:(id /* block */)arg4;
- (float)transitionDurationFromCurrent:(float)arg1 toTarget:(float)arg2;
- (id)twilight;
- (void)updateAAPFactor:(float)arg1;
- (bool)updateAllBrightnessFeaturesForced:(bool)arg1;
- (void)updateAmbient:(float)arg1;
- (void)updateAmmoliteStrength:(float)arg1;
- (void)updateBrightnessLimit:(float)arg1;
- (void)updateColorRamp:(id)arg1;
- (void)updateEDRHeadroom:(float)arg1;
- (void)updateFlipBookEntryWithAAPFactor:(float)arg1;
- (void)updateFlipBookEntryWithAmmoliteLux:(float)arg1;
- (void)updateFlipBookEntryWithAmmoliteStrength:(float)arg1;
- (void)updateFlipBookEntryWithBrightness:(float)arg1;
- (void)updateFlipBookEntryWithBrightnessLimit:(float)arg1;
- (void)updateFlipBookEntryWithTwilightLux:(float)arg1;
- (void)updateFlipBookEntryWithTwilightStrength:(float)arg1;
- (void)updateLumaBoostFactor:(float)arg1;
- (void)updateSDRBrightness:(float)arg1;
- (void)updateTwilightStrength:(float)arg1;
- (void)updateWhitePoint:(float)arg1;

@end
