/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/NotesShared.framework/NotesShared
 */

@interface ICNote : ICCloudSyncingObject <ICCloudObject, ICDerivedAttributeProviding, ICItemProviderWriting, ICNoteUI, ICSearchIndexableNote, ICTTMergeableStringDelegate, ICTTTextStorageDelegate> {
    ICTTMergeableStringVersionedDocument * _document;
    bool  _isNewNoteWithHashtagsInsertedIntoBody;
    bool  _isPerformingMerge;
    ICTTVectorMultiTimestamp * _lastNotifiedTimestamp;
    ICTTVectorMultiTimestamp * _lastViewedTimestamp;
    NSMutableArray * _noteDidSaveBlocks;
    id  _noteDidSaveObserver;
    ICOutlineState * _outlineState;
    NSDate * _recentUpdatesFirstSeenDate;
    NSDate * _recentUpdatesGenerationDate;
    ICMergeableDictionary * _replicaIDToUserID;
    id  _reservedForCollaborationColorManager;
    id  _reservedForTextContentStorage;
    NSUUID * _uuid;
    ICTTVectorMultiTimestamp * archivedTimestamp;
    NSData * decryptedData;
    bool  isRecoveringCryptoWrappedKey;
    bool  needsRefresh;
    bool  needsToSaveLastViewedTimestamp;
    bool  preventReleasingTextStorage;
    bool  shouldAddMediaAsynchronously;
    ICSelectorDelayer * updateLinksSelectorDelayer;
    bool  wasAuthenticatedBeforeTurningIntoFault;
}

@property (nonatomic, retain) ICAccount *account;
@property (nonatomic, readonly, copy) NSString *accountName;
@property (nonatomic, copy) NSArray *allDocumentMergeControllers;
@property (nonatomic, copy) ICTTVectorMultiTimestamp *archivedTimestamp;
@property (nonatomic, readonly) NSArray *attachmentActivityItemsForSharing;
@property (nonatomic) short attachmentViewType;
@property (nonatomic, retain) NSSet *attachments;
@property (nonatomic, readonly, copy) NSAttributedString *attributedContentInfoText;
@property (nonatomic, retain) NSAttributedString *attributedSnippet;
@property (nonatomic, readonly, copy) NSAttributedString *attributedTitle;
@property (nonatomic, retain) NSAttributedString *attributedTitle;
@property (nonatomic, readonly) NSArray *authorsExcludingCurrentUser;
@property (nonatomic, readonly) ICCalculateAccessibilityController *calculateAccessibilityController;
@property (nonatomic, readonly) ICCalculateDocumentController *calculateDocumentController;
@property (nonatomic) long long calculatePreviewBehavior;
@property (nonatomic, readonly, retain) ICCollaborationColorManager *collaborationColorManager;
@property (nonatomic, readonly) bool containsAttachmentWithDeepLink;
@property (nonatomic, readonly, copy) NSString *contentIdentifier;
@property (nonatomic, readonly, copy) NSString *contentInfoText;
@property (nonatomic, readonly, copy) NSDate *creationDate;
@property (nonatomic, retain) NSDate *creationDate;
@property (nonatomic, readonly) <ICNoteCryptoStrategy> *cryptoStrategy;
@property (nonatomic, readonly) long long currentStatus;
@property (nonatomic, readonly, copy) NSString *dataSourceIdentifier;
@property (nonatomic, readonly) long long databaseScope;
@property (readonly, copy) NSString *debugDescription; /* unknown property attribute: ? */
@property (retain) NSData *decryptedData;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) NSSet *distinctAttachmentViewTypes;
@property (nonatomic, retain) ICTTMergeableStringVersionedDocument *document;
@property (nonatomic, readonly) ICDocumentMergeController *documentMergeController;
@property (nonatomic, retain) <ICDocumentMergeControlling> *documentMergeController;
@property (nonatomic, readonly) ICTTMergeableStringVersionedDocument *documentWithoutCreating;
@property (nonatomic, readonly) <ICFolderObject> *folder;
@property (nonatomic, retain) ICFolder *folder;
@property (nonatomic, readonly) NSString *folderManagedIdentifier;
@property (nonatomic, retain) NSDate *folderModificationDate;
@property (nonatomic, readonly, copy) NSString *folderName;
@property (nonatomic, readonly, copy) NSString *folderNameForNoteList;
@property (nonatomic, readonly, copy) NSString *folderSystemImageName;
@property (getter=isHandwritingRecognitionEnabled, nonatomic) bool handwritingRecognitionEnabled;
@property (nonatomic, retain) NSNumber *hasChecklist;
@property (nonatomic, retain) NSNumber *hasChecklistInProgress;
@property (nonatomic, retain) NSNumber *hasEmphasis;
@property (nonatomic, readonly) bool hasRecentExternalEdits;
@property (nonatomic, retain) NSNumber *hasSystemTextAttachments;
@property (nonatomic, readonly) bool hasTags;
@property (nonatomic, readonly) bool hasUnreadChanges;
@property (readonly) unsigned long long hash;
@property (nonatomic, copy) NSString *hostApplicationIdentifier;
@property (nonatomic, readonly) bool ic_hasLightBackground;
@property (nonatomic, readonly) NSString *icaxGalleryViewCustomContentDescription;
@property (nonatomic, readonly, copy) NSString *identifier;
@property (nonatomic, retain) NSSet *inlineAttachments;
@property (nonatomic, readonly) bool isCalculateMathEnabled;
@property (nonatomic, readonly) bool isDeletable;
@property (nonatomic, readonly) bool isDeletedOrInTrash;
@property (nonatomic) bool isDrawingStroke;
@property (nonatomic) bool isFastSyncSessionActive;
@property (nonatomic, readonly) bool isHiddenFromIndexing;
@property (nonatomic, readonly) bool isHiddenFromSearch;
@property (nonatomic, readonly) bool isInICloudAccount;
@property (nonatomic, readonly) bool isModernNote;
@property (nonatomic, readonly) bool isMovable;
@property (nonatomic) bool isNewNoteWithHashtagsInsertedIntoBody;
@property (nonatomic, readonly) bool isPasswordProtected;
@property (nonatomic) bool isPerformingMerge;
@property (nonatomic, readonly) bool isPinnable;
@property (nonatomic, readonly) bool isPinned;
@property (nonatomic) bool isPinned;
@property bool isRecoveringCryptoWrappedKey;
@property (nonatomic, readonly) bool isSearchIndexableNote;
@property (nonatomic, readonly) bool isSharedAndEmpty;
@property (nonatomic, readonly) bool isSharedReadOnly;
@property (nonatomic, readonly) bool isSharedViaICloud;
@property (nonatomic, readonly) bool isSharedViaICloudFolder;
@property (nonatomic) bool isSystemPaper;
@property (nonatomic, readonly) bool isUnsupported;
@property (nonatomic, readonly) bool isValidObject;
@property (nonatomic, retain) NSDate *lastActivityRecentUpdatesViewedDate;
@property (nonatomic, retain) NSDate *lastActivitySummaryViewedDate;
@property (nonatomic, retain) NSDate *lastAttributionsViewedDate;
@property (nonatomic, retain) NSDate *lastNotifiedDate;
@property (nonatomic, copy) ICTTVectorMultiTimestamp *lastNotifiedTimestamp;
@property (nonatomic, retain) NSData *lastNotifiedTimestampData;
@property (nonatomic, retain) NSDate *lastOpenedDate;
@property (nonatomic, retain) NSDate *lastViewedModificationDate;
@property (nonatomic, copy) ICTTVectorMultiTimestamp *lastViewedTimestamp;
@property (nonatomic, retain) NSData *lastViewedTimestampData;
@property (nonatomic, retain) NSString *legacyContentHashAtImport;
@property (nonatomic, retain) NSString *legacyImportDeviceIdentifier;
@property (nonatomic, retain) NSString *legacyManagedObjectIDURIRepresentation;
@property (nonatomic, retain) NSDate *legacyModificationDateAtImport;
@property (nonatomic, retain) NSNumber *legacyNoteWasPlainText;
@property (nonatomic, readonly, copy) NSString *loggingDescription;
@property (nonatomic, readonly) NSManagedObjectContext *managedObjectContext;
@property (nonatomic, readonly, copy) NSDate *modificationDate;
@property (nonatomic, retain) NSDate *modificationDate;
@property (nonatomic, readonly) bool needsInitialDerivedAttributesUpdate;
@property (nonatomic) bool needsRefresh;
@property (nonatomic, readonly) bool needsToBeDeletedFromCloud;
@property (nonatomic, readonly) bool needsToBeFetchedFromCloud;
@property (nonatomic, readonly) bool needsToBePushedToCloud;
@property (nonatomic) bool needsToSaveLastViewedTimestamp;
@property (nonatomic, readonly) bool needsToSaveUserSpecificRecord;
@property (nonatomic, readonly, copy) NSString *noteAsPlainTextWithoutTitle;
@property (nonatomic, readonly) NSSet *noteCellKeyPaths;
@property (nonatomic, retain) ICNoteData *noteData;
@property (nonatomic, retain) NSNumber *noteHasChanges;
@property (nonatomic, readonly, copy) NSAttributedString *noteWithoutTitle;
@property (nonatomic, readonly) bool objc_hasRecentExternalEdits;
@property (nonatomic, readonly) NSManagedObjectID *objectID;
@property (nonatomic, retain) ICOutlineState *outlineState;
@property (nonatomic, retain) NSData *outlineStateData;
@property (nonatomic, readonly) NSURL *paperCoherenceContextURL;
@property (nonatomic) short paperStyleType;
@property (nonatomic, retain) NSSet *participants;
@property (nonatomic) short preferredBackgroundType;
@property (nonatomic, readonly) unsigned long long preventLockReason;
@property (nonatomic) bool preventReleasingTextStorage;
@property (nonatomic, readonly) long long primaryWritingDirection;
@property (nonatomic, retain) ICFolder *primitiveFolder;
@property (nonatomic, retain) NSDate *recentUpdatesFirstSeenDate;
@property (nonatomic, retain) NSDate *recentUpdatesGenerationDate;
@property (nonatomic, readonly, copy) CKRecordID *recordID;
@property (nonatomic, readonly, copy) NSString *recordType;
@property (nonatomic, readonly) ICMergeableDictionary *replicaIDToUserID;
@property (nonatomic, retain) NSData *replicaIDToUserIDDictData;
@property (nonatomic, retain) id reservedForCollaborationColorManager;
@property (nonatomic, retain) id reservedForTextContentStorage;
@property (nonatomic, readonly, copy) NSString *searchDomainIdentifier;
@property (nonatomic, readonly, copy) NSString *searchIndexingIdentifier;
@property (nonatomic, readonly) bool searchResultCanBeDeletedFromNoteContext;
@property (nonatomic, readonly) unsigned long long searchResultType;
@property (nonatomic, readonly) unsigned long long searchResultsSection;
@property (nonatomic, readonly) CSSearchableItemAttributeSet *searchableItemAttributeSet;
@property (readonly) CSSearchableItemAttributeSet *searchableItemViewAttributeSet; /* unknown property attribute: ? */
@property (nonatomic, copy) PKInk *selectedInk;
@property (nonatomic, retain) NSString *selectedInkColorString;
@property (nonatomic, retain) NSString *selectedInkIdentifier;
@property (nonatomic) bool shouldAddMediaAsynchronously;
@property (nonatomic) bool showsCollaboratorCursors;
@property (nonatomic, retain) NSString *snippet;
@property (readonly) Class superclass;
@property (nonatomic, readonly) ICTTTextContentStorage *textContentStorage;
@property (nonatomic, readonly) ICTTTextStorage *textStorage;
@property (nonatomic, readonly) ICTTTextStorage *textStorageWithoutCreating;
@property (nonatomic, retain) NSString *thumbnailAttachmentIdentifier;
@property (nonatomic, readonly) ICTTVectorMultiTimestamp *timestamp;
@property (nonatomic, readonly, copy) NSString *title;
@property (nonatomic, retain) NSString *title;
@property (nonatomic, retain) ICAttachment *titleSourceAttachment;
@property (nonatomic, readonly, copy) NSAttributedString *trimmedAttributedTitle;
@property (nonatomic, readonly, copy) NSString *trimmedTitle;
@property (nonatomic, retain) ICSelectorDelayer *updateLinksSelectorDelayer;
@property (nonatomic, readonly) CSSearchableItemAttributeSet *userActivityContentAttributeSet;
@property (nonatomic, readonly, copy) CKRecordID *userSpecificRecordID;
@property (nonatomic, readonly, copy) NSString *userSpecificRecordType;
@property (nonatomic, readonly, retain) CKRecord *userSpecificServerRecord;
@property (nonatomic, readonly) long long visibilityTestingType;
@property (nonatomic, readonly) bool wantsUserSpecificRecord;
@property bool wasAuthenticatedBeforeTurningIntoFault;
@property (nonatomic, readonly, copy) NSString *widgetInfoText; /* unknown property attribute: ? */
@property (nonatomic, retain) NSString *widgetSnippet;
@property (nonatomic, readonly, copy) NSArray *writableTypeIdentifiersForItemProvider; /* unknown property attribute: ? */

// Image: /System/Library/PrivateFrameworks/NotesShared.framework/NotesShared

+ (id)accountIdentifiersOfNotes:(id)arg1;
+ (id)allNotesInContext:(id)arg1;
+ (id)allPasswordProtectedNoteIdentifiersInContext:(id)arg1;
+ (bool)containsUndeletableNotes:(id)arg1;
+ (bool)containsUnduplicatableNotes:(id)arg1;
+ (bool)containsUnmovableNotes:(id)arg1;
+ (id)contentInfoAttributedTextWithSnippet:(id)arg1 attachmentContentInfoType:(short)arg2 attachmentContentInfoCount:(long long)arg3 account:(id)arg4;
+ (id)contentInfoTextWithSnippet:(id)arg1 attachmentContentInfoType:(short)arg2 attachmentContentInfoCount:(long long)arg3 account:(id)arg4;
+ (unsigned long long)countOfAllNotesInContext:(id)arg1;
+ (unsigned long long)countOfNotesMatchingPredicate:(id)arg1 context:(id)arg2;
+ (unsigned long long)countOfPasswordProtectedNotesInContext:(id)arg1;
+ (unsigned long long)countOfVisibleNotesInContext:(id)arg1;
+ (unsigned long long)countOfVisiblePasswordProtectedNotesInAccount:(id)arg1;
+ (void)createNoteForAirDropDocument:(id)arg1 legacyContext:(id)arg2 processAttributedString:(id /* block */)arg3 completion:(id /* block */)arg4;
+ (id)defaultTitleForEmptyNote;
+ (void)deleteEmptyNote:(id)arg1;
+ (void)deleteNote:(id)arg1;
+ (bool)didShowExceededStorageQuotaAlertForNoteWithIdentifier:(id)arg1;
+ (void)enumerateNotesInContext:(id)arg1 batchSize:(unsigned long long)arg2 visibleOnly:(bool)arg3 saveAfterBatch:(bool)arg4 usingBlock:(id /* block */)arg5;
+ (id)existingCloudObjectForRecordID:(id)arg1 accountID:(id)arg2 context:(id)arg3;
+ (id)keyPathsForValuesAffectingCanBeSharedViaICloud;
+ (id)keyPathsForValuesAffectingCloudAccount;
+ (id)keyPathsForValuesAffectingHasUnreadChanges;
+ (id)keyPathsForValuesAffectingIsDeletable;
+ (id)keyPathsForValuesAffectingIsEditable;
+ (id)keyPathsForValuesAffectingPrefersLightBackground;
+ (id)keyPathsForValuesAffectingRecentUpdatesGenerationDate;
+ (unsigned long long)maxNoteAttachments;
+ (unsigned long long)maxNoteTextLength;
+ (id)newCloudObjectForRecord:(id)arg1 accountID:(id)arg2 context:(id)arg3;
+ (id)newEmptyNoteInContext:(id)arg1;
+ (id)newEmptyNoteInFolder:(id)arg1;
+ (id)newEmptyNoteWithIdentifier:(id)arg1 folder:(id)arg2;
+ (id)newEmptyNoteWithUUID:(id)arg1 folder:(id)arg2;
+ (id)newFetchRequestForNotes;
+ (id)newNoteWithoutIdentifierInAccount:(id)arg1;
+ (id)newNoteWithoutIdentifierInFolder:(id)arg1;
+ (id)newObjectWithIdentifier:(id)arg1 context:(id)arg2;
+ (id)newObjectWithIdentifier:(id)arg1 folder:(id)arg2;
+ (id)newPlaceholderObjectForRecordName:(id)arg1 account:(id)arg2;
+ (id)newPlaceholderObjectForRecordName:(id)arg1 accountID:(id)arg2 context:(id)arg3;
+ (id)noteIdentifiersMatchingPredicate:(id)arg1 context:(id)arg2;
+ (id)noteWithIdentifier:(id)arg1 accountID:(id)arg2 context:(id)arg3;
+ (id)noteWithIdentifier:(id)arg1 context:(id)arg2;
+ (id)noteWithIdentifier:(id)arg1 includeDeleted:(bool)arg2 accountID:(id)arg3 context:(id)arg4;
+ (id)noteWithIdentifier:(id)arg1 includeDeleted:(bool)arg2 context:(id)arg3;
+ (id)noteWithLegacyManagedObjectID:(id)arg1 context:(id)arg2;
+ (id)noteWithUUID:(id)arg1 context:(id)arg2;
+ (bool)notes:(id)arg1 containSharedNotesNotSharedViaFolder:(id)arg2;
+ (id)notesContainingHashtagWithStandarizedContent:(id)arg1 context:(id)arg2;
+ (id)notesMatchingPredicate:(id)arg1 context:(id)arg2;
+ (id)passwordProtectedNoteIdentifiersForAccount:(id)arg1;
+ (id)predicateForNote:(id)arg1;
+ (id)predicateForNotesInAccountWithIdentifier:(id)arg1;
+ (id)predicateForNotesWithChecklists;
+ (id)predicateForPinnedNotes;
+ (id)predicateForSearchableNotesInContext:(id)arg1;
+ (id)predicateForSystemPaperNotes;
+ (id)predicateForSystemPaperNotesNotInTrash;
+ (id)predicateForVisibleNotesInContext:(id)arg1;
+ (id)predicateForVisibleNotesIncludingTrash:(bool)arg1 includingSystemPaper:(bool)arg2 includingMathNotes:(bool)arg3 includingCallNotes:(bool)arg4 inContext:(id)arg5;
+ (void)purgeNote:(id)arg1;
+ (id)refreshAllOfNoteWithIdentifier:(id)arg1 context:(id)arg2;
+ (void)setDidShowExceededStorageQuotaAlert:(bool)arg1 forNoteWithIdentifier:(id)arg2;
+ (id)snippetForPasswordProtectedNote:(id)arg1;
+ (bool)supportsActivityEvents;
+ (bool)supportsNotesVersionTracking;
+ (bool)supportsUserSpecificRecords;
+ (id)systemPaperNotesFetchRequest;
+ (id)visibleNoteWithIdentifier:(id)arg1 context:(id)arg2;
+ (id)visibleNotesInContext:(id)arg1;

- (void).cxx_destruct;
- (void)_updateLinksOnMainThreadSelectorDelayer;
- (id)accountName;
- (id)addAttachment;
- (id)addAttachmentWithData:(id)arg1 filename:(id)arg2;
- (id)addAttachmentWithFileURL:(id)arg1;
- (id)addAttachmentWithFileURL:(id)arg1 updateFileBasedAttributes:(bool)arg2 analytics:(bool)arg3;
- (id)addAttachmentWithFileWrapper:(id)arg1;
- (id)addAttachmentWithIdentifier:(id)arg1;
- (id)addAttachmentWithRemoteFileURL:(id)arg1;
- (id)addAttachmentWithUTI:(id)arg1;
- (id)addAttachmentWithUTI:(id)arg1 data:(id)arg2 filename:(id)arg3;
- (id)addAttachmentWithUTI:(id)arg1 data:(id)arg2 filename:(id)arg3 updateFileBasedAttributes:(bool)arg4 analytics:(bool)arg5 regulatoryLogging:(bool)arg6;
- (id)addAttachmentWithUTI:(id)arg1 data:(id)arg2 filenameExtension:(id)arg3;
- (id)addAttachmentWithUTI:(id)arg1 identifier:(id)arg2 urlString:(id)arg3 analytics:(bool)arg4;
- (id)addAttachmentWithUTI:(id)arg1 identifier:(id)arg2 urlString:(id)arg3 analytics:(bool)arg4 regulatoryLogging:(bool)arg5;
- (id)addAttachmentWithUTI:(id)arg1 withURL:(id)arg2;
- (id)addAttachmentWithUTI:(id)arg1 withURL:(id)arg2 updateFileBasedAttributes:(bool)arg3 analytics:(bool)arg4;
- (id)addAudioAttachmentWithIdentifier:(id)arg1;
- (id)addGalleryAttachmentWithIdentifier:(id)arg1;
- (id)addInlineAttachmentWithIdentifier:(id)arg1;
- (void)addInlineAttachments:(id)arg1;
- (void)addInlineAttachmentsObject:(id)arg1;
- (id)addInlineDrawingAttachmentWithAnalytics:(bool)arg1;
- (void)addMediaToAttachment:(id)arg1 withBlock:(id /* block */)arg2;
- (void)addNoteBodyToRecord:(id)arg1 forApproach:(long long)arg2 mergeableFieldState:(id)arg3;
- (id)addPaperDocumentAttachmentWithIdentifier:(id)arg1 subtype:(id)arg2;
- (void)addShareParticipantsToAttributeSet:(id)arg1;
- (id)addSynapseLinkAttachmentWithContentItem:(id)arg1;
- (id)addSystemPaperAttachmentWithIdentifier:(id)arg1;
- (id)addTableAttachment;
- (id)addTableAttachmentWithTableData:(id)arg1;
- (id)addTableAttachmentWithText:(id)arg1;
- (id)addURLAttachmentWithURL:(id)arg1;
- (void)addUndoCommand:(id)arg1;
- (bool)addUserID:(id)arg1 forReplicaID:(id)arg2;
- (id)additionalSearchIndexablesForChangedKeys:(id)arg1;
- (id)allAttachmentsIncludingSubAttachments;
- (id)allDocumentMergeControllers;
- (id)allDrawings;
- (id)allNoteTextAttachmentsIncludingSubAttachments:(bool)arg1;
- (id)allNoteTextInlineAttachments;
- (bool)allowsExporting;
- (bool)allowsNewTextLength:(unsigned long long)arg1;
- (id)anyVisibleInstanceOfHashtag:(id)arg1;
- (id)archivedTimestamp;
- (void)associateAppEntityWithSearchableItemAttributeSet:(id)arg1;
- (id)associatedNoteParticipants;
- (long long)attachmentContentInfoCount;
- (short)attachmentContentInfoType;
- (bool)attachmentCountExceeded;
- (bool)attachmentExceedsMaxSizeAllowed:(unsigned long long)arg1;
- (id)attachmentForWebThumbnail;
- (id)attachmentWithIdentifier:(id)arg1;
- (id)attachmentsInOrder;
- (id)attachmentsWithUTType:(id)arg1;
- (id)attributedContentInfoText;
- (id)attributedString;
- (id)authorsExcludingCurrentUser;
- (void)awakeFromFetch;
- (void)beginEditing;
- (bool)canAddAttachment;
- (bool)canAddAttachments:(unsigned long long)arg1;
- (bool)canBeRootShareObject;
- (bool)canBeSharedViaICloud;
- (void)changePinStatusIfPossible;
- (id)childCloudObjects;
- (id)childCloudObjectsForMinimumSupportedVersionPropagation;
- (void)clearDecryptedData;
- (void)clearRecentUpdatesGenerationDateIfNeeded;
- (id)cloudAccount;
- (bool)containsAttachmentWithDeepLink;
- (bool)containsAttachmentsUnsupportedInPasswordProtection;
- (bool)containsPlaceholderBlockOrInlineAttachments;
- (id)contentIdentifier;
- (id)contentInfoText;
- (id)cryptoStrategyProtocol;
- (long long)currentStatus;
- (id)dataSourceIdentifier;
- (void)dealloc;
- (id)decryptTextDataOrSaveAsUnappliedRecordIfNotAuthenticated:(id)arg1;
- (id)decryptedData;
- (void)deduplicateSelfAndCreateNewObjectFromRecord:(id)arg1;
- (void)deleteFromLocalDatabase;
- (void)didAcceptShare:(id)arg1;
- (void)didChangeNoteText;
- (void)didFetchUserSpecificRecord:(id)arg1 accountID:(id)arg2 force:(bool)arg3;
- (void)didRefresh:(bool)arg1;
- (void)didSave;
- (id)distinctAttachmentViewTypes;
- (id)document;
- (id)documentWithoutCreating;
- (void)edited:(unsigned long long)arg1 range:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg2 changeInLength:(long long)arg3;
- (void)endEditing;
- (void)enumerateAbstractAttachmentsInOrderUsingBlock:(id /* block */)arg1;
- (void)enumerateAttachmentsInOrderUsingBlock:(id /* block */)arg1;
- (void)enumerateInlineAttachmentsInOrderUsingBlock:(id /* block */)arg1;
- (void)fixBrokenReferences;
- (id)folderManagedIdentifier;
- (id)folderName;
- (id)folderNameForNoteList;
- (id)folderReferenceFromRecord:(id)arg1;
- (bool)hasAllMandatoryFields;
- (bool)hasChecklistOnlyInProgress:(bool)arg1;
- (bool)hasLoadedDocument;
- (bool)hasRecentExternalEdits;
- (bool)hasTags;
- (bool)hasThumbnailImage;
- (bool)hasUnreadChanges;
- (bool)hasVisibleInlineAttachments;
- (id)ic_loggingValues;
- (void)inlineAssetsForRecord:(id)arg1;
- (id)inlineAttachmentWithICTTAttachment:(id)arg1;
- (long long)intrinsicNotesVersionForScenario:(unsigned long long)arg1;
- (bool)isCallNote;
- (bool)isDeletable;
- (bool)isDeletedOrInTrash;
- (bool)isDuplicatable;
- (bool)isEditable;
- (bool)isEmpty;
- (bool)isHiddenFromIndexing;
- (bool)isHiddenFromSearch;
- (bool)isInICloudAccount;
- (bool)isLockable;
- (bool)isMathNote;
- (bool)isModernNote;
- (bool)isMovable;
- (bool)isNewNoteWithHashtagsInsertedIntoBody;
- (bool)isPerformingMerge;
- (bool)isPinnable;
- (bool)isRecoveringCryptoWrappedKey;
- (bool)isSearchIndexableNote;
- (bool)isSharable;
- (bool)isSharedAndEmpty;
- (bool)isSharedViaICloudFolder;
- (bool)isVisible;
- (id)lastNotifiedTimestamp;
- (id)lastViewedTimestamp;
- (id)makeCloudKitRecordForApproach:(long long)arg1 mergeableFieldState:(id)arg2;
- (id)makeUserSpecificCloudKitRecordForApproach:(long long)arg1;
- (void)markActivitySummaryViewed;
- (void)markAsCallNoteIfAttachmentIsCallRecording;
- (void)markAsCallNoteIfNeeded:(bool)arg1;
- (void)markAsMathNoteIfNeeded:(bool)arg1;
- (void)markAsSystemPaperIfNeeded:(bool)arg1;
- (void)markForDeletion;
- (void)markLastActivityRecentUpdatesViewed;
- (bool)mergeCloudKitRecord:(id)arg1 account:(id)arg2 approach:(long long)arg3;
- (bool)mergeCloudKitRecord:(id)arg1 accountID:(id)arg2 approach:(long long)arg3 mergeableFieldState:(id)arg4;
- (bool)mergeCloudKitRecord:(id)arg1 mergePolicy:(long long)arg2 account:(id)arg3 approach:(long long)arg4 mergeableFieldState:(id)arg5;
- (bool)mergeDataFromUserSpecificRecord:(id)arg1 accountID:(id)arg2;
- (void)mergeEncryptedData:(id)arg1 mergeConflict:(id)arg2;
- (bool)mergeEncryptedDataFromRecord:(id)arg1;
- (void)mergeFoldersFromRecord:(id)arg1 account:(id)arg2;
- (void)mergeNotePrimitiveData;
- (long long)mergePolicyForRecord:(id)arg1;
- (unsigned long long)mergeReplicaIDToUserID:(id)arg1;
- (void)mergeTextDataFromRecord:(id)arg1 mergePolicy:(long long)arg2 mergeableFieldState:(id)arg3;
- (unsigned long long)mergeWithNoteData:(id)arg1;
- (id)mergeableString;
- (id)minimumNotesVersionForAllParticipants;
- (id)minimumNotesVersionForUserIDs:(id)arg1;
- (bool)needsInitialDerivedAttributesUpdate;
- (bool)needsRefresh;
- (bool)needsToBeDeletedFromCloud;
- (bool)needsToDeleteShare;
- (bool)needsToSaveLastViewedTimestamp;
- (id)newAirDropDocument;
- (id)noteAsPlainText;
- (id)noteAsPlainTextWithoutTitle;
- (id)noteCellKeyPaths;
- (id)noteWithoutTitle;
- (id)notesVersionForParticipant:(id)arg1;
- (id)notesVersionForUserID:(id)arg1;
- (void)notifyAttachmentsNoteWillMoveToRecentlyDeletedFolder;
- (bool)objc_hasRecentExternalEdits;
- (void)objectWasFetchedFromCloudWithRecord:(id)arg1 accountID:(id)arg2;
- (void)objectWasFetchedFromCloudWithRecord:(id)arg1 accountID:(id)arg2 force:(bool)arg3;
- (id)objectsToBeDeletedBeforeThisObject;
- (id)outlineState;
- (id)paperCoherenceContextURL;
- (id)parentCloudObject;
- (id)parentCloudObjectModificationDate;
- (id)parentEncryptableObject;
- (id)participantForReplicaID:(id)arg1;
- (unsigned long long)performMerge:(id /* block */)arg1;
- (void)persistPendingChanges;
- (bool)prefersLightBackground;
- (void)prepareForDeletion;
- (bool)preventReleasingTextStorage;
- (id)primaryEncryptedData;
- (id)primaryEncryptedDataFromRecord:(id)arg1;
- (id)quotedTitle;
- (struct _NSRange { unsigned long long x1; unsigned long long x2; })rangeForAttachment:(id)arg1;
- (struct _NSRange { unsigned long long x1; unsigned long long x2; })rangeForSnippetWithTitleRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg1;
- (struct _NSRange { unsigned long long x1; unsigned long long x2; })rangeForTitle:(bool*)arg1;
- (id)recentUpdatesFirstSeenDate;
- (id)recentUpdatesGenerationDate;
- (id)recordType;
- (id)recordZoneName;
- (void)refreshNoteTextFromDataStore;
- (bool)regenerateTitle:(bool)arg1 snippet:(bool)arg2;
- (bool)regenerateTitle:(bool)arg1 snippet:(bool)arg2 isNewNote:(bool)arg3;
- (bool)regenerateTitleAndSnippetIfNecessaryForEdit:(unsigned long long)arg1 range:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg2 changeInLength:(long long)arg3;
- (void)removeInlineAttachments:(id)arg1;
- (void)removeInlineAttachmentsObject:(id)arg1;
- (void)replaceWithDocument:(id)arg1;
- (id)replicaIDToUserID;
- (bool)requiresLegacyTombstoneAfterDeletion;
- (id)reservedForCollaborationColorManager;
- (id)reservedForTextContentStorage;
- (bool)saveNoteData;
- (id)searchDomainIdentifier;
- (id)searchIndexingIdentifier;
- (bool)searchResultCanBeDeletedFromNoteContext;
- (unsigned long long)searchResultType;
- (unsigned long long)searchResultsSection;
- (id)searchableItemAttributeSet;
- (id)searchableString;
- (void)setAccount:(id)arg1;
- (void)setArchivedTimestamp:(id)arg1;
- (void)setAttachmentViewType:(short)arg1;
- (void)setCryptoInitializationVector:(id)arg1;
- (void)setCryptoTag:(id)arg1;
- (void)setDecryptedData:(id)arg1;
- (void)setDocument:(id)arg1;
- (void)setFolder:(id)arg1;
- (void)setHostApplicationIdentifier:(id)arg1;
- (void)setIsNewNoteWithHashtagsInsertedIntoBody:(bool)arg1;
- (void)setIsPerformingMerge:(bool)arg1;
- (void)setIsPinned:(bool)arg1;
- (void)setIsRecoveringCryptoWrappedKey:(bool)arg1;
- (void)setLastActivityRecentUpdatesViewedDate:(id)arg1;
- (void)setLastNotifiedTimestamp:(id)arg1;
- (void)setLastViewedTimestamp:(id)arg1;
- (void)setLegacyManagedObjectID:(id)arg1;
- (void)setMarkedForDeletion:(bool)arg1;
- (void)setNeedsInitialFetchFromCloud:(bool)arg1;
- (void)setNeedsRefresh:(bool)arg1;
- (void)setNeedsToSaveLastViewedTimestamp:(bool)arg1;
- (void)setOutlineState:(id)arg1;
- (void)setOutlineStateData:(id)arg1;
- (void)setPreventReleasingTextStorage:(bool)arg1;
- (void)setPrimaryEncryptedData:(id)arg1;
- (void)setRecentUpdatesFirstSeenDate:(id)arg1;
- (void)setRecentUpdatesGenerationDate:(id)arg1;
- (void)setReservedForCollaborationColorManager:(id)arg1;
- (void)setReservedForTextContentStorage:(id)arg1;
- (void)setShouldAddMediaAsynchronously:(bool)arg1;
- (void)setShowsCollaboratorCursors:(bool)arg1;
- (void)setUpdateLinksSelectorDelayer:(id)arg1;
- (void)setWasAuthenticatedBeforeTurningIntoFault:(bool)arg1;
- (id)shareTitle;
- (id)shareType;
- (bool)shouldAddMediaAsynchronously;
- (bool)shouldReleaseDocumentWhenTurningIntoFault;
- (bool)shouldSyncMinimumSupportedNotesVersion;
- (bool)showsCollaboratorCursors;
- (id)showsCollaboratorCursorsUserDefaultsKey;
- (bool)supportsDeletionByTTL;
- (id)textDataDecryptedIfNecessary;
- (unsigned long long)textOffsetAtSearchIndex:(unsigned long long)arg1 inSearchableString:(id)arg2;
- (struct _NSRange { unsigned long long x1; unsigned long long x2; })textRangeForSearchRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg1 inSearchableString:(id)arg2;
- (bool)textStorageHasAttribute:(id)arg1;
- (id)timestamp;
- (id)titleForLinking;
- (id)trimmedAttributedTitle;
- (id)trimmedTitle;
- (void)turnAttachmentsIntoFaults;
- (void)unmarkForDeletion;
- (void)updateArchivedAndLastViewedTimeStampsAfterSavingNoteData;
- (void)updateAttachmentViewTypeAndPropagateToAttachments:(short)arg1;
- (void)updateChangeCountWithReason:(id)arg1;
- (void)updateDerivedAttributesIfNeeded;
- (bool)updateDeviceReplicaIDsToUserIDIfNeeded;
- (bool)updateLastViewedTimestampWithCurrentTimestamp;
- (id)updateLinksSelectorDelayer;
- (void)updateLinksWhenPossible;
- (void)updateTimestampWithUnserializedChanges;
- (id)userActivityContentAttributeSet;
- (id)userIDForReplicaID:(id)arg1;
- (id)uuid;
- (long long)visibilityTestingType;
- (id)visibleAttachments;
- (id)visibleAttachmentsWithType:(short)arg1;
- (id)visibleInlineAttachments;
- (id)visibleTopLevelAttachments;
- (unsigned long long)visibleTopLevelAttachmentsCount;
- (bool)wantsUndoCommands;
- (bool)wantsUserSpecificRecord;
- (bool)wasAuthenticatedBeforeTurningIntoFault;
- (id)widgetInfoText;
- (id)widgetSnippetByEnumeratingAttachments;
- (void)willRefresh:(bool)arg1;
- (void)willSave;
- (void)willTurnIntoFault;
- (void)willUpdateDeviceReplicaIDsToNotesVersion:(long long)arg1;
- (void)writeCurrentTimestampToMergeableFieldStateIfNecessary:(id)arg1;

// Image: /System/Library/PrivateFrameworks/NotesEditor.framework/NotesEditor

+ (id)writableTypeIdentifiersForItemProvider;

- (id)_loadFileRepresentationOfTypeIdentifier:(id)arg1 forItemProviderCompletionHandler:(id /* block */)arg2;
- (unsigned long long)_preferredRepresentationForItemProviderWritableTypeIdentifier:(id)arg1;
- (id)itemProviderIdentifier;
- (long long)itemProviderType;
- (long long)itemProviderVisibilityForRepresentationWithTypeIdentifier:(id)arg1;
- (id)loadDataWithTypeIdentifier:(id)arg1 forItemProviderCompletionHandler:(id /* block */)arg2;
- (void)prepareForCopyingData;
- (id)textStoragesFor:(id)arg1;
- (id)visibleAttachmentTextStoragesForTextLayoutManager:(id)arg1;
- (id)writableTypeIdentifiersForItemProvider;
- (id)writableTypeIdentifiersForNoteContent;

// Image: /System/Library/PrivateFrameworks/NotesUI.framework/NotesUI

+ (id)attributedStringFromHTMLString:(id)arg1;
+ (id)attributedStringFromHTMLString:(id)arg1 baseURL:(id)arg2 readerDelegate:(id)arg3;
+ (id)attributedStringFromHTMLString:(id)arg1 readerDelegate:(id)arg2;
+ (void)createNoteForAirDropDocument:(id)arg1 legacyContext:(id)arg2 completion:(id /* block */)arg3;
+ (id)defaultNavigationBarIcon;
+ (id)duplicateNote:(id)arg1 intoFolder:(id)arg2 isPasswordProtected:(bool)arg3 removeOriginalNote:(bool)arg4;
+ (id)duplicateNote:(id)arg1 isPasswordProtected:(bool)arg2 removeOriginalNote:(bool)arg3;
+ (void)fixDashedListsInAttributedString:(id)arg1;
+ (void)fixFontsInAttributedString:(id)arg1;
+ (void)fixTextColorsInAttributedString:(id)arg1;
+ (void)fixUnwantedCharactersInAttributedString:(id)arg1;
+ (id)hexStringForColor:(id)arg1;
+ (id)htmlObjectAttributesForAttachmentWithContentID:(id)arg1;
+ (id)htmlStringByFixingDashedListsInHTMLString:(id)arg1;
+ (id)htmlStringFromAttributedString:(id)arg1 attachmentConversionHandler:(id /* block */)arg2;
+ (bool)isDefaultColor:(id)arg1;
+ (id)lockedNavigationBarIcon;
+ (id)mutableAttributedStringFromHTMLString:(id)arg1 baseURL:(id)arg2;
+ (id)mutableAttributedStringFromHTMLString:(id)arg1 readerDelegate:(id)arg2;
+ (id)newNoteWithAttributedString:(id)arg1 inFolder:(id)arg2 error:(id*)arg3;
+ (id)newNoteWithString:(id)arg1 inFolder:(id)arg2 error:(id*)arg3;
+ (void)redactNote:(id)arg1;
+ (void)removeUsageOfHashtag:(id)arg1;
+ (id)tagDictionariesForAttributes:(id)arg1 attachmentConversionHandler:(id /* block */)arg2;
+ (id)tagDictionaryForWrapperAroundParagraphStyle:(id)arg1;
+ (id)thumbnailImageForAttachment:(id)arg1 minSize:(struct CGSize { double x1; double x2; })arg2 scale:(double)arg3 appearanceType:(unsigned long long)arg4 requireAppearance:(bool)arg5 imageScaling:(unsigned long long*)arg6 showAsFileIcon:(bool*)arg7 isMovie:(bool*)arg8 movieDuration:(struct { long long x1; int x2; unsigned int x3; long long x4; }*)arg9;

- (id)_icaxGalleryViewDescriptionForAttachment:(id)arg1 fromAttachments:(id)arg2 orInlineAttachments:(id)arg3;
- (unsigned long long)_icaxItemNumberForParagraphAtLocation:(unsigned long long)arg1 withStyle:(id)arg2 inAttrString:(id)arg3;
- (void)_updateTextViewToPaperIfNecessary;
- (id)addHashtagToNoteBody:(id)arg1 onlyIfMissing:(bool)arg2;
- (id)addHashtagToNoteBodyIfMissing:(id)arg1;
- (id)airDropActivityItemSource;
- (void)announceAccessibilitySelectionChangedByMerge;
- (void)announceAccessibilitySelectionChangedByMergeWithSavedSelections:(id)arg1 beforeMergeTimestamp:(id)arg2;
- (bool)appendAttributedString:(id)arg1 error:(id*)arg2;
- (bool)appendAttributedString:(id)arg1 options:(unsigned long long)arg2 error:(id*)arg3;
- (void)applyOutlineState;
- (id)attachmentActivityItemsForSharing;
- (id)attachmentActivityItemsForSharingForRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg1;
- (id)attachmentFromInlineDrawingAttachment:(id)arg1;
- (id)attachmentFromLegacyAttachmentFileWrapper:(id)arg1;
- (id)attachmentFromObject:(id)arg1 createIfNecessary:(bool)arg2;
- (id)attachmentFromRemoteFileWrapper:(id)arg1;
- (id)attachmentFromStandardFileWrapper:(id)arg1;
- (id)attachmentFromSystemPaperAttachment:(id)arg1;
- (id)attachmentFromTableData:(id)arg1;
- (id)attributedStringForUTI:(id)arg1 inRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg2;
- (id)calculateAccessibilityController;
- (id)calculateDocumentController;
- (long long)calculatePreviewBehavior;
- (id)calculatePreviewBehaviorUserDefaultsKey;
- (id)checklistStyleAccessibilityDescriptionForRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg1;
- (id)collaborationColorManager;
- (bool)copyValuesToNote:(id)arg1;
- (void)createMissingAttachmentsInTextStorage;
- (id)dataForTypeIdentifier:(id)arg1;
- (void)discardCalculateDocumentController;
- (id)documentMergeController;
- (void)fetchThumbnailImageWithMinSize:(struct CGSize { double x1; double x2; })arg1 scale:(double)arg2 cache:(id)arg3 appearanceInfo:(id)arg4 cacheKey:(id)arg5 processingBlock:(id /* block */)arg6 completionBlock:(id /* block */)arg7;
- (void)filterAttachmentsInTextStorage:(id)arg1 range:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg2;
- (id)firstAttachmentInTextStorage;
- (id)folderSystemImageName;
- (void)formatExpressionsInAttributedString:(id)arg1 range:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg2 textStorageOffset:(long long)arg3 skipStaleExpressions:(bool)arg4;
- (bool)hasMentionForParticipant:(id)arg1;
- (id)htmlString;
- (id)htmlStringWithAttachmentConversionHandler:(id /* block */)arg1;
- (id)htmlStringWithAttachments:(bool)arg1;
- (id)htmlStringWithHTMLAttachments;
- (unsigned long long)ic_characterCountIncludingSpaces:(bool)arg1;
- (bool)ic_hasLightBackground;
- (unsigned long long)ic_lineCount;
- (unsigned long long)ic_wordCount;
- (id)icaxGalleryViewCustomContentDescription;
- (bool)isCalculateMathEnabled;
- (bool)isDrawingStroke;
- (bool)isFastSyncSessionActive;
- (bool)isHandwritingRecognitionEnabled;
- (bool)isHashtagRowAtRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg1 outRangeForAppending:(struct _NSRange { unsigned long long x1; unsigned long long x2; }*)arg2 outIndex:(long long*)arg3 forHashtagAttachment:(id)arg4 outHashtagCount:(long long*)arg5;
- (void)markBlockAndInlineAttachmentsForDeletion:(bool)arg1 inAttributedString:(id)arg2;
- (id)navigationBarIconWithSize:(struct CGSize { double x1; double x2; })arg1;
- (id)noteActivityItemsForSharingWithNoteExporter:(id)arg1;
- (void)noteDidApplyAttachmentViewTypeToAllAttachments;
- (void)noteDidClearDecryptedData;
- (void)noteDidMergeNoteDocumentWithUserInfo:(id)arg1;
- (void)noteDidReplaceDocument;
- (void)noteWillMergeDocumentWithUserInfo:(id)arg1;
- (void)noteWillReleaseTextStorage;
- (void)noteWillTurnIntoFault;
- (void)notifyTextViewsNoteDidMerge;
- (void)notifyTextViewsNoteWillMerge;
- (void)outlineControllerCollapsedStateDidChange:(id)arg1;
- (unsigned long long)preventLockReason;
- (long long)primaryWritingDirection;
- (id)rangesModifiedAfterTimestamp:(id)arg1 inTextStorage:(id)arg2;
- (void)redactAuthorAttributionsToCurrentUser;
- (bool)removeHashtag:(id)arg1;
- (void)save;
- (void)saveAfterDelay;
- (void)saveOutlineState;
- (id)searchableItemViewAttributeSet;
- (id)selectedInk;
- (void)setCalculatePreviewBehavior:(long long)arg1;
- (void)setHandwritingRecognitionEnabled:(bool)arg1;
- (void)setIsDrawingStroke:(bool)arg1;
- (void)setIsFastSyncSessionActive:(bool)arg1;
- (void)setSelectedInk:(id)arg1;
- (bool)shouldReleaseTextStorageWhenTurningIntoFault;
- (id)textContentStorage;
- (id)textContentStorageCreateIfNeeded;
- (id)textStorage;
- (void)textStorage:(id)arg1 didProcessEditing:(unsigned long long)arg2 range:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg3 changeInLength:(long long)arg4;
- (void)textStorage:(id)arg1 willProcessEditing:(unsigned long long)arg2 range:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg3 changeInLength:(long long)arg4;
- (void)textStorageDidChange:(id)arg1;
- (void)textStorageDidPerformUndo:(id)arg1;
- (void)textStorageWillChange:(id)arg1;
- (id)textStorageWithoutCreating;
- (id)thumbnailImageWithMinSize:(struct CGSize { double x1; double x2; })arg1 scale:(double)arg2 appearanceType:(unsigned long long)arg3 requireAppearance:(bool)arg4 imageScaling:(unsigned long long*)arg5 showAsFileIcon:(bool*)arg6 isMovie:(bool*)arg7 movieDuration:(struct { long long x1; int x2; unsigned int x3; long long x4; }*)arg8;
- (id)thumbnailImageWithMinSize:(struct CGSize { double x1; double x2; })arg1 scale:(double)arg2 appearanceType:(unsigned long long)arg3 requireAppearance:(bool)arg4 imageScaling:(unsigned long long*)arg5 showAsFileIcon:(bool*)arg6 isMovie:(bool*)arg7 movieDuration:(struct { long long x1; int x2; unsigned int x3; long long x4; }*)arg8 attachment:(id*)arg9;
- (id)uiAttributedString;
- (void)updateModificationDateAndChangeCount;
- (void)updateModificationDateAndChangeCountAndSaveAfterDelay;
- (void)updateModificationDateAndChangeCountAndSaveImmediately;
- (void)updatePKDrawingsWithHandwritingRecognitionEnabled:(bool)arg1;
- (bool)updateThumbnailAttachmentIdentifier;

@end