/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/CoreEmbeddedSpeechRecognition.framework/CoreEmbeddedSpeechRecognition
 */

@interface CESRSpeechProfileSiteWriter : NSObject {
    CESRSpeechProfileSettings * _settings;
    CESRSpeechProfileSite * _speechProfileSite;
}

- (void).cxx_destruct;
- (id)_calculateSets:(id)arg1 applicableToGroup:(id)arg2 withAllSets:(id)arg3;
- (id)_filterSets:(id)arg1 supportedByInstance:(id)arg2;
- (bool)_refreshRankedItemCaches:(id /* block */)arg1;
- (bool)_removeProfileInstance:(id)arg1;
- (bool)_shouldDeferRadioStationUpdate;
- (bool)_shouldDeferUpdateForInstance:(id)arg1 categoryGroup:(id)arg2 sets:(id)arg3;
- (id)_sortInstancesByLocale:(id)arg1;
- (bool)_updateProfileInstance:(id)arg1 categoryGroup:(id)arg2 sets:(id)arg3 shouldDefer:(id /* block */)arg4;
- (bool)_updateProfilesWithSets:(id)arg1 allSets:(id)arg2 shouldDefer:(id /* block */)arg3;
- (bool)_verifyProfileInstance:(id)arg1 locale:(id)arg2 options:(unsigned char)arg3 allSets:(id)arg4 shouldDefer:(id /* block */)arg5;
- (bool)_verifyProfileInstance:(id)arg1 withAllSets:(id)arg2 shouldDefer:(id /* block */)arg3;
- (bool)_verifyProfilesWithAllSets:(id)arg1 shouldDefer:(id /* block */)arg2;
- (id)description;
- (id)initWithSpeechProfileSite:(id)arg1 settings:(id)arg2;
- (void)logCurrentStateWithAllSets:(id)arg1;
- (bool)performVerificationWithAllSets:(id)arg1 shouldDefer:(id /* block */)arg2;
- (bool)processUpdatesToSets:(id)arg1 allSets:(id)arg2 shouldDefer:(id /* block */)arg3;
- (bool)rebuildWithAllSets:(id)arg1 shouldDefer:(id /* block */)arg2;

@end
