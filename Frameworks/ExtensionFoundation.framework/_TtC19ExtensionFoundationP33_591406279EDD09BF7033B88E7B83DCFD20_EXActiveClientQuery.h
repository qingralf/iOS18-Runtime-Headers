/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/ExtensionFoundation.framework/ExtensionFoundation
 */

@interface _TtC19ExtensionFoundationP33_591406279EDD09BF7033B88E7B83DCFD20_EXActiveClientQuery : NSObject <ExtensionFoundation._EXQueryResultsProtocol, NSXPCListenerDelegate> {
    void _observers;
    void connection;
    void query;
    void started;
    void xpcListener;
}

@property (nonatomic, readonly) long long hash;

- (void).cxx_destruct;
- (long long)hash;
- (id)init;
- (bool)isEqual:(id)arg1;
- (bool)listener:(id)arg1 shouldAcceptNewConnection:(id)arg2;
- (void)query:(id)arg1 resultDidUpdate:(id)arg2 reply:(id /* block */)arg3;

@end