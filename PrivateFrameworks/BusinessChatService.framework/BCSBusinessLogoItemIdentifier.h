/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/BusinessChatService.framework/BusinessChatService
 */

@interface BCSBusinessLogoItemIdentifier : NSObject <BCSItemIdentifying, BCSPIRItemIdentifying, NSCopying, NSSecureCoding> {
    NSString * _businessId;
    long long  _truncatedHash;
}

@property (nonatomic, copy) NSString *businessId;
@property (readonly, copy) NSString *debugDescription; /* unknown property attribute: ? */
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) NSObject *itemIdentifier;
@property (nonatomic, readonly) NSString *pirKey;
@property (readonly) Class superclass;
@property (nonatomic) long long truncatedHash;
@property (nonatomic, readonly) long long type;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (long long)_truncatedHashForString:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)itemIdentifier;
- (bool)matchesItemIdentifying:(id)arg1;
- (id)pirKey;
- (void)setBusinessId:(id)arg1;
- (void)setTruncatedHash:(long long)arg1;
- (long long)truncatedHash;
- (long long)type;

@end
