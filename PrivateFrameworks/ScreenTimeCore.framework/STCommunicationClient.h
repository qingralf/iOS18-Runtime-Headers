/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/ScreenTimeCore.framework/ScreenTimeCore
 */

@interface STCommunicationClient : NSObject {
    STCommunicationServiceClient * _communicationServiceClient;
    NSXPCConnection * _connection;
}

@property (nonatomic, retain) STCommunicationServiceClient *communicationServiceClient;
@property (readonly) NSXPCConnection *connection;

+ (id)_newConnection;

- (void).cxx_destruct;
- (void)authenticateForCommunicationConfigurationOverrideWithCompletionHandler:(id /* block */)arg1;
- (id)communicationServiceClient;
- (id)connection;
- (id)currentConfigurationWithError:(id*)arg1;
- (void)dealloc;
- (id)init;
- (void)setCommunicationServiceClient:(id)arg1;

@end
