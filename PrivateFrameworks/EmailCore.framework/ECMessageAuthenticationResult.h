/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/EmailCore.framework/EmailCore
 */

@interface ECMessageAuthenticationResult : NSObject {
    ECDKIMMessageHeader * _bestDKIMSignatureHeader;
    bool  _dkimAttemptedBodyVerification;
    bool  _dkimAttemptedHeaderVerification;
    bool  _dkimBodyVerified;
    NSError * _dkimError;
    bool  _dkimHasServerResult;
    bool  _dkimHeadersVerified;
    NSString * _dkimServerResultSelector;
    NSString * _dkimServerSigningDomain;
    bool  _dkimServerVerified;
    long long  _dmarcIdentifierAlignment;
    long long  _dmarcReceiverPolicy;
    long long  _dmarcServerStatus;
    long long  _dmarcStatus;
}

@property (nonatomic, retain) ECDKIMMessageHeader *bestDKIMSignatureHeader;
@property (nonatomic) bool dkimAttemptedBodyVerification;
@property (nonatomic) bool dkimAttemptedHeaderVerification;
@property (nonatomic) bool dkimBodyVerified;
@property (nonatomic, retain) NSError *dkimError;
@property (nonatomic) bool dkimHasServerResult;
@property (nonatomic) bool dkimHeadersVerified;
@property (nonatomic, copy) NSString *dkimServerResultSelector;
@property (nonatomic, copy) NSString *dkimServerSigningDomain;
@property (nonatomic) bool dkimServerVerified;
@property (nonatomic) long long dmarcIdentifierAlignment;
@property (nonatomic) long long dmarcReceiverPolicy;
@property (nonatomic) long long dmarcServerStatus;
@property (nonatomic) long long dmarcStatus;

- (void).cxx_destruct;
- (id)bestDKIMSignatureHeader;
- (bool)dkimAttemptedBodyVerification;
- (bool)dkimAttemptedHeaderVerification;
- (bool)dkimBodyVerified;
- (id)dkimError;
- (bool)dkimHasServerResult;
- (bool)dkimHeadersVerified;
- (id)dkimServerResultSelector;
- (id)dkimServerSigningDomain;
- (bool)dkimServerVerified;
- (long long)dmarcIdentifierAlignment;
- (long long)dmarcReceiverPolicy;
- (long long)dmarcServerStatus;
- (long long)dmarcStatus;
- (void)setBestDKIMSignatureHeader:(id)arg1;
- (void)setDkimAttemptedBodyVerification:(bool)arg1;
- (void)setDkimAttemptedHeaderVerification:(bool)arg1;
- (void)setDkimBodyVerified:(bool)arg1;
- (void)setDkimError:(id)arg1;
- (void)setDkimHasServerResult:(bool)arg1;
- (void)setDkimHeadersVerified:(bool)arg1;
- (void)setDkimServerResultSelector:(id)arg1;
- (void)setDkimServerSigningDomain:(id)arg1;
- (void)setDkimServerVerified:(bool)arg1;
- (void)setDmarcIdentifierAlignment:(long long)arg1;
- (void)setDmarcReceiverPolicy:(long long)arg1;
- (void)setDmarcServerStatus:(long long)arg1;
- (void)setDmarcStatus:(long long)arg1;

@end