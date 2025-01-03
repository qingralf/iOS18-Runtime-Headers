/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/CoreSceneUnderstanding.framework/CoreSceneUnderstanding
 */

@interface CSUVideoCaptioner : NSObject {
    CSUVideoCaptionerConfiguration * _config;
    CSUImageCaptioningDecoder * _imageCaptionDecoder;
}

@property (nonatomic, readonly) CSUVideoCaptionerConfiguration *config;
@property (nonatomic, retain) CSUImageCaptioningDecoder *imageCaptionDecoder;

- (void).cxx_destruct;
- (id)_initWithConfiguration:(id)arg1 error:(id*)arg2;
- (id)computeCaptionForVideoEmbedding:(id)arg1 error:(id*)arg2;
- (id)config;
- (id)imageCaptionDecoder;
- (id)initWithConfiguration:(id)arg1 error:(id*)arg2;
- (bool)loadResources:(id*)arg1;
- (void)setImageCaptionDecoder:(id)arg1;

@end
