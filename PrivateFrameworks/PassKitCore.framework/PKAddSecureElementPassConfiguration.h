/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/PassKitCore.framework/PassKitCore
 */

@interface PKAddSecureElementPassConfiguration : NSObject <NSCopying, NSSecureCoding> {
    unsigned long long  _allowManagedAppleID;
    NSData * _analyticsArchivedParentToken;
    long long  _configurationType;
    NSString * _issuerIdentifier;
    NSString * _localizedDescription;
}

@property (nonatomic, readonly) unsigned long long allowManagedAppleID;
@property (nonatomic, copy) NSData *analyticsArchivedParentToken;
@property (nonatomic, readonly) long long configurationType;
@property (nonatomic, copy) NSString *issuerIdentifier;
@property (nonatomic, copy) NSString *localizedDescription;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (void)_extendableDescription:(id)arg1;
- (unsigned long long)allowManagedAppleID;
- (id)analyticsArchivedParentToken;
- (long long)configurationType;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (bool)hasRequiredDataForProvisioning;
- (id)initWithCoder:(id)arg1;
- (id)initWithType:(long long)arg1;
- (id)issuerIdentifier;
- (id)localizedDescription;
- (void)setAnalyticsArchivedParentToken:(id)arg1;
- (void)setIssuerIdentifier:(id)arg1;
- (void)setLocalizedDescription:(id)arg1;
- (void)updateAllowManagedAppleIDWithConfiguration:(id)arg1;
- (void)updateAllowManagedAppleIDWithEntitlements:(id)arg1;

@end