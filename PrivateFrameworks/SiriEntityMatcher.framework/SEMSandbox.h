/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/SiriEntityMatcher.framework/SiriEntityMatcher
 */

@interface SEMSandbox : NSObject {
    SEMAuxiliaryFilesystemBase * _base;
    SEMIndexSiteManager * _indexSiteManager;
    SEMIndexSiteReadAccess * _indexSiteReadAccess;
    NSObject<OS_dispatch_queue> * _queue;
    SEMSandboxIndexSiteCache * _readerCache;
    NSURL * _rootDirectoryURL;
    NSString * _sandboxBaseName;
    NSString * _sandboxId;
    bool  _sandboxIsSaved;
    NSObject<CCSetEnumerator> * _setEnumerator;
    SEMSandboxSettings * _settings;
    NSMutableDictionary * _sharedOverrideCache;
    SEMSandboxIndexSiteCache * _writerCache;
}

@property (nonatomic, readonly) SEMIndexSiteManager *indexSiteManager;
@property (nonatomic, readonly) SEMSandboxIndexSiteCache *readerCache;
@property (nonatomic, readonly) NSString *sandboxId;
@property (nonatomic, readonly) SEMSandboxIndexSiteCache *writerCache;

+ (id)_sandboxBaseNameWithId:(id)arg1;
+ (void)initialize;
+ (id)loadWithSandboxId:(id)arg1 error:(id*)arg2;
+ (id)sandboxWithKVProfile:(id)arg1 locale:(id)arg2 error:(id*)arg3;
+ (id)sandboxWithRawSpeechProfile:(id)arg1 error:(id*)arg2;
+ (id)sandboxWithSerializedSets:(id)arg1 locale:(id)arg2 error:(id*)arg3;
+ (id)sandboxWithSetEnumerator:(id)arg1 locale:(id)arg2 error:(id*)arg3;

- (void).cxx_destruct;
- (id)_loadSavedProfile;
- (id)_loadSavedSettings;
- (bool)_saveSettings;
- (id)appCustomVocabularySearcher;
- (id)appCustomVocabularySearcherWithUserId:(id)arg1;
- (void)dealloc;
- (id)indexMatcher;
- (id)indexSiteManager;
- (id)init;
- (id)initWithSandboxId:(id)arg1 sandboxIsSaved:(bool)arg2 setEnumerator:(id)arg3 settings:(id)arg4;
- (id)readerCache;
- (void)reset;
- (id)rootDirectoryURL;
- (id)sandboxId;
- (id)save;
- (id)writerCache;

@end