/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/MobileInBoxUpdate.framework/MobileInBoxUpdate
 */

@interface MIBUStatusResponse : MIBUNFCResponse {
    NSString * _buildVersion;
    NSString * _osVersion;
    NSString * _serialNumber;
    MIBUDeviceStatus * _status;
}

@property (nonatomic, retain) NSString *buildVersion;
@property (nonatomic, retain) NSString *osVersion;
@property (nonatomic, retain) NSString *serialNumber;
@property (nonatomic, retain) MIBUDeviceStatus *status;

- (void).cxx_destruct;
- (bool)_deserialize:(id)arg1;
- (id)_deserializeBatteryDetailsFromDict:(id)arg1;
- (id)_deserializeFromTagDict:(id)arg1 withKeyToTagMapping:(id)arg2;
- (id)_deserializeOperationDetailsFromDict:(id)arg1;
- (id)_deserializeThermalDetailsFromDict:(id)arg1;
- (id)_reverseDict:(id)arg1;
- (bool)_serializeBatteryDetailsWithSerializer:(id)arg1;
- (bool)_serializeDict:(id)arg1 fromKeyToTagMapping:(id)arg2 withSerializer:(id)arg3;
- (bool)_serializeOperationDetailsWithSerializer:(id)arg1;
- (bool)_serializeThermalDetailsWithSerializer:(id)arg1;
- (id)buildVersion;
- (id)init;
- (id)osVersion;
- (id)serialNumber;
- (id)serialize;
- (void)setBuildVersion:(id)arg1;
- (void)setOsVersion:(id)arg1;
- (void)setSerialNumber:(id)arg1;
- (void)setStatus:(id)arg1;
- (id)status;

@end
