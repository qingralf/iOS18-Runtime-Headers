/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
 */

@interface PXSidebarDataController : NSObject <PXDisplayCollectionFetcher, PXNavigationListDataSectionManagerObserver, PXOutlineDataSectionManagerDelegate> {
    NSArray * _arrangedObjectIdentifiers;
    NSPredicate * _assetsFilterPredicate;
    PXSidebarDataContext * _context;
    NSMutableDictionary * _dataSectionManagers;
    NSMutableDictionary * _dataSectionObjects;
    <PXSidebarDataSourceControllerDelegate> * _delegate;
    PXLibraryFilterState * _libraryFilterState;
    PXPhotoLibraryLocalDefaults * _localDefaults;
    PXNavigationListItemDataSectionManager * _mediaTypesItemManager;
    PXDataSectionManager * _mediaTypesSectionManager;
    unsigned long long  _options;
    PHPhotoLibrary * _photoLibrary;
    PHAssetCollection * _pickerAllPhotosVirtualCollection;
    NSMapTable * _requestDetailsBySidebarImageRequestID;
    PXOutlineDataSectionManager * _rootDataSectionManager;
}

@property (nonatomic, readonly) NSPredicate *assetsFilterPredicate;
@property (nonatomic, readonly) PXSidebarDataContext *context;
@property (readonly, copy) NSString *debugDescription; /* unknown property attribute: ? */
@property (nonatomic) <PXSidebarDataSourceControllerDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) bool isChangeProcessingPaused;
@property (nonatomic, readonly) PXLibraryFilterState *libraryFilterState;
@property (nonatomic, readonly) PXPhotoLibraryLocalDefaults *localDefaults;
@property (nonatomic, readonly) PXNavigationListItemDataSectionManager *mediaTypesItemManager;
@property (nonatomic, readonly) PXDataSectionManager *mediaTypesSectionManager;
@property (nonatomic, readonly) unsigned long long options;
@property (nonatomic, readonly) PHPhotoLibrary *photoLibrary;
@property (nonatomic, readonly) PHAssetCollection *pickerAllPhotosVirtualCollection;
@property (nonatomic, retain) NSMapTable *requestDetailsBySidebarImageRequestID;
@property (readonly) Class superclass;

+ (id)allDuplicatesDataSectionManagerForLibrary:(id)arg1 context:(id)arg2;
+ (id)collectionsDataSectionManagerForLibrary:(id)arg1 mediaTypesItemManager:(id)arg2 context:(id)arg3;
+ (id)dataSectionManagerForCollection:(id)arg1 context:(id)arg2;
+ (id)dataSectionManagerForCollection:(id)arg1 context:(id)arg2 enablementItem:(long long)arg3;
+ (id)dataSectionManagerForTransientCollection:(id)arg1 context:(id)arg2;
+ (id)dataSectionManagerForUtilityCollectionType:(unsigned short)arg1 photoLibrary:(id)arg2 context:(id)arg3;
+ (id)devicesDataSectionManagerForLibrary:(id)arg1;
+ (id)favoritesDataSectionManagerForLibrary:(id)arg1 context:(id)arg2;
+ (id)hiddenDataSectionManagerForLibrary:(id)arg1 context:(id)arg2;
+ (id)libraryDataSectionManagerForLibrary:(id)arg1 context:(id)arg2;
+ (id)recentlySavedDataSectionManagerForLibrary:(id)arg1 context:(id)arg2;
+ (id)recoveredDataSectionManagerForLibrary:(id)arg1 context:(id)arg2;
+ (id)sharedLibrarySuggestionsDataSectionManagerForLibrary:(id)arg1 context:(id)arg2;
+ (id)sharingDataSectionManagerForLibrary:(id)arg1 context:(id)arg2;
+ (id)trashDataSectionManagerForLibrary:(id)arg1 context:(id)arg2;
+ (id)unableToUploadDataSectionManagerForLibrary:(id)arg1 context:(id)arg2;
+ (id)utilitiesDataSectionManagerForLibrary:(id)arg1 context:(id)arg2;

- (void).cxx_destruct;
- (id)_childDataSectionManagerForListItem:(id)arg1;
- (void)_removeDataSectionManagerForKey:(id)arg1;
- (void)_setDataSectionManager:(id)arg1 forKey:(id)arg2;
- (void)_updateDataSectionForRemovedItems:(id)arg1;
- (void)_updateMediaTypesItemManager;
- (void)appearanceDidChange;
- (id)assetsFilterPredicate;
- (id)beginRequestForMediaProvider:(id)arg1 mediaRequestIDs:(id)arg2;
- (void)cancelImageRequest:(long long)arg1;
- (void)cancelRequestDetails:(id)arg1;
- (id)child:(long long)arg1 ofItem:(id)arg2;
- (id)childDataSectionForItem:(id)arg1;
- (id)childrenOfListItem:(id)arg1;
- (id)context;
- (id)dataSectionManagerForItem:(id)arg1;
- (id)delegate;
- (void)didNavigateToListItem:(id)arg1;
- (id)fetchCollectionsInDisplayCollectionList:(id)arg1;
- (id)infoForItem:(id)arg1 childIndex:(long long)arg2;
- (id)init;
- (id)initWithPhotoLibrary:(id)arg1 libraryFilterState:(id)arg2 sectionEnablementProvider:(id)arg3;
- (id)initWithPhotoLibrary:(id)arg1 libraryFilterState:(id)arg2 sectionEnablementProvider:(id)arg3 options:(unsigned long long)arg4 additionalAssetsFilterPredicate:(id)arg5 pickerAllPhotosVirtualCollection:(id)arg6;
- (bool)isChangeProcessingPaused;
- (bool)isItemExpanded:(id)arg1;
- (id)itemForIdentifier:(id)arg1;
- (id)libraryFilterState;
- (id)localDefaults;
- (id)makeSectionManagers;
- (void)markListItemAsRead:(id)arg1;
- (id)mediaTypesItemManager;
- (id)mediaTypesSectionManager;
- (bool)moveGroupItem:(id)arg1 afterGroupItem:(id)arg2;
- (long long)numberOfChildrenOfItem:(id)arg1;
- (void)observable:(id)arg1 didChange:(unsigned long long)arg2 context:(void*)arg3;
- (unsigned long long)options;
- (id)outlineDataSectionManager:(id)arg1 arrangedSectionContent:(id)arg2;
- (id)photoLibrary;
- (id)pickerAllPhotosVirtualCollection;
- (id)requestDetailsBySidebarImageRequestID;
- (long long)requestImageForItem:(id)arg1 parentItem:(id)arg2 completion:(id /* block */)arg3;
- (void)setChangeProcessingPaused:(bool)arg1 forReason:(id)arg2;
- (void)setDelegate:(id)arg1;
- (void)setExpanded:(bool)arg1 forItem:(id)arg2;
- (void)setRequestDetailsBySidebarImageRequestID:(id)arg1;

@end
