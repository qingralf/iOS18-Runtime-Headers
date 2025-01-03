/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/AppleAccount.framework/AppleAccount
 */

@interface AATrustedContact : NSObject <NSCopying, NSSecureCoding> {
    NSUUID * _custodianID;
    NSString * _displayName;
    NSString * _firstName;
    NSString * _handle;
    bool  _isAcceptedAndShared;
    bool  _isIdMSConfirmed;
    NSString * _keyCreatedOnBuild;
    NSString * _lastName;
    NSUUID * _otCustodianID;
    long long  _preflightStatus;
    unsigned long long  _repairCount;
    NSString * _repairDate;
    long long  _status;
}

@property (nonatomic, readonly) NSUUID *custodianID;
@property (nonatomic, readonly, copy) NSString *displayName;
@property (nonatomic, readonly, copy) NSString *firstName;
@property (nonatomic, readonly) NSString *handle;
@property (nonatomic, readonly) bool isAcceptedAndShared;
@property (nonatomic, readonly) bool isIdMSConfirmed;
@property (nonatomic, readonly) NSString *keyCreatedOnBuild;
@property (nonatomic, readonly, copy) NSString *lastName;
@property (nonatomic, readonly) NSUUID *otCustodianID;
@property (nonatomic, readonly) long long preflightStatus;
@property (nonatomic, readonly) unsigned long long repairCount;
@property (nonatomic, readonly) NSString *repairDate;
@property (nonatomic, readonly) long long status;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)custodianID;
- (id)displayName;
- (void)encodeWithCoder:(id)arg1;
- (id)firstName;
- (id)handle;
- (id)initWithCoder:(id)arg1;
- (id)initWithID:(id)arg1 status:(long long)arg2 handle:(id)arg3 firstName:(id)arg4 lastName:(id)arg5 displayName:(id)arg6 isAcceptedAndShared:(bool)arg7 isIdMSConfirmed:(bool)arg8 preflightStatus:(long long)arg9 otCustodianID:(id)arg10 keyCreatedOnBuild:(id)arg11 repairDate:(id)arg12 repairCount:(unsigned long long)arg13;
- (bool)isAcceptedAndShared;
- (bool)isIdMSConfirmed;
- (id)keyCreatedOnBuild;
- (id)lastName;
- (id)otCustodianID;
- (long long)preflightStatus;
- (unsigned long long)repairCount;
- (id)repairDate;
- (long long)status;

@end
