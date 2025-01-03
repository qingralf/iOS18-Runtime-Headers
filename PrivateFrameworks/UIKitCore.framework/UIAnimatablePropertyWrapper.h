/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
 */

@interface UIAnimatablePropertyWrapper : UIAnimatablePropertyBase {
    <UIBridgedAnimatableProperty> * _animatableProperty;
}

@property (nonatomic, readonly) <UIBridgedAnimatableProperty> *animatableProperty;
@property (getter=isInvalidated, nonatomic, readonly) bool invalidated;
@property (getter=isVelocityUsableForVFD, nonatomic) bool velocityUsableForVFD;

+ (id)makeSwiftFloatAnimatableProperty;
+ (id)makeSwiftVectorAnimatableProperty;

- (void).cxx_destruct;
- (id)__swiftTransformer;
- (id)animatableProperty;
- (void)dealloc;
- (id)initWithAnimatableProperty:(id)arg1;
- (void)invalidate;
- (bool)isInvalidated;
- (bool)isVelocityUsableForVFD;
- (void)setVelocityUsableForVFD:(bool)arg1;
- (void)set__swiftTransformer:(id)arg1;

@end
