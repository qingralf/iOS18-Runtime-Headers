/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/VFX.framework/VFX
 */

@interface VFXMorpher : NSObject <NSSecureCoding, VFXAnimatable> {
    VFXOrderedDictionary * _animations;
    struct os_unfair_lock_s { 
        unsigned int _os_unfair_lock_opaque; 
    }  _animationsLock;
    NSMutableDictionary * _bindings;
    long long  _calculationMode;
    NSArray * _correctiveDriverCounts;
    NSArray * _correctiveDriverIndices;
    NSArray * _correctiveInBetweenCounts;
    NSArray * _correctiveInBetweenInfluenceWeights;
    NSArray * _correctivesAndInBetweens;
    NSArray * _inBetweenCounts;
    NSArray * _inBetweenInfluenceWeights;
    unsigned int  _isPresentationObject;
    NSDictionary * _mainTargetNamesToIndexes;
    NSArray * _mainTargets;
    NSArray * _mainTargetsAndInBetweens;
    struct __CFXMorph { } * _morpher;
    NSString * _name;
    bool  _unifyNormal;
    bool  _useSparseTargets;
    unsigned long long  _weightCount;
    float * _weights;
}

@property (readonly) NSArray *animationKeys;
@property (nonatomic) long long calculationMode;
@property (readonly, copy) NSString *debugDescription; /* unknown property attribute: ? */
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) id presentationObject;
@property (readonly) Class superclass;
@property (nonatomic, copy) NSArray *targets;
@property bool unifiesNormals;
@property (nonatomic, retain) NSArray *weights;

+ (Class)VFXUID_classForElementOfArray:(id)arg1;
+ (id)morpher;
+ (id)morpherWithMorphRef:(struct __CFXMorph { }*)arg1;
+ (id)presentationMorpherWithMorpherRef:(struct __CFXMorpher { struct __CFXEntity { struct __CFRuntimeBase { unsigned long long x_1_2_1; _Atomic unsigned long long x_1_2_2; } x_1_1_1; void *x_1_1_2; struct __CFString {} *x_1_1_3; struct __CFString {} *x_1_1_4; struct __CFDictionary {} *x_1_1_5; struct __CFXWorld {} *x_1_1_6; long long x_1_1_7; } x1; struct __CFXGeometry {} *x2; struct __CFXMorph {} *x3; unsigned int x4; unsigned int x5; float *x6; unsigned int x7; unsigned int x8; }*)arg1;
+ (bool)supportsSecureCoding;
+ (id)weightIndexStringForIndex:(long long)arg1;

- (void*)__CFObject;
- (bool)__removeAnimation:(id)arg1 forKey:(id)arg2;
- (void)_copyAnimationsFrom:(id)arg1;
- (void)_customDecodingOfVFXMorpher:(id)arg1;
- (void)_customEncodingOfVFXMorpher:(id)arg1;
- (void)_didDecodeVFXMorpher:(id)arg1;
- (bool)_isUsingSparseTargets;
- (void)_pauseAnimation:(bool)arg1 forKey:(id)arg2 pausedByNode:(bool)arg3;
- (float)_presentationWeightForTargetAtIndex:(unsigned long long)arg1 token:(const void*)arg2;
- (void)_syncEntityObjCModel;
- (void)_syncObjCAnimations;
- (void)_syncObjCModel;
- (void)_updateCorrectivesAndInBetween:(id)arg1;
- (void)_updateTargetsAndInBetween:(id)arg1;
- (id)_vfxAnimationForKey:(id)arg1;
- (id)_vfxBindings;
- (long long)_weightIndexForTargetNamed:(id)arg1;
- (void)addAnimation:(id)arg1;
- (void)addAnimation:(id)arg1 forKey:(id)arg2;
- (void)addAnimationPlayer:(id)arg1 forKey:(id)arg2;
- (id)animationKeys;
- (struct __CFXAnimationManager { }*)animationManager;
- (id)animationPlayerForKey:(id)arg1;
- (void)bindAnimatablePath:(id)arg1 toObject:(id)arg2 withKeyPath:(id)arg3 options:(id)arg4;
- (long long)calculationMode;
- (void)clearCorrectives;
- (void)clearInBetweens;
- (void)convertToAdditiveWithBaseMesh:(id)arg1;
- (void)convertToSparseWithBaseMesh:(id)arg1;
- (id)copy;
- (id)copyAnimationChannelForKeyPath:(id)arg1 animation:(id)arg2;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (unsigned long long)correctiveDriverCountForCorrectiveAtIndex:(unsigned long long)arg1;
- (id)correctiveDriverCounts;
- (id)correctiveDriverIndices;
- (id)correctiveDriverIndicesForCorrectiveAtIndex:(unsigned long long)arg1;
- (id)correctiveInBetweenCounts;
- (id)correctiveInBetweenWeights;
- (id)correctives;
- (id)correctivesAndInBetween;
- (void)dealloc;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)identifier;
- (id)inBetweenCounts;
- (id)inBetweenTargetsForCorrectiveAtIndex:(unsigned long long)arg1;
- (id)inBetweenTargetsForTargetAtIndex:(unsigned long long)arg1;
- (id)inBetweenWeights;
- (id)inBetweenWeightsForCorrectiveAtIndex:(unsigned long long)arg1;
- (id)inBetweenWeightsForTargetAtIndex:(unsigned long long)arg1;
- (id)init;
- (id)initPresentationMorpherWithMorphRef:(struct __CFXMorph { }*)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithMorphRef:(struct __CFXMorph { }*)arg1;
- (bool)isPausedOrPausedByInheritance;
- (void)makeUniqueID;
- (struct __CFXMorph { }*)morphRef;
- (id)name;
- (id)presentationMorpher;
- (id)presentationObject;
- (void)removeAllAnimations;
- (void)removeAllAnimationsWithBlendOutDuration:(float)arg1;
- (void)removeAllBindings;
- (void)removeAnimationForKey:(id)arg1;
- (void)removeAnimationForKey:(id)arg1 blendOutDuration:(float)arg2;
- (void)setCalculationMode:(long long)arg1;
- (void)setIdentifier:(id)arg1;
- (void)setName:(id)arg1;
- (void)setShouldClearCPUDataAfterUpload:(bool)arg1;
- (void)setShouldMorphNormals:(bool)arg1;
- (void)setTargets:(id)arg1;
- (void)setTargets:(id)arg1 withInBetweenTargetCounts:(id)arg2 inBetweenWeights:(id)arg3;
- (void)setTargetsAndInBetweens:(id)arg1 inBetweenCounts:(id)arg2 inBetweenWeights:(id)arg3 correctives:(id)arg4 driverCounts:(id)arg5 driverIndices:(id)arg6 inBetweenCounts:(id)arg7 inBetweenWeights:(id)arg8;
- (void)setUnifiesNormals:(bool)arg1;
- (void)setValue:(id)arg1 forUndefinedKey:(id)arg2;
- (void)setWeight:(float)arg1 forTargetAtIndex:(unsigned long long)arg2;
- (void)setWeight:(float)arg1 forTargetNamed:(id)arg2;
- (void)setWeightIncrementalThreshold:(float)arg1;
- (void)setWeights:(id)arg1;
- (bool)shouldClearCPUDataAfterUpload;
- (bool)shouldMorphNormals;
- (id)targets;
- (id)targetsAndInBetween;
- (void)unbindAnimatablePath:(id)arg1;
- (bool)unifiesNormals;
- (id)valueForUndefinedKey:(id)arg1;
- (float)weightForTargetAtIndex:(unsigned long long)arg1;
- (float)weightForTargetNamed:(id)arg1;
- (float)weightIncrementalThreshold;
- (id)weights;
- (id)world;
- (struct __CFXWorld { }*)worldRef;

@end