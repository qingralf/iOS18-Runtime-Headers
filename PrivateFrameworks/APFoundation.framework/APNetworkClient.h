/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/APFoundation.framework/APFoundation
 */

@interface APNetworkClient : NSObject {
    <APHTTPSessionManagerProtocol> * _serviceManager;
}

@property (nonatomic, retain) <APHTTPSessionManagerProtocol> *serviceManager;

+ (void)createSharedNetworkClientForUnitTest;
+ (void)createSharedNetworkClientWithConfig:(id)arg1;
+ (void)setSharedAPNetworkClient:(id)arg1;
+ (id)sharedAPNetworkClient;

- (void).cxx_destruct;
- (id)GET:(id)arg1 client:(id)arg2 headers:(id)arg3 withCompletionHandler:(id /* block */)arg4;
- (id)GET:(id)arg1 headers:(id)arg2 withCompletionHandler:(id /* block */)arg3;
- (id)GET:(id)arg1 headers:(id)arg2 withService:(id)arg3 andCompletionHandler:(id /* block */)arg4;
- (id)HEAD:(id)arg1 client:(id)arg2 headers:(id)arg3 withCompletionHandler:(id /* block */)arg4;
- (id)HEAD:(id)arg1 headers:(id)arg2 withCompletionHandler:(id /* block */)arg3;
- (id)HEAD:(id)arg1 headers:(id)arg2 withService:(id)arg3 andCompletionHandler:(id /* block */)arg4;
- (id)POST:(id)arg1 client:(id)arg2 headers:(id)arg3 body:(id)arg4 completionHandler:(id /* block */)arg5;
- (id)POST:(id)arg1 headers:(id)arg2 body:(id)arg3 withCompletionHandler:(id /* block */)arg4;
- (id)POST:(id)arg1 headers:(id)arg2 body:(id)arg3 withService:(id)arg4 andCompletionHandler:(id /* block */)arg5;
- (id)_billedSessionForRequester:(id)arg1;
- (id)_createSessionForRequester:(id)arg1 httpMaximumConnectionsPerHost:(long long)arg2;
- (id)_defaultSessionConfig;
- (void)_invalidateAllServicesAndCancelTasks:(bool)arg1;
- (bool)cancelTasksForService:(id)arg1 withCompletionHandler:(id /* block */)arg2;
- (id)initWithConfig:(id)arg1;
- (bool)invalidateService:(id)arg1 andCancelTasks:(bool)arg2;
- (id)sendRequest:(id)arg1;
- (id)serviceManager;
- (id)sessionForClient:(id)arg1;
- (void)setServiceManager:(id)arg1;
- (id)temporarySessionForClient:(id)arg1;
- (id)temporarySessionForDaemon;
- (id)urlSessionForService:(id)arg1;

@end