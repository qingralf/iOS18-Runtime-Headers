/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/AskToCore.framework/AskToCore
 */

@interface AskToCore.ATPayload : NSObject <NSCopying, NSSecureCoding> {
    void allResponses;
    void clientAdamIdentifier;
    void clientBundleIdentifier;
    void isForFamily;
    void messageGUID;
    void question;
    void rawRecipientGroup;
    void response;
    void version;
}

@property (nonatomic, readonly) NSArray *allResponses;
@property (nonatomic, readonly) NSString *clientBundleIdentifier;
@property (nonatomic, readonly) NSString *description;
@property (nonatomic, readonly) NSDictionary *dictionaryRepresentation;
@property (nonatomic, readonly) long long hash;
@property (nonatomic, readonly) bool isForFamily;
@property (nonatomic, readonly) NSString *messageGUID;
@property (nonatomic, readonly) _TtC5AskTo10ATQuestion *question;
@property (nonatomic, readonly) short rawRecipientGroup;
@property (nonatomic, readonly) _TtC9AskToCore10ATResponse *response;
@property (nonatomic, readonly) short version;

+ (short)currentVersion;
+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)allResponses;
- (id)clientBundleIdentifier;
- (id)copyWithZone:(void*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (void)encodeWithCoder:(id)arg1;
- (long long)hash;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (id)initWithCopying:(id)arg1;
- (id)initWithDictionaryRepresentation:(id)arg1 error:(id*)arg2;
- (id)initWithOriginalPayload:(id)arg1 newResponse:(id)arg2;
- (bool)isEqual:(id)arg1;
- (bool)isForFamily;
- (id)messageGUID;
- (id)question;
- (short)rawRecipientGroup;
- (id)response;
- (short)version;

@end