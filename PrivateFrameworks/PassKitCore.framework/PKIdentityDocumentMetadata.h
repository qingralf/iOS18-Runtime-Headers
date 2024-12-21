/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/PassKitCore.framework/PassKitCore
 */

@interface PKIdentityDocumentMetadata : NSObject <NSCopying, NSSecureCoding, PKPushablePassMetadataProvider> {
    PKPushProvisioningTarget * _provisioningTarget;
    NSString * _serverEnvironmentIdentifier;
    PKAddPassMetadataPreview * _underlyingPreview;
}

@property (nonatomic, readonly) NSString *cardConfigurationIdentifier;
@property (nonatomic, readonly) NSString *cardTemplateIdentifier;
@property (nonatomic, readonly) NSString *credentialIdentifier;
@property (readonly, copy) NSString *debugDescription; /* unknown property attribute: ? */
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) PKPushProvisioningTarget *provisioningTarget;
@property (nonatomic, retain) NSString *serverEnvironmentIdentifier;
@property (nonatomic, readonly) NSString *sharingInstanceIdentifier;
@property (readonly) Class superclass;
@property (nonatomic, retain) PKAddPassMetadataPreview *underlyingPreview;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (void)_extendableDescription:(id)arg1;
- (id)cardConfigurationIdentifier;
- (id)cardTemplateIdentifier;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)credentialIdentifier;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithProvisioningCredentialIdentifier:(id)arg1 sharingInstanceIdentifier:(id)arg2 cardConfigurationIdentifier:(id)arg3 cardTemplateIdentifier:(id)arg4 requiresSimultaneousRequestRouting:(bool)arg5 preview:(id)arg6;
- (id)initWithPushProvisioningTarget:(id)arg1 preview:(id)arg2;
- (id)provisioningTarget;
- (id)serverEnvironmentIdentifier;
- (void)setProvisioningTarget:(id)arg1;
- (void)setServerEnvironmentIdentifier:(id)arg1;
- (void)setUnderlyingPreview:(id)arg1;
- (id)sharingInstanceIdentifier;
- (id)underlyingPreview;

@end