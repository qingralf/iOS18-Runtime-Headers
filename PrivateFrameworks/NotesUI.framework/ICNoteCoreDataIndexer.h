/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/NotesUI.framework/NotesUI
 */

@interface ICNoteCoreDataIndexer : ICCoreDataIndexer {
    int  _dateHeadersType;
    ICFolderCoreDataIndexer * _folderIndexer;
    ICNoteFolderSectionIdentifier * _folderSectionIdentifier;
    NSObject<OS_dispatch_queue> * _indexAccessQueue;
    ICInvitationsCoreDataIndexer * _invitationsIndexer;
    ICNoteSectionIdentifier * _invitationsSectionIdentifier;
    NSFetchedResultsController * _legacyNoteFetchedResultsController;
    NSFetchedResultsController * _modernNoteFetchedResultsController;
    NSFetchedResultsController * _modernPinnedNoteFetchedResultsController;
    NoteCollectionObject * _noteCollection;
    NSManagedObject<ICNoteContainer> * _noteContainer;
    ICQuery * _noteQuery;
    ICNoteSectionIdentifier * _noteSectionIdentifier;
    ICNoteSectionIdentifier * _pinnedNoteSectionIdentifier;
    unsigned long long  _pinnedNotesSectionMinimumCount;
    NSOrderedSet * _sectionIdentifiers;
    NSMutableDictionary * _sectionIdentifiersToManagedObjectIDs;
    bool  _shouldIncludeInvitations;
    bool  _shouldIncludeOutlineParentItems;
    bool  _shouldIncludeSubfolders;
    bool  _shouldIncludeTagDetail;
    bool  _shouldIncludeTags;
    ICFolderCustomNoteSortType * _sortType;
    NSArray * _sortedNoteIdentifiers;
    ICTagCoreDataIndexer * _tagIndexer;
    ICNoteSectionIdentifier * _tagSectionIdentifier;
    ICVirtualSmartFolderItemIdentifier * _virtualSmartFolder;
}

@property (nonatomic) int dateHeadersType;
@property (nonatomic, retain) ICFolderCoreDataIndexer *folderIndexer;
@property (nonatomic, retain) ICNoteFolderSectionIdentifier *folderSectionIdentifier;
@property (nonatomic, retain) NSObject<OS_dispatch_queue> *indexAccessQueue;
@property (nonatomic, retain) ICInvitationsCoreDataIndexer *invitationsIndexer;
@property (nonatomic, retain) ICNoteSectionIdentifier *invitationsSectionIdentifier;
@property (nonatomic, readonly) bool isShowingDateHeaders;
@property (nonatomic, retain) NSFetchedResultsController *legacyNoteFetchedResultsController;
@property (nonatomic, retain) NSFetchedResultsController *modernNoteFetchedResultsController;
@property (nonatomic, retain) NSFetchedResultsController *modernPinnedNoteFetchedResultsController;
@property (nonatomic, retain) NoteCollectionObject *noteCollection;
@property (nonatomic, retain) NSManagedObject<ICNoteContainer> *noteContainer;
@property (nonatomic, retain) ICQuery *noteQuery;
@property (nonatomic, retain) ICNoteSectionIdentifier *noteSectionIdentifier;
@property (nonatomic, retain) ICNoteSectionIdentifier *pinnedNoteSectionIdentifier;
@property (nonatomic) unsigned long long pinnedNotesSectionMinimumCount;
@property (nonatomic, retain) NSOrderedSet *sectionIdentifiers;
@property (nonatomic, retain) NSMutableDictionary *sectionIdentifiersToManagedObjectIDs;
@property (nonatomic) bool shouldIncludeInvitations;
@property (nonatomic) bool shouldIncludeSubfolders;
@property (nonatomic) bool shouldIncludeTagDetail;
@property (nonatomic) bool shouldIncludeTags;
@property (nonatomic, retain) ICFolderCustomNoteSortType *sortType;
@property (nonatomic, retain) NSArray *sortedNoteIdentifiers;
@property (nonatomic, readonly) bool sortsByPinned;
@property (nonatomic, readonly) ICTagCoreDataIndexer *tagIndexer;
@property (nonatomic, retain) ICNoteSectionIdentifier *tagSectionIdentifier;
@property (nonatomic, readonly) unsigned long long totalFolderCount;
@property (nonatomic, readonly) unsigned long long totalInvitationsCount;
@property (nonatomic, readonly) unsigned long long totalNoteCount;
@property (nonatomic, retain) ICVirtualSmartFolderItemIdentifier *virtualSmartFolder;

- (void).cxx_destruct;
- (id)activeFetchedResultsControllers;
- (void)addObjectIDs:(id)arg1 toIndexInSection:(id)arg2;
- (bool)dateHeadersAreStaleForNote:(id)arg1;
- (int)dateHeadersType;
- (id)dateHeadersValueForNote:(id)arg1;
- (void)deleteObjectWithIDFromIndex:(id)arg1 inSection:(id)arg2;
- (void)deleteWithDecisionController:(id)arg1 completion:(id /* block */)arg2;
- (void)didIndex;
- (id)expansionStateContext;
- (id)firstRelevantItemIdentifier;
- (id)folderIndexer;
- (id)folderSectionIdentifier;
- (id)indexAccessQueue;
- (id)indexObjectsInSection:(id)arg1 sectionIndex:(unsigned long long)arg2 fetchedResultsController:(id)arg3;
- (id)initWithLegacyManagedObjectContext:(id)arg1 modernManagedObjectContext:(id)arg2;
- (id)invitationsIndexer;
- (id)invitationsSectionIdentifier;
- (bool)isShowingDateHeaders;
- (id)legacyDateHeadersAttribute;
- (id)legacyNoteFetchedResultsController;
- (void)mergePinnedNotesAndNotesSectionIfNeeded;
- (id)modernDateHeadersAttribute;
- (id)modernNoteFetchedResultsController;
- (id)modernPinnedNoteFetchedResultsController;
- (id)newSnapshotFromIndexWithLegacyManagedObjectContext:(id)arg1 modernManagedObjectContext:(id)arg2;
- (id)nextRelevantItemIdentifierAfter:(id)arg1;
- (id)noteCollection;
- (id)noteContainer;
- (id)noteQuery;
- (id)noteSectionIdentifier;
- (id)pinnedNoteSectionIdentifier;
- (unsigned long long)pinnedNotesSectionMinimumCount;
- (void)prependObjectIDs:(id)arg1 toIndexInSection:(id)arg2;
- (void)removeObjectIDs:(id)arg1 fromIndexInSection:(id)arg2;
- (void)removeUnpinnedNoteObjectIds:(id)arg1;
- (long long)resolvedDateHeadersType;
- (id)sectionForObjectID:(id)arg1;
- (id)sectionIdentifierForHeaderInSection:(long long)arg1;
- (id)sectionIdentifiers;
- (id)sectionIdentifiersForSectionType:(unsigned long long)arg1;
- (id)sectionIdentifiersToManagedObjectIDs;
- (id)sectionSnapshotsForSectionType:(unsigned long long)arg1 legacyManagedObjectContext:(id)arg2 modernManagedObjectContext:(id)arg3;
- (void)setDateHeadersType:(int)arg1;
- (void)setFolderIndexer:(id)arg1;
- (void)setFolderSectionIdentifier:(id)arg1;
- (void)setIndexAccessQueue:(id)arg1;
- (void)setInvitationsIndexer:(id)arg1;
- (void)setInvitationsSectionIdentifier:(id)arg1;
- (void)setLegacyNoteFetchedResultsController:(id)arg1;
- (void)setModernNoteFetchedResultsController:(id)arg1;
- (void)setModernPinnedNoteFetchedResultsController:(id)arg1;
- (void)setNoteCollection:(id)arg1;
- (void)setNoteContainer:(id)arg1;
- (void)setNoteQuery:(id)arg1;
- (void)setNoteSectionIdentifier:(id)arg1;
- (void)setPinnedNoteSectionIdentifier:(id)arg1;
- (void)setPinnedNotesSectionMinimumCount:(unsigned long long)arg1;
- (void)setSectionIdentifiers:(id)arg1;
- (void)setSectionIdentifiersToManagedObjectIDs:(id)arg1;
- (void)setShouldIncludeInvitations:(bool)arg1;
- (void)setShouldIncludeOutlineParentItems:(bool)arg1;
- (void)setShouldIncludeSubfolders:(bool)arg1;
- (void)setShouldIncludeTagDetail:(bool)arg1;
- (void)setShouldIncludeTags:(bool)arg1;
- (void)setSortType:(id)arg1;
- (void)setSortType:(id)arg1 force:(bool)arg2;
- (void)setSortedNoteIdentifiers:(id)arg1;
- (void)setTagSectionIdentifier:(id)arg1;
- (void)setVirtualSmartFolder:(id)arg1;
- (bool)shouldIncludeInvitations;
- (bool)shouldIncludeOutlineParentItems;
- (bool)shouldIncludeSubfolders;
- (bool)shouldIncludeTagDetail;
- (bool)shouldIncludeTags;
- (void)sortSection:(id)arg1;
- (id)sortType;
- (id)sortedNoteIdentifiers;
- (bool)sortsByPinned;
- (id)tagIndexer;
- (id)tagSectionIdentifier;
- (void)togglePinnedForNote:(id)arg1;
- (unsigned long long)totalFolderCount;
- (unsigned long long)totalInvitationsCount;
- (unsigned long long)totalNoteCount;
- (void)unmergePinnedNotesAndNotesSectionIfNeeded;
- (id)unpinnedNoteIdentifiers;
- (id)unpinnedSectionIdentifierForObject:(id)arg1;
- (void)updateContainerPredicate;
- (void)updateLegacyFetchedResultsControllers;
- (void)updateModernFetchedResultsControllers;
- (void)updateSectionIdentifiers;
- (id)virtualSmartFolder;
- (void)willIndex;

@end
