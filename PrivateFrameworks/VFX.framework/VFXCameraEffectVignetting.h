/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/VFX.framework/VFX
 */

@interface VFXCameraEffectVignetting : VFXCameraEffect {
    float  _anamorphic;
    float  _intensity;
    float  _radius;
    float  _softness;
}

@property (nonatomic) float anamorphic;
@property (nonatomic) float intensity;
@property (nonatomic) float radius;
@property (nonatomic) float softness;

+ (bool)supportsSecureCoding;
+ (id)vignetting;

- (void)_syncObjCModel;
- (float)anamorphic;
- (struct __CFXCameraEffectVignetting { }*)cfxObject;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void*)createCFXObject;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (float)intensity;
- (float)radius;
- (void)setAnamorphic:(float)arg1;
- (void)setIntensity:(float)arg1;
- (void)setRadius:(float)arg1;
- (void)setSoftness:(float)arg1;
- (float)softness;

@end