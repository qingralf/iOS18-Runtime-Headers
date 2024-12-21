/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/AvatarKit.framework/AvatarKit
 */

@interface AVTAvatar : NSObject <AVTPhysicsControllerDelegate, NSCopying, NSSecureCoding> {
    void _arOffset;
    float  _arScale;
    SCNNode * _avatarNode;
    CAAnimation * _bakedAnimation;
    SCNAnimationPlayer * _bakedAnimationPlayer_lazy;
    NSMutableArray * _didUpdateAtTimeCallbackItems;
    struct os_unfair_lock_s { 
        unsigned int _os_unfair_lock_opaque; 
    }  _didUpdateAtTimeLock;
    NSMutableArray * _dynamics;
    AVTEyeSkinningDescriptor * _eyeSkinningDescriptor;
    unsigned long long  _friendlyPoseMorphInfoCount;
    struct { 
        float morphWeight; 
        bool isEnabled; 
    }  _friendlyPoseMorphInfoProxy;
    struct { id x1; id x2; long long x3; bool x4; } * _friendlyPoseMorphInfos;
    SCNNode * _headNode;
    double  _lastRenderTime;
    SCNNode * _leftEye;
    struct { id x1; id x2; long long x3; bool x4; } * _morphInfoFromARKitBlendShapeIndex;
    NSMutableArray * _morpherDrivenMaterialDescriptors;
    SCNNode * _neckNode;
    bool  _optimizedForSnapshot;
    AVTPhysicsController * _physicsController;
    double  _physicsScaleFactor;
    SCNNode * _portalPresentationConfigurationNode;
    AVTPresentationConfiguration * _presentationConfiguration;
    AVTPupilReflectionCorrectionDescriptor * _pupilReflectionCorrectionDescriptor;
    SCNNode * _rightEye;
    SCNNode * _rootJointNode;
    SCNNode * _skeleton;
    NSDictionary * _specializationSettings;
    int  _transitionCount;
}

@property (nonatomic) bool arMode;
@property (readonly) SCNNode *avatarNode;
@property (readonly) SCNNode *cameraNode;
@property (readonly, copy) NSString *debugDescription; /* unknown property attribute: ? */
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) SCNNode *headNode;
@property (readonly) bool isTransitioning;
@property (readonly) SCNNode *lightingNode;
@property (readonly) SCNNode *neckNode;
@property (nonatomic) bool optimizeForSnapshot;
@property (readonly) SCNNode *rootJointNode;
@property (nonatomic, readonly) NSDictionary *specializationSettings;
@property (readonly) Class superclass;

+ (struct { })applyGazeCorrectionWithInputAngle:(void *)arg1 translation:(void *)arg2; // needs 2 arg types, found 1: struct { }
+ (id)avatarWithDataRepresentation:(id)arg1 error:(id*)arg2;
+ (id)avatarWithDataRepresentation:(id)arg1 usageIntent:(unsigned long long)arg2 error:(id*)arg3;
+ (id)avatarWithDescriptor:(id)arg1 usageIntent:(unsigned long long)arg2 error:(id*)arg3;
+ (bool)canLoadDataRepresentation:(id)arg1;
+ (void)preloadAvatar:(id)arg1;
+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (void)_addNodesMatchingStickerPattern:(id)arg1 inHierarchy:(id)arg2 toArray:(id)arg3 options:(unsigned long long)arg4;
- (void)_applyBlendShapes:(const float*)arg1 parameters:(const float*)arg2;
- (void)_applyBlendShapesWithTrackingData:(const struct { double x1; bool x2; float x3[51]; float x4[51]; float x5[1]; float x6[1]; }*)arg1;
- (void)_applyHeadPoseWithTrackingData:(const struct { double x1; bool x2; float x3[51]; float x4[51]; float x5[1]; float x6[1]; }*)arg1 gazeCorrection:(bool)arg2 pointOfView:(id)arg3;
- (void)_avatarNodeAndHeadNodeAreNowAvailable;
- (id)_cachePresentationConfigurationShaderModifiersForMaterial:(id)arg1 cacheKey:(id)arg2 shaderModifiersBuilder:(id /* block */)arg3;
- (id)_objectsInDescriptors:(id)arg1 andHierarchy:(id)arg2 passingTest:(id /* block */)arg3;
- (void)_preparePrePass:(bool)arg1;
- (void)_resetFaceToRandomPosition;
- (void)_restoreOriginalShaderModifiersOfMaterial:(id)arg1;
- (void)_transitionFromPose:(id)arg1 toPose:(id)arg2 bakedAnimationBlendFactor:(double)arg3 duration:(double)arg4 delay:(double)arg5 timingFunction:(id)arg6 timingAnimation:(id)arg7 completionHandler:(id /* block */)arg8;
- (void)_updateARModeShaderModifiersForMaterial:(id)arg1 withOnTopMask:(bool)arg2;
- (void)addCustomBehavioursInHierarchy:(id)arg1 forBodyParts:(unsigned long long)arg2;
- (void)addDerivedNodesMatchingStickerPattern:(id)arg1 toArray:(id)arg2 options:(unsigned long long)arg3;
- (void)addDidUpdateAfterAnimationsEvaluatedAtTimeCallbackForKey:(id)arg1 block:(id /* block */)arg2;
- (void)addDynamicsInHierarchy:(id)arg1 ignoringUpperNodes:(id)arg2;
- (void)addMorpherDrivenMaterialsInHierarchy:(id)arg1;
- (void)addMorphingSkinningControllersInHierarchy:(id)arg1;
- (void)animatePhysicsScaleFactor:(double)arg1 duration:(double)arg2;
- (void)applyBlendShapesWithTrackingInfo:(id)arg1;
- (void)applyHeadPoseWithTrackingInfo:(id)arg1;
- (void)applyHeadPoseWithTrackingInfo:(id)arg1 gazeCorrection:(bool)arg2;
- (void)applyHeadPoseWithTrackingInfo:(id)arg1 gazeCorrection:(bool)arg2 pointOfView:(id)arg3;
- (bool)arMode;
- (void)arOffset;
- (float)arScale;
- (void)avatarCommonInit;
- (id)avatarNode;
- (id)avatarNodeForPhysicsController:(id)arg1;
- (id)bakedAnimationCopy;
- (id)bakedAnimationPlayer;
- (long long)blendShapeIndexForARKitBlendShapeName:(id)arg1;
- (id)blendShapeNameForARKitBlendShapeIndex:(unsigned long long)arg1;
- (id)cameraNode;
- (void)configureForBestAnimationQuality;
- (id)copyWithUsageIntent:(unsigned long long)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)dataRepresentation;
- (void)dealloc;
- (id)debugPoseJSONRepresentation;
- (void)didAddToScene:(id)arg1;
- (void)disabledBlendshapesSpecializationSettingsDidChange;
- (id)effectiveMorphedNodeForTargetName:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (void)enumerateMorphInfoForCustomBlendShapeName:(id)arg1 usingBlock:(id /* block */)arg2;
- (void)evaluateDynamicsAtTime:(double)arg1;
- (id)headNode;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (bool)isTransitioning;
- (id)lightingNode;
- (struct { id x1; id x2; long long x3; bool x4; })morphInfoForARKitBlendShapeIndex:(unsigned long long)arg1;
- (id)neckNode;
- (id)newDescriptor;
- (id)nodesMatchingStickerPattern:(id)arg1 inHierarchy:(id)arg2 options:(unsigned long long)arg3 includingDerivedNodes:(bool)arg4;
- (float)opacity;
- (bool)optimizeForSnapshot;
- (void)pauseBakedAnimation;
- (double)physicsController:(id)arg1 downforceForNodeNamed:(id)arg2;
- (double)physicsDownforceForNodeNamed:(id)arg1;
- (void)physicsSpecializationSettingsDidChange;
- (id)physicsState;
- (id)pose;
- (void)removeCustomBehavioursInHierarchy:(id)arg1 forBodyParts:(unsigned long long)arg2;
- (void)removeDidUpdateAfterAnimationsEvaluatedAtTimeCallbackForKey:(id)arg1;
- (void)removeDynamicsInHierarchy:(id)arg1;
- (void)removeMorpherDrivenMaterialsInHierarchy:(id)arg1;
- (void)removeMorphingSkinningControllersInHierarchy:(id)arg1;
- (void)removePresentationConfigurationBehavioursInHierarchy:(id)arg1 forBodyParts:(unsigned long long)arg2;
- (void)renderer:(id)arg1 didApplyAnimationsAtTime:(double)arg2;
- (void)resetCustomBehaviours;
- (void)resetDynamics;
- (void)resetMorpherDrivenMaterials;
- (void)resetMorphingSkinningControllers;
- (void)resetPresentationConfigurationBehavioursInHierarchy:(id)arg1 forBodyParts:(unsigned long long)arg2;
- (void)resetToPhysicsState:(id)arg1 assumeRestStateIfNil:(bool)arg2;
- (void)resumeBakedAnimation;
- (id)rootJointNode;
- (void)setArMode:(bool)arg1;
- (void)setBakedAnimationReferenceTime:(double)arg1;
- (void)setOpacity:(float)arg1;
- (void)setOptimizeForSnapshot:(bool)arg1;
- (void)setPhysicsScaleFactor:(double)arg1;
- (void)setPose:(id)arg1;
- (void)setPresentationConfiguration:(id)arg1;
- (void)setupEyeOrientationAndReflections;
- (void)setupMorphInfo;
- (void)setupMorphInfoForChangeInSubHierarchy;
- (id)snapshotWithSize:(struct CGSize { double x1; double x2; })arg1 scale:(double)arg2 options:(id)arg3;
- (id)specializationSettings;
- (id)stickerPhysicsStateIdentifier;
- (void)stopTransitionAnimation;
- (void)stopTransitionAnimationWithBlendOutDuration:(double)arg1;
- (void)transitionFromPose:(id)arg1 duration:(double)arg2 delay:(double)arg3 completionHandler:(id /* block */)arg4;
- (void)transitionFromPose:(id)arg1 toPose:(id)arg2 duration:(double)arg3 delay:(double)arg4 completionHandler:(id /* block */)arg5;
- (void)transitionFromPose:(id)arg1 toPose:(id)arg2 duration:(double)arg3 delay:(double)arg4 timingAnimation:(id)arg5 completionHandler:(id /* block */)arg6;
- (void)transitionFromPose:(id)arg1 toPose:(id)arg2 duration:(double)arg3 delay:(double)arg4 timingFunction:(id)arg5 completionHandler:(id /* block */)arg6;
- (void)transitionToPose:(id)arg1 duration:(double)arg2 delay:(double)arg3 completionHandler:(id /* block */)arg4;
- (void)update;
- (void)updateAfterAnimationsEvaluatedAtTime:(double)arg1 renderer:(id)arg2;
- (void)updateBindings;
- (void)updateBindingsOfNode:(id)arg1;
- (void)updateEyeOrientationAndReflections;
- (void)updateMorpherDrivenMaterialsWithDeltaTime:(double)arg1;
- (void)updatePoseWithCVAFaceTrackingAnimationDictionary:(void *)arg1 neckPosition:(void *)arg2 neckOrientation:(void *)arg3 applySmoothing:(void *)arg4; // needs 4 arg types, found 3: id, struct { }, bool
- (void)updatePoseWithFaceTrackingData:(id)arg1 applySmoothing:(bool)arg2;
- (void)updatePoseWithPoseProvider:(id)arg1 applySmoothing:(bool)arg2;
- (id)upperNodesIgnoredByDynamics;
- (unsigned long long)usageIntent;
- (bool)usesSkinningForEyeOrientation;
- (void)willRemoveFromScene:(id)arg1;

@end