/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/HealthKit.framework/HealthKit
 */

@interface HKCloudSyncRequest : NSObject <NSCopying, NSSecureCoding> {
    bool  _allowCellular;
    HKChangesSyncRequest * _changesSyncRequest;
    HKContextSyncRequest * _contextSyncRequest;
    NSUUID * _identifier;
    HKMedicalIDSyncRequest * _medicalIDSyncRequest;
    long long  _qualityOfService;
    HKStateSyncRequest * _stateSyncRequest;
    HKSummarySharingSyncRequest * _summarySharingSyncRequest;
}

@property (nonatomic, readonly) bool allowCellular;
@property (nonatomic, readonly) HKChangesSyncRequest *changesSyncRequest;
@property (nonatomic, readonly) HKContextSyncRequest *contextSyncRequest;
@property (nonatomic, readonly) NSUUID *identifier;
@property (nonatomic, readonly) HKMedicalIDSyncRequest *medicalIDSyncRequest;
@property (nonatomic, readonly) long long qualityOfService;
@property (nonatomic, readonly) HKStateSyncRequest *stateSyncRequest;
@property (nonatomic, readonly) HKSummarySharingSyncRequest *summarySharingSyncRequest;

+ (id)emptySyncRequest;
+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (bool)allowCellular;
- (id)changesSyncRequest;
- (id)contextSyncRequest;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)identifier;
- (id)init;
- (id)initWithChangesSyncRequest:(id)arg1;
- (id)initWithChangesSyncRequest:(id)arg1 contextSyncRequest:(id)arg2 stateSyncRequest:(id)arg3 medicalIDSyncRequest:(id)arg4 summarySharingSyncRequest:(id)arg5;
- (id)initWithChangesSyncRequest:(id)arg1 contextSyncRequest:(id)arg2 stateSyncRequest:(id)arg3 medicalIDSyncRequest:(id)arg4 summarySharingSyncRequest:(id)arg5 allowCellular:(bool)arg6 qualityOfService:(long long)arg7;
- (id)initWithCoder:(id)arg1;
- (id)initWithContextSyncRequest:(id)arg1;
- (id)initWithIdentifier:(id)arg1 changesSyncRequest:(id)arg2 contextSyncRequest:(id)arg3 stateSyncRequest:(id)arg4 medicalIDSyncRequest:(id)arg5 summarySharingSyncRequest:(id)arg6 allowCellular:(bool)arg7 qualityOfService:(long long)arg8;
- (id)initWithMedicalIDSyncRequest:(id)arg1;
- (id)initWithStateSyncRequest:(id)arg1;
- (id)initWithSummarySharingSyncRequest:(id)arg1;
- (bool)isEqual:(id)arg1;
- (bool)isEquivalent:(id)arg1;
- (bool)matchesFilter:(unsigned long long)arg1;
- (id)medicalIDSyncRequest;
- (long long)qualityOfService;
- (id)requestByMergingRequest:(id)arg1;
- (id)stateSyncRequest;
- (id)summarySharingSyncRequest;

@end