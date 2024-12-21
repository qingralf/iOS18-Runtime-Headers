/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/CarKit.framework/CarKit
 */

@interface CARConnectionTimeStore : NSObject {
    NSXPCConnection * _connection;
}

@property (nonatomic, retain) NSXPCConnection *connection;

+ (id)_CARConnectionServiceInterface;

- (void).cxx_destruct;
- (bool)_setupConnectionForSystemDaemon:(bool)arg1;
- (void)_xpcFetchWithServiceBlock:(id /* block */)arg1 errorHandler:(id /* block */)arg2;
- (void)_xpcFetchWithSynchronousServiceBlock:(id /* block */)arg1 errorHandler:(id /* block */)arg2;
- (void)clearHistoricalConnectionsWithCompletion:(id /* block */)arg1;
- (id)connection;
- (void)dealloc;
- (void)fetchRecentSessions:(id /* block */)arg1;
- (id)init;
- (id)initForSystemDaemon;
- (void)sendConnectionEvent:(id)arg1 completion:(id /* block */)arg2;
- (void)setConnection:(id)arg1;
- (void)syncSendConnectionEvent:(id)arg1 completion:(id /* block */)arg2;

@end