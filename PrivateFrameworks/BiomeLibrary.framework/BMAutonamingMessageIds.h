/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/BiomeLibrary.framework/BiomeLibrary
 */

@interface BMAutonamingMessageIds : BMEventBase <BMStoreData> {
    NSString * _bundleId;
    bool  _containsImageAttachment;
    NSString * _conversationId;
    unsigned int  _dataVersion;
    NSString * _domainId;
    bool  _hasContainsImageAttachment;
    bool  _hasIsDeletion;
    bool  _hasProtoVersion;
    bool  _hasRaw_messageTimestamp;
    bool  _isDeletion;
    NSString * _messageId;
    int  _protoVersion;
    double  _raw_messageTimestamp;
    NSString * _spotlightId;
}

@property (nonatomic, readonly) NSString *bundleId;
@property (nonatomic, readonly) bool containsImageAttachment;
@property (nonatomic, readonly) NSString *conversationId;
@property (nonatomic, readonly) unsigned int dataVersion;
@property (readonly, copy) NSString *debugDescription; /* unknown property attribute: ? */
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) NSString *domainId;
@property (nonatomic) bool hasContainsImageAttachment;
@property (nonatomic) bool hasIsDeletion;
@property (nonatomic) bool hasProtoVersion;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) bool isDeletion;
@property (nonatomic, readonly) NSString *messageId;
@property (nonatomic, readonly) NSDate *messageTimestamp;
@property (nonatomic, readonly) int protoVersion;
@property (nonatomic, readonly) NSString *spotlightId;
@property (readonly) Class superclass;

+ (id)columns;
+ (id)eventWithData:(id)arg1 dataVersion:(unsigned int)arg2;
+ (unsigned int)latestDataVersion;
+ (id)protoFields;
+ (id)validKeyPaths;

- (void).cxx_destruct;
- (id)bundleId;
- (bool)containsImageAttachment;
- (id)conversationId;
- (unsigned int)dataVersion;
- (id)description;
- (id)domainId;
- (bool)hasContainsImageAttachment;
- (bool)hasIsDeletion;
- (bool)hasProtoVersion;
- (id)initByReadFrom:(id)arg1;
- (id)initWithJSONDictionary:(id)arg1 error:(id*)arg2;
- (id)initWithProtoVersion:(id)arg1 bundleId:(id)arg2 domainId:(id)arg3 spotlightId:(id)arg4 messageId:(id)arg5 conversationId:(id)arg6 isDeletion:(id)arg7 containsImageAttachment:(id)arg8;
- (id)initWithProtoVersion:(id)arg1 bundleId:(id)arg2 domainId:(id)arg3 spotlightId:(id)arg4 messageId:(id)arg5 conversationId:(id)arg6 isDeletion:(id)arg7 containsImageAttachment:(id)arg8 messageTimestamp:(id)arg9;
- (bool)isDeletion;
- (bool)isEqual:(id)arg1;
- (id)jsonDictionary;
- (id)messageId;
- (id)messageTimestamp;
- (int)protoVersion;
- (id)serialize;
- (void)setHasContainsImageAttachment:(bool)arg1;
- (void)setHasIsDeletion:(bool)arg1;
- (void)setHasProtoVersion:(bool)arg1;
- (id)spotlightId;
- (void)writeTo:(id)arg1;

@end
