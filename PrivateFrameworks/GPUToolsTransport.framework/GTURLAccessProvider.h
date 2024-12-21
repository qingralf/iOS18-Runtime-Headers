/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/GPUToolsTransport.framework/GPUToolsTransport
 */

@interface GTURLAccessProvider : NSObject <GTURLAccessProvider> {
    <GTConnectionProvider> * _connectionProvider;
    NSString * _deviceUDID;
    NSObject<OS_os_log> * _log;
    NSMutableDictionary * _registeredURLs;
    <GTServiceProvider> * _serviceProvider;
    GTServiceVendor * _serviceVendor;
}

- (void).cxx_destruct;
- (bool)_sharesFileSystemWith:(id)arg1 remoteConnection:(id)arg2;
- (void)copyIdentifier:(id)arg1 toDevice:(id)arg2 allowLocalURL:(bool)arg3 completionHandler:(id /* block */)arg4;
- (void)copyIdentifier:(id)arg1 toDevice:(id)arg2 completionHandler:(id /* block */)arg3;
- (id)initWithServiceProvider:(id)arg1 connectionProvider:(id)arg2 serviceVendor:(id)arg3;
- (id)makeURL:(id)arg1;
- (void)securityScopedURLFromSandboxID:(id)arg1 completionHandler:(id /* block */)arg2;
- (void)transferIdentifier:(id)arg1 toDevice:(id)arg2 completionHandler:(id /* block */)arg3;
- (id)urlForPath:(id)arg1;

@end