/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/Portrait.framework/Portrait
 */

@interface PTVFXRenderEffectBinding : NSObject {
    bool  _active;
    <VFXBinding> * _backgroundDimmingBinding;
    double  _creationTimeSeconds;
    float  _dimmingFactor;
    float  _duration;
    <VFXBinding> * _durationBinding;
    _TtC3VFX9VFXEffect * _effect;
    unsigned long long  _effectType;
    float  _emitZValue;
    NSNumber * _faceDetectionGroupId;
    float  _forceFadeOutStart;
    <VFXBinding> * _headPositionBinding;
    PTHumanDetections * _humanDetections;
    struct { 
        /* Warning: Unrecognized filer type: ']' using 'void*' */ void*columns[4]; 
    }  _inverseCameraProjection;
    NSMutableArray * _opacityBindings;
    NSData * _opacityValue;
    <VFXBinding> * _positionBinding;
    bool  _useBackgroundDimming;
    bool  _useCircularGradient;
}

@property (readonly) bool active;
@property (nonatomic, retain) <VFXBinding> *backgroundDimmingBinding;
@property double creationTimeSeconds;
@property (readonly) float dimmingFactor;
@property float duration;
@property (nonatomic, retain) <VFXBinding> *durationBinding;
@property (nonatomic, retain) _TtC3VFX9VFXEffect *effect;
@property unsigned long long effectType;
@property float emitZValue;
@property (nonatomic, retain) <VFXBinding> *headPositionBinding;
@property struct { /* Warning: Unrecognized filer type: ']' using 'void*' */ void*x1[4]; } inverseCameraProjection;
@property (nonatomic, retain) NSMutableArray *opacityBindings;
@property (nonatomic, retain) NSData *opacityValue;
@property (nonatomic, retain) <VFXBinding> *positionBinding;
@property bool useBackgroundDimming;
@property bool useCircularGradient;

+ (void)setRawValue:(id)arg1 onBinding:(id)arg2;

- (void).cxx_destruct;
- (bool)active;
- (id)backgroundDimmingBinding;
- (double)creationTimeSeconds;
- (float)dimmingFactor;
- (float)duration;
- (id)durationBinding;
- (id)effect;
- (unsigned long long)effectType;
- (float)emitZValue;
- (void)forceFadeOut:(double)arg1;
- (id)headPositionBinding;
- (id)initWithHumanDetections:(id)arg1;
- (struct { /* Warning: Unrecognized filer type: ']' using 'void*' */ void*x1[4]; })inverseCameraProjection;
- (id)opacityBindings;
- (id)opacityValue;
- (id)positionBinding;
- (void)screenSpaceToCameraSpace:(void *)arg1 videoRect:(void *)arg2; // needs 2 arg types, found 1: struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; }
- (void)setBackgroundDimmingBinding:(id)arg1;
- (void)setCreationTimeSeconds:(double)arg1;
- (void)setDuration:(float)arg1;
- (void)setDurationBinding:(id)arg1;
- (void)setEffect:(id)arg1;
- (void)setEffectType:(unsigned long long)arg1;
- (void)setEmitZValue:(float)arg1;
- (void)setHeadPositionBinding:(id)arg1;
- (void)setInverseCameraProjection:(struct { /* Warning: Unrecognized filer type: ']' using 'void*' */ void*x1[4]; })arg1;
- (void)setOpacityBindings:(id)arg1;
- (void)setOpacityValue:(id)arg1;
- (void)setPositionBinding:(id)arg1;
- (void)setUseBackgroundDimming:(bool)arg1;
- (void)setUseCircularGradient:(bool)arg1;
- (id)singleDetectionGroupId;
- (int)updateBackgroundDimming:(float)arg1;
- (int)updateWithEvent:(id)arg1 renderRequest:(id)arg2 videoRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg3 time:(double)arg4;
- (bool)useBackgroundDimming;
- (bool)useCircularGradient;

@end
