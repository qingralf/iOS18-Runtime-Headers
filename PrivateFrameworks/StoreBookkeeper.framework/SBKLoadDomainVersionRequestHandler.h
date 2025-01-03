/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/StoreBookkeeper.framework/StoreBookkeeper
 */

@interface SBKLoadDomainVersionRequestHandler : SBKSyncRequestHandler <SBKSyncTransactionProcessing> {
    unsigned long long  _itemCount;
    bool  _loadsRemoteItemCount;
    unsigned long long  _responseItemCount;
    SBKSyncTransaction * _transaction;
}

@property (readonly, copy) NSString *debugDescription; /* unknown property attribute: ? */
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic) unsigned long long itemCount;
@property (nonatomic) bool loadsRemoteItemCount;
@property (nonatomic, copy) NSString *responseDomainVersion;
@property (nonatomic, readonly) unsigned long long responseItemCount;
@property (readonly) Class superclass;
@property (nonatomic, retain) SBKSyncTransaction *transaction;

+ (long long)conflictDetectionType;

- (void).cxx_destruct;
- (unsigned long long)itemCount;
- (bool)loadsRemoteItemCount;
- (unsigned long long)responseItemCount;
- (void)runWithCompletionHandler:(id /* block */)arg1;
- (void)setItemCount:(unsigned long long)arg1;
- (void)setLoadsRemoteItemCount:(bool)arg1;
- (void)setTransaction:(id)arg1;
- (id)transaction;

@end
