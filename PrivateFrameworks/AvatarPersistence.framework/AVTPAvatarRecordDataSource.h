/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/AvatarPersistence.framework/AvatarPersistence
 */

@interface AVTPAvatarRecordDataSource : NSObject <AVTAvatarRecordDataSource, AVTAvatarRecordDataSourceInternal, AVTAvatarStoreDelegate> {
    AVTObservableAvatarStore * _backingStore;
    NSObject<OS_dispatch_queue> * _callbackQueue;
    AVTAvatarFetchRequest * _fetchRequest;
    <AVTUILogger> * _logger;
    NSNotificationCenter * _notificationCenter;
    <NSObject> * _nts_changeNotificationObserver;
    NSPointerArray * _nts_observers;
    NSMutableArray * _nts_recordStorage;
    AVTPAvatarStore * _underlyingStore;
}

@property (nonatomic, readonly) AVTObservableAvatarStore *backingStore;
@property (nonatomic, readonly) NSObject<OS_dispatch_queue> *callbackQueue;
@property (readonly, copy) NSString *debugDescription; /* unknown property attribute: ? */
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) AVTAvatarFetchRequest *fetchRequest;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) <AVTUILogger> *logger;
@property (nonatomic, readonly) NSNotificationCenter *notificationCenter;
@property (nonatomic, retain) <NSObject> *nts_changeNotificationObserver;
@property (nonatomic, readonly) NSPointerArray *nts_observers;
@property (nonatomic, retain) NSMutableArray *nts_recordStorage;
@property (readonly) Class superclass;
@property (nonatomic, readonly) AVTPAvatarStore *underlyingStore;

+ (id)defaultUIDataSourceWithDomainIdentifier:(id)arg1;
+ (unsigned long long)indexForInsertingDuplicateRecord:(id)arg1 original:(id)arg2 inRecords:(id)arg3;
+ (unsigned long long)indexForInsertingRecord:(id)arg1 inRecords:(id)arg2;
+ (id)loadRecordsWithStore:(id)arg1 request:(id)arg2 logger:(id)arg3;
+ (id)sortedRecordsEditableFirstReverseOrder:(id)arg1;

- (void).cxx_destruct;
- (void)addObserver:(id)arg1;
- (void)addPriorityObserver:(id)arg1;
- (bool)areRecordsLoaded;
- (void)avatarStoreDidChange:(id)arg1;
- (id)backingStore;
- (id)callbackQueue;
- (void)dealloc;
- (void)didRecieveAvatarChangeDistributedNotification:(id)arg1;
- (void)enumerateObserversRespondingToSelector:(SEL)arg1 withBlock:(id /* block */)arg2;
- (id)fetchRequest;
- (void)flushRecordsForEnteringBackground;
- (unsigned long long)indexOfRecordPassingTest:(id /* block */)arg1;
- (id)indexSetForEditableRecords;
- (id)indexesOfRecordsPassingTest:(id /* block */)arg1;
- (id)initWithRecordStore:(id)arg1 fetchRequest:(id)arg2;
- (id)initWithRecordStore:(id)arg1 fetchRequest:(id)arg2 callbackQueue:(id)arg3 environment:(id)arg4;
- (id)initWithRecordStore:(id)arg1 fetchRequest:(id)arg2 callbackQueue:(id)arg3 logger:(id)arg4 notificationCenter:(id)arg5;
- (id)initWithRecordStore:(id)arg1 fetchRequest:(id)arg2 environment:(id)arg3;
- (id)internalRecordStore;
- (id)logger;
- (id)notificationCenter;
- (id)nts_changeNotificationObserver;
- (id)nts_observers;
- (id)nts_recordStorage;
- (unsigned long long)numberOfRecords;
- (void)performObserversWork:(id /* block */)arg1;
- (void)performSyncWorkWithRecords:(id /* block */)arg1;
- (id)recordAtIndex:(unsigned long long)arg1;
- (id)recordStore;
- (void)removeObserver:(id)arg1;
- (void)setNts_changeNotificationObserver:(id)arg1;
- (void)setNts_recordStorage:(id)arg1;
- (void)store:(id)arg1 didCreateDuplicateAvatar:(id)arg2 forOriginal:(id)arg3 postCompletionHandler:(id /* block */)arg4;
- (void)store:(id)arg1 didDeleteAvatarWithIdentifier:(id)arg2 postCompletionHandler:(id /* block */)arg3;
- (void)store:(id)arg1 didSaveAvatar:(id)arg2 postCompletionHandler:(id /* block */)arg3;
- (id)underlyingStore;

@end
