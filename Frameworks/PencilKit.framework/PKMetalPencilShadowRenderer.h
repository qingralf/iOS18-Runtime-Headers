/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/PencilKit.framework/PencilKit
 */

@interface PKMetalPencilShadowRenderer : NSObject {
    <MTLRenderPipelineState> * _blurPipelineState;
    <MTLBuffer> * _blurVertexBuffer;
    <MTLCommandQueue> * _commandQueue;
    double  _currentAltitude;
    NSString * _currentModel;
    bool  _currentModelNeedsRoll;
    <MTLRenderPipelineState> * _currentPipelineState;
    unsigned long long  _currentPixelFormat;
    double  _currentRenderedAltitude;
    double  _currentRenderedRoll;
    double  _currentRoll;
    <MTLDevice> * _device;
    CIImage * _genericShadowImage;
    <MTLRenderPipelineState> * _grayscalePipelineState;
    <MTLBuffer> * _grayscaleVertexBuffer;
    struct CGRect { 
        struct CGPoint { 
            double x; 
            double y; 
        } origin; 
        struct CGSize { 
            double width; 
            double height; 
        } size; 
    }  _imageMaxBlurredExtent;
    <MTLLibrary> * _library;
    NSMutableDictionary * _objectsCache;
    <MTLTexture> * _pyramidTexture;
    <MTLTexture> * _textures;
    <MTLBuffer> * _vertexBuffer;
    struct CGRect { 
        struct CGPoint { 
            double x; 
            double y; 
        } origin; 
        struct CGSize { 
            double width; 
            double height; 
        } size; 
    }  _vertexBufferBounds;
    MTLVertexDescriptor * _vertexDescriptor;
}

@property (nonatomic, readonly) <MTLCommandQueue> *commandQueue;

+ (struct CGSize { double x1; double x2; })maxBlurSize;
+ (struct CGSize { double x1; double x2; })pixelSize;

- (void).cxx_destruct;
- (id)commandQueue;
- (id)initWithDevice:(id)arg1;
- (id)initWithDevice:(id)arg1 library:(id)arg2;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })renderInto:(id)arg1 commandBuffer:(id)arg2 position:(struct CGPoint { double x1; double x2; })arg3 azimuth:(double)arg4 altitude:(double)arg5 height:(double)arg6 alpha:(double)arg7 scale:(double)arg8 clearFramebuffer:(bool)arg9 grayscale:(double)arg10;
- (void)updateInk:(id)arg1;
- (void)updateInk:(id)arg1 oldInk:(id)arg2 rollAngle:(double)arg3 altitudeAngle:(double)arg4 progress:(double)arg5;
- (void)updateRoll:(double)arg1 altitudeAngle:(double)arg2;

@end