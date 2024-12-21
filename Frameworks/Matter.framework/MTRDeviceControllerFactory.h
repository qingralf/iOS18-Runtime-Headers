/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/Matter.framework/Matter
 */

@interface MTRDeviceControllerFactory : NSObject {
    bool  _advertiseOperational;
    struct IgnoreCertificateValidityPeriodPolicy { 
        int (**_vptr$CertificateValidityPolicy)(); 
    }  _certificateValidityPolicy;
    NSArray * _certificationDeclarationCertificates;
    NSObject<OS_dispatch_queue> * _chipWorkQueue;
    MTRDeviceController_Concrete * _controllerBeingShutDown;
    MTRDeviceController_Concrete * _controllerBeingStarted;
    struct DeviceControllerFactory { unsigned short x1; struct DeviceControllerSystemState {} *x2; struct PersistentStorageDelegate {} *x3; struct OperationalKeystore {} *x4; struct OperationalCertificateStore {} *x5; struct CertificateValidityPolicy {} *x6; struct SessionResumptionStorage {} *x7; bool x8; } * _controllerFactory;
    NSMutableArray * _controllers;
    struct os_unfair_lock_s { 
        unsigned int _os_unfair_lock_opaque; 
    }  _controllersLock;
    MTRDiagnosticLogsDownloader * _diagnosticLogsDownloader;
    struct GroupDataProviderImpl { 
        int (**_vptr$GroupDataProvider)(); 
        unsigned short mMaxGroupsPerFabric; 
        unsigned short mMaxGroupKeysPerFabric; 
        struct GroupListener {} *mListener; 
        struct PersistentStorageDelegate {} *mStorage; 
        struct SessionKeystore {} *mSessionKeystore; 
        struct ObjectPool<chip::Credentials::GroupDataProviderImpl::GroupInfoIteratorImpl, 2UL, chip::ObjectPoolMem::kHeap> { 
            unsigned long long mAllocated; 
            unsigned long long mHighWaterMark; 
            struct HeapObjectList { 
                void *mObject; 
                struct HeapObjectListNode {} *mNext; 
                struct HeapObjectListNode {} *mPrev; 
                unsigned long long mIterationDepth; 
                bool mHaveDeferredNodeRemovals; 
            } mObjects; 
        } mGroupInfoIterators; 
        struct ObjectPool<chip::Credentials::GroupDataProviderImpl::GroupKeyIteratorImpl, 2UL, chip::ObjectPoolMem::kHeap> { 
            unsigned long long mAllocated; 
            unsigned long long mHighWaterMark; 
            struct HeapObjectList { 
                void *mObject; 
                struct HeapObjectListNode {} *mNext; 
                struct HeapObjectListNode {} *mPrev; 
                unsigned long long mIterationDepth; 
                bool mHaveDeferredNodeRemovals; 
            } mObjects; 
        } mGroupKeyIterators; 
        struct ObjectPool<chip::Credentials::GroupDataProviderImpl::EndpointIteratorImpl, 2UL, chip::ObjectPoolMem::kHeap> { 
            unsigned long long mAllocated; 
            unsigned long long mHighWaterMark; 
            struct HeapObjectList { 
                void *mObject; 
                struct HeapObjectListNode {} *mNext; 
                struct HeapObjectListNode {} *mPrev; 
                unsigned long long mIterationDepth; 
                bool mHaveDeferredNodeRemovals; 
            } mObjects; 
        } mEndpointIterators; 
        struct ObjectPool<chip::Credentials::GroupDataProviderImpl::KeySetIteratorImpl, 2UL, chip::ObjectPoolMem::kHeap> { 
            unsigned long long mAllocated; 
            unsigned long long mHighWaterMark; 
            struct HeapObjectList { 
                void *mObject; 
                struct HeapObjectListNode {} *mNext; 
                struct HeapObjectListNode {} *mPrev; 
                unsigned long long mIterationDepth; 
                bool mHaveDeferredNodeRemovals; 
            } mObjects; 
        } mKeySetIterators; 
        struct ObjectPool<chip::Credentials::GroupDataProviderImpl::GroupSessionIteratorImpl, 2UL, chip::ObjectPoolMem::kHeap> { 
            unsigned long long mAllocated; 
            unsigned long long mHighWaterMark; 
            struct HeapObjectList { 
                void *mObject; 
                struct HeapObjectListNode {} *mNext; 
                struct HeapObjectListNode {} *mPrev; 
                unsigned long long mIterationDepth; 
                bool mHaveDeferredNodeRemovals; 
            } mObjects; 
        } mGroupSessionsIterator; 
        struct ObjectPool<chip::Credentials::GroupDataProviderImpl::GroupKeyContext, 2UL, chip::ObjectPoolMem::kHeap> { 
            unsigned long long mAllocated; 
            unsigned long long mHighWaterMark; 
            struct HeapObjectList { 
                void *mObject; 
                struct HeapObjectListNode {} *mNext; 
                struct HeapObjectListNode {} *mPrev; 
                unsigned long long mIterationDepth; 
                bool mHaveDeferredNodeRemovals; 
            } mObjects; 
        } mGroupKeyContexPool; 
    }  _groupDataProvider;
    struct TestPersistentStorageDelegate { 
        int (**_vptr$PersistentStorageDelegate)(); 
        struct map<std::string, std::vector<unsigned char>, std::less<std::string>, std::allocator<std::pair<const std::string, std::vector<unsigned char>>>> { 
            struct __tree<std::__value_type<std::string, std::vector<unsigned char>>, std::__map_value_compare<std::string, std::__value_type<std::string, std::vector<unsigned char>>, std::less<std::string>>, std::allocator<std::__value_type<std::string, std::vector<unsigned char>>>> { 
                void *__begin_node_; 
                struct __compressed_pair<std::__tree_end_node<std::__tree_node_base<void *> *>, std::allocator<std::__tree_node<std::__value_type<std::string, std::vector<unsigned char>>, void *>>> { 
                    struct __tree_end_node<std::__tree_node_base<void *> *> { 
                        void *__left_; 
                    } __value_; 
                } __pair1_; 
                struct __compressed_pair<unsigned long, std::__map_value_compare<std::string, std::__value_type<std::string, std::vector<unsigned char>>, std::less<std::string>>> { 
                    unsigned long long __value_; 
                } __pair3_; 
            } __tree_; 
        } mStorage; 
        struct set<std::string, std::less<std::string>, std::allocator<std::string>> { 
            struct __tree<std::string, std::less<std::string>, std::allocator<std::string>> { 
                void *__begin_node_; 
                struct __compressed_pair<std::__tree_end_node<std::__tree_node_base<void *> *>, std::allocator<std::__tree_node<std::string, void *>>> { 
                    struct __tree_end_node<std::__tree_node_base<void *> *> { 
                        void *__left_; 
                    } __value_; 
                } __pair1_; 
                struct __compressed_pair<unsigned long, std::less<std::string>> { 
                    unsigned long long __value_; 
                } __pair3_; 
            } __tree_; 
        } mPoisonKeys; 
        bool mRejectWrites; 
        unsigned int mLoggingLevel; 
    }  _groupStorageDelegate;
    struct PersistentStorageOperationalKeystore { int (**x1)(); struct PersistentStorageDelegate {} *x2; unsigned char x3; struct P256Keypair {} *x4; bool x5; bool x6; } * _keystore;
    unsigned char  _nextAvailableFabricIndex;
    void * _opCertStore;
    struct unique_ptr<MTROperationalBrowser, std::default_delete<MTROperationalBrowser>> { 
        struct __compressed_pair<MTROperationalBrowser *, std::default_delete<MTROperationalBrowser>> { 
            struct MTROperationalBrowser {} *__value_; 
        } __ptr_; 
    }  _operationalBrowser;
    <MTROTAProviderDelegate> * _otaProviderDelegate;
    struct unique_ptr<MTROTAProviderDelegateBridge, std::default_delete<MTROTAProviderDelegateBridge>> { 
        struct __compressed_pair<MTROTAProviderDelegateBridge *, std::default_delete<MTROTAProviderDelegateBridge>> { 
            struct MTROTAProviderDelegateBridge {} *__value_; 
        } __ptr_; 
    }  _otaProviderDelegateBridge;
    NSObject<OS_dispatch_queue> * _otaProviderDelegateQueue;
    MTRServerEndpoint * _otaProviderEndpoint;
    struct PersistentStorageDelegate { int (**x1)(); } * _persistentStorageDelegate;
    struct final { 
        int (**_vptr$BleScannerDelegate)(); 
    }  _preWarmingDelegate;
    NSArray * _productAttestationAuthorityCertificates;
    bool  _running;
    NSMutableArray * _serverEndpoints;
    struct os_unfair_lock_s { 
        unsigned int _os_unfair_lock_opaque; 
    }  _serverEndpointsLock;
    struct RawKeySessionKeystore { 
        int (**_vptr$SessionKeystore)(); 
    }  _sessionKeystore;
    struct MTRSessionResumptionStorageBridge { int (**x1)(); id x2; } * _sessionResumptionStorage;
    bool  _usingPerControllerStorage;
}

@property (nonatomic, readonly) NSArray *knownFabrics;
@property (getter=isRunning, nonatomic, readonly) bool running;

+ (void)initialize;
+ (id)sharedInstance;

- (id).cxx_construct;
- (void).cxx_destruct;
- (id)accessGrantsForFabricIndex:(unsigned char)arg1 clusterPath:(id)arg2;
- (id)createControllerOnExistingFabric:(id)arg1 error:(id*)arg2;
- (id)createControllerOnNewFabric:(id)arg1 error:(id*)arg2;
- (void)dealloc;
- (id)init;
- (bool)isRunning;
- (id)knownFabrics;
- (id)neededReadPrivilegeForClusterID:(id)arg1 attributeID:(id)arg2;
- (void)preWarmCommissioningSession;
- (bool)startControllerFactory:(id)arg1 error:(id*)arg2;
- (void)stopControllerFactory;

@end