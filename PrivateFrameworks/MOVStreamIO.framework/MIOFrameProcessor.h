/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/MOVStreamIO.framework/MOVStreamIO
 */

@interface MIOFrameProcessor : NSObject <MIOFrameProcessor> {
    struct opaqueCMFormatDescription { } * _formatDesc;
    bool  _formatDescriptionNeedsUpdate;
    int  bufferCacheMode;
}

@property int bufferCacheMode;
@property (readonly, copy) NSString *debugDescription; /* unknown property attribute: ? */
@property (readonly, copy) NSString *description;
@property (readonly) struct opaqueCMFormatDescription { }*formatDesc;
@property bool formatDescriptionNeedsUpdate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (int)bufferCacheMode;
- (void)dealloc;
- (unsigned int)encodedPixelFormat;
- (struct opaqueCMFormatDescription { }*)formatDesc;
- (struct opaqueCMFormatDescription { }*)formatDescriptionForEncoding;
- (bool)formatDescriptionNeedsUpdate;
- (id)initWithInputFormatDescription:(struct opaqueCMFormatDescription { }*)arg1;
- (struct __CVBuffer { }*)processPixelBuffer:(struct __CVBuffer { }*)arg1 preserveAttachments:(id)arg2 error:(id*)arg3;
- (void)setBufferCacheMode:(int)arg1;
- (void)setFormatDescriptionNeedsUpdate:(bool)arg1;
- (struct opaqueCMFormatDescription { }*)updatedFormatDescriptionIfNeededWithBuffer:(struct __CVBuffer { }*)arg1 currentFormatDescription:(struct opaqueCMFormatDescription { }*)arg2;

@end