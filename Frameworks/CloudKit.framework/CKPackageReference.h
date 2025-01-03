/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/CloudKit.framework/CloudKit
 */

@interface CKPackageReference : NSObject <NSSecureCoding> {
    long long  _databaseScope;
    NSString * _fieldName;
    CKRecordID * _recordID;
    NSData * _signature;
}

@property (nonatomic, readonly) long long databaseScope;
@property (nonatomic, readonly) NSString *fieldName;
@property (nonatomic, readonly) CKRecordID *recordID;
@property (nonatomic, retain) NSData *signature;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (long long)databaseScope;
- (void)encodeWithCoder:(id)arg1;
- (id)fieldName;
- (id)initWithCoder:(id)arg1;
- (id)initWithRecordID:(id)arg1 databaseScope:(long long)arg2 fieldName:(id)arg3 signature:(id)arg4;
- (id)recordID;
- (void)setSignature:(id)arg1;
- (id)signature;

@end
