/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/WebBookmarks.framework/WebBookmarks
 */

@interface WebBookmarksXPCListener : NSObject <WebBookmarksXPCConnectionDelegate> {
    NSMutableArray * _clientConnections;
    <WebBookmarksXPCConnectionDelegate> * _delegate;
    NSObject<OS_xpc_object> * _listenerConnection;
    NSMutableDictionary * _messageHandlers;
}

@property (readonly, copy) NSString *debugDescription; /* unknown property attribute: ? */
@property (nonatomic) <WebBookmarksXPCConnectionDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)_handleIncomingConnection:(id)arg1;
- (void)connection:(id)arg1 didCloseWithError:(id)arg2;
- (id)delegate;
- (id)initListenerForMachService:(const char *)arg1;
- (void)setDelegate:(id)arg1;
- (void)setHandler:(id /* block */)arg1 forMessageNamed:(const char *)arg2;
- (void)setMessageHandlers:(id)arg1;

@end
