/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/CoreDuet.framework/CoreDuet
 */

@interface _DKPerformSyncDownPeerAdditionsOperation : _DKSyncCompositeOperation {
    unsigned long long  _batchNumber;
    bool  _foundAdditions;
    bool  _highPriority;
    NSDate * _highWaterMark;
    _DKSyncHistory * _history;
    <_DKKeyValueStore> * _keyValueStore;
    <_DKSyncLocalKnowledgeStorage> * _localStorage;
    NSArray * _overlappingWindows;
    _DKSyncPeer * _peer;
    _DKSync2Policy * _policy;
    NSDate * _startDate;
    NSArray * _streamNames;
    <_DKSyncRemoteKnowledgeStorage> * _transport;
    _DKSyncType * _type;
}

- (void).cxx_destruct;
- (void)endOperation;
- (bool)isAsynchronous;
- (void)main;

@end