/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/SpeakerRecognition.framework/SpeakerRecognition
 */

@interface SSRVoiceProfileRetrainerPSRExclave : NSObject <SSRVoiceProfileRetrainer> {
    SecureAsset * _asset;
    float  _bestTriggerScore;
    NSDictionary * _comparativeModels;
    NSURL * _configFilePath;
    NSString * _configVersion;
    SSRVoiceProfileRetrainingContext * _ctx;
    unsigned long long  _currUttLengthInMs;
    unsigned long long  _maximumSpeakerVectors;
    void * _novDetector;
    unsigned long long  _processedAudioDurationMs;
    NSURL * _psrModelFilePath;
    SSRSpeakerRecognitionScorer * _psrScorer;
    NSObject<OS_dispatch_queue> * _queue;
    NSURL * _resourceFilePath;
    unsigned long long  _spIdType;
    SecureSpeakerRecognitionConfig * _speakerRecognitionConfig;
    NSData * _speakerVector;
    unsigned long long  _speakerVectorSize;
    SSRVoiceProfile * _voiceProfile;
}

@property (retain) SecureAsset *asset;
@property (nonatomic) float bestTriggerScore;
@property (nonatomic, retain) NSDictionary *comparativeModels;
@property (nonatomic, retain) NSURL *configFilePath;
@property (nonatomic, retain) NSString *configVersion;
@property (retain) SSRVoiceProfileRetrainingContext *ctx;
@property (nonatomic) unsigned long long currUttLengthInMs;
@property (readonly, copy) NSString *debugDescription; /* unknown property attribute: ? */
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) bool implicitTrainingRequired;
@property (nonatomic) unsigned long long maximumSpeakerVectors;
@property (nonatomic, readonly) NSURL *modelFilePath;
@property (nonatomic) unsigned long long processedAudioDurationMs;
@property (nonatomic, retain) NSURL *psrModelFilePath;
@property (nonatomic, retain) SSRSpeakerRecognitionScorer *psrScorer;
@property (nonatomic, retain) NSObject<OS_dispatch_queue> *queue;
@property (nonatomic, retain) NSURL *resourceFilePath;
@property (nonatomic, readonly) unsigned long long retrainerType;
@property (nonatomic) unsigned long long spIdType;
@property (nonatomic, retain) SecureSpeakerRecognitionConfig *speakerRecognitionConfig;
@property (nonatomic, retain) NSData *speakerVector;
@property (nonatomic) unsigned long long speakerVectorSize;
@property (readonly) Class superclass;
@property (nonatomic, retain) SSRVoiceProfile *voiceProfile;

- (void).cxx_destruct;
- (id)_composeSpeakerConfusionWithScores:(id)arg1 forProfiles:(id)arg2;
- (id)_logSpeakerConfusion:(id)arg1 forProfileArray:(id)arg2 withPrependString:(id)arg3;
- (void)_logSpeakerConfusionWithExplicitScores:(id)arg1 withImplicitScores:(id)arg2 withPurgeUtterances:(unsigned long long)arg3 forProfile:(id)arg4 forConfigVersion:(id)arg5;
- (id)_processAudioFile:(id)arg1;
- (id)_processSpeakerVector:(id)arg1 withSize:(unsigned long long)arg2 withScorers:(id)arg3 processedAudioDurationMs:(unsigned long long)arg4;
- (void)addUtterances:(id)arg1 withPolicy:(id /* block */)arg2 withCompletion:(id /* block */)arg3;
- (id)asset;
- (float)bestTriggerScore;
- (id)comparativeModels;
- (id)configFilePath;
- (id)configVersion;
- (id)ctx;
- (unsigned long long)currUttLengthInMs;
- (void)dealloc;
- (id)description;
- (bool)implicitTrainingRequired;
- (id)initWithVoiceRetrainingContext:(id)arg1;
- (id)initWithVoiceRetrainingContext:(id)arg1 secureAsset:(id)arg2 secureSpeakerRecognitionConfig:(id)arg3;
- (unsigned long long)maximumSpeakerVectors;
- (id)modelFilePath;
- (bool)needsRetrainingWithAudioFiles:(id)arg1;
- (unsigned long long)processedAudioDurationMs;
- (id)psrModelFilePath;
- (id)psrScorer;
- (id)purgeConfusionInformationWithPolicy:(id /* block */)arg1;
- (void)purgeLastSpeakerEmbedding;
- (id)queue;
- (bool)resetModelForRetraining;
- (id)resourceFilePath;
- (unsigned long long)retrainerType;
- (void)setAsset:(id)arg1;
- (void)setBestTriggerScore:(float)arg1;
- (void)setComparativeModels:(id)arg1;
- (void)setConfigFilePath:(id)arg1;
- (void)setConfigVersion:(id)arg1;
- (void)setCtx:(id)arg1;
- (void)setCurrUttLengthInMs:(unsigned long long)arg1;
- (void)setMaximumSpeakerVectors:(unsigned long long)arg1;
- (void)setProcessedAudioDurationMs:(unsigned long long)arg1;
- (void)setPsrModelFilePath:(id)arg1;
- (void)setPsrScorer:(id)arg1;
- (void)setQueue:(id)arg1;
- (void)setResourceFilePath:(id)arg1;
- (void)setSpIdType:(unsigned long long)arg1;
- (void)setSpeakerRecognitionConfig:(id)arg1;
- (void)setSpeakerVector:(id)arg1;
- (void)setSpeakerVectorSize:(unsigned long long)arg1;
- (void)setVoiceProfile:(id)arg1;
- (unsigned long long)spIdType;
- (id)speakerRecognitionConfig;
- (id)speakerVector;
- (unsigned long long)speakerVectorSize;
- (id)voiceProfile;

@end
