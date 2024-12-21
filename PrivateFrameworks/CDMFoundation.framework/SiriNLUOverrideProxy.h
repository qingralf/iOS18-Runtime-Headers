/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/CDMFoundation.framework/CDMFoundation
 */

@interface SiriNLUOverrideProxy : NSObject {
    void componentOverrideStore;
    void overrideResults;
    void queue;
    void store;
    void swiftifiedInputs;
}

- (void).cxx_destruct;
- (id)init;
- (id)initWithUseTrie:(bool)arg1 useMemory:(bool)arg2;
- (bool)isOverrideStoreValid;
- (bool)loadComponentOverrideTrieStoreWithTrieFilePath:(id)arg1;
- (bool)loadGlobalOverrideTrieStoreWithTrieFilePath:(id)arg1;
- (id)matchWithInputs:(id)arg1 overrideNamespace:(int)arg2;
- (id)matchWithInputs:(id)arg1 shouldAppend:(bool*)arg2;
- (void)preheatWithLanguageCode:(id)arg1;

@end