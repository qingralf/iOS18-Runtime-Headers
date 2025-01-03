/* Generated by RuntimeBrowser.
 */

@protocol MOVStreamPostProcessor <NSObject>

@required

- (int)bufferCacheMode;
- (id)exactBytesPerRow;
- (id)initWithOriginalPixelFormat:(unsigned int)arg1;
- (id)initWithOriginalPixelFormat:(unsigned int)arg1 bufferCacheMode:(int)arg2;
- (unsigned int)originalPixelFormat;
- (struct __CVBuffer { }*)processedPixelBufferFrom:(struct __CVBuffer { }*)arg1 metadata:(NSDictionary *)arg2 error:(id*)arg3;
- (unsigned int)processedPixelFormat;
- (bool)removePadding;
- (void)setBufferCacheMode:(int)arg1;
- (void)setExactBytesPerRow:(id)arg1;
- (void)setOriginalPixelFormat:(unsigned int)arg1;
- (void)setRemovePadding:(bool)arg1;

@end
