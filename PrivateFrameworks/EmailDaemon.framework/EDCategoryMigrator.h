/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/EmailDaemon.framework/EmailDaemon
 */

@interface EDCategoryMigrator : NSObject <EFLoggable> {
    EFLocked * _activityForMailboxID;
    EDActivityPersistence * _activityPersistence;
    NSObject<OS_dispatch_queue> * _categorizationQueue;
    NSConditionLock * _categorizationQueueLock;
    <EFScheduler> * _categorizationWriterScheduler;
    EDMessageCategorizer * _categorizer;
    EDCategoryPersistence * _categoryPersistence;
    <EFCancelable> * _haveAccessToDb;
    EDMessagePersistence * _messagePersistence;
    unsigned long long  _numBatchesQueued;
    long long  _reason;
}

@property (nonatomic, retain) EFLocked *activityForMailboxID;
@property (nonatomic, readonly) EDActivityPersistence *activityPersistence;
@property (nonatomic, readonly) NSObject<OS_dispatch_queue> *categorizationQueue;
@property (nonatomic, readonly) NSConditionLock *categorizationQueueLock;
@property (nonatomic, readonly) <EFScheduler> *categorizationWriterScheduler;
@property (nonatomic, readonly) EDMessageCategorizer *categorizer;
@property (nonatomic, readonly) EDCategoryPersistence *categoryPersistence;
@property (readonly, copy) NSString *debugDescription; /* unknown property attribute: ? */
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) <EFCancelable> *haveAccessToDb;
@property (nonatomic, readonly) EDMessagePersistence *messagePersistence;
@property (nonatomic) unsigned long long numBatchesQueued;
@property (nonatomic, readonly) long long reason;
@property (readonly) Class superclass;

+ (void)initializeIfNeededWithCategoryPersistence:(id)arg1 categorizer:(id)arg2 messagePersistence:(id)arg3 activityPersistence:(id)arg4;
+ (id)log;
+ (void)migrateCategoryForQuery:(id)arg1 cancelationToken:(id)arg2 reason:(long long)arg3 progressHandler:(id /* block */)arg4 completion:(id /* block */)arg5;

- (void).cxx_destruct;
- (void)_categorizeMessageBatch:(id)arg1 cancelationToken:(id)arg2 reason:(long long)arg3;
- (void)_categorizeMessagesForQuery:(id)arg1 cancelationToken:(id)arg2 progressHandler:(id /* block */)arg3 completion:(id /* block */)arg4;
- (void)_endCategorization;
- (void)_migrateCategoryForQuery:(id)arg1 cancelationToken:(id)arg2 reason:(long long)arg3 progressHandler:(id /* block */)arg4 completion:(id /* block */)arg5;
- (void)_updateCategorizationActivityForMessageBatch:(id)arg1 isFinished:(bool)arg2 cancelationToken:(id)arg3;
- (id)activityForMailboxID;
- (id)activityPersistence;
- (id)categorizationQueue;
- (id)categorizationQueueLock;
- (id)categorizationWriterScheduler;
- (id)categorizer;
- (id)categoryPersistence;
- (id)haveAccessToDb;
- (id)initWithCategoryPersistence:(id)arg1 categorizer:(id)arg2 messagePersistence:(id)arg3 activityPersistence:(id)arg4;
- (id)messagePersistence;
- (unsigned long long)numBatchesQueued;
- (long long)reason;
- (void)setActivityForMailboxID:(id)arg1;
- (void)setNumBatchesQueued:(unsigned long long)arg1;

@end
