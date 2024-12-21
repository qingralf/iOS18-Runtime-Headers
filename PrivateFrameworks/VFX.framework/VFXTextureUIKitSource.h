/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/VFX.framework/VFX
 */

@interface VFXTextureUIKitSource : VFXTextureCoreAnimationSource {
    struct __CFXEngineContext { } * _engineContext;
    bool  _isOpaque;
    struct CGSize { 
        double width; 
        double height; 
    }  _sizeCache;
    id  _source;
    unsigned int  _textureID;
    struct __CFXTextureSampler { struct __CFRuntimeBase { unsigned long long x_1_1_1; _Atomic unsigned long long x_1_1_2; } x1; int x2; int x3; int x4; int x5; int x6; int x7; float x8; unsigned char x9; int x10; unsigned long long x11; } * _textureSampler;
    UIView * _uiView;
    UIWindow * _uiWindow;
    CALayer * _uiWindowLayer;
    bool  _windowReady;
}

@property (nonatomic) bool isOpaque;
@property (nonatomic, retain) id source;
@property (nonatomic, retain) UIView *uiView;
@property (nonatomic, retain) UIWindow *uiWindow;
@property (nonatomic, retain) CALayer *uiWindowLayer;

- (void)_layerTreeDidUpdate;
- (float)clearValue;
- (void)dealloc;
- (bool)isOpaque;
- (id)layer;
- (double)layerContentsScaleFactor;
- (struct CGSize { double x1; double x2; })layerSizeInPixels;
- (id)layerToFocusForRenderedLayer:(id)arg1;
- (bool)requiresMainThreadUpdates;
- (void)setIsOpaque:(bool)arg1;
- (void)setSource:(id)arg1;
- (void)setUiView:(id)arg1;
- (void)setUiWindow:(id)arg1;
- (void)setUiWindowLayer:(id)arg1;
- (void)setup;
- (bool)shouldFlip;
- (id)source;
- (bool)supportsMetal;
- (id)uiView;
- (id)uiWindow;
- (id)uiWindowLayer;

@end