/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/BiomeLibrary.framework/BiomeLibrary
 */

@interface BMSiriVoiceTriggerStatistics : BMEventBase <BMStoreData> {
    NSString * _configVersion;
    unsigned int  _dataVersion;
    double  _firstPassPeakScoreHS;
    double  _firstPassPeakScoreJS;
    int  _firstPassTriggerSource;
    bool  _hasFirstPassPeakScoreHS;
    bool  _hasFirstPassPeakScoreJS;
    bool  _hasFirstPassTriggerSource;
    bool  _hasHwSampleRate;
    bool  _hasInvocationTypeID;
    bool  _hasKeywordThresholdHS;
    bool  _hasKeywordThresholdJS;
    bool  _hasMitigationScore;
    bool  _hasRaw_absoluteTimestamp;
    bool  _hasRecognizerScoreHS;
    bool  _hasRecognizerScoreJS;
    bool  _hasRepetitionSimilarityScore;
    bool  _hasTdSpeakerRecognizerCombinedScore;
    bool  _hasTdSpeakerRecognizerCombinedThresholdHS;
    bool  _hasTdSpeakerRecognizerCombinedThresholdJS;
    bool  _hasTriggerScoreHS;
    bool  _hasTriggerScoreJS;
    double  _hwSampleRate;
    int  _invocationTypeID;
    double  _keywordThresholdHS;
    double  _keywordThresholdJS;
    double  _mitigationScore;
    double  _raw_absoluteTimestamp;
    double  _recognizerScoreHS;
    double  _recognizerScoreJS;
    double  _repetitionSimilarityScore;
    double  _tdSpeakerRecognizerCombinedScore;
    double  _tdSpeakerRecognizerCombinedThresholdHS;
    double  _tdSpeakerRecognizerCombinedThresholdJS;
    double  _triggerScoreHS;
    double  _triggerScoreJS;
}

@property (nonatomic, readonly) NSDate *absoluteTimestamp;
@property (nonatomic, readonly) NSString *configVersion;
@property (nonatomic, readonly) unsigned int dataVersion;
@property (readonly, copy) NSString *debugDescription; /* unknown property attribute: ? */
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) double firstPassPeakScoreHS;
@property (nonatomic, readonly) double firstPassPeakScoreJS;
@property (nonatomic, readonly) int firstPassTriggerSource;
@property (nonatomic) bool hasFirstPassPeakScoreHS;
@property (nonatomic) bool hasFirstPassPeakScoreJS;
@property (nonatomic) bool hasFirstPassTriggerSource;
@property (nonatomic) bool hasHwSampleRate;
@property (nonatomic) bool hasInvocationTypeID;
@property (nonatomic) bool hasKeywordThresholdHS;
@property (nonatomic) bool hasKeywordThresholdJS;
@property (nonatomic) bool hasMitigationScore;
@property (nonatomic) bool hasRecognizerScoreHS;
@property (nonatomic) bool hasRecognizerScoreJS;
@property (nonatomic) bool hasRepetitionSimilarityScore;
@property (nonatomic) bool hasTdSpeakerRecognizerCombinedScore;
@property (nonatomic) bool hasTdSpeakerRecognizerCombinedThresholdHS;
@property (nonatomic) bool hasTdSpeakerRecognizerCombinedThresholdJS;
@property (nonatomic) bool hasTriggerScoreHS;
@property (nonatomic) bool hasTriggerScoreJS;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) double hwSampleRate;
@property (nonatomic, readonly) int invocationTypeID;
@property (nonatomic, readonly) double keywordThresholdHS;
@property (nonatomic, readonly) double keywordThresholdJS;
@property (nonatomic, readonly) double mitigationScore;
@property (nonatomic, readonly) double recognizerScoreHS;
@property (nonatomic, readonly) double recognizerScoreJS;
@property (nonatomic, readonly) double repetitionSimilarityScore;
@property (readonly) Class superclass;
@property (nonatomic, readonly) double tdSpeakerRecognizerCombinedScore;
@property (nonatomic, readonly) double tdSpeakerRecognizerCombinedThresholdHS;
@property (nonatomic, readonly) double tdSpeakerRecognizerCombinedThresholdJS;
@property (nonatomic, readonly) double triggerScoreHS;
@property (nonatomic, readonly) double triggerScoreJS;

+ (id)columns;
+ (id)eventWithData:(id)arg1 dataVersion:(unsigned int)arg2;
+ (unsigned int)latestDataVersion;
+ (id)protoFields;
+ (id)validKeyPaths;

- (void).cxx_destruct;
- (id)absoluteTimestamp;
- (id)configVersion;
- (unsigned int)dataVersion;
- (id)description;
- (double)firstPassPeakScoreHS;
- (double)firstPassPeakScoreJS;
- (int)firstPassTriggerSource;
- (bool)hasFirstPassPeakScoreHS;
- (bool)hasFirstPassPeakScoreJS;
- (bool)hasFirstPassTriggerSource;
- (bool)hasHwSampleRate;
- (bool)hasInvocationTypeID;
- (bool)hasKeywordThresholdHS;
- (bool)hasKeywordThresholdJS;
- (bool)hasMitigationScore;
- (bool)hasRecognizerScoreHS;
- (bool)hasRecognizerScoreJS;
- (bool)hasRepetitionSimilarityScore;
- (bool)hasTdSpeakerRecognizerCombinedScore;
- (bool)hasTdSpeakerRecognizerCombinedThresholdHS;
- (bool)hasTdSpeakerRecognizerCombinedThresholdJS;
- (bool)hasTriggerScoreHS;
- (bool)hasTriggerScoreJS;
- (double)hwSampleRate;
- (id)initByReadFrom:(id)arg1;
- (id)initWithAbsoluteTimestamp:(id)arg1 firstPassPeakScoreHS:(id)arg2 firstPassPeakScoreJS:(id)arg3 firstPassTriggerSource:(id)arg4 recognizerScoreHS:(id)arg5 recognizerScoreJS:(id)arg6 triggerScoreHS:(id)arg7 triggerScoreJS:(id)arg8 mitigationScore:(id)arg9 invocationTypeID:(id)arg10 repetitionSimilarityScore:(id)arg11 tdSpeakerRecognizerCombinedScore:(id)arg12 hwSampleRate:(id)arg13 configVersion:(id)arg14;
- (id)initWithAbsoluteTimestamp:(id)arg1 firstPassPeakScoreHS:(id)arg2 firstPassPeakScoreJS:(id)arg3 firstPassTriggerSource:(id)arg4 recognizerScoreHS:(id)arg5 recognizerScoreJS:(id)arg6 triggerScoreHS:(id)arg7 triggerScoreJS:(id)arg8 mitigationScore:(id)arg9 invocationTypeID:(id)arg10 repetitionSimilarityScore:(id)arg11 tdSpeakerRecognizerCombinedScore:(id)arg12 hwSampleRate:(id)arg13 configVersion:(id)arg14 keywordThresholdHS:(id)arg15 keywordThresholdJS:(id)arg16 tdSpeakerRecognizerCombinedThresholdHS:(id)arg17 tdSpeakerRecognizerCombinedThresholdJS:(id)arg18;
- (id)initWithJSONDictionary:(id)arg1 error:(id*)arg2;
- (int)invocationTypeID;
- (bool)isEqual:(id)arg1;
- (id)jsonDictionary;
- (double)keywordThresholdHS;
- (double)keywordThresholdJS;
- (double)mitigationScore;
- (double)recognizerScoreHS;
- (double)recognizerScoreJS;
- (double)repetitionSimilarityScore;
- (id)serialize;
- (void)setHasFirstPassPeakScoreHS:(bool)arg1;
- (void)setHasFirstPassPeakScoreJS:(bool)arg1;
- (void)setHasFirstPassTriggerSource:(bool)arg1;
- (void)setHasHwSampleRate:(bool)arg1;
- (void)setHasInvocationTypeID:(bool)arg1;
- (void)setHasKeywordThresholdHS:(bool)arg1;
- (void)setHasKeywordThresholdJS:(bool)arg1;
- (void)setHasMitigationScore:(bool)arg1;
- (void)setHasRecognizerScoreHS:(bool)arg1;
- (void)setHasRecognizerScoreJS:(bool)arg1;
- (void)setHasRepetitionSimilarityScore:(bool)arg1;
- (void)setHasTdSpeakerRecognizerCombinedScore:(bool)arg1;
- (void)setHasTdSpeakerRecognizerCombinedThresholdHS:(bool)arg1;
- (void)setHasTdSpeakerRecognizerCombinedThresholdJS:(bool)arg1;
- (void)setHasTriggerScoreHS:(bool)arg1;
- (void)setHasTriggerScoreJS:(bool)arg1;
- (double)tdSpeakerRecognizerCombinedScore;
- (double)tdSpeakerRecognizerCombinedThresholdHS;
- (double)tdSpeakerRecognizerCombinedThresholdJS;
- (double)triggerScoreHS;
- (double)triggerScoreJS;
- (void)writeTo:(id)arg1;

@end