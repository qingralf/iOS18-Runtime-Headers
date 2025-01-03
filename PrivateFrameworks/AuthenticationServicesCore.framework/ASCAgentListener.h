/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/AuthenticationServicesCore.framework/AuthenticationServicesCore
 */

@interface ASCAgentListener : NSObject <NSXPCListenerDelegate> {
    NSXPCListener * _listener;
    <ASPublicKeyCredentialManagerInterface> * _publicKeyCredentialManager;
    _TtC26AuthenticationServicesCore30ASPasswordSignInEventCollector * _signInEventCollector;
}

@property (readonly, copy) NSString *debugDescription; /* unknown property attribute: ? */
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) _TtC26AuthenticationServicesCore30ASPasswordSignInEventCollector *signInEventCollector;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)initWithPublicKeyCredentialManager:(id)arg1;
- (bool)listener:(id)arg1 shouldAcceptNewConnection:(id)arg2;
- (void)setSignInEventCollector:(id)arg1;
- (id)signInEventCollector;

@end
