/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/PhotoLibraryServicesCore.framework/PhotoLibraryServicesCore
 */

@interface PLPhotoLibraryPathManagerDCIM : PLPhotoLibraryPathManagerCore {
    bool  _assetAlbumOrderStructurePathCreated;
    NSString * _changeStoreDatabasePath;
    NSString * _cmmAssetsDirectory;
    NSString * _cplAssetsDirectory;
    NSString * _dcimDirectory;
    NSString * _externalDirectory;
    PLImportFileManager * _importFileManager;
    NSString * _internalDirectory;
    NSString * _journalsDirectory;
    PLLazyObject * _lazyPathManagerForUBFOnDCIM;
    NSString * _lockedDirectory;
    NSString * _partialVideoDirectory;
    unsigned long long  _persistedAlbumDataDirectoryExists;
    NSString * _photoDataAnalyticsDirectory;
    NSString * _photoDataCachesDirectory;
    NSString * _photoDataComputeDirectory;
    NSString * _photoDataDirectory;
    NSString * _photoDataSearchDirectory;
    NSString * _photoDataSmartSharingDirectory;
    NSString * _privateDirectory;
    NSString * _projectsDirectory;
    NSString * _restoreInfoDirectory;
    PLSimpleDCIMDirectory * _simpleDCIMDirectory;
    NSString * _thumbnailsDirectory;
    NSString * _thumbnailsV2Directory;
    NSString * _thumbnailsVideoKeyFramesDirectory;
}

@property (nonatomic, retain) PLImportFileManager *importFileManager;

+ (id)allPhotosPathsOnThisDevice;
+ (id)defaultDCIMPath;

- (void).cxx_destruct;
- (id)_externalDirectoryWithBundleIdentifier:(id)arg1 createIfNeeded:(bool)arg2;
- (id)addToPath:(id)arg1 leafType:(unsigned char)arg2 additionalPathComponents:(id)arg3;
- (id)assetAbbreviatedMetadataDirectoryForDirectory:(id)arg1 type:(unsigned char)arg2 bundleScope:(unsigned short)arg3;
- (id)assetBaseFilenameForAdjustmentFilePath:(id)arg1;
- (id)assetMainFilePathWithDirectory:(id)arg1 filename:(id)arg2 bundleScope:(unsigned short)arg3;
- (id)basePrivateDirectoryPath;
- (id)captureSessionPathsWithClientAuthorization:(id)arg1;
- (id)clientOwnedDirectoryPathsForClientAccess:(id)arg1;
- (id)cloudRestoreBackgroundPhaseInProgressTokenPath;
- (id)cloudRestoreCompleteTokenPath;
- (id)cloudRestoreContextPath;
- (id)cloudRestoreForegroundPhaseCompleteTokenPath;
- (id)convertPhotoLibraryPathType:(unsigned char)arg1;
- (id)createPathsForNewLibraries;
- (bool)ensureFileProviderSyncExclusionAttributeIsSetWithError:(id*)arg1;
- (void)enumerateBundleScopesWithBlock:(id /* block */)arg1;
- (id)externalDirectoryWithSubType:(unsigned char)arg1 leafType:(unsigned char)arg2 additionalPathComponents:(id)arg3;
- (id)getImportFileManager;
- (id)iTunesPhotosLastSyncMetadataFilePath;
- (id)iTunesPhotosSyncCurrentLibraryUUIDPath;
- (id)iTunesPhotosSyncDirectory;
- (id)iTunesPhotosSyncMetadataFilePath;
- (id)iTunesSyncedAssetMetadataThumbnailsDirectory;
- (id)iTunesSyncedAssetSmallThumbnailsDirectory;
- (id)iTunesSyncedAssetsDirectory;
- (id)iTunesSyncedFaceAlbumThumbnailsDirectory;
- (id)iTunesSyncedFaceDataDirectory;
- (id)importFileManager;
- (id)initWithLibraryURL:(id)arg1 bundleScope:(unsigned short)arg2;
- (id)internalDirectoryWithSubType:(unsigned char)arg1 additionalPathComponents:(id)arg2;
- (id)modelRestorePostProcessingCompleteTokenPath;
- (void)obtainAccessAndWaitWithFileWithIdentifier:(id)arg1 mode:(unsigned char)arg2 toURLWithHandler:(id /* block */)arg3;
- (id)pathToAssetAlbumOrderStructure;
- (id)pathToAssetsToAlbumsMapping;
- (id)pathsForClientAccess:(id)arg1;
- (id)pathsForExternalWriters;
- (id)pathsForFinderSyncFilesystemSizeCalculation;
- (id)pathsForLibraryFilesystemSizeCalculation;
- (id)pathsForPermissionCheck;
- (id)pathsGroupedByAssetBasePathFromFilePaths:(id)arg1 populateInvalidAdjustmentPaths:(id)arg2;
- (id)persistedAlbumDataDirectoryCreateIfNeeded:(bool)arg1 error:(id*)arg2;
- (id)photoDirectoryWithType:(unsigned char)arg1 leafType:(unsigned char)arg2 additionalPathComponents:(id)arg3;
- (unsigned char)photoLibraryPathTypeForBundleScope:(unsigned short)arg1;
- (id)photoMetadataDirectory;
- (id)photoMetadataDirectoryForMediaInMainDirectory:(id)arg1;
- (id)photoMutationsDirectory;
- (id)photosDatabasePath;
- (id)privateCacheDirectoryWithSubType:(unsigned char)arg1 leafType:(unsigned char)arg2 additionalPathComponents:(id)arg3;
- (id)privateDirectoryWithSubType:(unsigned char)arg1 leafType:(unsigned char)arg2 additionalPathComponents:(id)arg3;
- (id)readOnlyUrlWithIdentifier:(id)arg1;
- (void)setExtendedAttributesWithIdentifier:(id)arg1;
- (void)setExtendedAttributesWithIdentifier:(id)arg1 andURL:(id)arg2;
- (void)setImportFileManager:(id)arg1;
- (bool)shouldUseFileIdentifierForBundleScope:(unsigned short)arg1;
- (id)simpleDCIMDirectory;
- (id)syncInfoPath;
- (id)unlockedCaptureSessionPaths;
- (bool)updateTimeMachineExclusionAttributeForExcludePath:(id)arg1 error:(id*)arg2;

@end
