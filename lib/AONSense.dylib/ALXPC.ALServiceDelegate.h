/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/AONSense.framework/AONSense.dylib
 */

@interface ALXPC.ALServiceDelegate : NSObject <ALXPC.ALXPCProtocol, NSXPCListenerDelegate> {
    void _dataService;
    void _listener;
    void _queue;
}

- (void).cxx_destruct;
- (id)init;
- (bool)listener:(id)arg1 shouldAcceptNewConnection:(id)arg2;
- (void)onData:(id)arg1;
- (void)onInterrupt;

@end
