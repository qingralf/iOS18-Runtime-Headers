/* Generated by RuntimeBrowser.
 */

@protocol HKMCExperienceStoreStoreServer <NSObject>

@required

- (void)remote_deleteAllPregnancySetupRecordsWithCompletion:(void *)arg1; // needs 1 arg types, found 7: id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, bool, NSError *, void*
- (void)remote_deleteSetupRecord:(void *)arg1 completion:(void *)arg2; // needs 2 arg types, found 8: HKMCPregnancyModeSetupCompletionRecord *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, bool, NSError *, void*
- (void)remote_getCachedPregnancyModelWithCompletion:(void *)arg1; // needs 1 arg types, found 7: id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, HKMCCachedPregnancyModel *, NSError *, void*
- (void)remote_getExperienceModelWithCompletion:(void *)arg1; // needs 1 arg types, found 7: id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, HKMCExperienceModel *, NSError *, void*
- (void)remote_persistSetupRecord:(void *)arg1 completion:(void *)arg2; // needs 2 arg types, found 8: HKMCPregnancyModeSetupCompletionRecord *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, bool, NSError *, void*
- (void)remote_persistSetupRecord:(void *)arg1 mergeWith:(void *)arg2 completion:(void *)arg3; // needs 3 arg types, found 9: HKMCPregnancyModeSetupCompletionRecord *, NSUUID *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, bool, NSError *, void*
- (void)remote_startObservingChangesWithCompletion:(void *)arg1; // needs 1 arg types, found 7: id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, bool, NSError *, void*
- (void)remote_stopObservingChanges;

@end