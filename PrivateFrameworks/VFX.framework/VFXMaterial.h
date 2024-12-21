/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/VFX.framework/VFX
 */

@interface VFXMaterial : NSObject <NSCopying, NSSecureCoding, VFXAnimatable, VFXAsset, VFXBehaviorSupport, VFXShadable> {
    float  _alphaCutoff;
    VFXMaterialProperty * _ambientOcclusion;
    VFXOrderedDictionary * _animations;
    struct os_unfair_lock_s { 
        unsigned int _os_unfair_lock_opaque; 
    }  _animationsLock;
    bool  _avoidsOverLighting;
    VFXBehaviorGraph * _behaviorGraph;
    NSMutableDictionary * _bindings;
    long long  _blendMode;
    VFXMaterialProperty * _clearCoat;
    VFXMaterialProperty * _clearCoatNormal;
    VFXMaterialProperty * _clearCoatRoughness;
    long long  _colorBufferWriteMask;
    long long  _cullMode;
    VFXMaterialProperty * _diffuse;
    VFXMaterialProperty * _displacement;
    bool  _doubleSided;
    VFXMaterialProperty * _emission;
    unsigned long long  _fillMode;
    float  _fresnelExponent;
    float  _indexOfRefraction;
    bool  _isPresentationObject;
    bool  _litPerPixel;
    struct __CFXMaterial { } * _material;
    VFXMaterialProperty * _metalness;
    VFXMaterialProperty * _multiply;
    NSString * _name;
    VFXMaterialProperty * _normal;
    bool  _readsFromDepthBuffer;
    VFXMaterialProperty * _reflective;
    VFXMaterialProperty * _roughness;
    VFXMaterialProperty * _selfIllumination;
    float  _selfIlluminationOcclusion;
    VFXShadableHelper * _shadableHelper;
    unsigned long long  _shadingModel;
    float  _shininess;
    VFXMaterialProperty * _specular;
    VFXMaterialProperty * _subsurface;
    VFXMaterialProperty * _subsurfaceRadius;
    long long  _transparencyMode;
    VFXMaterialProperty * _transparent;
    NSMutableDictionary * _valuesForUndefinedKeys;
    struct os_unfair_lock_s { 
        unsigned int _os_unfair_lock_opaque; 
    }  _valuesForUndefinedKeysLock;
    VFXWorld * _world;
    unsigned int  _worldReferenceCounter;
    bool  _writesToDepthBuffer;
}

@property (nonatomic) float alphaCutoff;
@property (nonatomic, readonly) VFXMaterialProperty *ambientOcclusion;
@property (readonly) NSArray *animationKeys;
@property (nonatomic, retain) VFXBehaviorGraph *behaviorGraph;
@property (nonatomic) long long blendMode;
@property (nonatomic, readonly) NSArray *bridgedComponentNames;
@property (nonatomic, readonly) VFXMaterialProperty *clearCoat;
@property (nonatomic, readonly) VFXMaterialProperty *clearCoatNormal;
@property (nonatomic, readonly) VFXMaterialProperty *clearCoatRoughness;
@property (nonatomic) long long colorBufferWriteMask;
@property (nonatomic) long long cullMode;
@property (readonly, copy) NSString *debugDescription; /* unknown property attribute: ? */
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) VFXMaterialProperty *diffuse;
@property (nonatomic, readonly) VFXMaterialProperty *displacement;
@property (getter=isDoubleSided, nonatomic) bool doubleSided;
@property (nonatomic, readonly) VFXMaterialProperty *emission;
@property (nonatomic) unsigned long long fillMode;
@property (nonatomic) float fresnelExponent;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) NSString *identifier;
@property (getter=isLitPerPixel, nonatomic) bool litPerPixel;
@property (nonatomic, readonly) VFXMaterialProperty *metalness;
@property (nonatomic, retain) NSNumber *minimumLanguageVersion; /* unknown property attribute: ? */
@property (nonatomic, readonly) VFXMaterialProperty *multiply;
@property (nonatomic, retain) NSString *name;
@property (nonatomic, readonly) VFXMaterialProperty *normal;
@property (readonly) id presentationObject;
@property (nonatomic, retain) VFXProgram *program; /* unknown property attribute: ? */
@property (nonatomic) bool readsFromDepthBuffer;
@property (nonatomic, readonly) VFXMaterialProperty *reflective;
@property (nonatomic, readonly) VFXMaterialProperty *roughness;
@property (nonatomic, readonly) VFXMaterialProperty *selfIllumination;
@property (nonatomic, copy) NSDictionary *shaderModifiers; /* unknown property attribute: ? */
@property (nonatomic) unsigned long long shadingModel;
@property (nonatomic) float shininess;
@property (nonatomic, readonly) VFXMaterialProperty *specular;
@property (nonatomic, readonly) VFXMaterialProperty *subsurface;
@property (nonatomic, readonly) VFXMaterialProperty *subsurfaceRadius;
@property (readonly) Class superclass;
@property (nonatomic) long long transparencyMode;
@property (nonatomic, readonly) VFXMaterialProperty *transparent;
@property (nonatomic) bool writesToDepthBuffer;

+ (bool)accessInstanceVariablesDirectly;
+ (id)material;
+ (id)materialWithColor:(id)arg1;
+ (id)materialWithContents:(id)arg1;
+ (id)materialWithMDLMaterial:(id)arg1;
+ (id)materialWithMDLMaterial:(id)arg1 options:(id)arg2;
+ (id)materialWithMaterialRef:(struct __CFXMaterial { }*)arg1;
+ (id)nullMaterial;
+ (bool)supportsSecureCoding;

- (void*)__CFObject;
- (bool)__removeAnimation:(id)arg1 forKey:(id)arg2;
- (id)__shadableHelper;
- (void)_copyAnimationsFrom:(id)arg1;
- (void)_copyAttributes:(id)arg1;
- (void)_customDecodingOfVFXMaterial:(id)arg1;
- (void)_customEncodingOfVFXMaterial:(id)arg1;
- (id)_integrateModelKitComputedMaps:(id)arg1 withGeometry:(id)arg2 node:(id)arg3 texturePathProvider:(id /* block */)arg4 vertexAttributeNamed:(id)arg5 materialPropertyNamed:(id)arg6 filePath:(id)arg7;
- (Class)_materialPropertyClass;
- (void)_pauseAnimation:(bool)arg1 forKey:(id)arg2 pausedByNode:(bool)arg3;
- (id)_property:(id*)arg1;
- (void)_setAttributes:(id)arg1;
- (void)_setupMaterialProperty:(id*)arg1;
- (void)_setupShadableHelperIfNeeded;
- (void)_shadableSetValue:(id)arg1 forUndefinedKey:(id)arg2;
- (void)_syncEntityObjCModel;
- (void)_syncObjCAnimations;
- (void)_syncObjCModel;
- (id)_vfxAnimationForKey:(id)arg1;
- (id)_vfxBindings;
- (void)addAnimation:(id)arg1;
- (void)addAnimation:(id)arg1 forKey:(id)arg2;
- (void)addAnimationPlayer:(id)arg1 forKey:(id)arg2;
- (void)addWorldReference:(id)arg1;
- (float)alphaCutoff;
- (id)ambientOcclusion;
- (id)animationKeys;
- (struct __CFXAnimationManager { }*)animationManager;
- (id)animationPlayerForKey:(id)arg1;
- (bool)avoidsOverLighting;
- (id)behaviorGraph;
- (void)bindAnimatablePath:(id)arg1 toObject:(id)arg2 withKeyPath:(id)arg3 options:(id)arg4;
- (long long)blendMode;
- (id)bridgedComponentNames;
- (id)builtinProperties;
- (id)clearCoat;
- (id)clearCoatNormal;
- (id)clearCoatRoughness;
- (id)color;
- (long long)colorBufferWriteMask;
- (struct __CFXCommonProfile { struct __CFRuntimeBase { unsigned long long x_1_1_1; _Atomic unsigned long long x_1_1_2; } x1; struct __CFXMaterial {} *x2; int x3; struct __CFXMaterialProperty {} *x4; struct __CFXMaterialProperty {} *x5; struct __CFXMaterialProperty {} *x6; struct __CFXMaterialProperty {} *x7; struct __CFXMaterialProperty {} *x8; struct __CFXMaterialProperty {} *x9; struct __CFXMaterialProperty {} *x10; struct __CFXMaterialProperty {} *x11; struct __CFXMaterialProperty {} *x12; struct __CFXMaterialProperty {} *x13; struct __CFXMaterialProperty {} *x14; struct __CFXMaterialProperty {} *x15; struct __CFXMaterialProperty {} *x16; struct __CFXMaterialProperty {} *x17; struct __CFXMaterialProperty {} *x18; struct __CFXMaterialProperty {} *x19; struct __CFXMaterialProperty {} *x20; float x21; float x22; float x23; float x24; unsigned char x25; long long x26; bool x27; unsigned int x28 : 1; unsigned int x29 : 1; unsigned int x30 : 1; unsigned int x31 : 1; unsigned int x32 : 1; unsigned int x33 : 1; unsigned int x34 : 1; unsigned int x35 : 13; }*)commonProfile;
- (id)content;
- (id)contents;
- (id)copy;
- (id)copyAnimationChannelForKeyPath:(id)arg1 animation:(id)arg2;
- (id)copyAnimationChannelForKeyPath:(id)arg1 property:(id)arg2;
- (void)copyShaderModifiersAndLanguageVersionFrom:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (long long)cullMode;
- (id)customMaterialAttributeNames;
- (id)customMaterialAttributes;
- (id)customMaterialProperties;
- (id)customMaterialPropertyNames;
- (void)dealloc;
- (id)debugQuickLookData;
- (id)debugQuickLookObject;
- (id)debugQuickLookObjectWithAssetPathResolver:(id)arg1;
- (id)description;
- (void)didAttachToWorld:(id)arg1;
- (void)didDetachFromWorld:(id)arg1;
- (id)diffuse;
- (id)displacement;
- (bool)doubleSided;
- (id)emission;
- (void)encodeWithCoder:(id)arg1;
- (void)enumerateDependencies:(id /* block */)arg1;
- (unsigned long long)fillMode;
- (float)fresnelExponent;
- (id)identifier;
- (float)indexOfRefraction;
- (id)init;
- (id)initPresentationMaterialWithMaterialRef:(struct __CFXMaterial { }*)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithMaterialRef:(struct __CFXMaterial { }*)arg1;
- (bool)isDoubleSided;
- (bool)isLitPerPixel;
- (bool)isPausedOrPausedByInheritance;
- (bool)litPerPixel;
- (void)makeUniqueID;
- (struct __CFXMaterial { }*)materialRef;
- (struct __CFXMaterial { }*)materialRefCreateIfNeeded;
- (id)metalness;
- (id)minimumLanguageVersion;
- (id)multiply;
- (id)name;
- (id)normal;
- (id)presentationMaterial;
- (id)presentationObject;
- (id)program;
- (id)properties;
- (id)propertyWithName:(id)arg1;
- (bool)readsFromDepthBuffer;
- (id)reflective;
- (void)removeAllAnimations;
- (void)removeAllAnimationsWithBlendOutDuration:(float)arg1;
- (void)removeAllBindings;
- (void)removeAnimationForKey:(id)arg1;
- (void)removeAnimationForKey:(id)arg1 blendOutDuration:(float)arg2;
- (void)removeWorldReference:(id)arg1;
- (id)roughness;
- (id)selfIllumination;
- (float)selfIlluminationOcclusion;
- (void)setAlphaCutoff:(float)arg1;
- (void)setAvoidsOverLighting:(bool)arg1;
- (void)setBehaviorGraph:(id)arg1;
- (void)setBlendMode:(long long)arg1;
- (void)setColor:(id)arg1;
- (void)setColorBufferWriteMask:(long long)arg1;
- (void)setContent:(id)arg1;
- (void)setContents:(id)arg1;
- (void)setCullMode:(long long)arg1;
- (void)setDoubleSided:(bool)arg1;
- (void)setFillMode:(unsigned long long)arg1;
- (void)setFresnelExponent:(float)arg1;
- (void)setIdentifier:(id)arg1;
- (void)setIndexOfRefraction:(float)arg1;
- (void)setLitPerPixel:(bool)arg1;
- (void)setMinimumLanguageVersion:(id)arg1;
- (void)setName:(id)arg1;
- (void)setProgram:(id)arg1;
- (void)setReadsFromDepthBuffer:(bool)arg1;
- (void)setSelfIlluminationOcclusion:(float)arg1;
- (void)setShaderModifiers:(id)arg1;
- (void)setShadingModel:(unsigned long long)arg1;
- (void)setShininess:(float)arg1;
- (void)setTransparencyMode:(long long)arg1;
- (void)setValue:(id)arg1 forUndefinedKey:(id)arg2;
- (void)setWritesToDepthBuffer:(bool)arg1;
- (id)shaderModifiers;
- (id)shaderModifiersArgumentWithName:(id)arg1;
- (id)shaderModifiersArguments;
- (unsigned long long)shadingModel;
- (float)shininess;
- (id)specular;
- (id)subsurface;
- (id)subsurfaceRadius;
- (long long)transparencyMode;
- (id)transparent;
- (void)unbindAnimatablePath:(id)arg1;
- (id)valueForUndefinedKey:(id)arg1;
- (id)world;
- (struct __CFXWorld { }*)worldRef;
- (bool)writesToDepthBuffer;

@end