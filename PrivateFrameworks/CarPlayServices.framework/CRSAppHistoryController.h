/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/CarPlayServices.framework/CarPlayServices
 */

@interface CRSAppHistoryController : NSObject <BSInvalidatable, CARAppHistoryServerToClientInterface> {
    NSObject<OS_dispatch_queue> * _callbackQueue;
    BSServiceConnection * _connection;
}

@property (nonatomic, retain) NSObject<OS_dispatch_queue> *callbackQueue;
@property (nonatomic, retain) BSServiceConnection *connection;
@property (readonly, copy) NSString *debugDescription; /* unknown property attribute: ? */
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)addAnalyticsValues:(id)arg1 toEvent:(unsigned long long)arg2 completion:(id /* block */)arg3;
- (id)callbackQueue;
- (id)connection;
- (void)fetchDockAppForCategory:(unsigned long long)arg1 completion:(id /* block */)arg2;
- (void)fetchSessionEchoContextsWithCompletion:(id /* block */)arg1;
- (void)fetchSessionUIContextsWithCompletion:(id /* block */)arg1;
- (void)fetchUIContextsWithCompletion:(id /* block */)arg1;
- (id)init;
- (void)invalidate;
- (void)setCallbackQueue:(id)arg1;
- (void)setConnection:(id)arg1;

@end
