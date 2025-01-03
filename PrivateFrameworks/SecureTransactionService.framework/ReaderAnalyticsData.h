/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/SecureTransactionService.framework/SecureTransactionService
 */

@interface ReaderAnalyticsData : NSObject <NSSecureCoding> {
    bool  _trusted;
    NSString * _untrustedIdentifier;
    NSString * _untrustedIssuerIdentifier;
    NSString * _untrustedIssuerOrganization;
    NSString * _untrustedOrganization;
}

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;

@end
