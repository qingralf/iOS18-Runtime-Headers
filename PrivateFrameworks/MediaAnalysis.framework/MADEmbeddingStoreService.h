/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/MediaAnalysis.framework/MediaAnalysis
 */

@interface MADEmbeddingStoreService : NSObject <MADEmbeddingStoreClientProtocol> {
    NSXPCConnection * _connection;
    NSObject<OS_dispatch_queue> * _connectionQueue;
    NSMutableDictionary * _sandboxHandles;
    NSObject<OS_dispatch_queue> * _sandboxQueue;
}

+ (id)allowedClasses;
+ (void)configureServerInterface:(id)arg1;
+ (bool)isEntitledForInProcessAccess;
+ (id)serviceName;
+ (id)sharedService;

- (void).cxx_destruct;
- (void)checkSandboxExtensionForPhotoLibraryURL:(id)arg1 error:(id*)arg2;
- (id)connection;
- (void)dealloc;
- (id)fetchEmbeddingsWithAssetUUIDs:(id)arg1 photoLibraryURL:(id)arg2 options:(id)arg3 error:(id*)arg4;
- (id)init;
- (id)initInternal;
- (void)prewarmSearchWithConcurrencyLimit:(unsigned long long)arg1 photoLibraryURL:(id)arg2 error:(id*)arg3;
- (id)searchWithEmbeddings:(id)arg1 photoLibraryURL:(id)arg2 options:(id)arg3 error:(id*)arg4;

@end
