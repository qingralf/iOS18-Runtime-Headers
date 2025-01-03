/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
 */

@interface PXSharingSettings : PXSettings {
    bool  _allowCopyingVideos;
    bool  _allowFallbacksWhilePreparing;
    unsigned long long  _confidentialityWarningsVersion;
    bool  _disableMailDrop;
    bool  _disableMetadataCorrections;
    bool  _enableNewActionContextMenu;
    bool  _enableOneUpAnimation;
    bool  _excludeLivenessByDefaultWhenSharing;
    bool  _excludeLocationByDefaultWhenSharing;
    bool  _forceAccessibilityDescriptionMetadataBaking;
    bool  _forceCaptionMetadataBaking;
    bool  _forceDateTimeMetadataBaking;
    bool  _forceLocationMetadataBaking;
    long long  _locationBakingComparisonStrategy;
    unsigned long long  _maxMailPhotoLimit;
    unsigned long long  _maxMessagesAssetLimit;
    bool  _provideGenericTypeIdentifiersForNilActivityTypes;
    bool  _savePhotosBundlesToFilesWithoutExtractingMedia;
    bool  _sendAsAssetBundlesByDefaultWhenSharing;
    bool  _sendAssetURLsToMessages;
    long long  _sharingHeaderLocationDisplayStyle;
    bool  _shouldUpdateFileCreationDatesForRegularExports;
    bool  _shouldUpdateFileCreationDatesForUnmodifiedOriginalExports;
    bool  _showConfidentialityWarnings;
    bool  _showFileRadarButtonOnInternalInstalls;
    bool  _showGlobalLivenessExclusionSwitch;
    bool  _showGlobalLocationExclusionSwitch;
    bool  _showInternalGIFExport;
    bool  _showSendAsAssetBundlesForCMM;
    bool  _showSendAsAssetBundlesForIndividualItems;
    bool  _showSingleVideoDurationInShareSheetHeader;
    bool  _showUnmodifiedOriginalsExportSwitch;
    bool  _simulateCPLNotReadyError;
    bool  _simulateDownloadFailure;
    bool  _simulateError;
    bool  _simulateLowDiskSpaceError;
    bool  _simulateMaxFilesizeLimitForGIFsInSharedAlbumsError;
    bool  _simulateMismatchedExportCounts;
    bool  _simulateSyndicatedResourceUnavailable;
    bool  _simulateUserCloudNotAuthenticated;
    long long  _simulatedErrorType;
}

@property (nonatomic) bool allowCopyingVideos;
@property (nonatomic) bool allowFallbacksWhilePreparing;
@property (nonatomic) unsigned long long confidentialityWarningsVersion;
@property (nonatomic) bool disableMailDrop;
@property (nonatomic) bool disableMetadataCorrections;
@property (nonatomic) bool enableNewActionContextMenu;
@property (nonatomic) bool enableOneUpAnimation;
@property (nonatomic) bool excludeLivenessByDefaultWhenSharing;
@property (nonatomic) bool excludeLocationByDefaultWhenSharing;
@property (nonatomic) bool forceAccessibilityDescriptionMetadataBaking;
@property (nonatomic) bool forceCaptionMetadataBaking;
@property (nonatomic) bool forceDateTimeMetadataBaking;
@property (nonatomic) bool forceLocationMetadataBaking;
@property (nonatomic) long long locationBakingComparisonStrategy;
@property (nonatomic) unsigned long long maxMailPhotoLimit;
@property (nonatomic) unsigned long long maxMessagesAssetLimit;
@property (nonatomic) bool provideGenericTypeIdentifiersForNilActivityTypes;
@property (nonatomic) bool savePhotosBundlesToFilesWithoutExtractingMedia;
@property (nonatomic) bool sendAsAssetBundlesByDefaultWhenSharing;
@property (nonatomic) bool sendAssetURLsToMessages;
@property (nonatomic) long long sharingHeaderLocationDisplayStyle;
@property (nonatomic) bool shouldUpdateFileCreationDatesForRegularExports;
@property (nonatomic) bool shouldUpdateFileCreationDatesForUnmodifiedOriginalExports;
@property (nonatomic) bool showConfidentialityWarnings;
@property (nonatomic) bool showFileRadarButtonOnInternalInstalls;
@property (nonatomic) bool showGlobalLivenessExclusionSwitch;
@property (nonatomic) bool showGlobalLocationExclusionSwitch;
@property (nonatomic) bool showInternalGIFExport;
@property (nonatomic) bool showSendAsAssetBundlesForCMM;
@property (nonatomic) bool showSendAsAssetBundlesForIndividualItems;
@property (nonatomic) bool showSingleVideoDurationInShareSheetHeader;
@property (nonatomic) bool showUnmodifiedOriginalsExportSwitch;
@property (nonatomic) bool simulateCPLNotReadyError;
@property (nonatomic) bool simulateDownloadFailure;
@property (nonatomic) bool simulateError;
@property (nonatomic) bool simulateLowDiskSpaceError;
@property (nonatomic) bool simulateMaxFilesizeLimitForGIFsInSharedAlbumsError;
@property (nonatomic) bool simulateMismatchedExportCounts;
@property (nonatomic) bool simulateSyndicatedResourceUnavailable;
@property (nonatomic) bool simulateUserCloudNotAuthenticated;
@property (nonatomic) long long simulatedErrorType;

+ (id)settingsControllerModule;
+ (id)sharedInstance;

- (bool)allowCopyingVideos;
- (bool)allowFallbacksWhilePreparing;
- (unsigned long long)confidentialityWarningsVersion;
- (id)debugDescription;
- (void)defaultValueDidChangeForKey:(id)arg1;
- (bool)disableMailDrop;
- (bool)disableMetadataCorrections;
- (bool)enableNewActionContextMenu;
- (bool)enableOneUpAnimation;
- (bool)excludeLivenessByDefaultWhenSharing;
- (bool)excludeLocationByDefaultWhenSharing;
- (bool)forceAccessibilityDescriptionMetadataBaking;
- (bool)forceCaptionMetadataBaking;
- (bool)forceDateTimeMetadataBaking;
- (bool)forceLocationMetadataBaking;
- (long long)locationBakingComparisonStrategy;
- (unsigned long long)maxMailPhotoLimit;
- (unsigned long long)maxMessagesAssetLimit;
- (id)parentSettings;
- (bool)provideGenericTypeIdentifiersForNilActivityTypes;
- (bool)savePhotosBundlesToFilesWithoutExtractingMedia;
- (bool)sendAsAssetBundlesByDefaultWhenSharing;
- (bool)sendAssetURLsToMessages;
- (void)setAllowCopyingVideos:(bool)arg1;
- (void)setAllowFallbacksWhilePreparing:(bool)arg1;
- (void)setConfidentialityWarningsVersion:(unsigned long long)arg1;
- (void)setDefaultValues;
- (void)setDisableMailDrop:(bool)arg1;
- (void)setDisableMetadataCorrections:(bool)arg1;
- (void)setEnableNewActionContextMenu:(bool)arg1;
- (void)setEnableOneUpAnimation:(bool)arg1;
- (void)setExcludeLivenessByDefaultWhenSharing:(bool)arg1;
- (void)setExcludeLocationByDefaultWhenSharing:(bool)arg1;
- (void)setForceAccessibilityDescriptionMetadataBaking:(bool)arg1;
- (void)setForceCaptionMetadataBaking:(bool)arg1;
- (void)setForceDateTimeMetadataBaking:(bool)arg1;
- (void)setForceLocationMetadataBaking:(bool)arg1;
- (void)setLocationBakingComparisonStrategy:(long long)arg1;
- (void)setMaxMailPhotoLimit:(unsigned long long)arg1;
- (void)setMaxMessagesAssetLimit:(unsigned long long)arg1;
- (void)setProvideGenericTypeIdentifiersForNilActivityTypes:(bool)arg1;
- (void)setSavePhotosBundlesToFilesWithoutExtractingMedia:(bool)arg1;
- (void)setSendAsAssetBundlesByDefaultWhenSharing:(bool)arg1;
- (void)setSendAssetURLsToMessages:(bool)arg1;
- (void)setSharingHeaderLocationDisplayStyle:(long long)arg1;
- (void)setShouldUpdateFileCreationDatesForRegularExports:(bool)arg1;
- (void)setShouldUpdateFileCreationDatesForUnmodifiedOriginalExports:(bool)arg1;
- (void)setShowConfidentialityWarnings:(bool)arg1;
- (void)setShowFileRadarButtonOnInternalInstalls:(bool)arg1;
- (void)setShowGlobalLivenessExclusionSwitch:(bool)arg1;
- (void)setShowGlobalLocationExclusionSwitch:(bool)arg1;
- (void)setShowInternalGIFExport:(bool)arg1;
- (void)setShowSendAsAssetBundlesForCMM:(bool)arg1;
- (void)setShowSendAsAssetBundlesForIndividualItems:(bool)arg1;
- (void)setShowSingleVideoDurationInShareSheetHeader:(bool)arg1;
- (void)setShowUnmodifiedOriginalsExportSwitch:(bool)arg1;
- (void)setSimulateCPLNotReadyError:(bool)arg1;
- (void)setSimulateDownloadFailure:(bool)arg1;
- (void)setSimulateError:(bool)arg1;
- (void)setSimulateLowDiskSpaceError:(bool)arg1;
- (void)setSimulateMaxFilesizeLimitForGIFsInSharedAlbumsError:(bool)arg1;
- (void)setSimulateMismatchedExportCounts:(bool)arg1;
- (void)setSimulateSyndicatedResourceUnavailable:(bool)arg1;
- (void)setSimulateUserCloudNotAuthenticated:(bool)arg1;
- (void)setSimulatedErrorType:(long long)arg1;
- (long long)sharingHeaderLocationDisplayStyle;
- (bool)shouldUpdateFileCreationDatesForRegularExports;
- (bool)shouldUpdateFileCreationDatesForUnmodifiedOriginalExports;
- (bool)showConfidentialityWarnings;
- (bool)showFileRadarButtonOnInternalInstalls;
- (bool)showGlobalLivenessExclusionSwitch;
- (bool)showGlobalLocationExclusionSwitch;
- (bool)showInternalGIFExport;
- (bool)showSendAsAssetBundlesForCMM;
- (bool)showSendAsAssetBundlesForIndividualItems;
- (bool)showSingleVideoDurationInShareSheetHeader;
- (bool)showUnmodifiedOriginalsExportSwitch;
- (bool)simulateCPLNotReadyError;
- (bool)simulateDownloadFailure;
- (bool)simulateError;
- (bool)simulateLowDiskSpaceError;
- (bool)simulateMaxFilesizeLimitForGIFsInSharedAlbumsError;
- (bool)simulateMismatchedExportCounts;
- (bool)simulateSyndicatedResourceUnavailable;
- (bool)simulateUserCloudNotAuthenticated;
- (long long)simulatedErrorType;

@end
