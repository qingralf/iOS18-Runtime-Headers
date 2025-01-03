/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/CloudKitDaemon.framework/CloudKitDaemon
 */

@interface CKDDeviceCapabilityCheckResult : NSObject {
    bool  _canValidateWithKT;
    bool  _isSupported;
    NSArray * _publicKeys;
    CKRecordID * _shareID;
    NSString * _userID;
}

@property (nonatomic, readonly) bool canValidateWithKT;
@property (nonatomic, readonly) bool isSupported;
@property (nonatomic, readonly, copy) NSArray *publicKeys;
@property (nonatomic, readonly, copy) CKRecordID *shareID;
@property (nonatomic, readonly, copy) NSString *userID;

- (void).cxx_destruct;
- (bool)canValidateWithKT;
- (id)initNotSupportedWithUserID:(id)arg1 publicKeys:(id)arg2 canValidateWithKT:(bool)arg3 shareID:(id)arg4;
- (id)initSupported;
- (bool)isSupported;
- (id)makeClientResult;
- (id)publicKeys;
- (id)shareID;
- (id)userID;

@end
