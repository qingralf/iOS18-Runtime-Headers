/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/ShaderGraph.framework/ShaderGraph
 */

@interface SGREMaterial : NSObject {
    void blending;
    void config;
    void customUniformsType;
    union { in /* Warning: Unrecognized filer type: 'u' using 'void*' */ void*x1; long x2; long x3; }  edgeDigest;
    void geometryModifierFunctionName;
    void graph;
    void hasBackgroundBlur;
    void hasConnectedLightSpillNodes;
    void hasGeometryModifierOffset;
    void hasGeometryModifierUniforms;
    void hasPremultipliedAlpha;
    void hasSurfaceShaderUniforms;
    void lightingModel;
    void matchUnlitColor;
    void operationalHash;
    void surfaceShaderFunctionName;
    void textureAssignments;
    void textures;
    void uniforms;
    void warnings;
}

@property (nonatomic, readonly) unsigned long long blending;
@property (nonatomic, readonly) SGTypeDescription *customUniformsType;
@property (nonatomic, readonly) NSString *geometryModifierFunctionName;
@property (nonatomic, readonly) bool hasBackgroundBlur;
@property (nonatomic, readonly) bool hasConnectedLightSpillNodes;
@property (nonatomic, readonly) bool hasGeometryModifierOffset;
@property (nonatomic, readonly) bool hasGeometryModifierUniforms;
@property (nonatomic, readonly) bool hasPremultipliedAlpha;
@property (nonatomic, readonly) bool hasSurfaceShaderUniforms;
@property (nonatomic, readonly) long long hash;
@property (nonatomic, readonly) unsigned long long lightingModel;
@property (nonatomic, readonly) bool matchUnlitColor;
@property (nonatomic, readonly) NSString *name;
@property (nonatomic, readonly) NSString *surfaceShaderFunctionName;
@property (nonatomic, copy) NSDictionary *textures;
@property (nonatomic, readonly) NSArray *uniforms;
@property (nonatomic, readonly) NSArray *warnings;

- (void).cxx_destruct;
- (unsigned long long)blending;
- (id)customUniformsType;
- (id)geometryModifierFunctionName;
- (bool)hasBackgroundBlur;
- (bool)hasConnectedLightSpillNodes;
- (bool)hasGeometryModifierOffset;
- (bool)hasGeometryModifierUniforms;
- (bool)hasPremultipliedAlpha;
- (bool)hasSurfaceShaderUniforms;
- (long long)hash;
- (id)init;
- (bool)isEqual:(id)arg1;
- (unsigned long long)lightingModel;
- (bool)matchUnlitColor;
- (id)name;
- (void)setTextures:(id)arg1;
- (id)surfaceShaderFunctionName;
- (id)textures;
- (id)uniforms;
- (id)warnings;

@end