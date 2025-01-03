/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/BiomeFoundation.framework/BiomeFoundation
 */

@interface BMAccount : NSObject <NSSecureCoding> {
    NSString * _altDSID;
    NSString * _identifier;
}

@property (nonatomic, readonly, copy) NSString *accountIdentifier;
@property (nonatomic, readonly) NSString *altDSID;
@property (nonatomic, readonly, copy) NSString *biomeAccountIdentifier;
@property (nonatomic, readonly) NSString *identifier;

+ (id)_hashOfString:(id)arg1;
+ (id)new;
+ (bool)supportsSecureCoding;
+ (bool)verifyFormattedLikeIdentifier:(id)arg1;

- (void).cxx_destruct;
- (id)accountIdentifier;
- (id)altDSID;
- (id)biomeAccountIdentifier;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (unsigned long long)hash;
- (id)identifier;
- (id)init;
- (id)initWithAccountIdentifier:(id)arg1;
- (id)initWithAltDSID:(id)arg1;
- (id)initWithBiomeAccountIdentifier:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithIdentifier:(id)arg1;
- (bool)isEqual:(id)arg1;

@end
