/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/PassKitCore.framework/PassKitCore
 */

@interface PKPaymentRemoteCredential : PKPaymentCredential {
    bool  _couldSupportSuperEasyProvisioning;
    PKPaymentRemoteCredentialFIDOProfile * _fidoProfile;
    NSString * _identifier;
    NSString * _identityAccountKeyIdentifier;
    NSDate * _originalProvisioningDate;
    NSString * _ownershipTokenIdentifier;
    NSString * _passTypeIdentifier;
    NSURL * _passURL;
    PKPaymentPass * _paymentPass;
    NSString * _personalizedVehicleIdentifier;
    NSString * _productIdentifier;
    unsigned long long  _rank;
    bool  _requiresMetadata;
    NSString * _serialNumber;
    long long  _status;
    NSString * _statusDescription;
    NSArray * _summaryMetadata;
    NSString * _summaryMetadataDescription;
    bool  _supportsSuperEasyProvisioning;
    long long  _transferType;
    NSString * _transferableFromDeviceIdentifier;
    NSArray * _transferableFromDevices;
}

@property (nonatomic) bool couldSupportSuperEasyProvisioning;
@property (nonatomic, retain) PKPaymentRemoteCredentialFIDOProfile *fidoProfile;
@property (nonatomic, copy) NSString *identifier;
@property (nonatomic, retain) NSString *identityAccountKeyIdentifier;
@property (nonatomic, retain) NSDate *originalProvisioningDate;
@property (nonatomic, copy) NSString *ownershipTokenIdentifier;
@property (nonatomic, copy) NSString *passTypeIdentifier;
@property (nonatomic, copy) NSURL *passURL;
@property (nonatomic, retain) PKPaymentPass *paymentPass;
@property (nonatomic, retain) NSString *personalizedVehicleIdentifier;
@property (nonatomic, copy) NSString *productIdentifier;
@property (nonatomic) unsigned long long rank;
@property (nonatomic) bool requiresMetadata;
@property (nonatomic, copy) NSString *serialNumber;
@property (nonatomic) long long status;
@property (nonatomic, copy) NSString *statusDescription;
@property (nonatomic, copy) NSArray *summaryMetadata;
@property (nonatomic, copy) NSString *summaryMetadataDescription;
@property (nonatomic) bool supportsSuperEasyProvisioning;
@property (nonatomic) long long transferType;
@property (nonatomic, copy) NSString *transferableFromDeviceIdentifier;
@property (nonatomic, retain) NSArray *transferableFromDevices;

- (void).cxx_destruct;
- (long long)compare:(id)arg1;
- (bool)couldSupportSuperEasyProvisioning;
- (id)description;
- (id)detailDescriptionWithEnvironment:(unsigned long long)arg1;
- (id)fidoProfile;
- (unsigned long long)hash;
- (id)identifier;
- (id)identityAccountKeyIdentifier;
- (id)init;
- (id)initWithDictionary:(id)arg1;
- (id)initWithIdentifier:(id)arg1 status:(long long)arg2 credentialType:(long long)arg3 passURL:(id)arg4;
- (bool)isEqual:(id)arg1;
- (id)originalProvisioningDate;
- (id)ownershipTokenIdentifier;
- (id)passTypeIdentifier;
- (id)passURL;
- (id)paymentPass;
- (id)personalizedVehicleIdentifier;
- (id)productIdentifier;
- (unsigned long long)rank;
- (bool)requiresMetadata;
- (id)serialNumber;
- (void)setCouldSupportSuperEasyProvisioning:(bool)arg1;
- (void)setFidoProfile:(id)arg1;
- (void)setIdentifier:(id)arg1;
- (void)setIdentityAccountKeyIdentifier:(id)arg1;
- (void)setOriginalProvisioningDate:(id)arg1;
- (void)setOwnershipTokenIdentifier:(id)arg1;
- (void)setPassTypeIdentifier:(id)arg1;
- (void)setPassURL:(id)arg1;
- (void)setPaymentPass:(id)arg1;
- (void)setPersonalizedVehicleIdentifier:(id)arg1;
- (void)setProductIdentifier:(id)arg1;
- (void)setRank:(unsigned long long)arg1;
- (void)setRequiresMetadata:(bool)arg1;
- (void)setSerialNumber:(id)arg1;
- (void)setStatus:(long long)arg1;
- (void)setStatusDescription:(id)arg1;
- (void)setSummaryMetadata:(id)arg1;
- (void)setSummaryMetadataDescription:(id)arg1;
- (void)setSupportsSuperEasyProvisioning:(bool)arg1;
- (void)setTransferType:(long long)arg1;
- (void)setTransferableFromDeviceIdentifier:(id)arg1;
- (void)setTransferableFromDevices:(id)arg1;
- (id)setupProductIdentifier;
- (long long)status;
- (id)statusDescription;
- (id)summaryMetadata;
- (id)summaryMetadataDescription;
- (bool)supportsSuperEasyProvisioning;
- (long long)transferType;
- (id)transferableFromDeviceIdentifier;
- (id)transferableFromDevices;
- (void)updateWithDictionary:(id)arg1;

@end
