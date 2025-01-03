/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/PassKitCore.framework/PassKitCore
 */

@interface PKVirtualCardEnrollmentRequest : PKPaymentRequest {
    bool  _isPeerPaymentPass;
}

@property (nonatomic, readonly) bool isPeerPaymentPass;

+ (bool)supportsSecureCoding;

- (void)encodeWithCoder:(id)arg1;
- (unsigned long long)hash;
- (id)initRefreshRequestWithPaymentPass:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithPaymentPass:(id)arg1;
- (bool)isEqual:(id)arg1;
- (bool)isPeerPaymentPass;

@end
