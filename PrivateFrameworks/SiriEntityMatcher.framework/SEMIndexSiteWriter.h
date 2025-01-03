/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/SiriEntityMatcher.framework/SiriEntityMatcher
 */

@interface SEMIndexSiteWriter : NSObject {
    SEMIndexUpdaterConfiguration * _fts;
    SEMIndexSite * _indexSite;
    SEMSettings * _settings;
    SEMDictionaryLog * _siteInfo;
    SEMIndexUpdaterConfiguration * _skit;
}

@property (nonatomic, readonly) SEMIndexSite *indexSite;

- (void).cxx_destruct;
- (id)_applicableSets:(id)arg1 toUpdaterClass:(Class)arg2;
- (id)_indexDirectory:(id)arg1;
- (bool)_indexUpdatesToSets:(id)arg1 allSetsBlock:(id /* block */)arg2 shouldDefer:(id /* block */)arg3;
- (void)_initUpdaterConfiguration;
- (bool)_loadChangeRegistry:(id)arg1 indexDirectory:(id)arg2 createIfNotExists:(bool)arg3 error:(id*)arg4;
- (id)_loadSiteInfo:(id*)arg1;
- (bool)_logCurrentStateWithAllSetsBlock:(id /* block */)arg1;
- (bool)_performVerificationWithAllSetsBlock:(id /* block */)arg1 shouldDefer:(id /* block */)arg2;
- (bool)_recordSiteInfoObject:(id)arg1 forKey:(id)arg2 error:(id*)arg3;
- (bool)_resetSiteDirectory;
- (id)_siteInfoObjectForKey:(id)arg1 error:(id*)arg2;
- (bool)_updateIndex:(id)arg1 mode:(unsigned char)arg2 sets:(id)arg3 shouldDefer:(id /* block */)arg4 shouldRebuild:(bool*)arg5;
- (bool)_updateOrRebuildIndex:(id)arg1 updatedSets:(id)arg2 allSetsBlock:(id /* block */)arg3 shouldDefer:(id /* block */)arg4;
- (id)description;
- (id)indexSite;
- (id)initWithIndexSite:(id)arg1 settings:(id)arg2;
- (id)lastRecordedDateOfOperation:(unsigned char)arg1 error:(id*)arg2;
- (bool)performOperation:(unsigned char)arg1 updatedSets:(id)arg2 allSetsBlock:(id /* block */)arg3 shouldDefer:(id /* block */)arg4;
- (bool)recordDate:(id)arg1 ofOperation:(unsigned char)arg2 error:(id*)arg3;
- (bool)recordSchemaVersion:(id)arg1 error:(id*)arg2;
- (bool)resetSiteDirectory;
- (id)schemaVersion:(id*)arg1;

@end
