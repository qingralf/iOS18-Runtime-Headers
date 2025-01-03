/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/VFX.framework/VFX
 */

@interface VFXSliderConstraint : VFXConstraint {
    unsigned long long  _categoryBitMask;
    void _offset;
    float  _radius;
}

@property (nonatomic) unsigned long long collisionCategoryBitMask;
@property (nonatomic) void offset;
@property (nonatomic) float radius;

+ (id)sliderConstraint;
+ (bool)supportsSecureCoding;

- (unsigned long long)collisionCategoryBitMask;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (void)offset;
- (float)radius;
- (void)setCollisionCategoryBitMask:(unsigned long long)arg1;
- (void)setOffset;
- (void)setRadius:(float)arg1;
- (void)setValue:(id)arg1 forKey:(id)arg2;
- (id)valueForKey:(id)arg1;

@end
