/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/EmailDaemon.framework/EmailDaemon
 */

@interface EDMailboxRepository : NSObject <EFLoggable, EMMailboxRepositoryInterface> {
    EDMailboxPersistence * _mailboxPersistence;
    NSObject<OS_dispatch_queue> * _serializationQueue;
}

@property (readonly, copy) NSString *debugDescription; /* unknown property attribute: ? */
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) EDMailboxPersistence *mailboxPersistence;
@property (nonatomic, readonly) NSObject<OS_dispatch_queue> *serializationQueue;
@property (readonly) Class superclass;

+ (id)log;

- (void).cxx_destruct;
- (bool)_performCreateMailboxChangeAction:(id)arg1;
- (bool)_performDeleteMailboxChangeAction:(id)arg1;
- (bool)_performMoveMailboxChangeAction:(id)arg1;
- (bool)_performRenameMailboxChangeAction:(id)arg1;
- (void)cancelObservation:(id)arg1;
- (void)getAllMailboxObjectIDsWithCompletion:(id /* block */)arg1;
- (void)getMailboxesWithCompletion:(id /* block */)arg1;
- (id)initWithMailboxPersistence:(id)arg1;
- (void)mailboxObjectIDsForMailboxType:(long long)arg1 completionHandler:(id /* block */)arg2;
- (id)mailboxPersistence;
- (void)mailboxTypeForMailboxObjectID:(id)arg1 completionHandler:(id /* block */)arg2;
- (void)performMailboxChangeAction:(id)arg1 completionHandler:(id /* block */)arg2;
- (void)recordFrecencyEventWithMailboxesWithIDs:(id)arg1;
- (void)refreshMailboxList:(long long)arg1;
- (id)serializationQueue;
- (void)setMailboxPersistence:(id)arg1;
- (void)startObservingMailboxChangesWithChangeObserver:(id)arg1 observationIdentifier:(id)arg2;
- (void)testRecordFrecencyEventsForAllMailboxes;
- (void)testResetFrecencyForAllMailboxes;

@end
