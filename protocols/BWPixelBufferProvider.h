/* Generated by RuntimeBrowser.
 */

@protocol BWPixelBufferProvider <NSObject>

@required

- (struct { int x1; int x2; })dimensions;
- (void)flushToMinimumCapacity:(unsigned long long)arg1;
- (unsigned long long)height;
- (NSString *)name;
- (struct __CVBuffer { }*)newPixelBuffer;
- (unsigned int)pixelFormat;
- (unsigned long long)sliceCount;
- (bool)usesMemoryPool;
- (unsigned long long)width;

@end
