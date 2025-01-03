/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/SafariShared.framework/SafariShared
 */

@interface WBSBrowsingDataExportController : NSObject {
    NSSet * _profileIdentifiersToExportFrom;
    unsigned long long  _selectedBrowsingDataExportTypes;
}

@property (nonatomic, readonly, copy) NSString *exportErrorAlertMessage;
@property (nonatomic, readonly, copy) NSString *exportErrorAlertTitle;
@property (nonatomic, copy) NSSet *profileIdentifiersToExportFrom;
@property (nonatomic) unsigned long long selectedBrowsingDataExportTypes;

+ (id)defaultExportFolderName;
+ (id)exportDescriptionText;
+ (id)fileURLFromExportFolderURL:(id)arg1 profileTitle:(id)arg2 forBrowsingDataExportType:(unsigned long long)arg3;
+ (id)iconForBrowsingDataExportType:(unsigned long long)arg1;
+ (id)labelForBrowsingDataExportType:(unsigned long long)arg1 withCount:(unsigned long long)arg2;
+ (id)orderedBrowsingDataExportTypesForDisplay;
+ (id)titleForBrowsingDataExportType:(unsigned long long)arg1;

- (void).cxx_destruct;
- (void)_exportBookmarksToFileWithURL:(id)arg1 completionHandler:(id /* block */)arg2;
- (void)_exportExtensionsToDirectoryWithURL:(id)arg1 completionHandler:(id /* block */)arg2;
- (void)_exportHistoryToDirectoryWithURL:(id)arg1 completionHandler:(id /* block */)arg2;
- (void)_exportToTemporaryFolderWithURL:(id)arg1 completionHandler:(id /* block */)arg2;
- (unsigned long long)_numberOfBookmarksToBeExported;
- (unsigned long long)_numberOfExtensionsToBeExported;
- (void)_numberOfHistorySitesToBeExportedWithCompletionHandler:(id /* block */)arg1;
- (void)computeNumberOfItemsToBeExportedForBrowsingDataExportType:(unsigned long long)arg1 usingBlock:(id /* block */)arg2;
- (id)exportErrorAlertMessage;
- (id)exportErrorAlertTitle;
- (void)exportToZipArchiveAtURL:(id)arg1 completionHandler:(id /* block */)arg2;
- (id)profileIdentifiersToExportFrom;
- (unsigned long long)selectedBrowsingDataExportTypes;
- (void)setProfileIdentifiersToExportFrom:(id)arg1;
- (void)setSelectedBrowsingDataExportTypes:(unsigned long long)arg1;

@end
