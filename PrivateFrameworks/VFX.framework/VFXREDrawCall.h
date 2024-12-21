/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/VFX.framework/VFX
 */

@interface VFXREDrawCall : NSObject {
    void _drawsForBlur;
    void _isAdditive;
    void _isDepthOnly;
    void _materialType;
    void _needsLinearDepth;
    void _writesColor;
    void _writesSeparateDepth;
    void aabb;
    void drawCall;
    void emitterIdentifier;
    void handler;
    void reProvidedBuffers;
    void reProvidedTextures;
    void renderPassIdentifier;
    void renderPassName;
}

@property (nonatomic, readonly) id /* block */ customHandler;
@property (nonatomic, readonly) bool drawsForBlur;
@property (nonatomic, copy) NSString *emitterIdentifier;
@property (nonatomic, readonly) bool hasCustomHandler;
@property (nonatomic, readonly) bool isAdditive;
@property (nonatomic, readonly) bool isDepthOnly;
@property (nonatomic, readonly) int materialType;
@property (nonatomic, readonly) bool needsLinearDepth;
@property (nonatomic) unsigned char renderPassIdentifier;
@property (nonatomic, copy) NSString *renderPassName;
@property (nonatomic, readonly) int renderingOrder;
@property (nonatomic, readonly) bool writesColor;
@property (nonatomic, readonly) bool writesSeparateDepth;

- (void).cxx_destruct;
- (void)boundingBoxMax;
- (void)boundingBoxMin;
- (id /* block */)customHandler;
- (bool)drawsForBlur;
- (id)emitterIdentifier;
- (void)enumerateBuffers:(id /* block */)arg1;
- (void)enumerateTextures:(id /* block */)arg1;
- (bool)hasCustomHandler;
- (bool)hasLightingEnabled;
- (id)indexBuffer;
- (long long)indexBufferOffset;
- (long long)indexBufferSize;
- (long long)indexCount;
- (unsigned char)indexType;
- (id)init;
- (long long)instanceCount;
- (bool)isAdditive;
- (bool)isDepthOnly;
- (unsigned long long)materialIdentifier;
- (int)materialType;
- (bool)needsLinearDepth;
- (unsigned long long)primitiveType;
- (unsigned char)renderPassIdentifier;
- (id)renderPassName;
- (int)renderingOrder;
- (void)setEmitterIdentifier:(id)arg1;
- (void)setRenderPassIdentifier:(unsigned char)arg1;
- (void)setRenderPassName:(id)arg1;
- (long long)vertexCount;
- (unsigned long long)winding;
- (void)withDefaultIBLConstantBuffer:(void*)arg1 :(id /* block */)arg2;
- (void)withDefaultLightConstantBuffer:(void*)arg1 :(id /* block */)arg2;
- (bool)writesColor;
- (bool)writesSeparateDepth;

@end