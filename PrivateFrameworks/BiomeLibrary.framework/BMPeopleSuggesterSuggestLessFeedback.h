/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/BiomeLibrary.framework/BiomeLibrary
 */

@interface BMPeopleSuggesterSuggestLessFeedback : BMEventBase <BMStoreData> {
    NSString * _bundleId;
    NSString * _contactIdentifier;
    NSString * _conversationIdentifier;
    unsigned int  _dataVersion;
    NSString * _derivedIdentifier;
    NSString * _deviceIdentifier;
    NSString * _groupIdentifier;
    NSString * _handle;
    NSString * _identifier;
    NSString * _itemIdentifier;
    NSString * _userIdentifier;
}

@property (nonatomic, readonly) NSString *bundleId;
@property (nonatomic, readonly) NSString *contactIdentifier;
@property (nonatomic, readonly) NSString *conversationIdentifier;
@property (nonatomic, readonly) unsigned int dataVersion;
@property (readonly, copy) NSString *debugDescription; /* unknown property attribute: ? */
@property (nonatomic, readonly) NSString *derivedIdentifier;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) NSString *deviceIdentifier;
@property (nonatomic, readonly) NSString *groupIdentifier;
@property (nonatomic, readonly) NSString *handle;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) NSString *identifier;
@property (nonatomic, readonly) NSString *itemIdentifier;
@property (readonly) Class superclass;
@property (nonatomic, readonly) NSString *userIdentifier;

+ (id)columns;
+ (id)eventWithData:(id)arg1 dataVersion:(unsigned int)arg2;
+ (unsigned int)latestDataVersion;
+ (id)protoFields;
+ (id)validKeyPaths;

- (void).cxx_destruct;
- (id)bundleId;
- (id)contactIdentifier;
- (id)conversationIdentifier;
- (unsigned int)dataVersion;
- (id)derivedIdentifier;
- (id)description;
- (id)deviceIdentifier;
- (id)groupIdentifier;
- (id)handle;
- (id)identifier;
- (id)initByReadFrom:(id)arg1;
- (id)initWithIdentifier:(id)arg1 bundleId:(id)arg2 derivedIdentifier:(id)arg3 conversationIdentifier:(id)arg4 handle:(id)arg5 contactIdentifier:(id)arg6 itemIdentifier:(id)arg7 groupIdentifier:(id)arg8 deviceIdentifier:(id)arg9 userIdentifier:(id)arg10;
- (id)initWithJSONDictionary:(id)arg1 error:(id*)arg2;
- (bool)isEqual:(id)arg1;
- (id)itemIdentifier;
- (id)jsonDictionary;
- (id)serialize;
- (id)userIdentifier;
- (void)writeTo:(id)arg1;

@end
