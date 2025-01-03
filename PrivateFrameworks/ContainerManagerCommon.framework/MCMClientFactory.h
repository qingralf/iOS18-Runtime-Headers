/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/ContainerManagerCommon.framework/ContainerManagerCommon
 */

@interface MCMClientFactory : NSObject <MCMClientFactory, MCMClientFactoryWithXPC> {
    <MCMClientCodeSignInfoCache> * _clientCodeSignInfoCache;
    <MCMClientIdentityCache> * _clientIdentityCache;
    MCMUserIdentityCache * _userIdentityCache;
}

@property (nonatomic, readonly) <MCMClientCodeSignInfoCache> *clientCodeSignInfoCache;
@property (nonatomic, readonly) <MCMClientIdentityCache> *clientIdentityCache;
@property (readonly, copy) NSString *debugDescription; /* unknown property attribute: ? */
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (nonatomic, readonly) MCMUserIdentityCache *userIdentityCache;

- (void).cxx_destruct;
- (id)_clientIdentityWithClient:(struct container_client { unsigned long long x1; char *x2; char *x3; unsigned int x4; char *x5; unsigned int x6; unsigned int x7; struct { unsigned int x_8_1_1[8]; } x8; int x9; bool x10; bool x11; bool x12; id x13; }*)arg1 proximateClient:(id)arg2 error:(id*)arg3;
- (id)_clientIdentityWithClientMessageContext:(id)arg1 error:(id*)arg2;
- (id)_codeSignInfoWithClient:(struct container_client { unsigned long long x1; char *x2; char *x3; unsigned int x4; char *x5; unsigned int x6; unsigned int x7; struct { unsigned int x_8_1_1[8]; } x8; int x9; bool x10; bool x11; bool x12; id x13; }*)arg1 CDHash:(id)arg2 identifier:(id)arg3 teamIdentifier:(id)arg4 error:(id*)arg5;
- (id)_proxiedClientIdentityFromMessage:(id)arg1 proximateClient:(id)arg2 error:(id*)arg3;
- (id)clientCodeSignInfoCache;
- (id)clientIdentityCache;
- (id)clientIdentityWithClientMessageContext:(id)arg1 xpcMessage:(id)arg2 error:(id*)arg3;
- (id)initWithUserIdentityCache:(id)arg1 clientCodeSignInfoCache:(id)arg2 clientIdentityCache:(id)arg3;
- (id)userIdentityCache;

@end
