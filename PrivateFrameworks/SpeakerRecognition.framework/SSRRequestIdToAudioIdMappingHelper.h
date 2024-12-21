/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/SpeakerRecognition.framework/SpeakerRecognition
 */

@interface SSRRequestIdToAudioIdMappingHelper : NSObject {
    SSRVoiceProfileStorePrefs * _storePrefs;
}

@property (nonatomic, retain) SSRVoiceProfileStorePrefs *storePrefs;

+ (id)_convertNestedDictionaryToMutable:(id)arg1;
+ (id)_loadRequestIdToAudioIdMappingFromPlist;
+ (void)_writeMappingIntoPlist:(id)arg1;
+ (id)getAudioIdWithRequestId:(id)arg1 languageCode:(id)arg2 date:(id)arg3 error:(id*)arg4;
+ (void)purgeAllEntriesInSpkeakerIdBiome;
+ (void)removeMapping;
+ (void)removeMappingOnAndBefore:(id)arg1 completion:(id /* block */)arg2;
+ (void)removeMappingWithLocale:(id)arg1 completion:(id /* block */)arg2;
+ (void)removeMappingWithLocale:(id)arg1 date:(id)arg2 completion:(id /* block */)arg3;
+ (void)writeIntoMappingWithRequestId:(id)arg1 audioId:(id)arg2 date:(id)arg3 locale:(id)arg4 completion:(id /* block */)arg5;

- (void).cxx_destruct;
- (void)setStorePrefs:(id)arg1;
- (id)storePrefs;

@end