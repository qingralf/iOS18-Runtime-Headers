/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/Matter.framework/Matter
 */

@interface MTRDeviceControllerParameters : MTRDeviceControllerAbstractParameters {
    NSArray * _certificationDeclarationCertificates;
    unsigned long long  _concurrentSubscriptionEstablishmentsAllowedOnThread;
    NSData * _intermediateCertificate;
    NSData * _ipk;
    NSData * _operationalCertificate;
    <MTROperationalCertificateIssuer> * _operationalCertificateIssuer;
    NSObject<OS_dispatch_queue> * _operationalCertificateIssuerQueue;
    <MTRKeypair> * _operationalKeypair;
    <MTROTAProviderDelegate> * _otaProviderDelegate;
    NSObject<OS_dispatch_queue> * _otaProviderDelegateQueue;
    NSArray * _productAttestationAuthorityCertificates;
    NSData * _rootCertificate;
    bool  _shouldAdvertiseOperational;
    MTRDeviceStorageBehaviorConfiguration * _storageBehaviorConfiguration;
    <MTRDeviceControllerStorageDelegate> * _storageDelegate;
    NSObject<OS_dispatch_queue> * _storageDelegateQueue;
    NSUUID * _uniqueIdentifier;
    NSNumber * _vendorID;
}

@property (nonatomic, copy) NSArray *certificationDeclarationCertificates;
@property (nonatomic) unsigned long long concurrentSubscriptionEstablishmentsAllowedOnThread;
@property (nonatomic, readonly, copy) NSData *intermediateCertificate;
@property (nonatomic, readonly, copy) NSData *ipk;
@property (nonatomic, readonly, copy) NSData *operationalCertificate;
@property (nonatomic, readonly) <MTROperationalCertificateIssuer> *operationalCertificateIssuer;
@property (nonatomic, readonly) NSObject<OS_dispatch_queue> *operationalCertificateIssuerQueue;
@property (nonatomic, readonly) <MTRKeypair> *operationalKeypair;
@property (nonatomic, readonly) <MTROTAProviderDelegate> *otaProviderDelegate;
@property (nonatomic, readonly) NSObject<OS_dispatch_queue> *otaProviderDelegateQueue;
@property (nonatomic, copy) NSArray *productAttestationAuthorityCertificates;
@property (nonatomic, readonly, copy) NSData *rootCertificate;
@property (nonatomic) bool shouldAdvertiseOperational;
@property (nonatomic, copy) MTRDeviceStorageBehaviorConfiguration *storageBehaviorConfiguration;
@property (nonatomic, readonly) <MTRDeviceControllerStorageDelegate> *storageDelegate;
@property (nonatomic, readonly) NSObject<OS_dispatch_queue> *storageDelegateQueue;
@property (nonatomic, readonly) NSUUID *uniqueIdentifier;
@property (nonatomic, readonly, copy) NSNumber *vendorID;

+ (id)fabricIDFromNOC:(id)arg1;
+ (id)nodeIDFromNOC:(id)arg1;
+ (id)publicKeyFromCertificate:(id)arg1;

- (void).cxx_destruct;
- (id)certificationDeclarationCertificates;
- (unsigned long long)concurrentSubscriptionEstablishmentsAllowedOnThread;
- (id)initWithStorageDelegate:(id)arg1 storageDelegateQueue:(id)arg2 uniqueIdentifier:(id)arg3 ipk:(id)arg4 vendorID:(id)arg5 operationalKeypair:(id)arg6 operationalCertificate:(id)arg7 intermediateCertificate:(id)arg8 rootCertificate:(id)arg9;
- (id)intermediateCertificate;
- (id)ipk;
- (id)operationalCertificate;
- (id)operationalCertificateIssuer;
- (id)operationalCertificateIssuerQueue;
- (id)operationalKeypair;
- (id)otaProviderDelegate;
- (id)otaProviderDelegateQueue;
- (id)productAttestationAuthorityCertificates;
- (id)rootCertificate;
- (void)setCertificationDeclarationCertificates:(id)arg1;
- (void)setConcurrentSubscriptionEstablishmentsAllowedOnThread:(unsigned long long)arg1;
- (void)setOTAProviderDelegate:(id)arg1 queue:(id)arg2;
- (void)setOperationalCertificateIssuer:(id)arg1 queue:(id)arg2;
- (void)setProductAttestationAuthorityCertificates:(id)arg1;
- (void)setShouldAdvertiseOperational:(bool)arg1;
- (void)setStorageBehaviorConfiguration:(id)arg1;
- (bool)shouldAdvertiseOperational;
- (id)storageBehaviorConfiguration;
- (id)storageDelegate;
- (id)storageDelegateQueue;
- (id)uniqueIdentifier;
- (id)vendorID;

@end
