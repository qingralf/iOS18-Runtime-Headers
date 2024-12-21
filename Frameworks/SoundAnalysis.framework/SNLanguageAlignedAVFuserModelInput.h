/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/SoundAnalysis.framework/SoundAnalysis
 */

@interface SNLanguageAlignedAVFuserModelInput : NSObject <MLFeatureProvider> {
    MLMultiArray * _audio_embedding;
    MLMultiArray * _vision_embedding;
}

@property (nonatomic, retain) MLMultiArray *audio_embedding;
@property (nonatomic, readonly) NSSet *featureNames;
@property (nonatomic, retain) MLMultiArray *vision_embedding;

- (void).cxx_destruct;
- (id)audio_embedding;
- (id)featureNames;
- (id)featureValueForName:(id)arg1;
- (id)initWithVision_embedding:(id)arg1 audio_embedding:(id)arg2;
- (void)setAudio_embedding:(id)arg1;
- (void)setVision_embedding:(id)arg1;
- (id)vision_embedding;

@end