/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/Notes.framework/Notes
 */

@interface NoteObject : NSManagedObject <ICItemProviderWriting, ICLegacyNote, ICLegacyNoteUI, ICReaderDelegate, ICSearchIndexableNote>

@property (nonatomic, readonly) <ICLegacyAccount> *account;
@property (nonatomic, readonly, copy) NSString *accountName;
@property (nonatomic, readonly) NSSet *attachments;
@property (nonatomic, retain) NSSet *attachments;
@property (nonatomic, readonly, copy) NSAttributedString *attributedContentInfoText;
@property (nonatomic, readonly, copy) NSAttributedString *attributedTitle;
@property (nonatomic, retain) NSString *author;
@property (nonatomic, readonly) NSArray *authorsExcludingCurrentUser;
@property (nonatomic, retain) NoteBodyObject *body;
@property (nonatomic, retain) NSNumber *containsCJK;
@property (nonatomic, retain) NSString *content;
@property (nonatomic, readonly) NSString *contentAsPlainText;
@property (nonatomic, readonly) NSString *contentAsPlainTextPreservingNewlines;
@property (nonatomic, readonly, copy) NSString *contentIdentifier;
@property (nonatomic, readonly, copy) NSString *contentInfoText;
@property (nonatomic, retain) NSNumber *contentType;
@property (nonatomic, readonly, copy) NSDate *creationDate;
@property (nonatomic, retain) NSDate *creationDate;
@property (nonatomic, readonly) long long currentStatus;
@property (nonatomic, readonly, copy) NSString *dataSourceIdentifier;
@property (readonly, copy) NSString *debugDescription; /* unknown property attribute: ? */
@property (nonatomic, retain) NSNumber *deletedFlag;
@property (readonly, copy) NSString *description;
@property (nonatomic, retain) NSString *externalContentRef;
@property (nonatomic, retain) NSNumber *externalFlags;
@property (nonatomic, retain) NSData *externalRepresentation;
@property (nonatomic, retain) NSNumber *externalSequenceNumber;
@property (nonatomic, retain) NSNumber *externalServerIntId;
@property (nonatomic) unsigned long long flags;
@property (nonatomic, readonly) <ICLegacyFolder> *folder;
@property (nonatomic, readonly) <ICFolderObject> *folder;
@property (nonatomic, readonly) NSString *folderManagedIdentifier;
@property (nonatomic, readonly, copy) NSString *folderName;
@property (nonatomic, readonly, copy) NSString *folderNameForNoteList;
@property (nonatomic, readonly, retain) NSString *guid;
@property (nonatomic, readonly) bool hasUnreadChanges;
@property (nonatomic, readonly) bool hasValidServerIntId;
@property (readonly) unsigned long long hash;
@property (nonatomic, copy) NSString *htmlString;
@property (nonatomic, readonly, copy) NSString *identifier;
@property (nonatomic, retain) NSNumber *integerId;
@property (nonatomic, readonly) bool isBeingMarkedForDeletion;
@property (nonatomic, retain) NSNumber *isBookkeepingEntry;
@property (nonatomic, readonly) bool isDeletable;
@property (nonatomic, readonly) bool isDeletedOrInTrash;
@property (nonatomic, readonly) bool isHiddenFromIndexing;
@property (nonatomic, readonly) bool isHiddenFromSearch;
@property (nonatomic, readonly) bool isMarkedForDeletion;
@property (nonatomic, readonly) bool isModernNote;
@property (nonatomic, readonly) bool isMovable;
@property (nonatomic, readonly) bool isPasswordProtected;
@property (nonatomic, readonly) bool isPinnable;
@property (nonatomic, readonly) bool isPinned;
@property (nonatomic, readonly) bool isPlainText;
@property (nonatomic) bool isPlainText;
@property (nonatomic, readonly) bool isSearchIndexableNote;
@property (nonatomic, readonly) bool isSharedReadOnly;
@property (nonatomic, readonly) bool isSharedViaICloud;
@property (nonatomic, readonly) bool isSharedViaICloudFolder;
@property (nonatomic, readonly) bool isUnsupported;
@property (nonatomic, readonly) NSManagedObjectContext *managedObjectContext;
@property (nonatomic, readonly, copy) NSDate *modificationDate;
@property (nonatomic, retain) NSDate *modificationDate;
@property (nonatomic, readonly, copy) NSString *noteAsPlainTextWithoutTitle;
@property (nonatomic, readonly) NSSet *noteCellKeyPaths;
@property (nonatomic, readonly) NSURL *noteId;
@property (nonatomic, readonly, copy) NSAttributedString *noteWithoutTitle;
@property (nonatomic, readonly) NSManagedObjectID *objectID;
@property (nonatomic, readonly, copy) NSString *searchDomainIdentifier;
@property (nonatomic, readonly, copy) NSString *searchIndexingIdentifier;
@property (nonatomic, readonly) bool searchResultCanBeDeletedFromNoteContext;
@property (nonatomic, readonly) unsigned long long searchResultType;
@property (nonatomic, readonly) unsigned long long searchResultsSection;
@property (nonatomic, readonly) CSSearchableItemAttributeSet *searchableItemAttributeSet;
@property (readonly) CSSearchableItemAttributeSet *searchableItemViewAttributeSet; /* unknown property attribute: ? */
@property (nonatomic) unsigned long long sequenceNumber;
@property (nonatomic, retain) NSString *serverId;
@property (nonatomic) long long serverIntId;
@property (nonatomic, retain) NoteStoreObject *store;
@property (nonatomic, retain) NSString *summary;
@property (readonly) Class superclass;
@property (nonatomic, readonly, copy) NSString *title;
@property (nonatomic, retain) NSString *title;
@property (nonatomic, readonly, copy) NSAttributedString *trimmedAttributedTitle;
@property (nonatomic, readonly, copy) NSString *trimmedTitle;
@property (nonatomic, readonly) CSSearchableItemAttributeSet *userActivityContentAttributeSet;
@property (nonatomic, readonly) long long visibilityTestingType;
@property (nonatomic, readonly, copy) NSString *widgetInfoText; /* unknown property attribute: ? */
@property (nonatomic, readonly, copy) NSArray *writableTypeIdentifiersForItemProvider; /* unknown property attribute: ? */

// Image: /System/Library/PrivateFrameworks/Notes.framework/Notes

- (id)accountName;
- (id)attributedContentInfoText;
- (id)attributedTitle;
- (id)authorsExcludingCurrentUser;
- (bool)belongsToCollection:(id)arg1;
- (bool)containsAttachments;
- (id)content;
- (id)contentAsPlainText;
- (id)contentAsPlainTextPreservingNewlines;
- (id)contentIdentifier;
- (id)contentInfoText;
- (long long)currentStatus;
- (id)dataForTypeIdentifier:(id)arg1;
- (id)dataSourceIdentifier;
- (id)defaultTitleForEmptyNote;
- (id)externalContentRef;
- (id)externalRepresentation;
- (unsigned long long)flags;
- (id)folder;
- (id)folderManagedIdentifier;
- (id)folderName;
- (id)folderNameForNoteList;
- (bool)hasUnreadChanges;
- (bool)hasValidServerIntId;
- (id)identifier;
- (bool)isBeingMarkedForDeletion;
- (bool)isDeletable;
- (bool)isDeletedOrInTrash;
- (bool)isHiddenFromIndexing;
- (bool)isHiddenFromSearch;
- (bool)isMarkedForDeletion;
- (bool)isModernNote;
- (bool)isMovable;
- (bool)isPasswordProtected;
- (bool)isPinnable;
- (bool)isPinned;
- (bool)isPlainText;
- (bool)isSearchIndexableNote;
- (bool)isSharedReadOnly;
- (bool)isSharedViaICloud;
- (bool)isSharedViaICloudFolder;
- (bool)isUnsupported;
- (void)markForDeletion;
- (id)noteAsPlainTextWithoutTitle;
- (id)noteCellKeyPaths;
- (id)noteId;
- (id)noteWithoutTitle;
- (id)searchDomainIdentifier;
- (id)searchIndexingIdentifier;
- (bool)searchResultCanBeDeletedFromNoteContext;
- (unsigned long long)searchResultType;
- (unsigned long long)searchResultsSection;
- (id)searchableItemAttributeSet;
- (unsigned long long)sequenceNumber;
- (long long)serverIntId;
- (void)setContent:(id)arg1;
- (void)setExternalContentRef:(id)arg1;
- (void)setExternalRepresentation:(id)arg1;
- (void)setFlags:(unsigned long long)arg1;
- (void)setIsPlainText:(bool)arg1;
- (void)setSequenceNumber:(unsigned long long)arg1;
- (void)setServerIntId:(long long)arg1;
- (void)setTitle:(id)arg1;
- (id)trimmedAttributedTitle;
- (id)trimmedTitle;
- (id)userActivityContentAttributeSet;
- (long long)visibilityTestingType;
- (id)widgetInfoText;

// Image: /System/Library/PrivateFrameworks/NotesShared.framework/NotesShared

+ (id)predicateForVisibleNotes;

- (id)account;
- (void)associateAppEntityWithSearchableItemAttributeSet:(id)arg1;
- (id)createAttachmentWithName:(id)arg1;
- (id)folder;
- (id)htmlString;
- (void)setHtmlString:(id)arg1;

// Image: /System/Library/PrivateFrameworks/NotesUI.framework/NotesUI

+ (void)importLegacyNoteFromWebArchive:(id)arg1 withContent:(id)arg2 intoLegacyNote:(id)arg3 context:(id)arg4;
+ (id)newNoteForAirDropDocument:(id)arg1 context:(id)arg2 styler:(id)arg3 attachmentPreviewGenerator:(id)arg4;
+ (id)noteByImportingLegacyNoteFromWebArchive:(id)arg1 withContent:(id)arg2 context:(id)arg3 styler:(id)arg4 attachmentPreviewGenerator:(id)arg5;
+ (id)writableTypeIdentifiersForItemProvider;

- (id)_loadFileRepresentationOfTypeIdentifier:(id)arg1 forItemProviderCompletionHandler:(id /* block */)arg2;
- (unsigned long long)_preferredRepresentationForItemProviderWritableTypeIdentifier:(id)arg1;
- (bool)appendAttributedString:(id)arg1 error:(id*)arg2;
- (id)fileWrapperForURL:(id)arg1;
- (id)itemProviderIdentifier;
- (long long)itemProviderType;
- (long long)itemProviderVisibilityForRepresentationWithTypeIdentifier:(id)arg1;
- (id)loadDataWithTypeIdentifier:(id)arg1 forItemProviderCompletionHandler:(id /* block */)arg2;
- (id)searchableItemViewAttributeSet;
- (id)writableTypeIdentifiersForItemProvider;

@end
