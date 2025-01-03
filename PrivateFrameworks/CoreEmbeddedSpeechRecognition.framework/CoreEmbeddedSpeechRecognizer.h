/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/CoreEmbeddedSpeechRecognition.framework/CoreEmbeddedSpeechRecognition
 */

@interface CoreEmbeddedSpeechRecognizer : NSObject <CESRSpeechServiceDelegate, CoreEmbeddedSpeechRecognizerProvider> {
    NSString * _currentLanguage;
    <CoreEmbeddedSpeechRecognizerDelegate> * _delegate;
    NSXPCConnection * _esConnection;
    bool  _hasRecognizedAnything;
    unsigned char  _instanceUUID;
    NSData * _preheatedProfile;
    NSString * _preheatedProfileAssetPath;
    NSObject<OS_dispatch_queue> * _queue;
    bool  _recognitionActive;
    NSError * _recognitionError;
}

@property (readonly, copy) NSString *debugDescription; /* unknown property attribute: ? */
@property (nonatomic, readonly) <CoreEmbeddedSpeechRecognizerDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

+ (void)cleanupUnusedSubscriptions;
+ (void)compileAllAssetsWithType:(unsigned long long)arg1 completion:(id /* block */)arg2;
+ (void)compilePrimaryAssistantAssetWithCompletion:(id /* block */)arg1;
+ (id)dictionaryWithContentsProfilePathForLanguage:(id)arg1 errorOut:(id*)arg2;
+ (void)forceCooldownIfIdle;
+ (void)handlePostUpgradeSubscriptions;
+ (id)offlineDictationStatusIgnoringCache:(bool)arg1 error:(id*)arg2;
+ (id)profilePathForLanguage:(id)arg1 errorOut:(id*)arg2;
+ (bool)purgeInstalledAssetsExceptLanguages:(id)arg1 assetType:(unsigned long long)arg2 error:(id*)arg3;
+ (id)purgeInstalledAssetsExceptLanguages:(id)arg1 error:(id*)arg2;
+ (void)setAssetsPurgeabilityExceptLanguages:(id)arg1 assetType:(unsigned long long)arg2;
+ (id)speechProfileDataLastModifiedDataForLanguage:(id)arg1;

- (void).cxx_destruct;
- (id)_connection;
- (id)_newConnection;
- (id)_service;
- (id)_serviceWithFunctionName:(id)arg1 errorHandler:(id /* block */)arg2;
- (id)_synchronousServiceWithErrorHandler:(id /* block */)arg1;
- (void)addAudioPacket:(id)arg1;
- (void)addAudioPacket:(id)arg1 packetRecordedTime:(id)arg2 packetReadyUpstreamTime:(id)arg3;
- (void)createSpeechProfileWithLanguage:(id)arg1 modelOverridePath:(id)arg2 JSONData:(id)arg3 completion:(id /* block */)arg4;
- (void)dealloc;
- (id)delegate;
- (void)deleteAllDESRecordsForDictationPersonalization;
- (void)fetchUserDataForLanguage:(id)arg1 completion:(id /* block */)arg2;
- (void)finishAudio;
- (void)getOfflineAssetStatusIgnoringCache:(bool)arg1 assetType:(unsigned long long)arg2 withCompletion:(id /* block */)arg3;
- (void)getOfflineAssetStatusIgnoringCache:(bool)arg1 assetType:(unsigned long long)arg2 withDetailedStatus:(bool)arg3 withCompletion:(id /* block */)arg4;
- (void)getOfflineDictationStatusIgnoringCache:(bool)arg1 withCompletion:(id /* block */)arg2;
- (void)getOfflineDictationStatusWithCompletion:(id /* block */)arg1;
- (id)init;
- (id)initWithDelegate:(id)arg1 instanceUUID:(unsigned char)arg2;
- (unsigned char*)instanceUUID;
- (void)invalidate;
- (void)invalidatePersonalizedLM;
- (void)invalidateUaapLM;
- (id)modelPropertiesForAssetConfig:(id)arg1 error:(id*)arg2;
- (void)pauseRecognition;
- (void)preheatSpeechRecognitionWithAssetConfig:(id)arg1 preheatSource:(id)arg2 modelOverrideURL:(id)arg3;
- (void)preheatSpeechRecognitionWithLanguage:(id)arg1 modelOverrideURL:(id)arg2;
- (void)readProfileAndUserDataWithLanguage:(id)arg1 allowOverride:(bool)arg2 completion:(id /* block */)arg3;
- (void)redecodeWithAudioDatas:(id)arg1 language:(id)arg2 task:(id)arg3 samplingRate:(unsigned long long)arg4 completion:(id /* block */)arg5;
- (void)removePersonalizedLMForFidesOnly:(bool)arg1;
- (void)requestEagerResult;
- (void)resetDESWithCompletion:(id /* block */)arg1;
- (void)resumeRecognitionWithPrefixText:(id)arg1 postfixText:(id)arg2 selectedText:(id)arg3;
- (void)runCorrectedTextEvaluationWithAudioDatas:(id)arg1 recordDatas:(id)arg2 language:(id)arg3 samplingRate:(unsigned long long)arg4 caseSensitive:(bool)arg5 skipLME:(bool)arg6 wordSenseAccessListSet:(id)arg7 completion:(id /* block */)arg8;
- (void)runEvaluationWithDESRecordDatas:(id)arg1 language:(id)arg2 recipe:(id)arg3 attachments:(id)arg4 fidesPersonalizedLMPath:(id)arg5 fidesPersonalizedLMTrainingAsset:(id)arg6 scrubResult:(bool)arg7 completion:(id /* block */)arg8;
- (void)runEvaluationWithDESRecordDatas:(id)arg1 language:(id)arg2 recipe:(id)arg3 fidesPersonalizedLMPath:(id)arg4 fidesPersonalizedLMTrainingAsset:(id)arg5 scrubResult:(bool)arg6 completion:(id /* block */)arg7;
- (void)sendSpeechCorrectionInfo:(id)arg1 interactionIdentifier:(id)arg2;
- (oneway void)speechServiceDidFinishRecognitionWithStatistics:(id)arg1 error:(id)arg2;
- (oneway void)speechServiceDidProcessAudioDuration:(double)arg1;
- (oneway void)speechServiceDidProduceEndpointFeaturesWithWordCount:(long long)arg1 trailingSilenceDuration:(long long)arg2 eosLikelihood:(double)arg3 pauseCounts:(id)arg4 silencePosterior:(double)arg5 processedAudioDurationInMilliseconds:(long long)arg6 acousticEndpointerScore:(double)arg7;
- (oneway void)speechServiceDidProduceLoggablePackage:(id)arg1;
- (oneway void)speechServiceDidRecognizeFinalResultCandidatePackage:(id)arg1;
- (oneway void)speechServiceDidRecognizePackage:(id)arg1;
- (oneway void)speechServiceDidRecognizePackage:(id)arg1 withMetadata:(id)arg2;
- (oneway void)speechServiceDidRecognizePartialPackage:(id)arg1 withMetadata:(id)arg2;
- (oneway void)speechServiceDidRecognizeRawEagerRecognitionCandidate:(id)arg1;
- (oneway void)speechServiceDidRecognizeTokens:(id)arg1;
- (oneway void)speechServiceDidRecognizeTokens:(id)arg1 withMetadata:(id)arg2;
- (oneway void)speechServiceDidRecognizeVoiceCommandCandidatePackage:(id)arg1 withMetadata:(id)arg2;
- (oneway void)speechServiceDidSelectRecognitionModelWithModelProperties:(id)arg1;
- (void)startMissingAssetDownload;
- (void)startSpeechRecognitionWithParameters:(id)arg1 didStartHandler:(id /* block */)arg2;
- (void)startSpeechRecognitionWithParameters:(id)arg1 didStartHandlerWithInfo:(id /* block */)arg2;
- (void)stopAudioDecoding;
- (void)updateSpeechProfileWithLanguage:(id)arg1 modelOverridePath:(id)arg2 completion:(id /* block */)arg3;
- (void)writeUaapOovsForLanguage:(id)arg1 bundleId:(id)arg2 customProns:(id)arg3 newOovs:(id)arg4 completion:(id /* block */)arg5;

@end
