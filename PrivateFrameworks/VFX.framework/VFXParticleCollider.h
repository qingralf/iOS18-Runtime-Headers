/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/VFX.framework/VFX
 */

@interface VFXParticleCollider : NSObject <NSCopying, NSSecureCoding> {
    VFXCoreEntityHandle * _coreHandle;
}

+ (id)particleColliderWithEntityObject:(id)arg1;
+ (id)presentationParticleColliderWithCoreEntityHandleRef:(struct __CFXCoreEntityHandle { struct __CFXEntity { struct __CFRuntimeBase { unsigned long long x_1_2_1; _Atomic unsigned long long x_1_2_2; } x_1_1_1; void *x_1_1_2; struct __CFString {} *x_1_1_3; struct __CFString {} *x_1_1_4; struct __CFDictionary {} *x_1_1_5; struct __CFXWorld {} *x_1_1_6; long long x_1_1_7; } x1; struct __CFString {} *x2; struct __CFDictionary {} *x3; struct __CFArray {} *x4; bool x5; void *x6; }*)arg1;
+ (bool)supportsSecureCoding;

- (void*)__CFObject;
- (void)_syncObjCModel;
- (id)copy;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)coreEntityHandle;
- (struct __CFXCoreEntityHandle { struct __CFXEntity { struct __CFRuntimeBase { unsigned long long x_1_2_1; _Atomic unsigned long long x_1_2_2; } x_1_1_1; void *x_1_1_2; struct __CFString {} *x_1_1_3; struct __CFString {} *x_1_1_4; struct __CFDictionary {} *x_1_1_5; struct __CFXWorld {} *x_1_1_6; long long x_1_1_7; } x1; struct __CFString {} *x2; struct __CFDictionary {} *x3; struct __CFArray {} *x4; bool x5; void *x6; }*)coreEntityHandleRef;
- (void)dealloc;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithCoreEntityHandle:(id)arg1;
- (id)initWithEntityObject:(id)arg1;
- (bool)isPausedOrPausedByInheritance;
- (id)tag;
- (void)wasAddedToWorld:(id)arg1;
- (void)willBeRemovedFromWorld:(id)arg1;
- (id)world;
- (struct __CFXWorld { }*)worldRef;

@end