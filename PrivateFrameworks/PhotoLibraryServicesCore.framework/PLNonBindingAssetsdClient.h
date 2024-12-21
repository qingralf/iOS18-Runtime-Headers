/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/PhotoLibraryServicesCore.framework/PhotoLibraryServicesCore
 */

@interface PLNonBindingAssetsdClient : NSObject {
    PLAssetsdClientXPCConnection * _connection;
    PLAssetsdDemoClient * _demoClient;
    NSObject<OS_dispatch_queue> * _isolationQueue;
    PLAssetsdLibraryManagementClient * _libraryManagementClient;
    PLAssetsdNonBindingDebugClient * _nonBindingDebugClient;
    PLAssetsdPrivacySupportClient * _privacySupportClient;
    PLAssetsdSystemLibraryURLReadOnlyClient * _systemLibraryURLReadOnlyClient;
}

@property (readonly) PLAssetsdDemoClient *demoClient;
@property (readonly) PLAssetsdLibraryManagementClient *libraryManagementClient;
@property (readonly) PLAssetsdNonBindingDebugClient *nonBindingDebugClient;
@property (readonly) PLAssetsdPrivacySupportClient *privacySupportClient;
@property (readonly) PLAssetsdSystemLibraryURLReadOnlyClient *systemLibraryURLReadOnlyClient;

- (void).cxx_destruct;
- (void)_updateLibraryStateConnectionInterrupted:(id)arg1;
- (id)demoClient;
- (id)init;
- (id)libraryManagementClient;
- (id)nonBindingDebugClient;
- (id)privacySupportClient;
- (id)systemLibraryURLReadOnlyClient;

@end