/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/VFX.framework/VFX
 */

@interface VFXAvoidOccluderConstraint : VFXConstraint {
    unsigned long long  _categoryBitMask;
    id  _delegate;
    float  _offset;
    VFXNode * _target;
}

@property (nonatomic) float bias;
@property (nonatomic) <VFXAvoidOccluderConstraintDelegate> *delegate;
@property (nonatomic) unsigned long long occluderCategoryBitMask;
@property (nonatomic, retain) VFXNode *target;

+ (id)avoidOccluderConstraint;
+ (id)avoidOccluderConstraintWithTarget:(id)arg1;
+ (bool)supportsSecureCoding;

- (void)_customDecodingOfVFXAvoidOccluderConstraint:(id)arg1;
- (void)_customEncodingOfVFXAvoidOccluderConstraint:(id)arg1;
- (float)bias;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)dealloc;
- (id)delegate;
- (void)encodeWithCoder:(id)arg1;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (unsigned long long)occluderCategoryBitMask;
- (void)retargetWithRemapTable:(struct __CFDictionary { }*)arg1;
- (void)setBias:(float)arg1;
- (void)setDelegate:(id)arg1;
- (void)setOccluderCategoryBitMask:(unsigned long long)arg1;
- (void)setTarget:(id)arg1;
- (id)target;

@end