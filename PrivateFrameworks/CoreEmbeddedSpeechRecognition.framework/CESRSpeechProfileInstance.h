/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/CoreEmbeddedSpeechRecognition.framework/CoreEmbeddedSpeechRecognition
 */

@interface CESRSpeechProfileInstance : NSObject {
    CCSetChangeRegistry * _changeRegistry;
    int  _dataProtectionClass;
    NSLocale * _locale;
    CESRDictionaryLog * _log;
}

@property (nonatomic, readonly) CCSetChangeRegistry *changeRegistry;
@property (nonatomic, readonly) NSLocale *locale;

+ (id)loadAllInstancesAtSpeechProfileSiteURL:(id)arg1 error:(id*)arg2;
+ (id)loadInstanceAtSpeechProfileSiteURL:(id)arg1 locale:(id)arg2 error:(id*)arg3;
+ (id)loadOrCreateInstanceAtSpeechProfileSiteURL:(id)arg1 locale:(id)arg2 options:(unsigned char)arg3 error:(id*)arg4;

- (void).cxx_destruct;
- (id)_changeRegistryFilename;
- (bool)_updateOptions:(unsigned char)arg1 error:(id*)arg2;
- (id)_updateVersion:(id)arg1 forKeys:(id)arg2 logKey:(id)arg3;
- (id)changeRegistry;
- (id)description;
- (unsigned long long)hash;
- (id)init;
- (id)initWithSpeechProfileSiteURL:(id)arg1 create:(bool)arg2 locale:(id)arg3 options:(unsigned char)arg4 error:(id*)arg5;
- (bool)isEqual:(id)arg1;
- (bool)isEqualToInstance:(id)arg1;
- (id)lastCompletedVersionForSpeechCategory:(id)arg1;
- (id)lastRegisteredVersionForSpeechCategory:(id)arg1;
- (id)locale;
- (unsigned char)options;
- (void)recordUpdateCompletedForSpeechCategories:(id)arg1 version:(id)arg2;
- (void)registerUpdateForSpeechCategories:(id)arg1 version:(id)arg2;
- (bool)remove:(id*)arg1;
- (bool)updateOptions:(unsigned char)arg1 error:(id*)arg2;

@end
