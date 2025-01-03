/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/CoreRE.framework/CoreRE
 */

@interface REResourceFetchClientObject : NSObject <REResourceFetchService> {
    struct { 
        unsigned int val[8]; 
    }  _auditToken;
    REResourceClientPorts * _clientPorts;
    unsigned long long  _peerID;
    struct HashTable<unsigned long long, re::SharedPtr<re::SharedObject>, re::Hash<uint64_t>, re::EqualTo<uint64_t>, true, false> { 
        struct Allocator {} *m_allocator; 
        unsigned int *m_buckets; 
        union Entry { 
            struct EntryWithoutHash {} *withoutHash; 
            struct EntryWithHash {} *withHash; 
        } m_entries; 
        unsigned int m_capacity; 
        unsigned int m_count; 
        unsigned int m_touchedEntries; 
        unsigned int m_freeList; 
        unsigned int m_version; 
    }  _pendingShaderGraphs;
    int  _pid;
    int  _pidversion;
    void * _resourceFetchManager;
    NSObject<OS_voucher> * _voucher;
}

@property (nonatomic, readonly) struct { unsigned int x1[8]; } auditToken;
@property (nonatomic, readonly) REResourceClientPorts *clientPorts;
@property (readonly, copy) NSString *debugDescription; /* unknown property attribute: ? */
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) unsigned long long peerID;
@property (nonatomic) /* Warning: unhandled struct encoding: '{HashTable<unsigned long long' */ struct  pendingShaderGraphs; /* unknown property attribute:  false>=^{Allocator}^I(Entry=^{EntryWithoutHash}^{EntryWithHash})IIIII} */
@property (nonatomic, readonly) int pid;
@property (nonatomic, readonly) int pidversion;
@property (nonatomic, readonly, copy) NSString *redactedDescription;
@property (nonatomic, readonly) void*resourceFetchManager;
@property (readonly) Class superclass;
@property (nonatomic, retain) NSObject<OS_voucher> *voucher;

- (id).cxx_construct;
- (void).cxx_destruct;
- (void)associateConnectionWithPeerID:(unsigned long long)arg1 clientPorts:(id)arg2;
- (struct { unsigned int x1[8]; })auditToken;
- (id)clientPorts;
- (void)decodeShaderGraph:(id)arg1 withReply:(id /* block */)arg2;
- (id)description;
- (id)initWithResourceFetchManager:(void*)arg1 connection:(const struct Connection { id x1; }*)arg2 voucher:(id)arg3;
- (void)invalidate;
- (unsigned long long)peerID;
- (struct HashTable<unsigned long long, re::SharedPtr<re::SharedObject>, re::Hash<uint64_t>, re::EqualTo<uint64_t>, true, false> { struct Allocator {} *x1; unsigned int *x2; union Entry { struct EntryWithoutHash {} *x_3_1_1; struct EntryWithHash {} *x_3_1_2; } x3; unsigned int x4; unsigned int x5; unsigned int x6; unsigned int x7; unsigned int x8; })pendingShaderGraphs;
- (int)pid;
- (int)pidversion;
- (void)pushLoadResourceWithAssetId:(unsigned long long)arg1 assetType:(id)arg2 isPriorityAsset:(bool)arg3;
- (void)receiveDirectResourceCommit:(id)arg1;
- (void)receiveReferenceObject:(id)arg1;
- (id)redactedDescription;
- (void)releaseResourceWithAssetId:(unsigned long long)arg1;
- (void)resourceAtAssetPath:(id)arg1 payloadDidUpdate:(id)arg2 error:(id)arg3;
- (void*)resourceFetchManager;
- (void)setPendingShaderGraphs:(struct HashTable<unsigned long long, re::SharedPtr<re::SharedObject>, re::Hash<uint64_t>, re::EqualTo<uint64_t>, true, false> { struct Allocator {} *x1; unsigned int *x2; union Entry { struct EntryWithoutHash {} *x_3_1_1; struct EntryWithHash {} *x_3_1_2; } x3; unsigned int x4; unsigned int x5; unsigned int x6; unsigned int x7; unsigned int x8; })arg1;
- (void)setVoucher:(id)arg1;
- (id)voucher;

@end
