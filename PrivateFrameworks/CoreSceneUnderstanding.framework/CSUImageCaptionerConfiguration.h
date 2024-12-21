/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/CoreSceneUnderstanding.framework/CoreSceneUnderstanding
 */

@interface CSUImageCaptionerConfiguration : NSObject {
    CSUImageCaptioningDecoderConfiguration * _captioningDecoderConfiguration;
    CSUImageCaptioningEncoderConfiguration * _captioningEncoderConfiguration;
    long long  _revision;
}

@property (nonatomic, readonly) CSUImageCaptioningDecoderConfiguration *captioningDecoderConfiguration;
@property (nonatomic, readonly) CSUImageCaptioningEncoderConfiguration *captioningEncoderConfiguration;
@property (nonatomic, readonly) long long revision;

+ (id)CSUImageCaptionerConfigurationForRevision:(long long)arg1 error:(id*)arg2;
+ (long long)_resolvedRevision:(long long)arg1;
+ (id)availableRevisions;
+ (id)createCSUImageCaptionerConfigurationWithConfigPath:(id)arg1 error:(id*)arg2;
+ (id)createCSUImageCaptionerConfigurationWithEncoderConfiguration:(id)arg1 DecoderConfiguration:(id)arg2 error:(id*)arg3;

- (void).cxx_destruct;
- (id)captioningDecoderConfiguration;
- (id)captioningEncoderConfiguration;
- (id)initWithCaptioningEncoderConfiguration:(id)arg1 captioningDecoderConfiguration:(id)arg2;
- (long long)revision;

@end