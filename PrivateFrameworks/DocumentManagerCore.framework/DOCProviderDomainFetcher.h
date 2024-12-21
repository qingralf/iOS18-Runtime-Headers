/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/DocumentManagerCore.framework/DocumentManagerCore
 */

@interface DOCProviderDomainFetcher : NSObject <FINodeObserverProtocol> {
    FINodeObserver * _observer;
    NSMapTable * _pendingQueuesAndCallbacks;
    FINode * _providerDomainsNode;
}

@property (retain) FINodeObserver *observer;
@property (retain) NSMapTable *pendingQueuesAndCallbacks;
@property (retain) FINode *providerDomainsNode;

- (void).cxx_destruct;
- (void)dealloc;
- (bool)fetchProviders:(id /* block */)arg1;
- (bool)fetchProviders:(id /* block */)arg1 queue:(id)arg2;
- (id)init;
- (id)observer;
- (void)openSyncCompleted:(id)arg1;
- (id)pendingQueuesAndCallbacks;
- (id)providerDomainsNode;
- (id)providersFromIterator:(id)arg1;
- (void)setObserver:(id)arg1;
- (void)setPendingQueuesAndCallbacks:(id)arg1;
- (void)setProviderDomainsNode:(id)arg1;

@end