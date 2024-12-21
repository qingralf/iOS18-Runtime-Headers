/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/SiriInstrumentation.framework/SiriInstrumentation
 */

@interface ASRSchemaASRRecognitionMetrics : SISchemaInstrumentationMessage {
    unsigned long long  _appleNeuralEngineCpuTimeInNs;
    unsigned long long  _audioDurationInNs;
    float  _averageActiveTokensPerFrame;
    bool  _continuousListeningEnabled;
    unsigned long long  _cpuInstructionsInMillionsPerSecond;
    float  _cpuRealTimeFactor;
    unsigned long long  _eagerCustomerPerceivedLatencyInNs;
    bool  _eagerEnabled;
    ASRSchemaASREmojiMetrics * _emojiMetrics;
    struct { 
        unsigned int personalizedLanguageModelAgeInNs : 1; 
        unsigned int personalizedLanguageModelWeight : 1; 
        unsigned int averageActiveTokensPerFrame : 1; 
        unsigned int signalToNoiseRatioInDecibels : 1; 
        unsigned int recognitionDurationInNs : 1; 
        unsigned int audioDurationInNs : 1; 
        unsigned int eagerEnabled : 1; 
        unsigned int utteranceDetectionEnabled : 1; 
        unsigned int utteranceConcatenationEnabled : 1; 
        unsigned int continuousListeningEnabled : 1; 
        unsigned int eagerCustomerPerceivedLatencyInNs : 1; 
        unsigned int cpuRealTimeFactor : 1; 
        unsigned int numLanguageModelEnrollmentDataStreams : 1; 
        unsigned int inverseTextNormalizationDurationInNs : 1; 
        unsigned int inverseTextNormalizationDurationForFinalResultInNs : 1; 
        unsigned int numberOfInverseTextNormalizationRuns : 1; 
        unsigned int secondaryPassDurationInNs : 1; 
        unsigned int numberOfSecondaryPassRuns : 1; 
        unsigned int cpuInstructionsInMillionsPerSecond : 1; 
        unsigned int appleNeuralEngineCpuTimeInNs : 1; 
        unsigned int pageInsWaitTimeInNs : 1; 
        unsigned int recognitionHardware : 1; 
        unsigned int numIngestedNeuralContextualBiasingEmbeddings : 1; 
    }  _has;
    bool  _hasEmojiMetrics;
    bool  _hasPhoneticMatchDecoderName;
    bool  _hasRecognizerComponents;
    bool  _hasRescoringDeliberationResult;
    unsigned long long  _inverseTextNormalizationDurationForFinalResultInNs;
    unsigned long long  _inverseTextNormalizationDurationInNs;
    NSArray * _languageModelInterpolationWeights;
    unsigned int  _numIngestedNeuralContextualBiasingEmbeddings;
    unsigned int  _numLanguageModelEnrollmentDataStreams;
    unsigned int  _numberOfInverseTextNormalizationRuns;
    unsigned int  _numberOfSecondaryPassRuns;
    unsigned long long  _pageInsWaitTimeInNs;
    NSArray * _pauseReasons;
    NSArray * _pausedAudioDurationsInNs;
    unsigned long long  _personalizedLanguageModelAgeInNs;
    float  _personalizedLanguageModelWeight;
    NSString * _phoneticMatchDecoderName;
    unsigned long long  _recognitionDurationInNs;
    int  _recognitionHardware;
    ASRSchemaASRRecognizerComponents * _recognizerComponents;
    ASRSchemaASRRescoringDeliberationResult * _rescoringDeliberationResult;
    unsigned long long  _secondaryPassDurationInNs;
    float  _signalToNoiseRatioInDecibels;
    bool  _utteranceConcatenationEnabled;
    bool  _utteranceDetectionEnabled;
}

@property (nonatomic) unsigned long long appleNeuralEngineCpuTimeInNs;
@property (nonatomic) unsigned long long audioDurationInNs;
@property (nonatomic) float averageActiveTokensPerFrame;
@property (nonatomic) bool continuousListeningEnabled;
@property (nonatomic) unsigned long long cpuInstructionsInMillionsPerSecond;
@property (nonatomic) float cpuRealTimeFactor;
@property (nonatomic) unsigned long long eagerCustomerPerceivedLatencyInNs;
@property (nonatomic) bool eagerEnabled;
@property (nonatomic, retain) ASRSchemaASREmojiMetrics *emojiMetrics;
@property (nonatomic) bool hasAppleNeuralEngineCpuTimeInNs;
@property (nonatomic) bool hasAudioDurationInNs;
@property (nonatomic) bool hasAverageActiveTokensPerFrame;
@property (nonatomic) bool hasContinuousListeningEnabled;
@property (nonatomic) bool hasCpuInstructionsInMillionsPerSecond;
@property (nonatomic) bool hasCpuRealTimeFactor;
@property (nonatomic) bool hasEagerCustomerPerceivedLatencyInNs;
@property (nonatomic) bool hasEagerEnabled;
@property (nonatomic) bool hasEmojiMetrics;
@property (nonatomic) bool hasInverseTextNormalizationDurationForFinalResultInNs;
@property (nonatomic) bool hasInverseTextNormalizationDurationInNs;
@property (nonatomic) bool hasNumIngestedNeuralContextualBiasingEmbeddings;
@property (nonatomic) bool hasNumLanguageModelEnrollmentDataStreams;
@property (nonatomic) bool hasNumberOfInverseTextNormalizationRuns;
@property (nonatomic) bool hasNumberOfSecondaryPassRuns;
@property (nonatomic) bool hasPageInsWaitTimeInNs;
@property (nonatomic) bool hasPersonalizedLanguageModelAgeInNs;
@property (nonatomic) bool hasPersonalizedLanguageModelWeight;
@property (nonatomic) bool hasPhoneticMatchDecoderName;
@property (nonatomic) bool hasRecognitionDurationInNs;
@property (nonatomic) bool hasRecognitionHardware;
@property (nonatomic) bool hasRecognizerComponents;
@property (nonatomic) bool hasRescoringDeliberationResult;
@property (nonatomic) bool hasSecondaryPassDurationInNs;
@property (nonatomic) bool hasSignalToNoiseRatioInDecibels;
@property (nonatomic) bool hasUtteranceConcatenationEnabled;
@property (nonatomic) bool hasUtteranceDetectionEnabled;
@property (nonatomic) unsigned long long inverseTextNormalizationDurationForFinalResultInNs;
@property (nonatomic) unsigned long long inverseTextNormalizationDurationInNs;
@property (nonatomic, readonly) NSData *jsonData;
@property (nonatomic, copy) NSArray *languageModelInterpolationWeights;
@property (nonatomic) unsigned int numIngestedNeuralContextualBiasingEmbeddings;
@property (nonatomic) unsigned int numLanguageModelEnrollmentDataStreams;
@property (nonatomic) unsigned int numberOfInverseTextNormalizationRuns;
@property (nonatomic) unsigned int numberOfSecondaryPassRuns;
@property (nonatomic) unsigned long long pageInsWaitTimeInNs;
@property (nonatomic, copy) NSArray *pauseReasons;
@property (nonatomic, copy) NSArray *pausedAudioDurationsInNs;
@property (nonatomic) unsigned long long personalizedLanguageModelAgeInNs;
@property (nonatomic) float personalizedLanguageModelWeight;
@property (nonatomic, copy) NSString *phoneticMatchDecoderName;
@property (nonatomic) unsigned long long recognitionDurationInNs;
@property (nonatomic) int recognitionHardware;
@property (nonatomic, retain) ASRSchemaASRRecognizerComponents *recognizerComponents;
@property (nonatomic, retain) ASRSchemaASRRescoringDeliberationResult *rescoringDeliberationResult;
@property (nonatomic) unsigned long long secondaryPassDurationInNs;
@property (nonatomic) float signalToNoiseRatioInDecibels;
@property (nonatomic) bool utteranceConcatenationEnabled;
@property (nonatomic) bool utteranceDetectionEnabled;

- (void).cxx_destruct;
- (void)addLanguageModelInterpolationWeights:(id)arg1;
- (void)addPauseReason:(int)arg1;
- (void)addPausedAudioDurationsInNs:(unsigned long long)arg1;
- (unsigned long long)appleNeuralEngineCpuTimeInNs;
- (id)applySensitiveConditionsPolicy:(id)arg1;
- (unsigned long long)audioDurationInNs;
- (float)averageActiveTokensPerFrame;
- (void)clearLanguageModelInterpolationWeights;
- (void)clearPauseReason;
- (void)clearPausedAudioDurationsInNs;
- (bool)continuousListeningEnabled;
- (unsigned long long)cpuInstructionsInMillionsPerSecond;
- (float)cpuRealTimeFactor;
- (void)deleteAppleNeuralEngineCpuTimeInNs;
- (void)deleteAudioDurationInNs;
- (void)deleteAverageActiveTokensPerFrame;
- (void)deleteContinuousListeningEnabled;
- (void)deleteCpuInstructionsInMillionsPerSecond;
- (void)deleteCpuRealTimeFactor;
- (void)deleteEagerCustomerPerceivedLatencyInNs;
- (void)deleteEagerEnabled;
- (void)deleteEmojiMetrics;
- (void)deleteInverseTextNormalizationDurationForFinalResultInNs;
- (void)deleteInverseTextNormalizationDurationInNs;
- (void)deleteLanguageModelInterpolationWeights;
- (void)deleteNumIngestedNeuralContextualBiasingEmbeddings;
- (void)deleteNumLanguageModelEnrollmentDataStreams;
- (void)deleteNumberOfInverseTextNormalizationRuns;
- (void)deleteNumberOfSecondaryPassRuns;
- (void)deletePageInsWaitTimeInNs;
- (void)deletePauseReason;
- (void)deletePausedAudioDurationsInNs;
- (void)deletePersonalizedLanguageModelAgeInNs;
- (void)deletePersonalizedLanguageModelWeight;
- (void)deletePhoneticMatchDecoderName;
- (void)deleteRecognitionDurationInNs;
- (void)deleteRecognitionHardware;
- (void)deleteRecognizerComponents;
- (void)deleteRescoringDeliberationResult;
- (void)deleteSecondaryPassDurationInNs;
- (void)deleteSignalToNoiseRatioInDecibels;
- (void)deleteUtteranceConcatenationEnabled;
- (void)deleteUtteranceDetectionEnabled;
- (id)dictionaryRepresentation;
- (unsigned long long)eagerCustomerPerceivedLatencyInNs;
- (bool)eagerEnabled;
- (id)emojiMetrics;
- (bool)hasAppleNeuralEngineCpuTimeInNs;
- (bool)hasAudioDurationInNs;
- (bool)hasAverageActiveTokensPerFrame;
- (bool)hasContinuousListeningEnabled;
- (bool)hasCpuInstructionsInMillionsPerSecond;
- (bool)hasCpuRealTimeFactor;
- (bool)hasEagerCustomerPerceivedLatencyInNs;
- (bool)hasEagerEnabled;
- (bool)hasEmojiMetrics;
- (bool)hasInverseTextNormalizationDurationForFinalResultInNs;
- (bool)hasInverseTextNormalizationDurationInNs;
- (bool)hasNumIngestedNeuralContextualBiasingEmbeddings;
- (bool)hasNumLanguageModelEnrollmentDataStreams;
- (bool)hasNumberOfInverseTextNormalizationRuns;
- (bool)hasNumberOfSecondaryPassRuns;
- (bool)hasPageInsWaitTimeInNs;
- (bool)hasPersonalizedLanguageModelAgeInNs;
- (bool)hasPersonalizedLanguageModelWeight;
- (bool)hasPhoneticMatchDecoderName;
- (bool)hasRecognitionDurationInNs;
- (bool)hasRecognitionHardware;
- (bool)hasRecognizerComponents;
- (bool)hasRescoringDeliberationResult;
- (bool)hasSecondaryPassDurationInNs;
- (bool)hasSignalToNoiseRatioInDecibels;
- (bool)hasUtteranceConcatenationEnabled;
- (bool)hasUtteranceDetectionEnabled;
- (unsigned long long)hash;
- (id)initWithDictionary:(id)arg1;
- (id)initWithJSON:(id)arg1;
- (unsigned long long)inverseTextNormalizationDurationForFinalResultInNs;
- (unsigned long long)inverseTextNormalizationDurationInNs;
- (bool)isEqual:(id)arg1;
- (id)jsonData;
- (id)languageModelInterpolationWeights;
- (id)languageModelInterpolationWeightsAtIndex:(unsigned long long)arg1;
- (unsigned long long)languageModelInterpolationWeightsCount;
- (unsigned int)numIngestedNeuralContextualBiasingEmbeddings;
- (unsigned int)numLanguageModelEnrollmentDataStreams;
- (unsigned int)numberOfInverseTextNormalizationRuns;
- (unsigned int)numberOfSecondaryPassRuns;
- (unsigned long long)pageInsWaitTimeInNs;
- (int)pauseReasonAtIndex:(unsigned long long)arg1;
- (unsigned long long)pauseReasonCount;
- (id)pauseReasons;
- (id)pausedAudioDurationsInNs;
- (unsigned long long)pausedAudioDurationsInNsAtIndex:(unsigned long long)arg1;
- (unsigned long long)pausedAudioDurationsInNsCount;
- (unsigned long long)personalizedLanguageModelAgeInNs;
- (float)personalizedLanguageModelWeight;
- (id)phoneticMatchDecoderName;
- (bool)readFrom:(id)arg1;
- (unsigned long long)recognitionDurationInNs;
- (int)recognitionHardware;
- (id)recognizerComponents;
- (id)rescoringDeliberationResult;
- (unsigned long long)secondaryPassDurationInNs;
- (void)setAppleNeuralEngineCpuTimeInNs:(unsigned long long)arg1;
- (void)setAudioDurationInNs:(unsigned long long)arg1;
- (void)setAverageActiveTokensPerFrame:(float)arg1;
- (void)setContinuousListeningEnabled:(bool)arg1;
- (void)setCpuInstructionsInMillionsPerSecond:(unsigned long long)arg1;
- (void)setCpuRealTimeFactor:(float)arg1;
- (void)setEagerCustomerPerceivedLatencyInNs:(unsigned long long)arg1;
- (void)setEagerEnabled:(bool)arg1;
- (void)setEmojiMetrics:(id)arg1;
- (void)setHasAppleNeuralEngineCpuTimeInNs:(bool)arg1;
- (void)setHasAudioDurationInNs:(bool)arg1;
- (void)setHasAverageActiveTokensPerFrame:(bool)arg1;
- (void)setHasContinuousListeningEnabled:(bool)arg1;
- (void)setHasCpuInstructionsInMillionsPerSecond:(bool)arg1;
- (void)setHasCpuRealTimeFactor:(bool)arg1;
- (void)setHasEagerCustomerPerceivedLatencyInNs:(bool)arg1;
- (void)setHasEagerEnabled:(bool)arg1;
- (void)setHasEmojiMetrics:(bool)arg1;
- (void)setHasInverseTextNormalizationDurationForFinalResultInNs:(bool)arg1;
- (void)setHasInverseTextNormalizationDurationInNs:(bool)arg1;
- (void)setHasNumIngestedNeuralContextualBiasingEmbeddings:(bool)arg1;
- (void)setHasNumLanguageModelEnrollmentDataStreams:(bool)arg1;
- (void)setHasNumberOfInverseTextNormalizationRuns:(bool)arg1;
- (void)setHasNumberOfSecondaryPassRuns:(bool)arg1;
- (void)setHasPageInsWaitTimeInNs:(bool)arg1;
- (void)setHasPersonalizedLanguageModelAgeInNs:(bool)arg1;
- (void)setHasPersonalizedLanguageModelWeight:(bool)arg1;
- (void)setHasPhoneticMatchDecoderName:(bool)arg1;
- (void)setHasRecognitionDurationInNs:(bool)arg1;
- (void)setHasRecognitionHardware:(bool)arg1;
- (void)setHasRecognizerComponents:(bool)arg1;
- (void)setHasRescoringDeliberationResult:(bool)arg1;
- (void)setHasSecondaryPassDurationInNs:(bool)arg1;
- (void)setHasSignalToNoiseRatioInDecibels:(bool)arg1;
- (void)setHasUtteranceConcatenationEnabled:(bool)arg1;
- (void)setHasUtteranceDetectionEnabled:(bool)arg1;
- (void)setInverseTextNormalizationDurationForFinalResultInNs:(unsigned long long)arg1;
- (void)setInverseTextNormalizationDurationInNs:(unsigned long long)arg1;
- (void)setLanguageModelInterpolationWeights:(id)arg1;
- (void)setNumIngestedNeuralContextualBiasingEmbeddings:(unsigned int)arg1;
- (void)setNumLanguageModelEnrollmentDataStreams:(unsigned int)arg1;
- (void)setNumberOfInverseTextNormalizationRuns:(unsigned int)arg1;
- (void)setNumberOfSecondaryPassRuns:(unsigned int)arg1;
- (void)setPageInsWaitTimeInNs:(unsigned long long)arg1;
- (void)setPauseReasons:(id)arg1;
- (void)setPausedAudioDurationsInNs:(id)arg1;
- (void)setPersonalizedLanguageModelAgeInNs:(unsigned long long)arg1;
- (void)setPersonalizedLanguageModelWeight:(float)arg1;
- (void)setPhoneticMatchDecoderName:(id)arg1;
- (void)setRecognitionDurationInNs:(unsigned long long)arg1;
- (void)setRecognitionHardware:(int)arg1;
- (void)setRecognizerComponents:(id)arg1;
- (void)setRescoringDeliberationResult:(id)arg1;
- (void)setSecondaryPassDurationInNs:(unsigned long long)arg1;
- (void)setSignalToNoiseRatioInDecibels:(float)arg1;
- (void)setUtteranceConcatenationEnabled:(bool)arg1;
- (void)setUtteranceDetectionEnabled:(bool)arg1;
- (float)signalToNoiseRatioInDecibels;
- (id)suppressMessageUnderConditions;
- (bool)utteranceConcatenationEnabled;
- (bool)utteranceDetectionEnabled;
- (void)writeTo:(id)arg1;

@end