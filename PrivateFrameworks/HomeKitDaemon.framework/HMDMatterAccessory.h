/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/HomeKitDaemon.framework/HomeKitDaemon
 */

@interface HMDMatterAccessory : HMDAccessory <HMDMatterAccessoryProtocol, HMFLogging> {
    HMMTRAccessoryServer * _accessoryServer;
    HMDBulletinBoard * _bulletinBoard;
    long long  _certificationStatus;
    HMDCHIPAccessoryStorage * _chipStorage;
    long long  _communicationProtocol;
    HMDMatterAccessoryAdapter * _matterAdapter;
    NSString * _matterExtendedMACAddress;
    NSNumber * _matterNodeID;
    NSNumber * _matterProductID;
    NSNumber * _matterSoftwareVersionNumber;
    NSNumber * _matterVendorID;
    NSNumber * _matterWEDSupport;
    bool  _mfiCertifiedACWG;
    NSString * _pairingUsername;
    NSData * _preexistingReaderGroupIdentifierACWG;
    <HMDMessageRouter> * _primaryResidentMessageRouter;
    NSData * _publicKey;
    NSData * _readerGroupSubIdentifierACWG;
    NSData * _setupHash;
    NSNumber * _supportedLinkLayerTypes;
    bool  _supportsACWGProvisioning;
    bool  _supportsACWGUWB;
    NSNumber * _supportsMatterAccessCode;
    NSNumber * _supportsMatterWalletKey;
    bool  _supportsMatterWeekDaySchedule;
    bool  _supportsMatterYearDaySchedule;
    bool  _supportsWalletKey;
}

@property (nonatomic, retain) HMMTRAccessoryServer *accessoryServer;
@property (nonatomic, readonly, copy) NSArray *attributeDescriptions; /* unknown property attribute: ? */
@property (nonatomic, retain) HMDBulletinBoard *bulletinBoard;
@property (nonatomic) long long certificationStatus;
@property (nonatomic, retain) HMDCHIPAccessoryStorage *chipStorage;
@property (nonatomic) long long communicationProtocol;
@property (readonly, copy) NSString *debugDescription; /* unknown property attribute: ? */
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic) HMDHome *home;
@property (nonatomic, retain) HMDMatterAccessoryAdapter *matterAdapter;
@property (nonatomic, copy) NSString *matterExtendedMACAddress;
@property (nonatomic, copy) NSNumber *matterNodeID;
@property (nonatomic, copy) NSNumber *matterProductID;
@property (nonatomic, copy) NSNumber *matterSoftwareVersionNumber;
@property (nonatomic, copy) NSNumber *matterVendorID;
@property (nonatomic, copy) NSNumber *matterWEDSupport;
@property (readonly) bool mfiCertifiedACWG;
@property (nonatomic, retain) NSString *pairingUsername;
@property (nonatomic, readonly, copy) NSData *preexistingReaderGroupIdentifierACWG;
@property (nonatomic, retain) <HMDMessageRouter> *primaryResidentMessageRouter;
@property (readonly, copy) NSString *privateDescription;
@property (readonly, copy) NSString *propertyDescription; /* unknown property attribute: ? */
@property (nonatomic, retain) NSData *publicKey;
@property (nonatomic, readonly, copy) NSData *readerGroupSubIdentifierACWG;
@property (nonatomic, retain) NSData *setupHash;
@property (readonly, copy) NSString *shortDescription;
@property (readonly) Class superclass;
@property (nonatomic, retain) NSNumber *supportedLinkLayerTypes;
@property (readonly) bool supportsACWGProvisioning;
@property (readonly) bool supportsACWGUWB;
@property (nonatomic, readonly) bool supportsCHIP;
@property (nonatomic, readonly, copy) NSNumber *supportsMatterAccessCode;
@property (nonatomic, readonly, copy) NSNumber *supportsMatterWalletKey;
@property (readonly) bool supportsMatterWeekDaySchedule;
@property (readonly) bool supportsMatterYearDaySchedule;
@property (readonly) bool supportsWalletKey;

+ (id)logCategory;
+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (void)_registerForMessages;
- (id)accessoryServer;
- (id)bulletinBoard;
- (long long)certificationStatus;
- (id)chipStorage;
- (long long)communicationProtocol;
- (void)configureCHIPAccessory;
- (void)configureWithHome:(id)arg1 msgDispatcher:(id)arg2 configurationTracker:(id)arg3 initialConfiguration:(bool)arg4;
- (void)didFindAccessoryServer:(id)arg1;
- (void)didRemoveAccessoryServer:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (void)handleCHIPSendRemoteRequestMessage:(id)arg1;
- (void)handleIdentifyAccessoryMessage:(id)arg1;
- (void)handleUpdatedCHIPPropertiesOnAccessoryModel:(id)arg1 actions:(id)arg2;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (id)initWithTransaction:(id)arg1 home:(id)arg2;
- (id)matterAdapter;
- (id)matterExtendedMACAddress;
- (id)matterNodeID;
- (id)matterProductID;
- (id)matterSoftwareVersionNumber;
- (id)matterVendorID;
- (id)matterWEDSupport;
- (bool)mfiCertifiedACWG;
- (id)modelObjectWithChangeType:(unsigned long long)arg1;
- (id)modelObjectWithChangeType:(unsigned long long)arg1 version:(long long)arg2;
- (id)pairingIdentity;
- (id)pairingUsername;
- (void)populateAccessoryModel:(id)arg1 version:(long long)arg2;
- (void)populateModelObject:(id)arg1 version:(long long)arg2;
- (id)preexistingReaderGroupIdentifierACWG;
- (id)primaryResidentMessageRouter;
- (void)processUpdatedAccessoryServer:(id)arg1;
- (id)publicKey;
- (long long)reachableTransports;
- (id)readerGroupSubIdentifierACWG;
- (void)removeAllCHIPPairingsWithCompletion:(id /* block */)arg1;
- (void)savePublicKey:(id)arg1 username:(id)arg2;
- (void)setAccessoryServer:(id)arg1;
- (void)setBulletinBoard:(id)arg1;
- (void)setCHIPReportHandler:(id /* block */)arg1;
- (void)setCertificationStatus:(long long)arg1;
- (void)setChipStorage:(id)arg1;
- (void)setCommunicationProtocol:(long long)arg1;
- (void)setMatterAdapter:(id)arg1;
- (void)setMatterExtendedMACAddress:(id)arg1;
- (void)setMatterNodeID:(id)arg1;
- (void)setMatterProductID:(id)arg1;
- (void)setMatterSoftwareVersionNumber:(id)arg1;
- (void)setMatterVendorID:(id)arg1;
- (void)setMatterWEDSupport:(id)arg1;
- (void)setPairingUsername:(id)arg1;
- (void)setPrimaryResidentMessageRouter:(id)arg1;
- (void)setPublicKey:(id)arg1;
- (void)setSetupHash:(id)arg1;
- (void)setSupportedLinkLayerTypes:(id)arg1;
- (id)setupHash;
- (id)supportedLinkLayerTypes;
- (bool)supportsACWGProvisioning;
- (bool)supportsACWGUWB;
- (bool)supportsCHIP;
- (bool)supportsIdentify;
- (id)supportsMatterAccessCode;
- (id)supportsMatterWalletKey;
- (bool)supportsMatterWeekDaySchedule;
- (bool)supportsMatterYearDaySchedule;
- (bool)supportsWalletKey;
- (void)transactionObjectRemoved:(id)arg1 message:(id)arg2;
- (void)transactionObjectUpdated:(id)arg1 newValues:(id)arg2 message:(id)arg3;
- (id)transactionWithObjectChangeType:(unsigned long long)arg1;
- (id)transportReports;
- (void)unconfigure;
- (void)unconfigureAccessoryWithServerIdentifier:(id)arg1 linkType:(long long)arg2 updateReachability:(bool)arg3;

@end
