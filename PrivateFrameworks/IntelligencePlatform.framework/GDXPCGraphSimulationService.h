/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/IntelligencePlatform.framework/IntelligencePlatform
 */

@interface GDXPCGraphSimulationService : NSObject {
    NSXPCConnection * _connection;
    NSXPCInterface * _serverInterface;
}

- (void).cxx_destruct;
- (void)dealloc;
- (id)init;
- (void)locked_establishConnection;
- (bool)mockTripleEntityTaggingWithContactId:(id)arg1 inferredRelationshipLabel:(id)arg2 error:(id*)arg3;
- (id)synchronousRemoteObjectProxyWithErrorHandler:(id /* block */)arg1;

@end
