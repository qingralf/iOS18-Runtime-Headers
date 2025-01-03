/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/BiomeLibrary.framework/BiomeLibrary
 */

@interface BMGeneratedImageUserInteraction : BMEventBase <BMStoreData> {
    unsigned int  _dataVersion;
    int  _feature;
    bool  _hasRaw_timestamp;
    bool  _hasTokenLength;
    bool  _hasUsage;
    int  _personalization;
    NSString * _prompt;
    NSData * _raw_identifier;
    double  _raw_timestamp;
    int  _result;
    int  _tokenLength;
    NSString * _topic;
    int  _usage;
    NSString * _userInterfaceLanguage;
    NSString * _userSetRegionFormat;
}

@property (nonatomic, readonly) unsigned int dataVersion;
@property (readonly, copy) NSString *debugDescription; /* unknown property attribute: ? */
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) int feature;
@property (nonatomic) bool hasTokenLength;
@property (nonatomic) bool hasUsage;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) NSUUID *identifier;
@property (nonatomic, readonly) int personalization;
@property (nonatomic, readonly) NSString *prompt;
@property (nonatomic, readonly) int result;
@property (readonly) Class superclass;
@property (nonatomic, readonly) NSDate *timestamp;
@property (nonatomic, readonly) int tokenLength;
@property (nonatomic, readonly) NSString *topic;
@property (nonatomic, readonly) int usage;
@property (nonatomic, readonly) NSString *userInterfaceLanguage;
@property (nonatomic, readonly) NSString *userSetRegionFormat;

+ (id)columns;
+ (id)eventWithData:(id)arg1 dataVersion:(unsigned int)arg2;
+ (unsigned int)latestDataVersion;
+ (id)protoFields;
+ (id)validKeyPaths;

- (void).cxx_destruct;
- (unsigned int)dataVersion;
- (id)description;
- (int)feature;
- (bool)hasTokenLength;
- (bool)hasUsage;
- (id)identifier;
- (id)initByReadFrom:(id)arg1;
- (id)initWithJSONDictionary:(id)arg1 error:(id*)arg2;
- (id)initWithTimestamp:(id)arg1 prompt:(id)arg2 tokenLength:(id)arg3 identifier:(id)arg4 topic:(id)arg5 usage:(id)arg6 userInterfaceLanguage:(id)arg7 userSetRegionFormat:(id)arg8 personalization:(int)arg9 result:(int)arg10 feature:(int)arg11;
- (bool)isEqual:(id)arg1;
- (id)jsonDictionary;
- (int)personalization;
- (id)prompt;
- (int)result;
- (id)serialize;
- (void)setHasTokenLength:(bool)arg1;
- (void)setHasUsage:(bool)arg1;
- (id)timestamp;
- (int)tokenLength;
- (id)topic;
- (int)usage;
- (id)userInterfaceLanguage;
- (id)userSetRegionFormat;
- (void)writeTo:(id)arg1;

@end
