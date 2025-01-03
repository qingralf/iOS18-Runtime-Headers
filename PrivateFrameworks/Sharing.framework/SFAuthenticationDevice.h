/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/Sharing.framework/Sharing
 */

@interface SFAuthenticationDevice : SFPeerDevice <NSSecureCoding> {
    bool  _bluetoothCloudPaired;
    bool  _enabledAsKey;
    bool  _enabledAsLock;
    NSString * _idsDeviceID;
    NSString * _modelDescription;
}

@property (nonatomic, readonly) bool bluetoothCloudPaired;
@property (nonatomic, readonly) bool enabledAsKey;
@property (nonatomic, readonly) bool enabledAsLock;
@property (nonatomic, readonly) NSString *idsDeviceID;
@property (nonatomic, readonly, copy) NSString *modelDescription;

- (void).cxx_destruct;
- (bool)bluetoothCloudPaired;
- (bool)enabledAsKey;
- (bool)enabledAsLock;
- (id)idsDeviceID;
- (id)init;
- (id)initWith:(id)arg1;
- (bool)isEqual:(id)arg1;
- (id)modelDescription;

@end
