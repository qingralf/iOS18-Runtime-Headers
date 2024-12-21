/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/MobileBackup.framework/MobileBackup
 */

@interface MBSnapshot : NSObject <NSCopying, NSSecureCoding> {
    long long  _accountType;
    long long  _backupPolicy;
    NSString * _backupUUID;
    NSString * _buildVersion;
    NSString * _commitID;
    NSDate * _created;
    NSDate * _date;
    NSString * _deviceName;
    long long  _estimatedRestoreSize;
    long long  _format;
    bool  _isCompatible;
    NSDate * _modified;
    unsigned long long  _quotaReserved;
    NSString * _requiredProductVersion;
    unsigned long long  _snapshotID;
    NSString * _snapshotUUID;
    int  _state;
    NSString * _systemVersion;
    long long  _type;
}

@property (nonatomic) long long accountType;
@property (nonatomic) long long backupPolicy;
@property (nonatomic, readonly) NSString *backupUUID;
@property (nonatomic, readonly) NSString *buildVersion;
@property (nonatomic, retain) NSString *commitID;
@property (nonatomic, readonly) NSDate *created;
@property (nonatomic, readonly) NSDate *date;
@property (nonatomic, readonly) NSString *deviceName;
@property (nonatomic) long long estimatedRestoreSize;
@property (nonatomic) long long format;
@property (nonatomic, readonly) bool isCompatible;
@property (nonatomic, readonly) NSDate *modified;
@property (nonatomic, readonly) unsigned long long quotaReserved;
@property (nonatomic, retain) NSString *requiredProductVersion;
@property (nonatomic, readonly) unsigned long long snapshotID;
@property (nonatomic, readonly) NSString *snapshotUUID;
@property (nonatomic, readonly) int state;
@property (nonatomic, readonly) NSString *systemVersion;
@property (nonatomic) long long type;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (long long)accountType;
- (long long)backupPolicy;
- (id)backupUUID;
- (id)buildVersion;
- (id)commitID;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)created;
- (id)date;
- (id)description;
- (id)deviceName;
- (id)dictionaryRepresentation;
- (void)encodeWithCoder:(id)arg1;
- (long long)estimatedRestoreSize;
- (long long)format;
- (id)initWithCoder:(id)arg1;
- (id)initWithSnapshotID:(unsigned long long)arg1 backupUUID:(id)arg2 snapshotUUID:(id)arg3 commitID:(id)arg4 format:(long long)arg5 deviceName:(id)arg6 date:(id)arg7 created:(id)arg8 modified:(id)arg9 state:(int)arg10 isCompatible:(bool)arg11 systemVersion:(id)arg12 buildVersion:(id)arg13 quotaReserved:(unsigned long long)arg14 type:(long long)arg15 backupPolicy:(long long)arg16 accountType:(long long)arg17;
- (bool)isCompatible;
- (id)modified;
- (unsigned long long)quotaReserved;
- (id)requiredProductVersion;
- (void)setAccountType:(long long)arg1;
- (void)setBackupPolicy:(long long)arg1;
- (void)setCommitID:(id)arg1;
- (void)setEstimatedRestoreSize:(long long)arg1;
- (void)setFormat:(long long)arg1;
- (void)setRequiredProductVersion:(id)arg1;
- (void)setType:(long long)arg1;
- (unsigned long long)snapshotID;
- (id)snapshotUUID;
- (int)state;
- (id)systemVersion;
- (long long)type;

@end