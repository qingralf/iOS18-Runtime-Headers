/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/VFX.framework/VFX
 */

@interface VFXPhysicsWorld : NSObject <NSSecureCoding, VFXTransactionCommandObject> {
    void * _btWorld;
    VFXPhysicsContact * _contact;
    <VFXPhysicsContactDelegate> * _contactDelegate;
    struct btCFXDebugDraw { int (**x1)(); int x2; float x3; void *x4; } * _debugDrawer;
    double  _elapsedTime;
    bool  _firstSimulationDone;
    struct btOverlappingPairCallback { int (**x1)(); } * _ghostPairCallback;
    void _gravity;
    struct os_unfair_lock_s { 
        unsigned int _os_unfair_lock_opaque; 
    }  _lock;
    NSMutableArray * _physicsJoints;
    NSMutableSet * _registeredBodies;
    float  _scale;
    float  _speed;
    NSArray * _tempLoadedJoints;
    double  _timeStep;
    struct btVehicleRaycaster { int (**x1)(); } * _vehicleRayCaster;
    VFXWorld * _vfxWorld;
}

@property <VFXPhysicsContactDelegate> *contactDelegate;
@property (readonly, copy) NSString *debugDescription; /* unknown property attribute: ? */
@property (readonly, copy) NSString *description;
@property (nonatomic) void gravity;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) NSArray *physicsJoints;
@property (nonatomic) float speed;
@property (readonly) Class superclass;
@property (nonatomic) double timeStep;

+ (bool)supportsSecureCoding;

- (void)_allowGhostObjects;
- (void)_createDynamicWorldIfNeeded;
- (struct btVehicleRaycaster { int (**x1)(); }*)_defaultVehicleRayCaster;
- (void)_drawDebugInAuthoringEnvironment:(void*)arg1;
- (void*)_handle;
- (void*)_handleIfAny;
- (bool)_isDefault;
- (bool)_needsRedraw;
- (id)_physicsContact;
- (void)_postCommandWithBlock:(id /* block */)arg1;
- (void)_preTick:(double)arg1;
- (id)_rayTestWithSegmentFromPoint:(struct btVector3 { union { float x_1_1_1[4]; } x1; })arg1 toPoint:(struct btVector3 { union { float x_1_1_1[4]; } x1; })arg2 options:(id)arg3;
- (void)_registerPhysicsJoints;
- (void)_reset;
- (void)_step:(double)arg1;
- (void)activatePhysicsJoint:(id)arg1;
- (void)addPhysicsBody:(id)arg1 nodeRef:(struct __CFXNode { }*)arg2 colGroup:(unsigned long long)arg3 colMask:(unsigned long long)arg4 colTest:(unsigned long long)arg5;
- (void)addPhysicsJoint:(id)arg1;
- (void)commonInit;
- (id)contactDelegate;
- (id)contactTestBetweenBody:(id)arg1 andBody:(id)arg2 options:(id)arg3;
- (id)contactTestWithBody:(id)arg1 options:(id)arg2;
- (id)convexSweepTestWithShape:(id)arg1 fromTransform:(struct { /* Warning: Unrecognized filer type: ']' using 'void*' */ void*x1[4]; })arg2 toTransform:(struct { /* Warning: Unrecognized filer type: ']' using 'void*' */ void*x1[4]; })arg3 options:(id)arg4;
- (void)deactivatePhysicsJoint:(id)arg1;
- (void)dealloc;
- (void)encodeWithCoder:(id)arg1;
- (void)enumerateBodiesUsingBlock:(id /* block */)arg1;
- (void)gravity;
- (id)gravityValue;
- (id)initWithCoder:(id)arg1;
- (id)initWithWorld:(id)arg1;
- (id)objectInAllJointsAtIndex:(unsigned long long)arg1;
- (bool)parseSpecialKey:(id)arg1 withPath:(id)arg2 intoDestination:(id*)arg3;
- (id)physicsJoints;
- (id)rayTestWithSegmentFrom:(id)arg1 to:(id)arg2 options:(id)arg3;
- (id)rayTestWithSegmentFromPoint:(void *)arg1 toPoint:(void *)arg2 options:(void *)arg3; // needs 3 arg types, found 1: id
- (void)removePhysicsBody:(id)arg1 handle:(void*)arg2;
- (void)removePhysicsJoint:(id)arg1;
- (float)scale;
- (void)setContactDelegate:(id)arg1;
- (void)setGravity;
- (void)setGravityValue:(id)arg1;
- (void)setScale:(float)arg1;
- (void)setSpeed:(float)arg1;
- (void)setTimeStep:(double)arg1;
- (void)setValue:(id)arg1 forUndefinedKey:(id)arg2;
- (void)setWorld:(id)arg1;
- (float)speed;
- (double)timeStep;
- (void)updateCollisionPairs;
- (id)valueForUndefinedKey:(id)arg1;
- (void)wakeUpAllBodies;
- (id)world;
- (void)worldWillDie;

@end