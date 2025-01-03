/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/CMCapture.framework/CMCapture
 */

@interface BWStillImageInferences : NSObject {
    NSDictionary * _inferenceAttachedMediaMetadata;
    NSMutableDictionary * _inferenceBufferByAttachedMediaKey;
    NSMutableDictionary * _inferenceByAttachmentKey;
    NSMutableDictionary * _metadataByAttachedMediaKey;
}

@property (nonatomic, readonly) NSDictionary *inferenceAttachedMediaMetadata;

- (void)addInference:(id)arg1 inferenceAttachmentKey:(id)arg2;
- (void)addInferenceAttachedMediaMetadata:(id)arg1;
- (void)addInferenceBuffer:(struct __CVBuffer { }*)arg1 metadata:(id)arg2 inferenceAttachedMediaKey:(id)arg3;
- (void)dealloc;
- (id)description;
- (id)inferenceAttachedMediaMetadata;
- (struct __CVBuffer { }*)inferenceBufferForAttachedMediaKey:(id)arg1;
- (id)inferenceForAttachmentKey:(id)arg1;
- (id)init;
- (id)metadataForAttachedMediaKey:(id)arg1;

@end
