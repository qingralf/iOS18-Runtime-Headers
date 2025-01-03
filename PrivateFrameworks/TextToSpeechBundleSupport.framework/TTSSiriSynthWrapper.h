/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/TextToSpeechBundleSupport.framework/TextToSpeechBundleSupport
 */

@interface TTSSiriSynthWrapper : NSObject {
    AVAudioConverter * _bufferConverter;
    TTSNeuralStyle * _currentNeuralStyle;
    <TTSSiriSynthWrapperDelegate> * _delegate;
    AVAudioFormat * _engineFormat;
    NSString * _language;
    NSArray * _neuralStyles;
    AVAudioFormat * _outputFormat;
    TTSSpeechString * _processedSpeechString;
    TTSRulesetRunner * _ruleSetRunner;
    NSObject<OS_dispatch_queue> * _synthesisQueue;
    void * _synthesizer;
    bool  _synthesizing;
    NSMutableOrderedSet * _voiceResources;
}

@property (nonatomic, retain) AVAudioConverter *bufferConverter;
@property (nonatomic, retain) TTSNeuralStyle *currentNeuralStyle;
@property (nonatomic) <TTSSiriSynthWrapperDelegate> *delegate;
@property (nonatomic, retain) AVAudioFormat *engineFormat;
@property (nonatomic, retain) NSString *language;
@property (nonatomic, retain) NSArray *neuralStyles;
@property (nonatomic, retain) AVAudioFormat *outputFormat;
@property (nonatomic, retain) TTSSpeechString *processedSpeechString;
@property (nonatomic, retain) TTSRulesetRunner *ruleSetRunner;
@property (nonatomic, retain) NSObject<OS_dispatch_queue> *synthesisQueue;
@property (nonatomic) void*synthesizer;
@property bool synthesizing;
@property (nonatomic, retain) NSMutableOrderedSet *voiceResources;

- (void).cxx_destruct;
- (id)_applyPostRuleRewrites:(id)arg1;
- (id)_neuralStyles;
- (id)_rawLiteralCharacterRegexForCurrentLanguage;
- (void)_setProsodyParameters;
- (id)bufferConverter;
- (id)currentNeuralStyle;
- (void)dealloc;
- (id)delegate;
- (id)engineFormat;
- (id)initWithVoicePath:(id)arg1 language:(id)arg2 censorPlainText:(bool)arg3 delegate:(id)arg4 feResourcePath:(id)arg5;
- (id)language;
- (void)loadRuleset:(id)arg1;
- (bool)loadVoiceResource:(id)arg1;
- (id)neuralStyles;
- (id)outputFormat;
- (id)processedSpeechString;
- (id)ruleSetRunner;
- (void)setBufferConverter:(id)arg1;
- (void)setCurrentNeuralStyle:(id)arg1;
- (void)setDelegate:(id)arg1;
- (void)setEngineFormat:(id)arg1;
- (void)setLanguage:(id)arg1;
- (void)setNeuralStyles:(id)arg1;
- (void)setOutputFormat:(id)arg1;
- (void)setProcessedSpeechString:(id)arg1;
- (void)setRuleSetRunner:(id)arg1;
- (void)setSynthesisQueue:(id)arg1;
- (void)setSynthesizer:(void*)arg1;
- (void)setSynthesizing:(bool)arg1;
- (void)setVoiceResources:(id)arg1;
- (void)stopSynthesis;
- (id)synthesisQueue;
- (void)synthesizeString:(id)arg1;
- (void*)synthesizer;
- (bool)synthesizing;
- (void)unloadAllVoiceResources;
- (bool)unloadVoiceResource:(id)arg1;
- (id)voiceResources;

@end
