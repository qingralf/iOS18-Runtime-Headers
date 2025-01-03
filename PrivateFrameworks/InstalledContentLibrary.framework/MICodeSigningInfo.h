/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/InstalledContentLibrary.framework/InstalledContentLibrary
 */

@interface MICodeSigningInfo : NSObject {
    NSString * _codeInfoIdentifier;
    unsigned long long  _codeSignerType;
    NSDictionary * _entitlements;
    NSData * _launchWarningData;
    unsigned long long  _profileValidationType;
    NSNumber * _signatureVersion;
    NSString * _signerIdentity;
    NSString * _signerOrganization;
    unsigned long long  _signingInfoSource;
    NSString * _teamIdentifier;
}

@property (nonatomic, readonly, copy) NSString *codeInfoIdentifier;
@property (nonatomic, readonly) unsigned long long codeSignerType;
@property (nonatomic, readonly, copy) NSDictionary *dictionaryRepresentation;
@property (nonatomic, readonly, copy) NSDictionary *entitlements;
@property (nonatomic, readonly, copy) NSData *launchWarningData;
@property (nonatomic, readonly) unsigned long long profileValidationType;
@property (nonatomic, readonly, copy) NSNumber *signatureVersion;
@property (nonatomic, readonly, copy) NSString *signerIdentity;
@property (nonatomic, readonly, copy) NSString *signerOrganization;
@property (nonatomic, readonly) unsigned long long signingInfoSource;
@property (nonatomic, readonly, copy) NSString *teamIdentifier;

+ (bool)getValue:(id*)arg1 forEntitlement:(id)arg2 fromProcessWithAuditToken:(struct { unsigned int x1[8]; })arg3 error:(id*)arg4;
+ (id)signingIdentifierForAuditToken:(struct { unsigned int x1[8]; })arg1 error:(id*)arg2;

- (void).cxx_destruct;
- (id)codeInfoIdentifier;
- (unsigned long long)codeSignerType;
- (id)dictionaryRepresentation;
- (id)entitlements;
- (id)initForTesting;
- (id)initWithDictionaryRepresentation:(id)arg1;
- (id)initWithDictionaryRepresentation:(id)arg1 fromSource:(unsigned long long)arg2;
- (id)initWithSignerIdentity:(id)arg1 signerOrganization:(id)arg2 codeInfoIdentifier:(id)arg3 teamIdentifier:(id)arg4 signatureVersion:(id)arg5 entitlements:(id)arg6 signerType:(unsigned long long)arg7 profileType:(unsigned long long)arg8 signingInfoSource:(unsigned long long)arg9 launchWarningData:(id)arg10;
- (id)launchWarningData;
- (unsigned long long)profileValidationType;
- (id)signatureVersion;
- (id)signerIdentity;
- (id)signerOrganization;
- (unsigned long long)signingInfoSource;
- (id)teamIdentifier;

@end
