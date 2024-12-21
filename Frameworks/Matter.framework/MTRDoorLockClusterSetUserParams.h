/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/Matter.framework/Matter
 */

@interface MTRDoorLockClusterSetUserParams : NSObject <NSCopying> {
    NSNumber * _credentialRule;
    NSNumber * _operationType;
    NSNumber * _serverSideProcessingTimeout;
    NSNumber * _timedInvokeTimeoutMs;
    NSNumber * _userIndex;
    NSString * _userName;
    NSNumber * _userStatus;
    NSNumber * _userType;
    NSNumber * _userUniqueID;
}

@property (nonatomic, copy) NSNumber *credentialRule;
@property (nonatomic, copy) NSNumber *operationType;
@property (nonatomic, copy) NSNumber *serverSideProcessingTimeout;
@property (nonatomic, copy) NSNumber *timedInvokeTimeoutMs;
@property (nonatomic, copy) NSNumber *userIndex;
@property (nonatomic, copy) NSString *userName;
@property (nonatomic, copy) NSNumber *userStatus;
@property (nonatomic, copy) NSNumber *userType;
@property (nonatomic, copy) NSNumber *userUniqueID;
@property (nonatomic, copy) NSNumber *userUniqueId;

- (void).cxx_destruct;
- (id)_encodeAsDataValue:(id*)arg1;
- (struct ChipError { unsigned int x1; char *x2; unsigned int x3; })_encodeToTLVReader:(struct PacketBufferTLVReader { unsigned int x1; void *x2; struct Tag { unsigned long long x_3_1_1; } x3; unsigned long long x4; struct TLVBackingStore {} *x5; char *x6; char *x7; unsigned int x8; unsigned int x9; int x10; unsigned short x11; bool x12; struct PacketBufferHandle { struct PacketBuffer {} *x_13_1_1; } x13; }*)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)credentialRule;
- (id)description;
- (id)init;
- (id)operationType;
- (id)serverSideProcessingTimeout;
- (void)setCredentialRule:(id)arg1;
- (void)setOperationType:(id)arg1;
- (void)setServerSideProcessingTimeout:(id)arg1;
- (void)setTimedInvokeTimeoutMs:(id)arg1;
- (void)setUserIndex:(id)arg1;
- (void)setUserName:(id)arg1;
- (void)setUserStatus:(id)arg1;
- (void)setUserType:(id)arg1;
- (void)setUserUniqueID:(id)arg1;
- (void)setUserUniqueId:(id)arg1;
- (id)timedInvokeTimeoutMs;
- (id)userIndex;
- (id)userName;
- (id)userStatus;
- (id)userType;
- (id)userUniqueID;
- (id)userUniqueId;

@end