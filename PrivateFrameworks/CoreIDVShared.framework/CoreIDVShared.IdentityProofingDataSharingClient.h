/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/CoreIDVShared.framework/CoreIDVShared
 */

@interface CoreIDVShared.IdentityProofingDataSharingClient : NSObject <CoreIDVShared.IdentityProofingDataSharing> {
    void connection;
    void disconnectHandler;
    void remoteObjectProxy;
    void remoteObjectProxyError;
    void serverConnection;
}

- (void).cxx_destruct;
- (void)checkUserConsentWithCompletionHandler:(void *)arg1; // needs 1 arg types, found 11: id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, bool, id, /* Warning: Unrecognized filer type: '"' using 'void*' */ void*, inout unsigned short, /* Warning: Unrecognized filer type: 'E' using 'void*' */ void*, const const out const /* Warning: Unrecognized filer type: '"' using 'void*' */ void*, /* Warning: Unrecognized filer type: '>' using 'void*' */ void*
- (void)didChangeUserConsent:(long long)arg1 completion:(id /* block */)arg2;
- (void)fetchUserConsentWithCompletionHandler:(void *)arg1; // needs 1 arg types, found 11: id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, long long, id, /* Warning: Unrecognized filer type: '"' using 'void*' */ void*, inout unsigned short, /* Warning: Unrecognized filer type: 'E' using 'void*' */ void*, const const out const /* Warning: Unrecognized filer type: '"' using 'void*' */ void*, /* Warning: Unrecognized filer type: '>' using 'void*' */ void*
- (id)init;

@end
