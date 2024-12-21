/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/BusinessChatService.framework/BusinessChatService
 */

@interface BCSBusinessLogo : BCSItem <NSCopying, NSSecureCoding> {
    NSString * _businessId;
    BCSBusinessLogoItemIdentifier * _identifier;
    NSString * _logoFormat;
    NSURL * _logoURL;
    BCSEmailLogoParquetMessage * _message;
}

@property (nonatomic, copy) NSString *businessId;
@property (nonatomic, readonly) BCSBusinessLogoItemIdentifier *identifier;
@property (nonatomic, retain) NSData *logo;
@property (nonatomic, copy) NSString *logoFormat;
@property (nonatomic, copy) NSURL *logoURL;
@property (nonatomic, retain) BCSEmailLogoParquetMessage *message;

+ (id)itemFromStatement:(struct sqlite3_stmt { }*)arg1;
+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)businessId;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)identifier;
- (id)initWithBusinessId:(id)arg1 logo:(id)arg2;
- (id)initWithBusinessId:(id)arg1 logoURL:(id)arg2 logoFormat:(id)arg3;
- (id)initWithCoder:(id)arg1;
- (id)initWithMessage:(id)arg1 logoURL:(id)arg2;
- (id)itemIdentifier;
- (id)logo;
- (id)logoFormat;
- (id)logoURL;
- (bool)matchesItemIdentifying:(id)arg1;
- (id)message;
- (void)setBusinessId:(id)arg1;
- (void)setLogo:(id)arg1;
- (void)setLogoFormat:(id)arg1;
- (void)setLogoURL:(id)arg1;
- (void)setMessage:(id)arg1;
- (long long)truncatedHash;
- (long long)type;
- (void)updateStatementValues:(struct sqlite3_stmt { }*)arg1 withItemIdentifier:(id)arg2;

@end