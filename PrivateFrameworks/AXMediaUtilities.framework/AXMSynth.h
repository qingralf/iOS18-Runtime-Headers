/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/AXMediaUtilities.framework/AXMediaUtilities
 */

@interface AXMSynth : NSObject {
    AXMADSREnvelope * _envelope;
    double  _gain;
    AXMOscillator * _mainOperator;
    AXMOscillator * _mainOscillator;
    AXMSynthMainParameters * _parameters;
    double * _sampleBuffer;
    double  _sampleRate;
}

@property (nonatomic) double baseFrequency;
@property (nonatomic, readonly) AXMADSREnvelope *envelope;
@property (nonatomic) double gain;
@property (nonatomic, retain) AXMOscillator *mainOperator;
@property (nonatomic, retain) AXMOscillator *mainOscillator;
@property (nonatomic) float mainVolume;
@property (nonatomic, retain) AXMSynthMainParameters *parameters;
@property (nonatomic) double*sampleBuffer;
@property (nonatomic, readonly) double sampleRate;

- (void).cxx_destruct;
- (double)baseFrequency;
- (void)bypassAllOperatorsAndOscillators;
- (void)bypassEnvelopes;
- (void)enumerateOscillatorsWithBlock:(id /* block */)arg1;
- (id)envelope;
- (double)gain;
- (double)getNextSample;
- (id)initWithSampleRate:(double)arg1 envelope:(id)arg2;
- (void)loadPreset:(id)arg1;
- (id)mainOperator;
- (id)mainOscillator;
- (float)mainVolume;
- (id)oscillatorAndOperator;
- (id)oscillatorWithIdentifier:(id)arg1;
- (id)oscillatorsWithIdentifiers:(id)arg1;
- (id)parameters;
- (void)playNote:(float)arg1;
- (void)releaseNote;
- (double*)sampleBuffer;
- (double)sampleRate;
- (void)setBaseFrequency:(double)arg1;
- (void)setGain:(double)arg1;
- (void)setMainOperator:(id)arg1;
- (void)setMainOscillator:(id)arg1;
- (void)setMainVolume:(float)arg1;
- (void)setParameters:(id)arg1;
- (void)setSampleBuffer:(double*)arg1;
- (void)setSampleRate:(double)arg1;

@end
