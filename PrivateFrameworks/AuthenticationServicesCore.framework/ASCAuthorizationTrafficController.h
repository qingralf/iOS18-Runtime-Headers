/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/AuthenticationServicesCore.framework/AuthenticationServicesCore
 */

@interface ASCAuthorizationTrafficController : NSObject {
    NSMutableDictionary * _appsWithActiveRequests;
    _TtC26AuthenticationServicesCore27ASProgressiveBackoffManager * _backoffManager;
    NSObject<OS_dispatch_queue> * _clearanceQueue;
    NSObject<OS_dispatch_queue> * _trafficQueue;
}

+ (bool)_appWithAppIdentifierIsWebBrowser:(id)arg1;
+ (id)sharedInstance;

- (void).cxx_destruct;
- (void)beginAuthorizationForApplicationIdentifier:(id)arg1 token:(id)arg2 withClearanceHandler:(id /* block */)arg3;
- (void)cancelAuthorizationForAppIdentifierIfNecessary:(id)arg1 token:(id)arg2;
- (void)endAuthorizationForAppIdentifier:(id)arg1 token:(id)arg2 clearanceHandler:(id /* block */)arg3;
- (id)init;

@end