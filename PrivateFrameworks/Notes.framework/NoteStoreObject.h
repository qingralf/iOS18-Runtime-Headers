/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/Notes.framework/Notes
 */

@interface NoteStoreObject : NoteCollectionObject <ICLegacyFolder, ICSearchIndexable>

@property (nonatomic, readonly) <ICLegacyAccount> *account;
@property (nonatomic, retain) NoteAccountObject *account;
@property (nonatomic, readonly) NSArray *ancestorFolders;
@property (nonatomic, readonly, retain) NSArray *ancestorStores;
@property (nonatomic, readonly) NSArray *authorsExcludingCurrentUser;
@property (nonatomic, readonly) NSSet *changes;
@property (nonatomic, retain) NSSet *changes;
@property (nonatomic, readonly, copy) NSString *contentIdentifier;
@property (nonatomic, readonly, copy) NSDate *creationDate;
@property (nonatomic, readonly, copy) NSString *dataSourceIdentifier;
@property (readonly, copy) NSString *debugDescription; /* unknown property attribute: ? */
@property (nonatomic, readonly) long long depth;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) NSString *externalIdentifier;
@property (nonatomic, retain) NSString *externalIdentifier;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly, copy) NSString *identifierURIPathComponent;
@property (nonatomic, readonly) bool isCustomFolder;
@property (nonatomic, readonly) bool isDefaultFolder;
@property (nonatomic, readonly) bool isDeletable;
@property (nonatomic, readonly) bool isDeletedOrInTrash;
@property (nonatomic, readonly) bool isHiddenFromIndexing;
@property (nonatomic, readonly) bool isHiddenFromSearch;
@property (nonatomic, readonly) bool isMovable;
@property (nonatomic, readonly) bool isTrashFolder;
@property (nonatomic, readonly, copy) NSString *localizedTitle;
@property (nonatomic, readonly) NSManagedObjectContext *managedObjectContext;
@property (nonatomic, readonly, copy) NSDate *modificationDate;
@property (nonatomic, readonly, copy) NSString *name;
@property (nonatomic, retain) NSString *name;
@property (nonatomic, readonly) NSManagedObjectID *objectID;
@property (nonatomic, readonly) <ICLegacyFolder> *parentFolder;
@property (nonatomic, readonly, retain) NoteStoreObject *parentStore;
@property (nonatomic, readonly, copy) NSString *searchDomainIdentifier;
@property (nonatomic, readonly, copy) NSString *searchIndexingIdentifier;
@property (nonatomic, readonly) bool searchResultCanBeDeletedFromNoteContext;
@property (nonatomic, readonly) unsigned long long searchResultType;
@property (nonatomic, readonly) unsigned long long searchResultsSection;
@property (nonatomic, readonly) CSSearchableItemAttributeSet *searchableItemAttributeSet;
@property (readonly) CSSearchableItemAttributeSet *searchableItemViewAttributeSet; /* unknown property attribute: ? */
@property (readonly) Class superclass;
@property (nonatomic, retain) NSString *syncAnchor;
@property (nonatomic, readonly) CSSearchableItemAttributeSet *userActivityContentAttributeSet;
@property (nonatomic, readonly) long long visibilityTestingType;

// Image: /System/Library/PrivateFrameworks/Notes.framework/Notes

- (id)ancestorStores;
- (id)authorsExcludingCurrentUser;
- (id)basicAccountIdentifier;
- (id)cacheKey;
- (id)collectionInfo;
- (id)contentIdentifier;
- (id)creationDate;
- (id)dataForTypeIdentifier:(id)arg1;
- (id)dataSourceIdentifier;
- (id)identifier;
- (bool)isDeletable;
- (bool)isHiddenFromIndexing;
- (bool)isHiddenFromSearch;
- (bool)isMovable;
- (unsigned int)maximumServerIntId;
- (unsigned long long)minimumSequenceNumberForServerIntIds:(id)arg1;
- (id)modificationDate;
- (id)noteVisibilityTestingForSearchingAccount;
- (id)notesForGUIDs:(id)arg1;
- (id)notesForIntegerIds:(id)arg1;
- (id)notesForServerIds:(id)arg1;
- (id)notesForServerIntIds:(id)arg1;
- (id)notesForServerIntIds:(id)arg1 ascending:(bool)arg2 limit:(unsigned long long)arg3;
- (id)notesForServerIntIdsInRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg1;
- (id)notesForServerIntIdsInRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg1 ascending:(bool)arg2 limit:(unsigned long long)arg3;
- (id)parentStore;
- (id)predicateForNotes;
- (id)searchDomainIdentifier;
- (id)searchDomainIdentifier;
- (id)searchIndexingIdentifier;
- (bool)searchResultCanBeDeletedFromNoteContext;
- (unsigned long long)searchResultType;
- (unsigned long long)searchResultsSection;
- (id)searchableItemAttributeSet;
- (id)titleForTableViewCell;
- (id)userActivityContentAttributeSet;
- (long long)visibilityTestingType;

// Image: /System/Library/PrivateFrameworks/NotesShared.framework/NotesShared

- (void)addNotesObject:(id)arg1;
- (id)ancestorFolders;
- (long long)compare:(id)arg1;
- (long long)depth;
- (id)identifierURIPathComponent;
- (bool)isCustomFolder;
- (bool)isDefaultFolder;
- (bool)isDeletedOrInTrash;
- (bool)isTrashFolder;
- (id)localizedTitle;
- (id)newNoteInContext:(id)arg1;
- (id)parentFolder;

@end