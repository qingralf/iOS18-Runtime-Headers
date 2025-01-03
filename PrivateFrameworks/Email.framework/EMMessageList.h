/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/Email.framework/Email
 */

@interface EMMessageList : EMQueryingCollection <EFContentProtectionObserver, EFLoggable, EMCollectionChangeObserver, EMCollectionItemIDStateCapturerDelegate, EMMessageList, EMMessageListQueryResultsObserver, NSCopying> {
    EFLazyCache * _cache;
    NSObject<OS_dispatch_queue> * _contentProtectionQueue;
    NSMutableDictionary * _expandedThreads;
    struct os_unfair_lock_s { 
        unsigned int _os_unfair_lock_opaque; 
    }  _expandedThreadsLock;
    NSPredicate * _filterPredicate;
    EFLocked * _itemIDSections;
    EMMailboxScope * _mailboxScope;
    NSMapTable * _messageListItemsForRetry;
    <EFScheduler> * _observerScheduler;
    NSSet * _recentlyCollapsedItemIDs;
    EMCollectionItemIDStateCapturer * _stateCapturer;
    EMThreadScope * _threadScope;
    EMMessageList * _unfilteredMessageList;
}

@property (nonatomic, readonly) EFFuture *allItemIDs;
@property (nonatomic, readonly) EFLazyCache *cache;
@property (nonatomic, readonly) NSObject<OS_dispatch_queue> *contentProtectionQueue;
@property (readonly, copy) NSString *debugDescription; /* unknown property attribute: ? */
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly, copy) NSString *ef_publicDescription;
@property (readonly, copy) NSSet *expandedThreadItemIDs;
@property (nonatomic, copy) NSPredicate *filterPredicate;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) bool isThreaded;
@property (nonatomic, readonly) EMMailboxScope *mailboxScope;
@property (nonatomic, readonly, copy) EMObjectID *objectID;
@property (nonatomic, readonly) <EFScheduler> *observerScheduler;
@property (nonatomic, retain) NSSet *recentlyCollapsedItemIDs;
@property (nonatomic, readonly) EMMessageRepository *repository;
@property (nonatomic, readonly) EMCollectionItemIDStateCapturer *stateCapturer;
@property (readonly) Class superclass;
@property (nonatomic, readonly) EMThreadScope *threadScope;
@property (nonatomic, retain) EMMessageList *unfilteredMessageList;

+ (id)groupedCommerceSenderMessageListForMailboxes:(id)arg1 withRepository:(id)arg2 grouping:(long long)arg3 sectionPredicates:(id)arg4 countOfItemsToPrecache:(unsigned long long)arg5;
+ (id)groupedCommerceSenderMessageListForMailboxes:(id)arg1 withRepository:(id)arg2 grouping:(long long)arg3 sectionPredicates:(id)arg4 countOfItemsToPrecache:(unsigned long long)arg5 transformPredicate:(id /* block */)arg6;
+ (id)log;
+ (id)simpleMessageListForMailboxes:(id)arg1 withRepository:(id)arg2 additionalQueryOptions:(unsigned long long)arg3 countOfItemsToPrecache:(unsigned long long)arg4 shouldUpdateDisplayDate:(bool)arg5 sortDescriptors:(id)arg6 transformPredicate:(id /* block */)arg7 ignoreMessageAdditionsPredicate:(id)arg8 shouldShowBundle:(bool)arg9;
+ (id)simpleMessageListForMailboxes:(id)arg1 withRepository:(id)arg2 additionalQueryOptions:(unsigned long long)arg3 shouldUpdateDisplayDate:(bool)arg4;
+ (id)threadedMessageListForMailboxes:(id)arg1 withRepository:(id)arg2 additionalQueryOptions:(unsigned long long)arg3 countOfItemsToPrecache:(unsigned long long)arg4 shouldUpdateDisplayDate:(bool)arg5 sortDescriptors:(id)arg6 sectionPredicates:(id)arg7 transformPredicate:(id /* block */)arg8 ignoreMessageAdditionsPredicate:(id)arg9 shouldShowBundle:(bool)arg10;
+ (id)threadedMessageListForMailboxes:(id)arg1 withRepository:(id)arg2 additionalQueryOptions:(unsigned long long)arg3 shouldUpdateDisplayDate:(bool)arg4;

- (void).cxx_destruct;
- (void)_addPrecachedItemsFromExtraInfo:(id)arg1;
- (id)_adjustedItemIDToInsertAfterForExistingItemID:(id)arg1 sectionIndex:(unsigned long long)arg2;
- (id)_adjustedItemIDToInsertBeforeForExistingItemID:(id)arg1 sectionIndex:(unsigned long long)arg2;
- (void)_attemptToFinishRetryingPromisesByItemID:(id)arg1;
- (id)_availableMessageListItemsForItemIDs:(id)arg1;
- (void)_commonInitWithRepository:(id)arg1;
- (id)_expandedObjectIDsForObjectIDs:(id)arg1;
- (id)_hintsByObjectIDFromExtraInfo:(id)arg1;
- (id)_itemIDsForItemIDs:(id)arg1 changeObserver:(id)arg2 extraInfo:(id)arg3 outObserverSectionIndex:(unsigned long long*)arg4;
- (id)_nextThreadItemIDAfterThreadItemID:(id)arg1;
- (id)_sectionIdentierForItemID:(id)arg1;
- (id)_sectionIdentifierForIndex:(unsigned long long)arg1;
- (unsigned long long)_sectionIndexForIdentifier:(id)arg1;
- (unsigned long long)_sectionIndexForItemID:(id)arg1;
- (id)_sectionPredicates;
- (id)_sectionedObjectIDsFromExtraInfo:(id)arg1;
- (bool)_threadIsExpanded:(id)arg1;
- (bool)_threadIsExpandedForItemID:(id)arg1;
- (id)_unreadItemIDsFromExtraInfo:(id)arg1;
- (void)_updateSectionsWithItemIDs:(id)arg1 extraInfo:(id)arg2;
- (bool)anyExpandedThreadContainsItemID:(id)arg1;
- (id)cache;
- (void)clearRecentlyCollapsedThread;
- (void)collapseThread:(id)arg1;
- (void)collection:(id)arg1 addedItemIDs:(id)arg2 after:(id)arg3;
- (void)collection:(id)arg1 addedItemIDs:(id)arg2 before:(id)arg3;
- (void)collection:(id)arg1 changedItemIDs:(id)arg2;
- (void)collection:(id)arg1 changedItemIDs:(id)arg2 itemIDsWithCountChanges:(id)arg3;
- (void)collection:(id)arg1 deletedItemIDs:(id)arg2;
- (void)collection:(id)arg1 movedItemIDs:(id)arg2 after:(id)arg3;
- (void)collection:(id)arg1 movedItemIDs:(id)arg2 before:(id)arg3;
- (void)collection:(id)arg1 replacedExistingItemID:(id)arg2 withNewItemID:(id)arg3;
- (void)collectionDidFinishInitialLoad:(id)arg1;
- (id)contentProtectionQueue;
- (void)contentProtectionStateChanged:(long long)arg1 previousState:(long long)arg2;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)dealloc;
- (id)debugDescription;
- (id)ef_publicDescription;
- (void)expandThread:(id)arg1;
- (void)expandThreadsFromThreadItemIDs:(id)arg1;
- (id)expandedThreadItemIDs;
- (id)filterPredicate;
- (id)filteredMessageListWithPredicate:(id)arg1 ignoredMessagesPredicate:(id)arg2 userFiltered:(bool)arg3;
- (void)finishRecovery;
- (id)initWithMailboxes:(id)arg1 repository:(id)arg2 sortDescriptors:(id)arg3 sectionPredicates:(id)arg4 transformPredicate:(id /* block */)arg5 ignoreMessageAdditionsPredicate:(id)arg6 targetClass:(Class)arg7 additionalQueryOptions:(unsigned long long)arg8 countOfItemsToPrecache:(unsigned long long)arg9 shouldUpdateDisplayDate:(bool)arg10 labelPrefix:(id)arg11 shouldShowBundle:(bool)arg12;
- (id)initWithMessageList:(id)arg1;
- (id)initWithObjectID:(id)arg1 query:(id)arg2 repository:(id)arg3;
- (id)initWithQuery:(id)arg1 repository:(id)arg2;
- (void)insertItemIDs:(id)arg1 after:(id)arg2 extraInfo:(id)arg3;
- (void)insertItemIDs:(id)arg1 before:(id)arg2 extraInfo:(id)arg3;
- (void)invalidateCacheForItemIDs:(id)arg1;
- (bool)isThreaded;
- (id)itemIDForObjectID:(id)arg1;
- (id)itemIDOfFirstMessageListItemMatchingPredicate:(id)arg1;
- (id)itemIDOfMessageListItemWithDisplayMessage:(id)arg1;
- (id)itemIDsForStateCaptureWithErrorString:(id*)arg1;
- (id)labelForStateCapture;
- (id)mailboxScope;
- (id)messageListItemForItemID:(id)arg1;
- (id)messageListItemForItemID:(id)arg1 ifAvailable:(bool)arg2;
- (id)messageListItemsForItemIDs:(id)arg1;
- (id)messageListItemsForItemIDs:(id)arg1 ifAvailable:(bool)arg2;
- (void)notifyChangeObserver:(id)arg1 stockedItemIDs:(id)arg2;
- (void)notifyChangeObserversAboutAddedItemIDs:(id)arg1 after:(id)arg2 extraInfo:(id)arg3;
- (void)notifyChangeObserversAboutAddedItemIDs:(id)arg1 before:(id)arg2 extraInfo:(id)arg3;
- (void)notifyChangeObserversAboutChangedItemIDs:(id)arg1 extraInfo:(id)arg2;
- (void)notifyChangeObserversAboutMovedItemIDs:(id)arg1 after:(id)arg2 extraInfo:(id)arg3;
- (void)notifyChangeObserversAboutMovedItemIDs:(id)arg1 before:(id)arg2 extraInfo:(id)arg3;
- (bool)objectIDBelongsToCollection:(id)arg1;
- (id)objectIDForItemID:(id)arg1;
- (id)observerScheduler;
- (void)queryMatchedChangedObjectIDs:(id)arg1 extraInfo:(id)arg2;
- (void)queryMatchedMovedObjectIDs:(id)arg1 after:(id)arg2 extraInfo:(id)arg3;
- (void)queryMatchedMovedObjectIDs:(id)arg1 before:(id)arg2 extraInfo:(id)arg3;
- (void)queryMatchedOldestItemsUpdatedForMailboxesObjectIDs:(id)arg1;
- (id)recentlyCollapsedItemIDs;
- (bool)recentlyCollapsedThreadContainsItemID:(id)arg1;
- (id)removeItemIDs:(id)arg1;
- (id)repository;
- (void)setFilterPredicate:(id)arg1;
- (void)setRecentlyCollapsedItemIDs:(id)arg1;
- (void)setRepository:(id)arg1;
- (void)setUnfilteredMessageList:(id)arg1;
- (id)stateCapturer;
- (void)stopObserving:(id)arg1;
- (id)threadScope;
- (id)unfilteredMessageList;

@end
