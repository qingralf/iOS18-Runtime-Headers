/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/iTunesCloud.framework/iTunesCloud
 */

@interface ICDelegationConsumerNetService : NSObject <NSNetServiceDelegate> {
    NSObject<OS_dispatch_queue> * _accessQueue;
    NSObject<OS_dispatch_queue> * _calloutQueue;
    <ICDelegationConsumerNetServiceDelegate> * _delegate;
    bool  _didPublish;
    bool  _isPublished;
    NSNetService * _netService;
    NSObject<OS_dispatch_queue> * _netServiceQueue;
    ICDelegationServiceSecuritySettings * _securitySettings;
    NSDictionary * _userIdentityDelegationAccountUUIDs;
}

@property (readonly, copy) NSString *debugDescription; /* unknown property attribute: ? */
@property (nonatomic) <ICDelegationConsumerNetServiceDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) ICDelegationServiceSecuritySettings *securitySettings;
@property (readonly) Class superclass;
@property (nonatomic, readonly, copy) NSDictionary *userIdentityDelegationAccountUUIDs;

- (void).cxx_destruct;
- (void)_updateNetServiceStatus;
- (void)dealloc;
- (id)delegate;
- (id)initWithUserIdentityDelegationAccountUUIDs:(id)arg1;
- (void)netService:(id)arg1 didAcceptConnectionWithInputStream:(id)arg2 outputStream:(id)arg3;
- (void)netService:(id)arg1 didNotPublish:(id)arg2;
- (void)netServiceDidPublish:(id)arg1;
- (void)publish;
- (id)securitySettings;
- (void)setDelegate:(id)arg1;
- (void)stop;
- (id)userIdentityDelegationAccountUUIDs;

@end
