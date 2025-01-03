/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/DocumentManagerCore.framework/DocumentManagerCore
 */

@interface DOCConfiguration : NSObject <NSCopying, NSSecureCoding> {
    NSDictionary * _allowedConversions;
    unsigned long long  _browserViewContext;
    bool  _collectionSupportsDragAndDrop;
    NSString * _defaultEffectiveTabIdentifierForLocationRestore;
    DOCConcreteLocation * _defaultLocation;
    NSArray * _documentContentTypes;
    NSArray * _excludedDocumentContentTypes;
    bool  _forMovingDocuments;
    bool  _forPickingDocuments;
    bool  _forPickingDownloadsFolder;
    bool  _forPickingFolders;
    NSArray * _forbiddenActionIdentifiers;
    NSArray * _hiddenSourcesIdentifiers;
    NSString * _hostBundleTitle;
    NSString * _hostIdentifier;
    bool  _inProcess;
    unsigned long long  _interactionMode;
    bool  _isContentManaged;
    bool  _isInUIPDocumentLanding;
    long long  _maximumNumberOfItemsToFetch;
    long long  _maximumNumberOfRows;
    bool  _neverCreateBookmarkForOpenInPlace;
    bool  _pickingItemsShouldBumpLastOpenDate;
    bool  _preferLastUsedDate;
    bool  _presentingMakesCollectionFirstResponder;
    NSArray * _recentDocumentsContentTypes;
    bool  _restoreLastVisitedLocation;
    NSString * _roleIdentifier;
    bool  _saveLastVisitedLocation;
    NSString * _sceneIdentifier;
    bool  _shouldAdjustContentInset;
    bool  _shouldConvert;
    bool  _shouldHideCatalystHostWindow;
    bool  _shouldIgnoreInteractionMode;
    bool  _shouldOpenInApp;
    bool  _showCollectionControls;
    bool  _skipDownload;
    NSString * _stateIdentifier;
    bool  _supportsColumnView;
    bool  _supportsNavigationTitleMenus;
    bool  _supportsRelatedFilesInPicker;
    bool  _supportsRemovableFileProviders;
    bool  _suppressBlackCallout;
    double  _thumbnailFetchingTimeOut;
    NSArray * _urls;
    bool  _useExpandedSourceList;
    bool  _useSharedQuickLook;
}

@property (nonatomic, copy) NSDictionary *allowedConversions;
@property unsigned long long browserViewContext;
@property (nonatomic, readonly) bool canHaveFloatingTabSwitcher;
@property bool collectionSupportsDragAndDrop;
@property (retain) NSString *defaultEffectiveTabIdentifierForLocationRestore;
@property (retain) DOCConcreteLocation *defaultLocation;
@property (nonatomic, copy) NSArray *documentContentTypes;
@property (nonatomic, copy) NSArray *excludedDocumentContentTypes;
@property (readonly) bool forBrowsingInApp;
@property bool forMovingDocuments;
@property bool forPickingDocuments;
@property bool forPickingDownloadsFolder;
@property bool forPickingFolders;
@property (readonly) bool forPickingFoldersOnly;
@property (readonly) bool forSavingDocuments;
@property (copy) NSArray *forbiddenActionIdentifiers;
@property (nonatomic, copy) NSArray *hiddenSourcesIdentifiers;
@property (nonatomic, copy) NSString *hostBundleTitle;
@property (nonatomic, copy) NSString *hostIdentifier;
@property bool inProcess;
@property unsigned long long interactionMode;
@property (nonatomic) bool isContentManaged;
@property (readonly) bool isFilesApp;
@property (nonatomic) bool isInUIPDocumentLanding;
@property (readonly) bool isPickerUI;
@property (readonly) bool isPopover;
@property (readonly) bool isPopoverOrWidget;
@property (readonly) bool isWidget;
@property long long maximumNumberOfItemsToFetch;
@property long long maximumNumberOfRows;
@property (nonatomic, readonly) bool neverAllowsAnyTypeOfTabs;
@property bool neverCreateBookmarkForOpenInPlace;
@property bool pickingItemsShouldBumpLastOpenDate;
@property bool preferLastUsedDate;
@property bool presentingMakesCollectionFirstResponder;
@property (nonatomic, copy) NSArray *recentDocumentsContentTypes;
@property bool restoreLastVisitedLocation;
@property (nonatomic, copy) NSString *roleIdentifier;
@property bool saveLastVisitedLocation;
@property (nonatomic, copy) NSString *sceneIdentifier;
@property bool shouldAdjustContentInset;
@property (nonatomic) bool shouldConvert;
@property (nonatomic) bool shouldHideCatalystHostWindow;
@property bool shouldIgnoreInteractionMode;
@property bool shouldOpenInApp;
@property bool showCollectionControls;
@property bool skipDownload;
@property (nonatomic, copy) NSString *stateIdentifier;
@property bool supportsColumnView;
@property bool supportsNavigationTitleMenus;
@property bool supportsRelatedFilesInPicker;
@property bool supportsRemovableFileProviders;
@property bool suppressBlackCallout;
@property double thumbnailFetchingTimeOut;
@property (retain) NSArray *urls;
@property bool useExpandedSourceList;
@property bool useSharedQuickLook;

// Image: /System/Library/PrivateFrameworks/DocumentManagerCore.framework/DocumentManagerCore

+ (id)configurationForExportingDocumentsToURLs:(id)arg1 mode:(unsigned long long)arg2;
+ (id)configurationForFolderPicking;
+ (id)configurationForImportingDocumentContentTypes:(id)arg1 mode:(unsigned long long)arg2;
+ (id)configurationForImportingDocumentsWithContentTypes:(id)arg1 mode:(unsigned long long)arg2;
+ (id)configurationForImportingDocumentsWithConversionRules:(id)arg1;
+ (id)configurationForOpeningDocumentsOfApplicationWithBundleIdentifier:(id)arg1;
+ (id)pickableContentTypesFromAllowedConversions:(id)arg1;
+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)allowedConversions;
- (unsigned long long)browserViewContext;
- (bool)collectionSupportsDragAndDrop;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)defaultEffectiveTabIdentifierForLocationRestore;
- (id)defaultLocation;
- (id)documentContentTypes;
- (void)encodeWithCoder:(id)arg1;
- (id)excludedDocumentContentTypes;
- (bool)forBrowsingInApp;
- (bool)forMovingDocuments;
- (bool)forPickingDocuments;
- (bool)forPickingDownloadsFolder;
- (bool)forPickingFolders;
- (bool)forPickingFoldersOnly;
- (bool)forSavingDocuments;
- (id)forbiddenActionIdentifiers;
- (id)hiddenSourcesIdentifiers;
- (id)hostBundleTitle;
- (id)hostIdentifier;
- (bool)inProcess;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (unsigned long long)interactionMode;
- (unsigned long long)interactionModeForPreparing;
- (bool)isContentManaged;
- (bool)isEqual:(id)arg1;
- (bool)isEqualToConfiguration:(id)arg1;
- (bool)isFilesApp;
- (bool)isInUIPDocumentLanding;
- (bool)isPickerUI;
- (bool)isPopover;
- (bool)isPopoverOrWidget;
- (bool)isWidget;
- (long long)maximumNumberOfItemsToFetch;
- (long long)maximumNumberOfRows;
- (bool)neverCreateBookmarkForOpenInPlace;
- (bool)pickingItemsShouldBumpLastOpenDate;
- (bool)preferLastUsedDate;
- (bool)presentingMakesCollectionFirstResponder;
- (id)recentDocumentsContentTypes;
- (bool)restoreLastVisitedLocation;
- (id)roleIdentifier;
- (bool)saveLastVisitedLocation;
- (id)sceneIdentifier;
- (void)setAllowedConversions:(id)arg1;
- (void)setBrowserViewContext:(unsigned long long)arg1;
- (void)setCollectionSupportsDragAndDrop:(bool)arg1;
- (void)setDefaultEffectiveTabIdentifierForLocationRestore:(id)arg1;
- (void)setDefaultLocation:(id)arg1;
- (void)setDocumentContentTypes:(id)arg1;
- (void)setExcludedDocumentContentTypes:(id)arg1;
- (void)setForMovingDocuments:(bool)arg1;
- (void)setForPickingDocuments:(bool)arg1;
- (void)setForPickingDownloadsFolder:(bool)arg1;
- (void)setForPickingFolders:(bool)arg1;
- (void)setForbiddenActionIdentifiers:(id)arg1;
- (void)setHiddenSourcesIdentifiers:(id)arg1;
- (void)setHostBundleTitle:(id)arg1;
- (void)setHostIdentifier:(id)arg1;
- (void)setInProcess:(bool)arg1;
- (void)setInteractionMode:(unsigned long long)arg1;
- (void)setIsContentManaged:(bool)arg1;
- (void)setIsInUIPDocumentLanding:(bool)arg1;
- (void)setMaximumNumberOfItemsToFetch:(long long)arg1;
- (void)setMaximumNumberOfRows:(long long)arg1;
- (void)setNeverCreateBookmarkForOpenInPlace:(bool)arg1;
- (void)setPickingItemsShouldBumpLastOpenDate:(bool)arg1;
- (void)setPreferLastUsedDate:(bool)arg1;
- (void)setPresentingMakesCollectionFirstResponder:(bool)arg1;
- (void)setRecentDocumentsContentTypes:(id)arg1;
- (void)setRestoreLastVisitedLocation:(bool)arg1;
- (void)setRoleIdentifier:(id)arg1;
- (void)setSaveLastVisitedLocation:(bool)arg1;
- (void)setSceneIdentifier:(id)arg1;
- (void)setShouldAdjustContentInset:(bool)arg1;
- (void)setShouldConvert:(bool)arg1;
- (void)setShouldHideCatalystHostWindow:(bool)arg1;
- (void)setShouldIgnoreInteractionMode:(bool)arg1;
- (void)setShouldOpenInApp:(bool)arg1;
- (void)setShowCollectionControls:(bool)arg1;
- (void)setSkipDownload:(bool)arg1;
- (void)setStateIdentifier:(id)arg1;
- (void)setSupportsColumnView:(bool)arg1;
- (void)setSupportsNavigationTitleMenus:(bool)arg1;
- (void)setSupportsRelatedFilesInPicker:(bool)arg1;
- (void)setSupportsRemovableFileProviders:(bool)arg1;
- (void)setSuppressBlackCallout:(bool)arg1;
- (void)setThumbnailFetchingTimeOut:(double)arg1;
- (void)setUrls:(id)arg1;
- (void)setUseExpandedSourceList:(bool)arg1;
- (void)setUseSharedQuickLook:(bool)arg1;
- (bool)shouldAdjustContentInset;
- (bool)shouldConvert;
- (bool)shouldHideCatalystHostWindow;
- (bool)shouldIgnoreInteractionMode;
- (bool)shouldOpenInApp;
- (bool)showCollectionControls;
- (bool)skipDownload;
- (id)stateIdentifier;
- (bool)supportsColumnView;
- (bool)supportsNavigationTitleMenus;
- (bool)supportsRelatedFilesInPicker;
- (bool)supportsRemovableFileProviders;
- (bool)suppressBlackCallout;
- (double)thumbnailFetchingTimeOut;
- (id)urls;
- (bool)useExpandedSourceList;
- (bool)useSharedQuickLook;

// Image: /System/Library/PrivateFrameworks/DocumentManagerExecutables.framework/DocumentManagerExecutables

- (bool)canHaveFloatingTabSwitcher;
- (bool)neverAllowsAnyTypeOfTabs;

@end
