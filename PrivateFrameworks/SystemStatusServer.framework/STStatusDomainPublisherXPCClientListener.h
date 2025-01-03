/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/SystemStatusServer.framework/SystemStatusServer
 */

@interface STStatusDomainPublisherXPCClientListener : NSObject <NSXPCListenerDelegate> {
    <STStatusDomainPublisherServerHandle> * _serverHandle;
    NSXPCListener * _xpcListener;
}

@property (readonly, copy) NSString *debugDescription; /* unknown property attribute: ? */
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)dealloc;
- (id)initWithServerHandle:(id)arg1;
- (bool)listener:(id)arg1 shouldAcceptNewConnection:(id)arg2;

@end
