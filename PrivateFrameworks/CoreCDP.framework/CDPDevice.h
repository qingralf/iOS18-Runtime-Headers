/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/CoreCDP.framework/CoreCDP
 */

@interface CDPDevice : NSObject <CDPDeviceProtocol, NSCopying, NSSecureCoding> {
    NSNumber * _coolOffPeriod;
    NSString * _deviceColor;
    NSString * _enclosureColor;
    bool  _hasNumericSecret;
    bool  _hasRandomSecret;
    bool  _isCurrentDevice;
    bool  _isUsingMultipleiCSC;
    NSString * _localizedDescription;
    NSString * _localizedName;
    NSString * _machineID;
    NSString * _model;
    NSString * _modelClass;
    NSString * _modelVersion;
    NSNumber * _numericSecretLength;
    unsigned long long  _platform;
    OTEscrowRecord * _record;
    NSDate * _recordDate;
    NSString * _recordID;
    NSDictionary * _recordInfo;
    unsigned long long  _recoveryStatus;
    unsigned long long  _remainingAttempts;
    NSString * _serialNumber;
    NSData * _simplePublicKey;
}

@property (nonatomic, retain) NSNumber *coolOffPeriod;
@property (readonly, copy) NSString *debugDescription; /* unknown property attribute: ? */
@property (readonly, copy) NSString *description;
@property (nonatomic, copy) NSString *deviceColor;
@property (nonatomic, copy) NSString *enclosureColor;
@property (nonatomic) bool hasNumericSecret;
@property (nonatomic) bool hasRandomSecret;
@property (readonly) unsigned long long hash;
@property (nonatomic) bool isCurrentDevice;
@property (nonatomic) bool isUsingMultipleiCSC;
@property (nonatomic, readonly) bool isVirtualMachine;
@property (nonatomic, readonly) unsigned long long localSecretType;
@property (nonatomic, copy) NSString *localizedDescription;
@property (nonatomic, copy) NSString *localizedName;
@property (nonatomic, copy) NSString *machineID;
@property (nonatomic, copy) NSString *model;
@property (nonatomic, copy) NSString *modelClass;
@property (nonatomic, copy) NSString *modelVersion;
@property (nonatomic, copy) NSNumber *numericSecretLength;
@property (nonatomic) unsigned long long platform;
@property (nonatomic, copy) OTEscrowRecord *record;
@property (nonatomic, copy) NSDate *recordDate;
@property (nonatomic, copy) NSString *recordID;
@property (nonatomic, copy) NSDictionary *recordInfo;
@property (nonatomic) unsigned long long recoveryStatus;
@property (nonatomic) unsigned long long remainingAttempts;
@property (nonatomic, copy) NSString *serialNumber;
@property (nonatomic, copy) NSData *simplePublicKey;
@property (readonly) Class superclass;

// Image: /System/Library/PrivateFrameworks/CoreCDP.framework/CoreCDP

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)coolOffPeriod;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)deviceColor;
- (id)enclosureColor;
- (void)encodeWithCoder:(id)arg1;
- (bool)hasNumericSecret;
- (bool)hasRandomSecret;
- (id)initWithCoder:(id)arg1;
- (bool)isCurrentDevice;
- (bool)isUsingMultipleiCSC;
- (bool)isVirtualMachine;
- (unsigned long long)localSecretType;
- (id)localizedDescription;
- (id)localizedName;
- (id)machineID;
- (id)model;
- (id)modelClass;
- (id)modelVersion;
- (id)numericSecretLength;
- (unsigned long long)platform;
- (id)record;
- (id)recordDate;
- (id)recordID;
- (id)recordInfo;
- (unsigned long long)recoveryStatus;
- (unsigned long long)remainingAttempts;
- (id)serialNumber;
- (void)setCoolOffPeriod:(id)arg1;
- (void)setDeviceColor:(id)arg1;
- (void)setEnclosureColor:(id)arg1;
- (void)setHasNumericSecret:(bool)arg1;
- (void)setHasRandomSecret:(bool)arg1;
- (void)setIsCurrentDevice:(bool)arg1;
- (void)setIsUsingMultipleiCSC:(bool)arg1;
- (void)setLocalizedDescription:(id)arg1;
- (void)setLocalizedName:(id)arg1;
- (void)setMachineID:(id)arg1;
- (void)setModel:(id)arg1;
- (void)setModelClass:(id)arg1;
- (void)setModelVersion:(id)arg1;
- (void)setNumericSecretLength:(id)arg1;
- (void)setPlatform:(unsigned long long)arg1;
- (void)setRecord:(id)arg1;
- (void)setRecordDate:(id)arg1;
- (void)setRecordID:(id)arg1;
- (void)setRecordInfo:(id)arg1;
- (void)setRecoveryStatus:(unsigned long long)arg1;
- (void)setRemainingAttempts:(unsigned long long)arg1;
- (void)setSerialNumber:(id)arg1;
- (void)setSimplePublicKey:(id)arg1;
- (id)simplePublicKey;

// Image: /System/Library/PrivateFrameworks/CoreCDPInternal.framework/CoreCDPInternal

- (id)initWithEscrowRecord:(id)arg1;
- (id)initWithEscrowRecordMetadata:(id)arg1;
- (id)initWithSecureBackupMetadataInfo:(id)arg1;
- (id)initWithSecureBackupRecordInfo:(id)arg1;

@end
