/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/TextComposer.framework/TextComposer
 */

@interface TCXPCServer : NSObject <NSXPCListenerDelegate> {
    NSXPCListener * _listener;
    NSObject<OS_dispatch_queue> * _queue;
    TCTextServer * _server;
}

@property (readonly, copy) NSString *debugDescription; /* unknown property attribute: ? */
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)initWithTextServer:(id)arg1;
- (void)invalidate;
- (bool)listener:(id)arg1 shouldAcceptNewConnection:(id)arg2;
- (void)run;

@end
