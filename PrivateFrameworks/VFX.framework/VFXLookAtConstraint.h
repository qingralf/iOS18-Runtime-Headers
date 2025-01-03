/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/VFX.framework/VFX
 */

@interface VFXLookAtConstraint : VFXConstraint {
    bool  _gimbalLockEnabled;
    void _localFront;
    VFXNode * _target;
    void _targetOffset;
    void _upVector;
}

@property (nonatomic) bool gimbalLockEnabled;
@property (nonatomic) void localFront;
@property (nonatomic, retain) VFXNode *target;
@property (nonatomic) void targetOffset;
@property (nonatomic) void worldUp;

+ (id)lookAtConstraintWithTarget:(id)arg1;
+ (bool)supportsSecureCoding;

- (void)_customDecodingOfVFXLookAtConstraint:(id)arg1;
- (void)_customEncodingOfVFXLookAtConstraint:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)dealloc;
- (void)encodeWithCoder:(id)arg1;
- (bool)gimbalLockEnabled;
- (id)initWithCoder:(id)arg1;
- (id)initWithTarget:(id)arg1;
- (void)localFront;
- (id)localFrontValue;
- (void)retargetWithRemapTable:(struct __CFDictionary { }*)arg1;
- (void)setGimbalLockEnabled:(bool)arg1;
- (void)setLocalFront;
- (void)setLocalFrontValue:(id)arg1;
- (void)setTarget:(id)arg1;
- (void)setTargetOffset;
- (void)setTargetOffsetValue:(id)arg1;
- (void)setUpVector;
- (void)setUpVectorValue:(id)arg1;
- (void)setValue:(id)arg1 forKey:(id)arg2;
- (void)setWorldUp;
- (id)target;
- (void)targetOffset;
- (id)targetOffsetValue;
- (void)upVector;
- (id)upVectorValue;
- (id)valueForKey:(id)arg1;
- (void)worldUp;

@end
