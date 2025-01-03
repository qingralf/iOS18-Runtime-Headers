/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/NotesShared.framework/NotesShared
 */

@interface ICAccount : ICNoteContainer <ICAccountObject, ICCloudObject, ICSearchIndexable> {
    ICAccountProxy * _accountProxy;
    NSString * _altDSID;
    ICFolder * _defaultFolder;
    bool  _didAddObservers;
    bool  _didAddTrashObservers;
    NSString * _dsid;
    NSDate * _lastSyncDate;
    ICFolder * _trashFolder;
    NSString * _username;
    NSPersonNameComponents * fullName;
    NSString * primaryEmail;
}

@property (nonatomic, retain) ICAccountData *accountData;
@property (nonatomic, retain) ICAccountProxy *accountProxy;
@property (nonatomic) int accountType;
@property (nonatomic, readonly) NSString *altDSID;
@property (nonatomic, retain) NSSet *attachments;
@property (nonatomic, readonly) NSArray *authorsExcludingCurrentUser;
@property (nonatomic, readonly, copy) NSString *contentIdentifier;
@property (nonatomic, readonly, copy) NSDate *creationDate;
@property (nonatomic, readonly) ICAccountCryptoStrategyProxy *cryptoStrategy;
@property (nonatomic, retain) NSData *cryptoVerifier;
@property (nonatomic, readonly, copy) NSString *dataSourceIdentifier;
@property (nonatomic, readonly) long long databaseScope;
@property (readonly, copy) NSString *debugDescription; /* unknown property attribute: ? */
@property (nonatomic, retain) ICFolder *defaultFolder;
@property (readonly, copy) NSString *description;
@property (nonatomic, retain) NSSet *deviceMigrationStates;
@property (nonatomic) bool didAddObservers;
@property (nonatomic) bool didAddTrashObservers;
@property (nonatomic) bool didChooseToMigrate;
@property (nonatomic) bool didFinishMigration;
@property (nonatomic) bool didMigrateOnMac;
@property (nonatomic, readonly) NSString *dsid;
@property (nonatomic, readonly) NSString *emailAddress;
@property (nonatomic, retain) NSSet *folders;
@property (nonatomic, retain) NSPersonNameComponents *fullName;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) NSSet *hashtags;
@property (nonatomic, retain) NSSet *inlineAttachments;
@property (nonatomic, retain) NSSet *invitations;
@property (nonatomic, readonly) bool isDataSeparated;
@property (nonatomic, readonly) bool isDeletable;
@property (nonatomic, readonly) bool isHiddenFromIndexing;
@property (nonatomic, readonly) bool isHiddenFromSearch;
@property (nonatomic, readonly) bool isInICloudAccount;
@property (nonatomic, readonly) bool isLocalAccount;
@property (nonatomic, readonly) bool isManaged;
@property (nonatomic, readonly) bool isMovable;
@property (nonatomic, readonly) bool isValidObject;
@property (nonatomic, copy) NSDate *lastSyncDate;
@property (nonatomic, retain) NSSet *legacyTombstones;
@property (nonatomic, readonly) NSString *localizedName;
@property (nonatomic, readonly, copy) NSString *loggingDescription;
@property (nonatomic, readonly) NSManagedObjectContext *managedObjectContext;
@property (nonatomic, retain) NSSet *media;
@property (nonatomic, readonly, copy) NSDate *modificationDate;
@property (nonatomic, retain) NSString *name;
@property (nonatomic, readonly) bool needsToBeDeletedFromCloud;
@property (nonatomic, readonly) bool needsToBeFetchedFromCloud;
@property (nonatomic, readonly) bool needsToBePushedToCloud;
@property (nonatomic, readonly) bool needsToSaveUserSpecificRecord;
@property (nonatomic, retain) NSSet *notes;
@property (nonatomic, readonly) NSManagedObjectID *objectID;
@property (nonatomic, retain) NSSet *ownerInverse;
@property (nonatomic, readonly) NSPersistentStore *persistentStore;
@property (nonatomic, retain) NSString *primaryEmail;
@property (nonatomic, readonly, copy) CKRecordID *recordID;
@property (nonatomic, readonly, copy) NSString *recordType;
@property (nonatomic, retain) NSDictionary *replicaIDToBundleIdentifier;
@property (nonatomic, readonly, copy) NSString *searchDomainIdentifier;
@property (nonatomic, readonly, copy) NSString *searchIndexingIdentifier;
@property (nonatomic, readonly) bool searchResultCanBeDeletedFromNoteContext;
@property (nonatomic, readonly) unsigned long long searchResultType;
@property (nonatomic, readonly) unsigned long long searchResultsSection;
@property (nonatomic, readonly) CSSearchableItemAttributeSet *searchableItemAttributeSet;
@property (readonly) CSSearchableItemAttributeSet *searchableItemViewAttributeSet; /* unknown property attribute: ? */
@property (nonatomic, retain) NSSet *serverChangeTokens;
@property (nonatomic, copy) NSData *serverSideUpdateTaskContinuationToken;
@property (nonatomic) unsigned short serverSideUpdateTaskFailureCount;
@property (nonatomic, copy) NSString *serverSideUpdateTaskLastAttemptedBuild;
@property (nonatomic, copy) NSString *serverSideUpdateTaskLastAttemptedVersion;
@property (nonatomic, copy) NSString *serverSideUpdateTaskLastCompletedBuild;
@property (nonatomic, copy) NSString *serverSideUpdateTaskLastCompletedVersion;
@property (nonatomic) bool storeDataSeparately;
@property (readonly) Class superclass;
@property (nonatomic, retain) ICFolder *trashFolder;
@property (nonatomic, readonly) CSSearchableItemAttributeSet *userActivityContentAttributeSet;
@property (nonatomic, copy) NSString *userRecordName;
@property (nonatomic, readonly, copy) CKRecordID *userSpecificRecordID;
@property (nonatomic, readonly, copy) NSString *userSpecificRecordType;
@property (nonatomic, readonly, retain) CKRecord *userSpecificServerRecord;
@property (nonatomic, readonly) NSString *username;
@property (nonatomic, readonly, copy) ICVirtualSmartFolderItemIdentifier *virtualCallNotesFolder;
@property (nonatomic, readonly, copy) ICVirtualSmartFolderItemIdentifier *virtualMathNotesFolder;
@property (nonatomic, readonly, copy) ICVirtualSmartFolderItemIdentifier *virtualSystemPaperFolder;
@property (nonatomic, readonly) long long visibilityTestingType;
@property (nonatomic, readonly) bool wantsUserSpecificRecord;

// Image: /System/Library/PrivateFrameworks/NotesShared.framework/NotesShared

+ (id)accountUtilities;
+ (id)accountWithIdentifier:(id)arg1 context:(id)arg2;
+ (id)accountsMatchingPredicate:(id)arg1 context:(id)arg2;
+ (id)accountsWithAccountType:(int)arg1 context:(id)arg2;
+ (id)activeAccountWithUserRecordName:(id)arg1 context:(id)arg2;
+ (id)allAccountIdentifiersInContext:(id)arg1;
+ (id)allAccountsInContext:(id)arg1;
+ (id)allActiveAccountsInContext:(id)arg1;
+ (id)allActiveAccountsInContext:(id)arg1 sortDescriptors:(id)arg2 relationshipKeyPathsForPrefetching:(id)arg3;
+ (id)allActiveAccountsInContextSortedByAccountType:(id)arg1;
+ (id)allActiveAccountsInContextWithDefaultBeingFirstIfApplicable:(id)arg1;
+ (id)allActiveCloudKitAccountsInContext:(id)arg1;
+ (id)allCloudKitAccountsInContext:(id)arg1;
+ (id)allCloudObjectIDsInContext:(id)arg1 passingTest:(id /* block */)arg2;
+ (bool)clearAccountForAppleCloudKitTable;
+ (id)cloudKitAccountInContext:(id)arg1;
+ (id)cloudKitAccountWithIdentifier:(id)arg1 context:(id)arg2;
+ (id)cloudKitIfMigratedElseLocalAccountInContext:(id)arg1;
+ (id)defaultAccountInContext:(id)arg1;
+ (void)deleteAccount:(id)arg1;
+ (void)deleteAccountWithBatchDelete:(id)arg1;
+ (void)enumerateAllCloudObjectsInContext:(id)arg1 batchSize:(unsigned long long)arg2 saveAfterBatch:(bool)arg3 usingBlock:(id /* block */)arg4;
+ (id)existingCloudObjectForRecordID:(id)arg1 accountID:(id)arg2 context:(id)arg3;
+ (bool)hasActiveCloudKitAccountInContext:(id)arg1;
+ (bool)hasModernAccountInContext:(id)arg1;
+ (bool)hidesCallNotesInCustomFolders;
+ (bool)hidesMathNotesInCustomFolders;
+ (bool)hidesSystemPaperNotesInCustomFolders;
+ (id)inMemoryAccountInContext:(id)arg1;
+ (void)initialize;
+ (void)initializeLocalAccountNamesInBackground;
+ (bool)isCloudKitAccountAvailable;
+ (bool)isCloudKitAccountAvailableInContext:(id)arg1;
+ (id)keyPathsForValuesAffectingCanBeSharedViaICloud;
+ (id)keyPathsForValuesAffectingLocalizedName;
+ (id)keyPathsForValuesAffectingVisibleNoteContainerChildren;
+ (id)localAccountInContext:(id)arg1;
+ (void)localeDidChange:(id)arg1;
+ (id)localizedLocalAccountName;
+ (id)localizedLocalAccountNameMidSentence;
+ (id)mostRecentSystemPaperNoteInManagedObjectContext:(id)arg1;
+ (id)newAccountWithIdentifier:(id)arg1 type:(int)arg2 context:(id)arg3;
+ (id)newAccountWithIdentifier:(id)arg1 type:(int)arg2 context:(id)arg3 persistentStore:(id)arg4;
+ (id)newLocalAccountInContext:(id)arg1;
+ (unsigned long long)numberOfCloudKitAccountsInContext:(id)arg1 onlyMigrated:(bool)arg2;
+ (id)passwordProtectedNoteIdentifiersInAccountIdentifier:(id)arg1 context:(id)arg2;
+ (void)setAccountUtilities:(id)arg1;
+ (void)setHidesCallNotesInCustomFolders:(bool)arg1;
+ (void)setHidesMathNotesInCustomFolders:(bool)arg1;
+ (void)setHidesSystemPaperNotesInCustomFolders:(bool)arg1;
+ (id)standardFolderIdentifierWithPrefix:(id)arg1 accountIdentifier:(id)arg2 accountType:(int)arg3;

- (void).cxx_destruct;
- (id)accountDataCreateIfNecessary;
- (id)accountFilesDirectoryURL;
- (id)accountFilesDirectoryURLInApplicationDataContainer;
- (id)accountName;
- (id)accountProxy;
- (void)addTrashObserversIfNecessary;
- (id)allChildObjects;
- (id)allItemsFolderLocalizedTitle;
- (bool)allowsExporting;
- (bool)allowsImporting;
- (id)altDSID;
- (void)associateAppEntityWithSearchableItemAttributeSet:(id)arg1;
- (id)authorsExcludingCurrentUser;
- (void)awakeFromFetch;
- (void)awakeFromInsert;
- (id)cacheKey;
- (bool)canBeSharedViaICloud;
- (bool)canHaveCryptoStrategy;
- (bool)canPasswordProtectNotes;
- (long long)compare:(id)arg1;
- (id)containerIdentifier;
- (bool)containsSharedFolders;
- (id)contentIdentifier;
- (void)createDefaultFolder;
- (void)createStandardFolders;
- (void)createTrashFolder;
- (bool)cryptoStrategyIsTransient;
- (id)cryptoStrategyProtocol;
- (id)customNoteSortTypeValue;
- (id)customRootLevelFolders;
- (id)dataForTypeIdentifier:(id)arg1;
- (id)dataSourceIdentifier;
- (void)dealloc;
- (id)defaultFolder;
- (id)defaultFolderIdentifier;
- (void)deleteUnusedHashtagsWithStandardizedContent:(id)arg1;
- (bool)didAddObservers;
- (bool)didAddTrashObservers;
- (id)dsid;
- (id)emailAddress;
- (void)ensureCriticalPaperDirectoriesExist;
- (id)exportableMediaDirectoryURL;
- (id)fallbackImageDirectoryURL;
- (id)fallbackPDFDirectoryURL;
- (id)fileURLForTypeIdentifier:(id)arg1;
- (id)folderWithIdentifier:(id)arg1;
- (id)fullName;
- (bool)hasAnyCustomFoldersIncludingSystem:(bool)arg1;
- (id)ic_loggingIdentifier;
- (id)ic_loggingValues;
- (unsigned long long)indexOfCustomRootLevelFolder:(id)arg1;
- (bool)isAllNotesContainer;
- (bool)isDataSeparated;
- (bool)isDeletable;
- (bool)isHiddenFromIndexing;
- (bool)isHiddenFromSearch;
- (bool)isInICloudAccount;
- (bool)isLeaf;
- (bool)isLocalAccount;
- (bool)isManaged;
- (bool)isMovable;
- (bool)isPrimaryiCloudAccount;
- (bool)isShowingDateHeaders;
- (id)lastSyncDate;
- (id)localizedName;
- (id)localizedNameMidSentence;
- (id)makeCloudKitRecordForApproach:(long long)arg1 mergeableFieldState:(id)arg2;
- (void)managedObjectContextDidSave:(id)arg1;
- (id)mediaDirectoryURL;
- (bool)mergeCloudKitRecord:(id)arg1 accountID:(id)arg2 approach:(long long)arg3 mergeableFieldState:(id)arg4;
- (bool)needsToBeDeletedFromCloud;
- (bool)needsToBePushedToCloud;
- (id)noteVisibilityTestingForSearchingAccount;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void*)arg4;
- (id)passwordProtectedNotes;
- (void)performBlockInPersonaContext:(id /* block */)arg1;
- (void)performBlockInPersonaContextIfNecessary:(id /* block */)arg1;
- (id)persistentStore;
- (id)predicateForAttachmentsInAccount;
- (id)predicateForCustomFolders;
- (id)predicateForFolders;
- (id)predicateForNotesInAccount;
- (id)predicateForPinnedNotes;
- (id)predicateForSearchableAttachments;
- (id)predicateForSearchableNotes;
- (id)predicateForVisibleAttachments;
- (id)predicateForVisibleAttachmentsIncludingTrash;
- (id)predicateForVisibleFolders;
- (id)predicateForVisibleNotes;
- (id)predicateForVisibleNotesIncludingTrash;
- (void)prepareForDeletion;
- (id)previewImageDirectoryURL;
- (id)primaryEmail;
- (id)recordName;
- (id)recordType;
- (id)recordZoneName;
- (void)removeAllObserversIfNecessary;
- (void)removeTrashObserversIfNecessary;
- (id)replicaIDForBundleIdentifier:(id)arg1;
- (id)reservedAccountFolderTitles;
- (short)resolvedLockedNotesMode;
- (id)searchDomainIdentifier;
- (id)searchIndexingIdentifier;
- (bool)searchResultCanBeDeletedFromNoteContext;
- (unsigned long long)searchResultType;
- (unsigned long long)searchResultsSection;
- (id)searchableItemAttributeSet;
- (id)searchableTextContent;
- (void)setAccountProxy:(id)arg1;
- (void)setAccountType:(int)arg1;
- (void)setDefaultFolder:(id)arg1;
- (void)setDidAddObservers:(bool)arg1;
- (void)setDidAddTrashObservers:(bool)arg1;
- (void)setDidChooseToMigrate:(bool)arg1;
- (void)setFullName:(id)arg1;
- (void)setLastSyncDate:(id)arg1;
- (void)setMarkedForDeletion:(bool)arg1;
- (void)setName:(id)arg1;
- (void)setPrimaryEmail:(id)arg1;
- (void)setResolvedLockedNotesMode:(short)arg1;
- (void)setSubFolderOrderMergeableData:(id)arg1;
- (void)setTrashFolder:(id)arg1;
- (void)setUserRecordName:(id)arg1;
- (bool)shouldBeDeletedFromLocalDatabase;
- (bool)shouldExcludeFilesFromCloudBackup;
- (id)standardFolderIdentifierWithPrefix:(id)arg1;
- (id)subFolderIdentifiersOrderedSet;
- (id)subFolderOrderMergeableData;
- (bool)supportsDateHeaders;
- (bool)supportsEditingNotes;
- (bool)supportsLegacyTombstones;
- (id)systemPaperBundlesDirectoryURL;
- (id)systemPaperDirectoryURL;
- (id)systemPaperNotes;
- (id)systemPaperTemporaryDirectoryURL;
- (id)temporaryDirectoryURL;
- (id)titleForNavigationBar;
- (id)titleForTableViewCell;
- (id)trashFolder;
- (id)trashFolderIdentifier;
- (id)uniqueUserParticipants;
- (void)updateAccountNameForAccountListSorting;
- (void)updateFullNameAndEmail:(id /* block */)arg1;
- (void)updateSubFolderMergeableDataChangeCount;
- (void)updateTrashFolderHiddenNoteContainerState;
- (id)userActivityContentAttributeSet;
- (id)username;
- (long long)visibilityTestingType;
- (unsigned long long)visibleAttachmentsIncludingTrashCount;
- (unsigned long long)visibleCustomFoldersCount;
- (id)visibleFolders;
- (id)visibleFoldersWithParent:(id)arg1;
- (unsigned long long)visibleInCloudNotesIncludingTrashCount;
- (id)visibleNoteContainerChildren;
- (id)visibleNoteContainers;
- (id)visibleNotes;
- (unsigned long long)visibleNotesCount;
- (unsigned long long)visibleNotesIncludingTrashCount;
- (bool)visibleRootFoldersContainFolderWithTitle:(id)arg1;
- (id)visibleSubFolders;
- (void)willTurnIntoFault;

// Image: /System/Library/PrivateFrameworks/NotesUI.framework/NotesUI

+ (id)globalVirtualCallNotesFolder;
+ (id)globalVirtualMathNotesFolder;
+ (id)globalVirtualRecentlyDeletedMathNotesFolder;
+ (id)globalVirtualSharedWithYouFolder;
+ (id)globalVirtualSystemPaperFolder;
+ (id)localizedLocalAccountNameMidSentence:(bool)arg1;

- (id)virtualCallNotesFolder;
- (id)virtualMathNotesFolder;
- (id)virtualSystemPaperFolder;

@end
