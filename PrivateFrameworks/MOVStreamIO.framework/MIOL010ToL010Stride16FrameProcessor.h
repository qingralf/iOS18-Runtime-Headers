/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/MOVStreamIO.framework/MOVStreamIO
 */

@interface MIOL010ToL010Stride16FrameProcessor : MIOFrameProcessor {
    bool  _firstBufferProcessed;
    struct opaqueCMFormatDescription { } * _formatDescForEncoding;
    bool  _needAlignment;
    MIOPixelBufferPool * _pool;
    int  bufferCacheMode;
}

- (void).cxx_destruct;
- (bool)buffer:(struct __CVBuffer { }*)arg1 needsAlignmentTo:(unsigned long long)arg2;
- (int)bufferCacheMode;
- (void)dealloc;
- (unsigned int)encodedPixelFormat;
- (struct opaqueCMFormatDescription { }*)formatDescriptionForEncoding;
- (id)initWithInputFormatDescription:(struct opaqueCMFormatDescription { }*)arg1;
- (struct __CVBuffer { }*)processPixelBuffer:(struct __CVBuffer { }*)arg1 preserveAttachments:(id)arg2 error:(id*)arg3;
- (void)setBufferCacheMode:(int)arg1;

@end
