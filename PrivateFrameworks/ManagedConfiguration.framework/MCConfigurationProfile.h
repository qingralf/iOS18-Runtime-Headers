/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/ManagedConfiguration.framework/ManagedConfiguration
 */

@interface MCConfigurationProfile : MCProfile {
    MCProfileServiceProfile * _OTAProfile;
    bool  _isCloudLocked;
    NSNumber * _isCloudLockedNum;
    bool  _isCloudProfile;
    NSNumber * _isCloudProfileNum;
    bool  _isMDMProfile;
    NSArray * _managedPayloads;
    NSArray * _payloads;
}

@property (nonatomic, retain) MCProfileServiceProfile *OTAProfile;
@property (nonatomic) bool isCloudLocked;
@property (nonatomic, retain) NSNumber *isCloudLockedNum;
@property (nonatomic) bool isCloudProfile;
@property (nonatomic, retain) NSNumber *isCloudProfileNum;
@property (nonatomic) bool isMDMProfile;

- (void).cxx_destruct;
- (id)OTAProfile;
- (void)_addObjectsOfClass:(Class)arg1 fromArray:(id)arg2 toArray:(id)arg3;
- (id)_localizedPayloadSummaryByType:(id)arg1;
- (void)_sortPayloads;
- (id)_sortPayloads:(id)arg1;
- (id)_subjectSummaryFromCertificate:(struct __SecCertificate { }*)arg1;
- (struct __SecCertificate { }*)copyCertificateFromPayloadWithUUID:(id)arg1;
- (struct __SecCertificate { }*)copyCertificateWithPersistentID:(id)arg1;
- (id)description;
- (id)earliestCertificateExpiryDate;
- (id)initWithDictionary:(id)arg1 options:(id)arg2 signerCerts:(id)arg3 allowEmptyPayload:(bool)arg4 outError:(id*)arg5;
- (id)installationWarningsIncludeUnsignedProfileWarning:(bool)arg1;
- (bool)isCloudLocked;
- (id)isCloudLockedNum;
- (bool)isCloudProfile;
- (id)isCloudProfileNum;
- (bool)isMDMProfile;
- (bool)isManagedByMDM;
- (bool)isManagedByProfileService;
- (id)localizedManagedPayloadSummaryByType;
- (id)localizedManagedProfileConsentTexts;
- (id)localizedPayloadSummaryByType;
- (id)managedPayloads;
- (id)payloadWithUUID:(id)arg1;
- (id)payloads;
- (void)replacePayloadWithUUID:(id)arg1 withPayload:(id)arg2;
- (id)serializedDictionary;
- (void)setIsCloudLocked:(bool)arg1;
- (void)setIsCloudLockedNum:(id)arg1;
- (void)setIsCloudProfile:(bool)arg1;
- (void)setIsCloudProfileNum:(id)arg1;
- (void)setIsMDMProfile:(bool)arg1;
- (void)setOTAProfile:(id)arg1;
- (id)stubDictionary;
- (id)subjectSummaryFromCertificatePayloadWithUUID:(id)arg1;
- (id)subjectSummaryFromCertificateWithPersistentID:(id)arg1;
- (id)verboseDescription;

@end
