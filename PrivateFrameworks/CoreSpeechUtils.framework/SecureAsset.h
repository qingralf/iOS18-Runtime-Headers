/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/CoreSpeechUtils.framework/CoreSpeechUtils
 */

@interface SecureAsset : NSObject {
    void assetFileName;
    void assetLoader;
    void cachedInfo;
    void resourcePath;
}

@property (nonatomic, readonly) NSString *resourcePath;

- (void).cxx_destruct;
- (id)assetPath;
- (bool)containsCategoryWithCategory:(id)arg1;
- (bool)containsKeyWithKey:(id)arg1 category:(id)arg2;
- (bool)getBoolWithKey:(id)arg1 category:(id)arg2 defaultValue:(bool)arg3;
- (id)getConfigDataWithFileName:(id)arg1 prefix:(id)arg2;
- (id)getDataWithFileName:(id)arg1;
- (id)getDictionaryArrayWithKey:(id)arg1 category:(id)arg2;
- (id)getDictionaryWithKey:(id)arg1 category:(id)arg2;
- (float)getFloatWithKey:(id)arg1 category:(id)arg2 defaultValue:(float)arg3;
- (long long)getIntWithKey:(id)arg1 category:(id)arg2 defaultValue:(long long)arg3;
- (id)getMemoryIndexWithKey:(id)arg1 category:(id)arg2;
- (id)getStringArrayWithKey:(id)arg1 category:(id)arg2;
- (id)getStringWithCategory:(id)arg1;
- (id)getStringWithKey:(id)arg1 category:(id)arg2;
- (id)getStringWithKey:(id)arg1 category:(id)arg2 defaultValue:(id)arg3;
- (unsigned long long)getUnsignedLongLongValueWithKey:(id)arg1 category:(id)arg2 defaultValue:(unsigned long long)arg3;
- (id)init;
- (id)initWithResourcePath:(id)arg1 assetFileName:(id)arg2;
- (id)resourcePath;

@end