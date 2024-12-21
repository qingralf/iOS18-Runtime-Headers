/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/VFX.framework/VFX
 */

@interface VFXCameraEffect : NSObject <NSCopying, NSSecureCoding, VFXAnimatable> {
    VFXOrderedDictionary * _animations;
    struct os_unfair_lock_s { 
        unsigned int _os_unfair_lock_opaque; 
    }  _animationsLock;
    NSMutableDictionary * _bindings;
    void * _cameraEffect;
    bool  _enabled;
    bool  _isPresentationObject;
}

@property (readonly) NSArray *animationKeys;
@property (readonly, copy) NSString *debugDescription; /* unknown property attribute: ? */
@property (readonly, copy) NSString *description;
@property (getter=isEnabled, nonatomic) bool enabled;
@property (readonly) unsigned long long hash;
@property (readonly) id presentationObject;
@property (readonly) Class superclass;

+ (id)presentationCameraEffectWithCameraEffectRef:(struct __CFXCameraEffect { }*)arg1;
+ (bool)supportsSecureCoding;

- (void*)__CFObject;
- (bool)__removeAnimation:(id)arg1 forKey:(id)arg2;
- (void)_copyAnimationsFrom:(id)arg1;
- (void)_pauseAnimation:(bool)arg1 forKey:(id)arg2 pausedByNode:(bool)arg3;
- (void)_syncObjCAnimations;
- (void)_syncObjCModel;
- (id)_valueForSimdVectorKeyPath:(id)arg1;
- (id)_vfxAnimationForKey:(id)arg1;
- (id)_vfxBindings;
- (void)addAnimation:(id)arg1;
- (void)addAnimation:(id)arg1 forKey:(id)arg2;
- (void)addAnimationPlayer:(id)arg1 forKey:(id)arg2;
- (id)animationKeys;
- (struct __CFXAnimationManager { }*)animationManager;
- (id)animationPlayerForKey:(id)arg1;
- (void)bindAnimatablePath:(id)arg1 toObject:(id)arg2 withKeyPath:(id)arg3 options:(id)arg4;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void*)createCFXObject;
- (void)dealloc;
- (void)encodeWithCoder:(id)arg1;
- (id)init;
- (id)initPresentationCameraEffectWithCameraEffectRef:(void*)arg1;
- (id)initWithCoder:(id)arg1;
- (bool)isEnabled;
- (id)presentationObject;
- (bool)rawFloat2ForKey:(id)arg1 value:(/* Warning: Unrecognized filer type: '2' using 'void*' */ void**)arg2;
- (bool)rawFloat3ForKey:(id)arg1 value:(/* Warning: Unrecognized filer type: '2' using 'void*' */ void**)arg2;
- (void)removeAllAnimations;
- (void)removeAllAnimationsWithBlendOutDuration:(float)arg1;
- (void)removeAllBindings;
- (void)removeAnimationForKey:(id)arg1;
- (void)removeAnimationForKey:(id)arg1 blendOutDuration:(float)arg2;
- (void)setEnabled:(bool)arg1;
- (void)unbindAnimatablePath:(id)arg1;
- (id)valueForKeyPath:(id)arg1;
- (id)world;
- (struct __CFXWorld { }*)worldRef;

@end