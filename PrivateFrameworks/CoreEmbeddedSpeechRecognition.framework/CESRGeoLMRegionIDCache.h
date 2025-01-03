/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/CoreEmbeddedSpeechRecognition.framework/CoreEmbeddedSpeechRecognition
 */

@interface CESRGeoLMRegionIDCache : NSObject {
    NSUserDefaults * _userDefaults;
}

+ (id)sharedInstance;

- (void).cxx_destruct;
- (id)_geoLMAssetsInfoDictForLanguage:(id)arg1;
- (void)_updateUserDefaultsWithGeoLMAssetsInfoDict:(id)arg1 language:(id)arg2;
- (id)_userDefaultsGeoLMAssetsInfoDictKeyForLanguage:(id)arg1;
- (id)init;
- (id)initWithUserDefaults:(id)arg1;
- (id)lastUsedGeoLMRegionIdForLanguage:(id)arg1;
- (id)purgeUnusedGeoLMRegionIdFromCacheForLanguage:(id)arg1;
- (void)purgeUserDefaultsGeoLMAssetsInfoDictForLanguages:(id)arg1;
- (void)updateGeoLMAssetsInfoDictWithRegionId:(id)arg1 language:(id)arg2;

@end
