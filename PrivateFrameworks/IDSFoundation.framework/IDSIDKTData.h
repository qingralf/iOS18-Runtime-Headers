/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/IDSFoundation.framework/IDSFoundation
 */

@interface IDSIDKTData : NSObject <NSSecureCoding> {
    NSUUID * _verificationRequestID;
    KTVerifierResult * _verifierResult;
}

@property (nonatomic, readonly, copy) NSUUID *verificationRequestID;
@property (nonatomic, readonly, copy) KTVerifierResult *verifierResult;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)debugDescription;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithVerifierResult:(id)arg1 requestID:(id)arg2;
- (bool)isEqual:(id)arg1;
- (id)verificationRequestID;
- (id)verifierResult;

@end