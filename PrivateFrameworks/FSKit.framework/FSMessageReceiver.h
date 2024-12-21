/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/FSKit.framework/FSKit
 */

@interface FSMessageReceiver : NSObject <NSXPCListenerDelegate> {
    FSMessageReceiverDelegateWrapper * _delegateWrapper;
    NSXPCListenerEndpoint * _endpoint;
    NSXPCListener * _listener;
}

@property (readonly, copy) NSString *debugDescription; /* unknown property attribute: ? */
@property (readonly) FSMessageReceiverDelegateWrapper *delegateWrapper;
@property (readonly, copy) NSString *description;
@property (readonly) NSXPCListenerEndpoint *endpoint;
@property (readonly) unsigned long long hash;
@property (readonly) NSXPCListener *listener;
@property (readonly) Class superclass;

+ (id)receiverForStandardIO:(id /* block */)arg1;
+ (id)receiverWithDelegate:(id)arg1;
+ (id)receiverWithDelegate:(id)arg1 locale:(id)arg2 preferredLanguages:(id)arg3;

- (void).cxx_destruct;
- (id)delegateWrapper;
- (void)didStart;
- (id)endpoint;
- (id)getConnection;
- (id)initWithDelegate:(id)arg1 locale:(id)arg2 preferredLanguages:(id)arg3;
- (id)listener;
- (bool)listener:(id)arg1 shouldAcceptNewConnection:(id)arg2;

@end