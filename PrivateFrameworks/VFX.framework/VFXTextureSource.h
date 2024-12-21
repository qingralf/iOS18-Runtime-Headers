/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/VFX.framework/VFX
 */

@interface VFXTextureSource : NSObject {
    id  _mtlTextureCache;
    void _size;
}

- (id)MTLTextureCache;
- (void)dealloc;
- (id)metalTextureWithEngineContext:(struct __CFXEngineContext { }*)arg1 textureSampler:(struct __CFXTextureSampler { struct __CFRuntimeBase { unsigned long long x_1_1_1; _Atomic unsigned long long x_1_1_2; } x1; int x2; int x3; int x4; int x5; int x6; int x7; float x8; unsigned char x9; int x10; unsigned long long x11; }*)arg2 nextFrameTime:(double*)arg3 status:(struct { bool x1; bool x2; }*)arg4;
- (double)nextFrameTime;
- (void)renderWithEngineContext:(struct __CFXEngineContext { }*)arg1 textureSampler:(struct __CFXTextureSampler { struct __CFRuntimeBase { unsigned long long x_1_1_1; _Atomic unsigned long long x_1_1_2; } x1; int x2; int x3; int x4; int x5; int x6; int x7; float x8; unsigned char x9; int x10; unsigned long long x11; }*)arg2 nextFrameTime:(double*)arg3;
- (void)setMTLTextureCache:(id)arg1;
- (void)setSize;
- (bool)shouldFlip;
- (bool)supportsMetal;
- (void)textureSize;

@end