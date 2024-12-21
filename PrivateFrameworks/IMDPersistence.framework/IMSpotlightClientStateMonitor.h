/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/IMDPersistence.framework/IMDPersistence
 */

@interface IMSpotlightClientStateMonitor : NSObject {
    id /* block */  _changeHandler;
    IMSpotlightClientState * _clientState;
    int  _clientStateToken;
    NSLock * _lock;
    NSObject<OS_dispatch_queue> * _queue;
}

@property (nonatomic, readonly) id /* block */ changeHandler;
@property (nonatomic, copy) IMSpotlightClientState *clientState;
@property (nonatomic, readonly) int clientStateToken;
@property (nonatomic, readonly) NSLock *lock;
@property (nonatomic, readonly) NSObject<OS_dispatch_queue> *queue;

- (void).cxx_destruct;
- (void)_updateClientState;
- (id /* block */)changeHandler;
- (id)clientState;
- (int)clientStateToken;
- (void)dealloc;
- (id)init;
- (id)initWithChangeHandler:(id /* block */)arg1;
- (id)lock;
- (id)queue;
- (void)setClientState:(id)arg1;

@end