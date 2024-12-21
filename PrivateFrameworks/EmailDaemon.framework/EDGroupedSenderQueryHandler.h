/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/EmailDaemon.framework/EmailDaemon
 */

@interface EDGroupedSenderQueryHandler : EDMessageRepositoryQueryHandler <EDBusinessChangeHookResponder, EDBusinessCloudStorageObserver, EDGroupedSenderMessageProvider, EDMessageChangeHookResponder, EDMessageQueryHelperDelegate, EDMessageRepositoryQueryHandler> {
    EDBusinessCloudStorage * _businessCloudStorage;
    EDBusinessPersistence * _businessPersistence;
    bool  _didCancel;
    _EDGroupedSenderList * _groupedSenders;
    long long  _grouping;
    bool  _keepMessagesInListOnBucketChange;
    EDMessagePersistence * _messagePersistence;
    EDMessageQueryHelper * _messageQueryHelper;
    NSObject<OS_dispatch_queue> * _resultQueue;
    <EFScheduler> * _scheduler;
    EFOrderedDictionary * _sectionPredicates;
    EDSenderPersistence * _senderPersistence;
    EMThreadScope * _threadScope;
    EMListUnsubscribeDetector * _unsubscribeDetector;
}

@property (nonatomic, retain) EDBusinessCloudStorage *businessCloudStorage;
@property (nonatomic, retain) EDBusinessPersistence *businessPersistence;
@property (readonly, copy) NSString *debugDescription; /* unknown property attribute: ? */
@property (readonly, copy) NSString *description;
@property bool didCancel;
@property (nonatomic, retain) _EDGroupedSenderList *groupedSenders;
@property (nonatomic) long long grouping;
@property (readonly) unsigned long long hash;
@property (nonatomic) bool keepMessagesInListOnBucketChange;
@property (nonatomic, retain) EDMessagePersistence *messagePersistence;
@property (nonatomic, retain) EDMessageQueryHelper *messageQueryHelper;
@property (nonatomic, readonly, copy) EMQuery *query;
@property (nonatomic, readonly) NSObject<OS_dispatch_queue> *resultQueue;
@property (nonatomic, readonly) <EMMessageListItemQueryResultsObserver> *resultsObserverIfUncanceled;
@property (nonatomic, readonly) <EFScheduler> *scheduler;
@property (nonatomic, readonly) EFOrderedDictionary *sectionPredicates;
@property (nonatomic, readonly) EDSenderPersistence *senderPersistence;
@property (readonly) Class superclass;
@property (nonatomic, readonly) EMThreadScope *threadScope;
@property (nonatomic, readonly) EMListUnsubscribeDetector *unsubscribeDetector;

+ (id /* block */)_comparatorForSortDescriptors:(id)arg1 sectionPredicates:(id)arg2;
+ (unsigned long long)_sectionIndexForGroupedSender:(id)arg1 sectionPredicates:(id)arg2 sectionIdentifier:(id*)arg3;
+ (id)resolveMergePathsForMergedBusinesses:(id)arg1;

- (void).cxx_destruct;
- (id)_externalBusinessIDForEmailAddress:(id)arg1;
- (id)_extraInfoForSenderItemIDsBySection:(id)arg1 includePrecachedSendersFromSenders:(id)arg2;
- (void)_filterGroupedSenderChanges:(id)arg1 withVisibleSenders:(id)arg2;
- (id)_groupedSenderForEDGroupedSender:(id)arg1;
- (id)_groupedSenderForObjectID:(id)arg1;
- (id)_itemIDsWithSectionChangesFrom:(id)arg1 to:(id)arg2;
- (id)_messageQueryFromGroupedQuery:(id)arg1;
- (void)_messagesWereAdded:(id)arg1 toInitialBatch:(bool)arg2;
- (void)_messagesWereChanged:(id)arg1 previousMessages:(id)arg2 forKeyPaths:(id)arg3 deleted:(bool)arg4;
- (void)_notifyObserversOfInsertedSenders:(id)arg1 senderItemIDsBySection:(id)arg2 previousSender:(id)arg3 includePrecachedSenders:(bool)arg4 notifyBlock:(id /* block */)arg5;
- (void)_notifyObserversOfMovedSenders:(id)arg1 previousSender:(id)arg2 includePrecachedSenders:(bool)arg3 notifyBlock:(id /* block */)arg4;
- (void)_notifyResultsObserverOfChangesToVisibleGroupedSendersFrom:(id)arg1 to:(id)arg2 forChangedGroups:(id)arg3 itemIDsWithSectionChanges:(id)arg4 includePrecachedSenders:(bool)arg5 logMessage:(id)arg6;
- (void)_persistenceDidFinishMergingBusinesses;
- (bool)_queryHelperIsCurrent:(id)arg1;
- (unsigned long long)_sectionIndexForGroupedSender:(id)arg1 sectionIdentifier:(id*)arg2;
- (id)_senderItemIDsBySectionForSenders:(id)arg1;
- (id)_updateDifference:(id)arg1 from:(id)arg2 forChangedGroups:(id)arg3;
- (id)businessCloudStorage;
- (id)businessPersistence;
- (void)cancel;
- (bool)didCancel;
- (id)groupedSenderForObjectID:(id)arg1 isPersisted:(bool*)arg2 error:(id*)arg3;
- (id)groupedSenders;
- (long long)grouping;
- (id)initWithQuery:(id)arg1 messagePersistence:(id)arg2 senderPersistence:(id)arg3 businessPersistence:(id)arg4 businessCloudStorage:(id)arg5 hookRegistry:(id)arg6 remindMeNotificationController:(id)arg7 observer:(id)arg8 observationIdentifier:(id)arg9 keepMessagesInListOnBucketChange:(bool)arg10;
- (bool)keepMessagesInListOnBucketChange;
- (id)messagePersistence;
- (id)messageQueryHelper;
- (id)messagesForGroupedSender:(id)arg1 limit:(long long)arg2;
- (void)persistenceDidAddMessages:(id)arg1 generationWindow:(id)arg2;
- (void)persistenceDidFinishMergingBusinessesAfterJournalReconciliation;
- (void)persistenceIsMergingBusinessID:(long long)arg1 intoBusinessID:(long long)arg2;
- (void)queryHelper:(id)arg1 businessIDDidChangeForMessages:(id)arg2 fromBusinessID:(long long)arg3;
- (void)queryHelper:(id)arg1 conversationIDDidChangeForMessages:(id)arg2 fromConversationID:(long long)arg3;
- (void)queryHelper:(id)arg1 conversationNotificationLevelDidChangeForConversation:(long long)arg2 conversationID:(long long)arg3;
- (void)queryHelper:(id)arg1 didAddMessages:(id)arg2;
- (void)queryHelper:(id)arg1 didDeleteMessages:(id)arg2;
- (void)queryHelper:(id)arg1 didFindMessages:(id)arg2 forInitialBatch:(bool)arg3;
- (void)queryHelper:(id)arg1 didUpdateMessages:(id)arg2 forKeyPaths:(id)arg3;
- (void)queryHelper:(id)arg1 messageFlagsDidChangeForMessages:(id)arg2 previousMessages:(id)arg3;
- (void)queryHelper:(id)arg1 objectIDDidChangeForMessage:(id)arg2 oldObjectID:(id)arg3 oldConversationID:(long long)arg4;
- (void)queryHelperDidFindAllMessages:(id)arg1;
- (void)queryHelperDidFinishRemoteSearch:(id)arg1;
- (void)queryHelperNeedsRestart:(id)arg1;
- (id)resultQueue;
- (id)resultsObserverIfUncanceled;
- (id)scheduler;
- (id)sectionPredicates;
- (id)senderPersistence;
- (void)setBusinessCloudStorage:(id)arg1;
- (void)setBusinessPersistence:(id)arg1;
- (void)setDidCancel:(bool)arg1;
- (void)setGroupedSenders:(id)arg1;
- (void)setGrouping:(long long)arg1;
- (void)setKeepMessagesInListOnBucketChange:(bool)arg1;
- (void)setMessagePersistence:(id)arg1;
- (void)setMessageQueryHelper:(id)arg1;
- (bool)start;
- (void)tearDown;
- (void)test_tearDown;
- (id)threadScope;
- (id)unsubscribeDetector;
- (void)updateUnseenCountsForBusinessesWithExternalIDs:(id)arg1;
- (void)updatedBusinessesWithExternalIDs:(id)arg1 removedBusinessesWithExternalIDs:(id)arg2;

@end