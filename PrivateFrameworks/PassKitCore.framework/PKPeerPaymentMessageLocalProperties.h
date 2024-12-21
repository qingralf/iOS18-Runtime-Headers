/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/PassKitCore.framework/PassKitCore
 */

@interface PKPeerPaymentMessageLocalProperties : NSObject <NSSecureCoding> {
    NSData * _analyticsSessionToken;
    unsigned long long  _source;
}

@property (nonatomic, copy) NSData *analyticsSessionToken;
@property (nonatomic) unsigned long long source;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)analyticsSessionToken;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithSource:(unsigned long long)arg1;
- (void)setAnalyticsSessionToken:(id)arg1;
- (void)setSource:(unsigned long long)arg1;
- (unsigned long long)source;

@end