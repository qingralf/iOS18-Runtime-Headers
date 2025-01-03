/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/VFX.framework/VFX
 */

@interface VFX.VFXEntityObject : NSObject <NSCopying> {
    void _isTombstoned;
    void entity;
    void localEntityManager;
    void referencedEntityManager;
}

@property (nonatomic, readonly) NSArray *bindings;
@property (nonatomic, retain) struct CGImage { }*clientCGImage;
@property (nonatomic, retain) <MTLTexture> *clientTexture;
@property (nonatomic, readonly) NSString *description;
@property (nonatomic, readonly) NSArray *intersectionFunctions;
@property (nonatomic) bool isEnabled;
@property (nonatomic, readonly) bool isLocal;
@property (nonatomic, readonly) long long objectID;
@property (nonatomic) float opacity;
@property (nonatomic) struct { } orientation;
@property (nonatomic, readonly) <MTLBuffer> *particleDataBuffer;
@property (nonatomic, readonly) long long particleDataBufferOffset;
@property (nonatomic, readonly) <MTLBuffer> *particleHeaderBuffer;
@property (nonatomic, readonly) long long particleHeaderBufferOffset;
@property (nonatomic) void position;
@property (nonatomic, readonly) NSArray *presentationBindings;
@property (nonatomic) void scale;
@property (nonatomic, copy) NSString *tag;
@property (nonatomic, readonly) NSString *textureAbsolutePath;
@property (nonatomic) struct { /* Warning: Unrecognized filer type: ']' using 'void*' */ void*x1[4]; } transform;

- (void).cxx_destruct;
- (bool)_setValue:(id)arg1 forKeyPath:(id)arg2;
- (id)_valueForKeyPath:(id)arg1 world:(id)arg2;
- (void)addTo:(id)arg1;
- (id)bindings;
- (struct CGImage { }*)clientCGImage;
- (id)clientTexture;
- (id)copyWithZone:(void*)arg1;
- (void)dealloc;
- (id)description;
- (id)init;
- (id)init:(long long)arg1 privateEntityManager:(id)arg2;
- (id)init:(long long)arg1 sharedEntityManager:(id)arg2;
- (id)intersectionFunctions;
- (bool)isEnabled;
- (bool)isLocal;
- (void)killParticles;
- (long long)objectID;
- (float)opacity;
- (struct { })orientation;
- (id)particleDataBuffer;
- (long long)particleDataBufferOffset;
- (id)particleHeaderBuffer;
- (long long)particleHeaderBufferOffset;
- (void)position;
- (id)presentationBindings;
- (void)removeFromScene;
- (void)restart;
- (void)scale;
- (void)setBeamed;
- (void)setClientCGImage:(struct CGImage { }*)arg1;
- (void)setClientTexture:(id)arg1;
- (void)setIsEnabled:(bool)arg1;
- (void)setOpacity:(float)arg1;
- (void)setOrientation:(struct { })arg1;
- (void)setPosition;
- (void)setScale;
- (void)setTag:(id)arg1;
- (void)setTransform:(struct { /* Warning: Unrecognized filer type: ']' using 'void*' */ void*x1[4]; })arg1;
- (id)tag;
- (id)textureAbsolutePath;
- (struct { /* Warning: Unrecognized filer type: ']' using 'void*' */ void*x1[4]; })transform;
- (void)updateBridgedReferencesWithBridgeable:(id)arg1 objectByIdentifier:(id)arg2;

@end
