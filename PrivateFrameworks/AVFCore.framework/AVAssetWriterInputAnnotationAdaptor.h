/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/AVFCore.framework/AVFCore
 */

@interface AVAssetWriterInputAnnotationAdaptor : NSObject {
    AVAssetWriterInput * _assetWriterInput;
    AVAssetWriterInputMetadataAdaptor * _assetWriterInputMetadataAdaptor;
}

@property (nonatomic, readonly) AVAssetWriterInput *assetWriterInput;

+ (struct opaqueCMFormatDescription { }*)annotationFormatDescription;
+ (id)assetWriterInputAnnotationAdaptorWithAssetWriterInput:(id)arg1;
+ (void)initialize;

- (bool)appendAnnotation:(id)arg1;
- (id)assetWriterInput;
- (void)dealloc;
- (id)description;
- (id)init;
- (id)initWithAssetWriterInput:(id)arg1;

@end