/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/MatterPlugin.framework/MatterPlugin
 */

@interface MTRPluginServer : NSObject {
    NSMutableSet * __clientConnections;
    <MTRPluginServerDelegate> * _delegate;
    NSObject<OS_dispatch_queue> * _delegateQueue;
    bool  _running;
}

@property (retain) NSMutableSet *_clientConnections;
@property (readonly, retain) NSSet *clientConnections;
@property (retain) <MTRPluginServerDelegate> *delegate;
@property (retain) NSObject<OS_dispatch_queue> *delegateQueue;
@property (getter=isRunning) bool running;

+ (id)sharedInstance;

- (void).cxx_destruct;
- (id)_clientConnections;
- (bool)_deliverMessageToDelegate:(id)arg1 homeUUID:(id)arg2;
- (bool)addClientConnection:(id)arg1;
- (id)clientConnections;
- (id)delegate;
- (id)delegateQueue;
- (bool)handleIncomingMessage:(id)arg1;
- (id)init;
- (bool)isRunning;
- (bool)removeClientConnection:(id)arg1;
- (void)setDelegate:(id)arg1;
- (void)setDelegateQueue:(id)arg1;
- (void)setRunning:(bool)arg1;
- (void)set_clientConnections:(id)arg1;
- (bool)startWithDelegate:(id)arg1 queue:(id)arg2;
- (bool)stop;

@end