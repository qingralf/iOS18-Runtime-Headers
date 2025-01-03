/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/BulletinBoard.framework/BulletinBoard
 */

@interface BBRemoteDataProvider : BBDataProvider <BBRemoteDataProviderServerProxy> {
    <BBRemoteDataProviderClientProxy> * _clientProxy;
    bool  _connected;
    <BBRemoteDataProviderDelegate> * _delegate;
    NSObject<OS_dispatch_queue> * _proxyQueue;
    NSObject<OS_dispatch_queue> * _queue;
    NSObject<OS_dispatch_queue> * _replyQueue;
    NSString * _sectionID;
    NSObject<OS_dispatch_queue> * _serverControlQueue;
    bool  _serverIsReady;
}

@property (readonly, copy) NSString *debugDescription; /* unknown property attribute: ? */
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)_logDoesNotRespond:(SEL)arg1;
- (void)_sendClientRequest:(id /* block */)arg1;
- (void)addBulletin:(id)arg1 forDestinations:(unsigned long long)arg2;
- (void)bulletinsWithRequestParameters:(id)arg1 lastCleared:(id)arg2 completion:(id /* block */)arg3;
- (void)calloutToServer:(id /* block */)arg1;
- (bool)canPerformMigration;
- (bool)checkResponds:(bool)arg1 forSelector:(SEL)arg2;
- (void)clearedInfoForBulletins:(id)arg1 lastClearedInfo:(id)arg2 completion:(id /* block */)arg3;
- (void)clearedInfoForClearingAllBulletinsWithLastClearedInfo:(id)arg1 completion:(id /* block */)arg2;
- (void)clearedInfoForClearingBulletinsFromDate:(id)arg1 toDate:(id)arg2 lastClearedInfo:(id)arg3 completion:(id /* block */)arg4;
- (void)dataProviderDidLoad;
- (void)dealloc;
- (id)debugDescription;
- (id)debugDescriptionWithChildren:(unsigned long long)arg1;
- (void)deliverMessageWithName:(id)arg1 userInfo:(id)arg2;
- (void)deliverResponse:(id)arg1 forBulletinRequest:(id)arg2 withCompletion:(id /* block */)arg3;
- (void)getClearedInfoWithCompletion:(id /* block */)arg1;
- (void)getSectionInfoWithCompletion:(id /* block */)arg1;
- (id)initWithSectionID:(id)arg1 delegate:(id)arg2;
- (void)invalidateBulletins;
- (bool)migrateSectionInfo:(id)arg1 oldSectionInfo:(id)arg2;
- (void)modifyBulletin:(id)arg1;
- (void)noteSectionInfoDidChange:(id)arg1;
- (void)reloadDefaultSectionInfo:(id)arg1;
- (void)reloadIdentityWithCompletion:(id /* block */)arg1;
- (void)reloadSectionParameters:(id)arg1;
- (id)sectionIdentifier;
- (void)setClearedInfo:(id)arg1;
- (void)setClientProxy:(id)arg1 completion:(id /* block */)arg2;
- (void)setSectionInfo:(id)arg1;
- (void)setServerIsReady:(bool)arg1;
- (void)startWatchdog;
- (void)updateClearedInfoWithClearedInfo:(id)arg1 handler:(id /* block */)arg2 completion:(id /* block */)arg3;
- (void)updateSectionInfoWithSectionInfo:(id)arg1 handler:(id /* block */)arg2 completion:(id /* block */)arg3;
- (void)withdrawBulletinWithPublisherBulletinID:(id)arg1;
- (void)withdrawBulletinWithPublisherBulletinID:(id)arg1 shouldSync:(bool)arg2;
- (void)withdrawBulletinsWithRecordID:(id)arg1;

@end
