/* Generated by RuntimeBrowser.
 */

@protocol CESRSpeechProfileSiteManagement <NSObject>

@required

- (bool)clearAllState;
- (bool)clearSpeechProfileSiteWithUserId:(NSString *)arg1;
- (bool)handleAssetUpdate;
- (bool)handleSettingsChange;
- (void)handleSysdiagnoseStarted;
- (bool)handleUpdatedSets:(NSArray *)arg1;
- (bool)performMaintenance:(void *)arg1; // needs 1 arg types, found 5: id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, bool, id /* block */, void*
- (bool)rebuildAllSpeechProfilesWithSerializedSets:(NSArray *)arg1;
- (bool)rebuildSpeechProfileSiteWithUserId:(NSString *)arg1;

@end