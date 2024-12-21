/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/Message.framework/Message
 */

@interface MFSecureMIMECompositionManager : NSObject {
    NSMutableDictionary * _certificatesByRecipient;
    <MFSecureMIMECompositionManagerDelegate> * _delegate;
    struct __SecIdentity { } * _encryptionIdentity;
    MFError * _encryptionIdentityError;
    long long  _encryptionPolicy;
    long long  _encryptionStatus;
    unsigned long long  _encryptionStatusSemaphore;
    NSMutableDictionary * _errorsByRecipient;
    bool  _invalidated;
    NSLock * _lock;
    NSObject<OS_dispatch_queue> * _queue;
    NSMutableSet * _recipients;
    MailAccount * _sendingAccount;
    NSString * _sendingAddress;
    struct __SecIdentity { } * _signingIdentity;
    MFError * _signingIdentityError;
    long long  _signingPolicy;
    long long  _signingStatus;
    unsigned long long  _signingStatusSemaphore;
}

@property <MFSecureMIMECompositionManagerDelegate> *delegate;
@property (readonly) long long encryptionPolicy;
@property (readonly) long long encryptionStatus;
@property (readonly) NSSet *recipients;
@property (readonly) MailAccount *sendingAccount;
@property (copy) NSString *sendingAddress;
@property (readonly) long long signingPolicy;
@property (readonly) long long signingStatus;

+ (id)copyEncryptionCertificatesForAccount:(id)arg1 recipientAddresses:(id)arg2 errorsByAddress:(id*)arg3;
+ (struct __SecIdentity { }*)copyEncryptionIdentityForAccount:(id)arg1 sendingAddress:(id)arg2 error:(id*)arg3;
+ (struct __SecIdentity { }*)copySigningIdentityForAccount:(id)arg1 sendingAddress:(id)arg2 error:(id*)arg3;
+ (unsigned int)evaluateTrustForSigningCertificate:(struct __SecCertificate { }*)arg1 sendingAddress:(id)arg2;

- (void).cxx_destruct;
- (void)addRecipients:(id)arg1;
- (id)compositionSpecification;
- (void)dealloc;
- (id)delegate;
- (long long)encryptionPolicy;
- (long long)encryptionStatus;
- (id)init;
- (id)initWithSendingAccount:(id)arg1 signingPolicy:(long long)arg2 encryptionPolicy:(long long)arg3;
- (id)initWithSigningPolicy:(long long)arg1 encryptionPolicy:(long long)arg2;
- (void)invalidate;
- (id)recipients;
- (void)removeRecipients:(id)arg1;
- (id)sendingAccount;
- (id)sendingAddress;
- (void)setDelegate:(id)arg1;
- (void)setSendingAddress:(id)arg1;
- (bool)shouldAllowSend;
- (long long)signingPolicy;
- (long long)signingStatus;

@end