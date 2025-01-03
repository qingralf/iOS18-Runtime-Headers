/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/SpeakerRecognition.framework/SpeakerRecognition
 */

@interface SSRRPISamplingXPCService : NSObject

+ (id)_createConnection;
+ (void)_invalidateConnection:(id)arg1;
+ (id)getAudioIdWithRequestId:(id)arg1 languageCode:(id)arg2 date:(id)arg3 error:(id*)arg4;
+ (unsigned long long)getEnrollmentSelectionStatusWithLocale:(id)arg1 error:(id*)arg2;
+ (id)getRemoteObjectProxyWithConnection:(id)arg1 errorHandler:(id /* block */)arg2;
+ (void)markFinishStatusForAllWithCompletion:(id /* block */)arg1;
+ (void)removeAllSamplingMetaDataWithCompletion:(id /* block */)arg1;
+ (void)removeMappingOnAndBefore:(id)arg1 completion:(id /* block */)arg2;
+ (void)removeMappingWithLocale:(id)arg1 date:(id)arg2 completion:(id /* block */)arg3;
+ (void)removeRequestIdToAudioIdMappingWithCompletion:(id /* block */)arg1;
+ (void)updateStatus:(id)arg1 languageCode:(id)arg2 completion:(id /* block */)arg3;
+ (void)writeIntoMappingWithRequestId:(id)arg1 audioId:(id)arg2 date:(id)arg3 locale:(id)arg4 completion:(id /* block */)arg5;

@end
