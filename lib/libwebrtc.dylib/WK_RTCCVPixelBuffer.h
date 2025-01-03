/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/WebCore.framework/Frameworks/libwebrtc.dylib
 */

@interface WK_RTCCVPixelBuffer : NSObject <RTCVideoFrameBuffer> {
    int  _bufferHeight;
    int  _bufferWidth;
    int  _cropHeight;
    int  _cropWidth;
    int  _cropX;
    int  _cropY;
    int  _height;
    struct __CVBuffer { } * _pixelBuffer;
    int  _width;
}

@property (nonatomic, readonly) int cropHeight;
@property (nonatomic, readonly) int cropWidth;
@property (nonatomic, readonly) int cropX;
@property (nonatomic, readonly) int cropY;
@property (readonly, copy) NSString *debugDescription; /* unknown property attribute: ? */
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) int height;
@property (nonatomic, readonly) struct __CVBuffer { }*pixelBuffer;
@property (readonly) Class superclass;
@property (nonatomic, readonly) int width;

+ (id)supportedPixelFormats;

- (int)bufferSizeForCroppingAndScalingToWidth:(int)arg1 height:(int)arg2;
- (void)close;
- (void)cropAndScaleARGBTo:(struct __CVBuffer { }*)arg1;
- (void)cropAndScaleNV12To:(struct __CVBuffer { }*)arg1 withTempBuffer:(char *)arg2;
- (bool)cropAndScaleTo:(struct __CVBuffer { }*)arg1 withTempBuffer:(char *)arg2;
- (int)cropHeight;
- (int)cropWidth;
- (int)cropX;
- (int)cropY;
- (void)dealloc;
- (int)height;
- (id)initWithPixelBuffer:(struct __CVBuffer { }*)arg1;
- (id)initWithPixelBuffer:(struct __CVBuffer { }*)arg1 adaptedWidth:(int)arg2 adaptedHeight:(int)arg3 cropWidth:(int)arg4 cropHeight:(int)arg5 cropX:(int)arg6 cropY:(int)arg7;
- (struct __CVBuffer { }*)pixelBuffer;
- (bool)requiresCropping;
- (bool)requiresScalingToWidth:(int)arg1 height:(int)arg2;
- (id)toI420;
- (int)width;

@end
