/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/CoreKnowledge.framework/CoreKnowledge
 */

@interface CKVTaskManagerInfo : NSObject {
    CCSetChangeRegistry * _changeRegistry;
    NSURL * _donateDirectory;
    KVDictionaryLog * _log;
    NSDate * _migrationStartTime;
    NSObject<OS_dispatch_queue> * _queue;
}

@property (nonatomic, readonly) CCSetChangeRegistry *changeRegistry;
@property (nonatomic, readonly) NSURL *donateDirectory;

- (void).cxx_destruct;
- (id)changeRegistry;
- (bool)clear:(id*)arg1;
- (id)dictationLanguageCodes;
- (bool)didCompleteMigrationMoreRecentlyThanMaintenance;
- (id)donateDirectory;
- (id)initWithRootDirectoryURL:(id)arg1 error:(id*)arg2;
- (id)lastMaintenance;
- (bool)recordMaintenanceCompleted:(id*)arg1;
- (bool)recordMigrationCompletedWithSettings:(id)arg1 error:(id*)arg2;
- (id)schemaVersion;
- (bool)shouldRunMigration;
- (id)siriLanguageCode;
- (bool)updateSchemaVersion:(id)arg1 error:(id*)arg2;
- (bool)updateSiriLanguageCode:(id)arg1 dictationLanguageCodes:(id)arg2 error:(id*)arg3;

@end