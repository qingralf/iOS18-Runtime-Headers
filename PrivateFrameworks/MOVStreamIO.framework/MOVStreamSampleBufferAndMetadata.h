/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/MOVStreamIO.framework/MOVStreamIO
 */

@interface MOVStreamSampleBufferAndMetadata : NSObject {
    AVTimedMetadataGroup * _metadata;
    struct opaqueCMSampleBuffer { } * _sampleBuffer;
}

@property (retain) AVTimedMetadataGroup *metadata;
@property struct opaqueCMSampleBuffer { }*sampleBuffer;

- (void).cxx_destruct;
- (id)metadata;
- (struct opaqueCMSampleBuffer { }*)sampleBuffer;
- (void)setMetadata:(id)arg1;
- (void)setSampleBuffer:(struct opaqueCMSampleBuffer { }*)arg1;

@end
