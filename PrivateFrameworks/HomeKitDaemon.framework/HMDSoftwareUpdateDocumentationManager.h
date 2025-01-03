/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/HomeKitDaemonLegacy.framework/HomeKitDaemonLegacy
 */

@interface HMDSoftwareUpdateDocumentationManager : HMFObject <HMFLogging, HMFNetMonitorDelegate> {
    NSMutableOrderedSet * _assets;
    <HMDFileManager> * _fileManager;
    struct os_unfair_recursive_lock_s { 
        struct os_unfair_lock_s { 
            unsigned int _os_unfair_lock_opaque; 
        } ourl_lock; 
        unsigned int ourl_count; 
    }  _lock;
    HMFNetMonitor * _netMonitor;
    NSObject<OS_dispatch_queue> * _queue;
    NSMutableSet * _registeredMetadata;
}

@property (readonly) NSArray *assets;
@property (readonly, copy) NSString *debugDescription; /* unknown property attribute: ? */
@property (readonly, copy) NSString *description;
@property (readonly) <HMDFileManager> *fileManager;
@property (readonly) unsigned long long hash;
@property (readonly) NSMutableSet *registeredMetadata;
@property (readonly) Class superclass;
@property (nonatomic, readonly) NSObject<OS_dispatch_queue> *workQueue;

+ (id)logCategory;
+ (id)sharedManager;

- (void).cxx_destruct;
- (void)addAsset:(id)arg1;
- (id)assetForDocumentationMetadata:(id)arg1;
- (id)assets;
- (void)auditAsset:(id)arg1;
- (id)fileManager;
- (id)init;
- (id)initWithFileManager:(id)arg1;
- (void)networkMonitorIsReachable:(id)arg1;
- (void)parseCachedAssets;
- (void)registerDocumentationMetadata:(id)arg1;
- (id)registeredMetadata;
- (void)removeAsset:(id)arg1;
- (void)unregisterDocumentationMetadata:(id)arg1;
- (id)workQueue;

@end
