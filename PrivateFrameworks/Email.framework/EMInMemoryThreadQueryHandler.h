/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/Email.framework/Email
 */

@interface EMInMemoryThreadQueryHandler : NSObject <EFLoggable, EMInMemoryThreadCollectionDataSource, EMInMemoryThreadCollectionDelegate> {
    NSSet * _mailboxes;
    EMObjectID * _observationIdentifier;
    EMThreadReloadSummaryHelper * _reloadSummaryHelper;
    EMMessageRepository * _repository;
    <EMMessageListItemQueryResultsObserver> * _resultsObserver;
    EMInMemoryThreadCollection * _threadCollection;
    <EFAssertableScheduler> * _threadCollectionScheduler;
}

@property (readonly, copy) NSString *debugDescription; /* unknown property attribute: ? */
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly, copy) NSSet *mailboxes;
@property (nonatomic, readonly) EMObjectID *observationIdentifier;
@property (nonatomic, readonly) EMThreadReloadSummaryHelper *reloadSummaryHelper;
@property (nonatomic, readonly) EMMessageRepository *repository;
@property (nonatomic, readonly) <EMMessageListItemQueryResultsObserver> *resultsObserver;
@property (readonly) Class superclass;
@property (nonatomic, readonly) EMInMemoryThreadCollection *threadCollection;

+ (id)log;

- (void).cxx_destruct;
- (id)_distinctObjectIDs:(id)arg1 queryHandlerLog:(id)arg2;
- (id)_extraInfoForThreadObjectIDs:(id)arg1 isMove:(bool)arg2;
- (void)collection:(id)arg1 didMergeInThreadsForMove:(bool)arg2 newObjectIDs:(id)arg3 existingObjectID:(id)arg4 hasChanges:(bool*)arg5;
- (id)collection:(id)arg1 messagesInConversationIDs:(id)arg2 limit:(long long)arg3;
- (void)collection:(id)arg1 notifyOfOldestThreadsByMailboxObjectIDs:(id)arg2;
- (void)collection:(id)arg1 notifyReplacedExistingObjectID:(id)arg2 newObjectID:(id)arg3;
- (bool)collection:(id)arg1 reportChanges:(id)arg2;
- (bool)collection:(id)arg1 reportChanges:(id)arg2 reloadSummaries:(bool)arg3;
- (bool)collection:(id)arg1 reportDeletes:(id)arg2;
- (void)didSendUpdatesInCollection:(id)arg1;
- (id)initWithQuery:(id)arg1 repository:(id)arg2 mailboxTypeResolver:(id)arg3 resultsObserver:(id)arg4 observationIdentifier:(id)arg5;
- (void)logThreadObjectIDsChangesWithMessage:(id)arg1 newObjectIDs:(id)arg2 beforeExistingObjectID:(id)arg3;
- (void)logThreadObjectIDsWithMessage:(id)arg1 objectIDs:(id)arg2;
- (id)mailboxes;
- (id)mailboxesInCollection:(id)arg1;
- (id)observationIdentifier;
- (void)prepareToSendUpdatesInCollection:(id)arg1;
- (id)reloadSummaryHelper;
- (id)repository;
- (void)requestSummaryForMessageObjectIDs:(id)arg1;
- (id)resultsObserver;
- (id)threadCollection;

@end
