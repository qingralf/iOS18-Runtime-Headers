/* Generated by RuntimeBrowser.
 */

@protocol MIOFrameProcessor <NSObject>

@required

- (int)bufferCacheMode;
- (unsigned int)encodedPixelFormat;
- (struct opaqueCMFormatDescription { }*)formatDescriptionForEncoding;
- (struct __CVBuffer { }*)processPixelBuffer:(struct __CVBuffer { }*)arg1 preserveAttachments:(NSArray *)arg2 error:(id*)arg3;
- (void)setBufferCacheMode:(int)arg1;

@end