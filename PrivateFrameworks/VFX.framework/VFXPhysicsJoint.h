/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/VFX.framework/VFX
 */

@interface VFXPhysicsJoint : NSObject <NSCopying, NSSecureCoding> {
    VFXPhysicsBody * _bodyA;
    VFXPhysicsBody * _bodyB;
    struct btTypedConstraint { int (**x1)(); int x2; int x3; union { int x_4_1_1; void *x_4_1_2; } x4; float x5; bool x6; bool x7; int x8; struct btRigidBody {} *x9; struct btRigidBody {} *x10; float x11; float x12; struct btJointFeedback {} *x13; } * _constraint;
    VFXPhysicsWorld * _physicsWorld;
}

@property (nonatomic, retain) VFXPhysicsBody *bodyA;
@property (nonatomic, retain) VFXPhysicsBody *bodyB;

+ (id)joint;
+ (bool)supportsSecureCoding;

- (void)_addToPhysicsWorld:(id)arg1;
- (struct btTypedConstraint { int (**x1)(); int x2; int x3; union { int x_4_1_1; void *x_4_1_2; } x4; float x5; bool x6; bool x7; int x8; struct btRigidBody {} *x9; struct btRigidBody {} *x10; float x11; float x12; struct btJointFeedback {} *x13; }*)_createConstraint;
- (struct btTypedConstraint { int (**x1)(); int x2; int x3; union { int x_4_1_1; void *x_4_1_2; } x4; float x5; bool x6; bool x7; int x8; struct btRigidBody {} *x9; struct btRigidBody {} *x10; float x11; float x12; struct btJointFeedback {} *x13; }*)_handle;
- (void)_removeConstraint;
- (void)_updateContraintAndAddToWorld:(id)arg1;
- (void)_willRemoveFromPhysicsWorld:(id)arg1;
- (id)bodyA;
- (id)bodyB;
- (void)copyFrom:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)dealloc;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (bool)isActive;
- (id)physicsWorld;
- (void)retargetWithRemapTable:(struct __CFDictionary { }*)arg1;
- (void)setBodyA:(id)arg1;
- (void)setBodyB:(id)arg1;

@end
