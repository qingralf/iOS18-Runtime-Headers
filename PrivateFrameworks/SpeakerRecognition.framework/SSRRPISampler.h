/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/SpeakerRecognition.framework/SpeakerRecognition
 */

@interface SSRRPISampler : NSObject <SSRRPISamplingXPCProtocol> {
    NSObject<OS_dispatch_queue> * _queue;
}

+ (void)deleteAllRPISampledData;
+ (id)sharedInstance;

- (void).cxx_destruct;
- (void)_handleVoiceProfileRPICleanupEvent;
- (void)getAudioIdWithRequestId:(id)arg1 languageCode:(id)arg2 date:(id)arg3 completion:(id /* block */)arg4;
- (void)getEnrollmentSelectionStatusWithLocale:(id)arg1 completion:(id /* block */)arg2;
- (id)init;
- (void)markFinishStatusForAllWithCompletion:(id /* block */)arg1;
- (void)removeAllSamplingMetaDataWithCompletion:(id /* block */)arg1;
- (void)removeMappingOnAndBefore:(id)arg1 completion:(id /* block */)arg2;
- (void)removeMappingWithLocale:(id)arg1 date:(id)arg2 completion:(id /* block */)arg3;
- (void)removeRequestIdToAudioIdMappingWithCompletion:(id /* block */)arg1;
- (void)updateStatus:(id)arg1 languageCode:(id)arg2 completion:(id /* block */)arg3;
- (void)writeIntoMappingWithRequestId:(id)arg1 audioId:(id)arg2 date:(id)arg3 locale:(id)arg4 completion:(id /* block */)arg5;

@end
