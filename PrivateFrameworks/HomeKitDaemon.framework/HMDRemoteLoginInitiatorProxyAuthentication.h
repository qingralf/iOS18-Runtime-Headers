/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/HomeKitDaemonLegacy.framework/HomeKitDaemonLegacy
 */

@interface HMDRemoteLoginInitiatorProxyAuthentication : HMDRemoteLoginInitiatorAuthentication {
    NSDictionary * _authResults;
}

@property (nonatomic, readonly) NSDictionary *authResults;

+ (id)logCategory;

- (void).cxx_destruct;
- (void)_authenticate;
- (id)authResults;
- (void)authenticate;
- (void)dealloc;
- (id)description;
- (id)initWithSessionID:(id)arg1 remoteDevice:(id)arg2 workQueue:(id)arg3 remoteMessageSender:(id)arg4 delegate:(id)arg5 authResults:(id)arg6;

@end
