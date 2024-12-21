/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/CoreSpeechFoundation.framework/CoreSpeechFoundation
 */

@interface CSAudioSpectralMeter : NSObject {
    bool  _enable;
    struct unique_ptr<CSAudioSpectralMeterImpl, std::default_delete<CSAudioSpectralMeterImpl>> { 
        struct __compressed_pair<CSAudioSpectralMeterImpl *, std::default_delete<CSAudioSpectralMeterImpl>> { 
            struct CSAudioSpectralMeterImpl {} *__value_; 
        } __ptr_; 
    }  _spectralMeterImpl;
}

@property (nonatomic) bool enable;

- (id).cxx_construct;
- (void).cxx_destruct;
- (void)dealloc;
- (bool)enable;
- (id)getFrequencyMagnitudesResult;
- (id)initWithSampleRate:(float)arg1 windowSize:(unsigned long long)arg2;
- (void)processAudioChunk:(id)arg1;
- (void)reset;
- (void)setEnable:(bool)arg1;
- (void)setOutputFrequencyBandsInHz:(id)arg1;

@end