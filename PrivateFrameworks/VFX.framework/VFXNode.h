/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/VFX.framework/VFX
 */

@interface VFXNode : NSObject <NSCopying, NSSecureCoding, UIFocusItem, UIFocusItemContainer, VFXAnimatable, VFXBehaviorSupport, VFXBoundingBox, VFXTransactionCommandObject> {
    unsigned int  _affineUpToDate;
    VFXOrderedDictionary * _animations;
    struct os_unfair_lock_s { 
        unsigned int _os_unfair_lock_opaque; 
    }  _animationsLock;
    NSMutableDictionary * _bindings;
    unsigned int  _cameraLoaded;
    unsigned int  _castsShadow;
    unsigned long long  _categoryBitMask;
    NSMutableArray * _childNodes;
    VFXNodeComponent * _components;
    unsigned int  _depthPrePass;
    unsigned int  _editorLocked;
    /* Warning: Unrecognized filer type: '' using 'void*' */ void** _fixedBoundingBoxExtrema;
    unsigned int  _focusBehavior;
    unsigned int  _hasComponentBitmask;
    unsigned int  _hasPivot;
    unsigned int  _hidden;
    unsigned int  _isAuthoring;
    unsigned int  _isFocusableOrHasFocusableChild;
    unsigned int  _isGizmo;
    unsigned int  _isJoint;
    unsigned int  _isPresentationObject;
    unsigned int  _lightLoaded;
    unsigned int  _modelLoaded;
    unsigned int  _morpherLoaded;
    NSString * _name;
    struct __CFXNode { struct __CFXEntity { struct __CFRuntimeBase { unsigned long long x_1_2_1; _Atomic unsigned long long x_1_2_2; } x_1_1_1; void *x_1_1_2; struct __CFString {} *x_1_1_3; struct __CFString {} *x_1_1_4; struct __CFDictionary {} *x_1_1_5; struct __CFXWorld {} *x_1_1_6; long long x_1_1_7; } x1; struct __CFXNode {} *x2; struct __CFXNode {} *x3; struct __CFXNode {} *x4; int x5; struct { struct { /* Warning: Unrecognized filer type: ']' using 'void*' */ void*x_1_2_1[4]; } x_6_1_1; } x6; } * _node;
    float  _opacity;
    VFXNode * _parent;
    unsigned int  _paused;
    unsigned int  _pausedByInheritance;
    void _position;
    VFXNode * _presentationObject;
    long long  _renderingOrder;
    union { 
        /* Warning: Unrecognized filer type: '"' using 'void*' */ void*eulerAngles; 
    }  _rotation;
    unsigned int  _rotationRepresentation;
    void _scale;
    unsigned int  _skinnerLoaded;
    struct { 
        /* Warning: Unrecognized filer type: ']' using 'void*' */ void*columns[4]; 
    }  _transform;
    unsigned int  _transformUpToDate;
    NSMutableDictionary * _valueForKey;
    struct os_unfair_lock_s { 
        unsigned int _os_unfair_lock_opaque; 
    }  _valueForKeyLock;
    VFXWorld * _world;
}

@property (readonly) NSArray *animationKeys;
@property (nonatomic) long long authoringCameraType;
@property (nonatomic, retain) VFXBehaviorGraph *behaviorGraph;
@property (nonatomic) struct { /* Warning: Unrecognized filer type: ']' using 'void*' */ void*x1[2]; } boundingBox;
@property (nonatomic, readonly) NSArray *bridgedComponentNames;
@property (nonatomic, retain) VFXCamera *camera;
@property (nonatomic, readonly) bool canBecomeFocused;
@property (nonatomic) bool castsShadow;
@property (nonatomic) unsigned long long categoryBitMask;
@property (nonatomic, readonly) NSArray *childNodes;
@property (copy) NSArray *constraints;
@property (nonatomic, readonly) <UICoordinateSpace> *coordinateSpace;
@property (readonly, copy) NSString *debugDescription; /* unknown property attribute: ? */
@property (readonly, copy) NSString *description;
@property (nonatomic) void eulerAngles;
@property (nonatomic, copy) NSArray *filters;
@property (nonatomic) long long focusBehavior;
@property (nonatomic, readonly, copy) UIFocusEffect *focusEffect; /* unknown property attribute: ? */
@property (nonatomic, readonly, copy) NSString *focusGroupIdentifier; /* unknown property attribute: ? */
@property (nonatomic, readonly) long long focusGroupPriority; /* unknown property attribute: ? */
@property (nonatomic, readonly) <UIFocusItemContainer> *focusItemContainer;
@property (nonatomic, readonly) long long focusItemDeferralMode; /* unknown property attribute: ? */
@property (nonatomic, retain) VFXForceField *forceField;
@property (nonatomic, readonly) struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; } frame;
@property (readonly) unsigned long long hash;
@property (getter=isHidden, nonatomic) bool hidden;
@property (nonatomic, readonly) bool isTransparentFocusItem; /* unknown property attribute: ? */
@property (nonatomic, retain) VFXLight *light;
@property (nonatomic, retain) VFXModel *model;
@property (nonatomic, retain) VFXMorpher *morpher;
@property (nonatomic, retain) NSString *name;
@property (nonatomic) float opacity;
@property (nonatomic) struct { } orientation;
@property (nonatomic, readonly) <UIFocusEnvironment> *parentFocusEnvironment;
@property (nonatomic, readonly) VFXNode *parentNode;
@property (nonatomic, retain) VFXParticleEmitter *particleEmitter;
@property (getter=isPaused, nonatomic) bool paused;
@property (nonatomic, retain) VFXPhysicsBody *physicsBody;
@property (nonatomic) struct { /* Warning: Unrecognized filer type: ']' using 'void*' */ void*x1[4]; } pivot;
@property (nonatomic) void position;
@property (nonatomic, readonly, copy) NSArray *preferredFocusEnvironments;
@property (nonatomic, readonly) UIView *preferredFocusedView; /* unknown property attribute: ? */
@property (nonatomic, readonly) VFXNode *presentationNode;
@property (readonly) id presentationObject;
@property (nonatomic) long long renderingOrder;
@property (nonatomic) void rotation;
@property (nonatomic) void scale;
@property (nonatomic, retain) VFXSkinner *skinner;
@property (readonly) Class superclass;
@property (nonatomic) struct { /* Warning: Unrecognized filer type: ']' using 'void*' */ void*x1[4]; } transform;
@property (nonatomic) struct { } worldOrientation;
@property (nonatomic) void worldPosition;
@property (nonatomic) struct { /* Warning: Unrecognized filer type: ']' using 'void*' */ void*x1[4]; } worldTransform;

+ (id)_cloneSharable:(id)arg1 remap:(struct __CFDictionary { }*)arg2;
+ (id)_dumpNodeTree:(id)arg1 tab:(id)arg2;
+ (id)keyPathsForValuesAffectingEulerAngles;
+ (id)keyPathsForValuesAffectingOrientation;
+ (id)keyPathsForValuesAffectingPosition;
+ (id)keyPathsForValuesAffectingRotation;
+ (id)keyPathsForValuesAffectingScale;
+ (id)keyPathsForValuesAffectingTransform;
+ (void)localFront;
+ (id)localFrontValue;
+ (void)localRight;
+ (id)localRightValue;
+ (void)localUp;
+ (id)localUpValue;
+ (id)node;
+ (id)nodeWithMDLAsset:(id)arg1;
+ (id)nodeWithMDLObject:(id)arg1;
+ (id)nodeWithMDLObject:(id)arg1 masterObjects:(id)arg2 worldNodes:(id)arg3 skinnedMeshes:(id)arg4 skelNodesMap:(void*)arg5 asset:(id)arg6 options:(id)arg7 context:(id)arg8;
+ (id)nodeWithMDLObject:(id)arg1 options:(id)arg2 context:(id)arg3;
+ (id)nodeWithModel:(id)arg1;
+ (id)nodeWithNodeRef:(struct __CFXNode { struct __CFXEntity { struct __CFRuntimeBase { unsigned long long x_1_2_1; _Atomic unsigned long long x_1_2_2; } x_1_1_1; void *x_1_1_2; struct __CFString {} *x_1_1_3; struct __CFString {} *x_1_1_4; struct __CFDictionary {} *x_1_1_5; struct __CFXWorld {} *x_1_1_6; long long x_1_1_7; } x1; struct __CFXNode {} *x2; struct __CFXNode {} *x3; struct __CFXNode {} *x4; int x5; struct { struct { /* Warning: Unrecognized filer type: ']' using 'void*' */ void*x_1_2_1[4]; } x_6_1_1; } x6; }*)arg1;
+ (id)nodeWithSceneKitNode:(id)arg1 options:(id)arg2;
+ (bool)supportsSecureCoding;

- (void*)__CFObject;
- (id)__camera;
- (id)__light;
- (id)__model;
- (id)__morpher;
- (bool)__removeAnimation:(id)arg1 forKey:(id)arg2;
- (void)__removeObjectFromChildNodesAtIndex:(unsigned long long)arg1;
- (id)__skinner;
- (void)_addSkinnerWithMDLMesh:(id)arg1 worldNodes:(id)arg2;
- (void)_appendFocusableNodesInRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1 ofView:(id)arg2 toFocusItems:(id)arg3;
- (void)_assignComponent:(id)arg1 toContainerWithType:(long long)arg2;
- (id)_audioPlayers;
- (void)_bakeNodes:(id)arg1 folderPath:(id)arg2 inVertex:(bool)arg3 bakeAO:(bool)arg4 quality:(float)arg5 attenuation:(float)arg6 geomSetter:(id /* block */)arg7 terminateSetter:(id /* block */)arg8;
- (bool)_childNodesPassingTest:(id /* block */)arg1 recursively:(bool)arg2 output:(id)arg3;
- (void)_childNodesWithAttribute:(Class)arg1 output:(id)arg2 recursively:(bool)arg3;
- (id)_cloneWithOption:(unsigned long long)arg1 remapTable:(struct __CFDictionary { }*)arg2;
- (void)_copyAnimationsFrom:(id)arg1;
- (id)_copyRecursively:(unsigned long long)arg1 remapOut:(struct __CFDictionary { }*)arg2;
- (void)_copyWithOptions:(unsigned long long)arg1 to:(id)arg2 remap:(struct __CFDictionary { }*)arg3;
- (void)_customDecodingOfVFXNode:(id)arg1;
- (void)_customEncodingOfVFXNode:(id)arg1 usePresentationObject:(bool)arg2;
- (id)_deepCloneWithRemapTableOut:(struct __CFDictionary { }*)arg1;
- (void)_didDecodeVFXNode:(id)arg1;
- (void)_dump:(id)arg1;
- (id)_dumpTree;
- (void)_encodeNodePropertiesWithCoder:(id)arg1;
- (bool)_enumerateChildNodesUsingBlock:(id /* block */)arg1;
- (void)_euler;
- (id)_findComponentWithType:(long long)arg1;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })_focusFrameInView:(id)arg1;
- (void)_initChildNodesArray;
- (bool)_isAReference;
- (bool)_isEffectivelyHidden;
- (bool)_isEligibleForFocusInteraction;
- (void)_pauseAnimation:(bool)arg1 forKey:(id)arg2 pausedByNode:(bool)arg3;
- (struct { })_quaternion;
- (void)_reSyncModelTree;
- (void)_registerAsObserver;
- (void)_removeComponentWithType:(long long)arg1;
- (void)_removeFromParentNodeWithoutRemovingWorldReference;
- (void)_setAttributes:(id)arg1;
- (void)_setComponent:(id)arg1 withType:(long long)arg2;
- (void)_setHasFocusableChild;
- (void)_setParent:(id)arg1;
- (void)_setPausedOrPausedByInheritance:(bool)arg1;
- (void)_setPosition;
- (void)_setQuaternion:(struct { })arg1;
- (void)_setScale;
- (id)_subdividedCopyWithSubdivisionLevel:(long long)arg1;
- (void)_syncEntityObjCModel;
- (void)_syncObjCAnimations;
- (void)_syncObjCModel;
- (void)_updateAffine;
- (void)_updateFocusableCache;
- (void)_updateTransform;
- (id)_valueForSimdVectorKeyPath:(id)arg1;
- (id)_vfxAnimationForKey:(id)arg1;
- (id)_vfxBindings;
- (void)addAnimation:(id)arg1;
- (void)addAnimation:(id)arg1 forKey:(id)arg2;
- (void)addAnimationPlayer:(id)arg1 forKey:(id)arg2;
- (void)addAudioPlayer:(id)arg1;
- (void)addChildNode:(id)arg1;
- (id)animationKeys;
- (struct __CFXAnimationManager { }*)animationManager;
- (id)animationPlayerForKey:(id)arg1;
- (id)audioPlayers;
- (long long)authoringCameraType;
- (id)authoringTargetNode;
- (id)behaviorGraph;
- (void)bindAnimatablePath:(id)arg1 toObject:(id)arg2 withKeyPath:(id)arg3 options:(id)arg4;
- (struct { /* Warning: Unrecognized filer type: ']' using 'void*' */ void*x1[2]; })boundingBox;
- (id)bridgedComponentNames;
- (id)camera;
- (bool)canAddChildNode:(id)arg1;
- (bool)canBecomeFocused;
- (bool)castsShadow;
- (unsigned long long)categoryBitMask;
- (id)childNodeWithName:(id)arg1;
- (id)childNodeWithName:(id)arg1 recursively:(bool)arg2;
- (id)childNodes;
- (id)childNodesPassingTest:(id /* block */)arg1;
- (id)childNodesPassingTest:(id /* block */)arg1 recursively:(bool)arg2;
- (id)childNodesWithAttribute:(Class)arg1 recursively:(bool)arg2;
- (id)clone;
- (id)cloneWithOption:(unsigned long long)arg1;
- (id)constraints;
- (void)convertPosition:(void *)arg1 fromNode:(void *)arg2; // needs 2 arg types, found 1: id
- (void)convertPosition:(void *)arg1 toNode:(void *)arg2; // needs 2 arg types, found 1: id
- (id)convertPositionValue:(id)arg1 fromNode:(id)arg2;
- (id)convertPositionValue:(id)arg1 toNode:(id)arg2;
- (struct { /* Warning: Unrecognized filer type: ']' using 'void*' */ void*x1[4]; })convertTransform:(struct { /* Warning: Unrecognized filer type: ']' using 'void*' */ void*x1[4]; })arg1 fromNode:(id)arg2;
- (struct { /* Warning: Unrecognized filer type: ']' using 'void*' */ void*x1[4]; })convertTransform:(struct { /* Warning: Unrecognized filer type: ']' using 'void*' */ void*x1[4]; })arg1 toNode:(id)arg2;
- (id)convertTransformValue:(id)arg1 fromNode:(id)arg2;
- (id)convertTransformValue:(id)arg1 toNode:(id)arg2;
- (void)convertVector:(void *)arg1 fromNode:(void *)arg2; // needs 2 arg types, found 1: id
- (void)convertVector:(void *)arg1 toNode:(void *)arg2; // needs 2 arg types, found 1: id
- (id)convertVectorValue:(id)arg1 fromNode:(id)arg2;
- (id)convertVectorValue:(id)arg1 toNode:(id)arg2;
- (id)coordinateSpace;
- (id)copy;
- (id)copyAnimationChannelForKeyPath:(id)arg1 animation:(id)arg2;
- (id)copyWithOptions:(unsigned long long)arg1;
- (void)copyWithOptions:(unsigned long long)arg1 to:(id)arg2;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (unsigned long long)countOfAudioPlayers;
- (unsigned long long)countOfChildNodes;
- (void)dealloc;
- (id)debugQuickLookData;
- (id)debugQuickLookObject;
- (id)debugQuickLookObjectWithAssetPathResolver:(id)arg1;
- (id)deepClone;
- (id)deformers;
- (id)description;
- (void)didUpdateFocusInContext:(id)arg1 withAnimationCoordinator:(id)arg2;
- (void)dump;
- (bool)editorLocked;
- (void)encodeWithCoder:(id)arg1;
- (void)enumerateChildNodesUsingBlock:(id /* block */)arg1;
- (void)enumerateHierarchyUsingBlock:(id /* block */)arg1;
- (void)eulerAngles;
- (id)eulerAnglesValue;
- (id)filters;
- (id)flattenedClone;
- (id)flattenedCopy;
- (long long)focusBehavior;
- (id)focusItemContainer;
- (id)focusItemsInRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (id)forceField;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })frame;
- (id)getBoundingBox;
- (bool)getBoundingBoxMin:(/* Warning: Unrecognized filer type: '1' using 'void*' */ void**)arg1 max:(/* Warning: Unrecognized filer type: '2' using 'void*' */ void**)arg2;
- (id)getBoundingSphere;
- (bool)getBoundingSphereCenter:(/* Warning: Unrecognized filer type: '1' using 'void*' */ void**)arg1 radius:(float*)arg2;
- (bool)getFrustum:(void *)arg1 withViewport:(void *)arg2; // needs 2 arg types, found 1: struct { struct { } x1[6]; }*
- (id)graphController;
- (void)graphController:(id)arg1;
- (bool)hasAncestor:(id)arg1;
- (bool)hasPhysicBody;
- (bool)hidden;
- (id)hitTestWithSegmentFrom:(id)arg1 toPoint:(id)arg2 options:(id)arg3;
- (id)hitTestWithSegmentFromPoint:(void *)arg1 toPoint:(void *)arg2 options:(void *)arg3; // needs 3 arg types, found 1: id
- (id)identifier;
- (unsigned long long)indexOfChildNode:(id)arg1;
- (id)init;
- (id)initPresentationNodeWithNodeRef:(struct __CFXNode { struct __CFXEntity { struct __CFRuntimeBase { unsigned long long x_1_2_1; _Atomic unsigned long long x_1_2_2; } x_1_1_1; void *x_1_1_2; struct __CFString {} *x_1_1_3; struct __CFString {} *x_1_1_4; struct __CFDictionary {} *x_1_1_5; struct __CFXWorld {} *x_1_1_6; long long x_1_1_7; } x1; struct __CFXNode {} *x2; struct __CFXNode {} *x3; struct __CFXNode {} *x4; int x5; struct { struct { /* Warning: Unrecognized filer type: ']' using 'void*' */ void*x_1_2_1[4]; } x_6_1_1; } x6; }*)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithNodeRef:(struct __CFXNode { struct __CFXEntity { struct __CFRuntimeBase { unsigned long long x_1_2_1; _Atomic unsigned long long x_1_2_2; } x_1_1_1; void *x_1_1_2; struct __CFString {} *x_1_1_3; struct __CFString {} *x_1_1_4; struct __CFDictionary {} *x_1_1_5; struct __CFXWorld {} *x_1_1_6; long long x_1_1_7; } x1; struct __CFXNode {} *x2; struct __CFXNode {} *x3; struct __CFXNode {} *x4; int x5; struct { struct { /* Warning: Unrecognized filer type: ']' using 'void*' */ void*x_1_2_1[4]; } x_6_1_1; } x6; }*)arg1;
- (void)insertChildNode:(id)arg1 atIndex:(unsigned long long)arg2;
- (void)insertObject:(id)arg1 inAudioPlayersAtIndex:(unsigned long long)arg2;
- (void)insertObject:(id)arg1 inChildNodesAtIndex:(unsigned long long)arg2;
- (bool)isAuthoring;
- (bool)isFocusInteractionEnabled;
- (bool)isGizmo;
- (bool)isHidden;
- (bool)isHiddenOrHasHiddenAncestor;
- (bool)isHittable;
- (bool)isJoint;
- (bool)isPaused;
- (bool)isPausedOrPausedByInheritance;
- (bool)isPresentationObject;
- (id)jsChildNodesWithAttribute:(id)arg1;
- (id)light;
- (void)localRotateBy:(struct { })arg1;
- (void)localRotateByValue:(id)arg1;
- (void)localTranslateBy;
- (void)localTranslateByValue:(id)arg1;
- (void)lookAt;
- (void)lookAtuplocalFront;
- (void)lookAtLocation:(id)arg1;
- (void)lookAtLocation:(id)arg1 up:(id)arg2 localFront:(id)arg3;
- (void)makeUniqueID;
- (id)model;
- (void)modelChanged;
- (id)morpher;
- (id)mutableChildNodes;
- (id)name;
- (struct __CFXNode { struct __CFXEntity { struct __CFRuntimeBase { unsigned long long x_1_2_1; _Atomic unsigned long long x_1_2_2; } x_1_1_1; void *x_1_1_2; struct __CFString {} *x_1_1_3; struct __CFString {} *x_1_1_4; struct __CFDictionary {} *x_1_1_5; struct __CFXWorld {} *x_1_1_6; long long x_1_1_7; } x1; struct __CFXNode {} *x2; struct __CFXNode {} *x3; struct __CFXNode {} *x4; int x5; struct { struct { /* Warning: Unrecognized filer type: ']' using 'void*' */ void*x_1_2_1[4]; } x_6_1_1; } x6; }*)nodeRef;
- (id)objectInAudioPlayersAtIndex:(unsigned long long)arg1;
- (id)objectInChildNodesAtIndex:(unsigned long long)arg1;
- (id)objectInChildNodesWithAttribute:(id)arg1 firstOnly:(bool)arg2;
- (id)objectInChildNodesWithName:(id)arg1;
- (float)opacity;
- (struct { })orientation;
- (id)orientationValue;
- (id)parentFocusEnvironment;
- (id)parentNode;
- (bool)parseSpecialKey:(id)arg1 withPath:(id)arg2 intoDestination:(id*)arg3;
- (id)particleCollider;
- (id)particleEmitter;
- (id)physicsBody;
- (struct { /* Warning: Unrecognized filer type: ']' using 'void*' */ void*x1[4]; })pivot;
- (id)pivotValue;
- (void)position;
- (id)positionValue;
- (id)prefab;
- (id)preferredFocusEnvironments;
- (id)presentationNode;
- (id)presentationObject;
- (struct { })quaternion;
- (bool)rawFloat3ForKey:(id)arg1 value:(/* Warning: Unrecognized filer type: '2' using 'void*' */ void**)arg2;
- (bool)rawFloat4ForKey:(id)arg1 value:(/* Warning: Unrecognized filer type: '2' using 'void*' */ void**)arg2;
- (void)removeAllAnimations;
- (void)removeAllAnimationsWithBlendOutDuration:(float)arg1;
- (void)removeAllAudioPlayers;
- (void)removeAllBindings;
- (void)removeAllChilds;
- (void)removeAnimationForKey:(id)arg1;
- (void)removeAnimationForKey:(id)arg1 blendOutDuration:(float)arg2;
- (void)removeAudioPlayer:(id)arg1;
- (void)removeFromParentNode;
- (void)removeObjectFromAudioPlayersAtIndex:(unsigned long long)arg1;
- (void)removeObjectFromChildNodesAtIndex:(unsigned long long)arg1;
- (long long)renderingOrder;
- (void)replaceChildNode:(id)arg1 with:(id)arg2;
- (void)replaceObjectInAudioPlayerAtIndex:(unsigned long long)arg1 withObject:(id)arg2;
- (void)replaceObjectInChildNodesAtIndex:(unsigned long long)arg1 withObject:(id)arg2;
- (void)rotateBy:(id)arg1 around:(id)arg2;
- (void)rotateBy:(void *)arg1 aroundTarget:(void *)arg2; // needs 2 arg types, found 1: struct { }
- (void)rotation;
- (long long)rotationRepresentation;
- (id)rotationValue;
- (void)scale;
- (id)scaleValue;
- (void)setAuthoringCameraType:(long long)arg1;
- (void)setAuthoringTargetNode:(id)arg1;
- (void)setBehaviorGraph:(id)arg1;
- (void)setBoundingBox:(struct { /* Warning: Unrecognized filer type: ']' using 'void*' */ void*x1[2]; })arg1;
- (void)setBoundingBoxMin:(/* Warning: Unrecognized filer type: '1' using 'void*' */ void**)arg1 max:(/* Warning: Unrecognized filer type: '2' using 'void*' */ void**)arg2;
- (void)setCamera:(id)arg1;
- (void)setCastsShadow:(bool)arg1;
- (void)setCategoryBitMask:(unsigned long long)arg1;
- (void)setConstraints:(id)arg1;
- (void)setDeformers:(id)arg1;
- (void)setEditorLocked:(bool)arg1;
- (void)setEulerAngles;
- (void)setEulerAnglesValue:(id)arg1;
- (void)setFilters:(id)arg1;
- (void)setFocusBehavior:(long long)arg1;
- (void)setForceField:(id)arg1;
- (void)setGizmo:(bool)arg1;
- (void)setHidden:(bool)arg1;
- (void)setHittable:(bool)arg1;
- (void)setIdentifier:(id)arg1;
- (void)setIsAuthoring:(bool)arg1;
- (void)setIsJoint:(bool)arg1;
- (void)setLight:(id)arg1;
- (void)setModel:(id)arg1;
- (void)setMorpher:(id)arg1;
- (void)setName:(id)arg1;
- (void)setNeedsFocusUpdate;
- (void)setOpacity:(float)arg1;
- (void)setOrientation:(struct { })arg1;
- (void)setOrientationValue:(id)arg1;
- (void)setParticleCollider:(id)arg1;
- (void)setParticleEmitter:(id)arg1;
- (void)setPaused:(bool)arg1;
- (void)setPhysicsBody:(id)arg1;
- (void)setPivot:(struct { /* Warning: Unrecognized filer type: ']' using 'void*' */ void*x1[4]; })arg1;
- (void)setPivotValue:(id)arg1;
- (void)setPosition;
- (void)setPositionValue:(id)arg1;
- (void)setPrefab:(id)arg1;
- (void)setQuaternion:(struct { })arg1;
- (void)setRenderingOrder:(long long)arg1;
- (void)setRotation;
- (void)setRotationValue:(id)arg1;
- (void)setScale;
- (void)setScaleValue:(id)arg1;
- (void)setSkinner:(id)arg1;
- (void)setTransform:(struct { /* Warning: Unrecognized filer type: ']' using 'void*' */ void*x1[4]; })arg1;
- (void)setUsesDepthPrePass:(bool)arg1;
- (void)setValue:(id)arg1 forKey:(id)arg2;
- (void)setValue:(id)arg1 forKeyPath:(id)arg2;
- (void)setValue:(id)arg1 forUndefinedKey:(id)arg2;
- (void)setWorld:(id)arg1;
- (void)setWorldOrientation:(struct { })arg1;
- (void)setWorldOrientationValue:(id)arg1;
- (void)setWorldPosition;
- (void)setWorldPositionValue:(id)arg1;
- (void)setWorldTransform:(struct { /* Warning: Unrecognized filer type: ']' using 'void*' */ void*x1[4]; })arg1;
- (void)setWorldTransformValue:(id)arg1;
- (bool)shouldUpdateFocusInContext:(id)arg1;
- (id)skinner;
- (struct { /* Warning: Unrecognized filer type: ']' using 'void*' */ void*x1[4]; })transform;
- (void)unbindAnimatablePath:(id)arg1;
- (void)updateFocusIfNeeded;
- (bool)usesDepthPrePass;
- (id)valueForKey:(id)arg1;
- (id)valueForKeyPath:(id)arg1;
- (id)valueForUndefinedKey:(id)arg1;
- (id)world;
- (void)worldFront;
- (id)worldFrontValue;
- (struct { })worldOrientation;
- (id)worldOrientationValue;
- (void)worldPosition;
- (id)worldPositionValue;
- (struct __CFXWorld { }*)worldRef;
- (void)worldRight;
- (id)worldRightValue;
- (struct { /* Warning: Unrecognized filer type: ']' using 'void*' */ void*x1[4]; })worldTransform;
- (id)worldTransformValue;
- (void)worldUp;
- (id)worldUpValue;

@end
