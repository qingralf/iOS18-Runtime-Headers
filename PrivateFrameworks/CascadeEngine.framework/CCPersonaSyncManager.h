/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/CascadeEngine.framework/CascadeEngine
 */

@interface CCPersonaSyncManager : NSObject {
    NSObject<OS_dispatch_queue> * _queue;
    CCRapportSyncEngine * _syncEngine;
}

- (void).cxx_destruct;
- (id)initWithQueue:(id)arg1;
- (void)setupSyncEngineToHandleIncomingRequestsForPersona:(id)arg1 completionHandler:(id /* block */)arg2;
- (void)syncAllPersonasNowWithReason:(unsigned long long)arg1 activity:(id)arg2 completionHandler:(id /* block */)arg3;
- (id)syncEngineForCurrentPersona;

@end