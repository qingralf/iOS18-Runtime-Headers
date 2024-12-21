/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/BiomeLibrary.framework/BiomeLibrary
 */

@interface BMSageMetadata : BMEventBase <BMStoreData> {
    NSString * _clientId;
    NSString * _clientRequestId;
    NSString * _clientSessionId;
    unsigned int  _dataVersion;
    NSData * _raw_rawSessionId;
}

@property (nonatomic, readonly) NSString *clientId;
@property (nonatomic, readonly) NSString *clientRequestId;
@property (nonatomic, readonly) NSString *clientSessionId;
@property (nonatomic, readonly) unsigned int dataVersion;
@property (readonly, copy) NSString *debugDescription; /* unknown property attribute: ? */
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) NSUUID *rawSessionId;
@property (readonly) Class superclass;

+ (id)columns;
+ (id)eventWithData:(id)arg1 dataVersion:(unsigned int)arg2;
+ (unsigned int)latestDataVersion;
+ (id)protoFields;
+ (id)validKeyPaths;

- (void).cxx_destruct;
- (id)clientId;
- (id)clientRequestId;
- (id)clientSessionId;
- (unsigned int)dataVersion;
- (id)description;
- (id)initByReadFrom:(id)arg1;
- (id)initWithJSONDictionary:(id)arg1 error:(id*)arg2;
- (id)initWithRawSessionId:(id)arg1 clientId:(id)arg2 clientRequestId:(id)arg3 clientSessionId:(id)arg4;
- (bool)isEqual:(id)arg1;
- (id)jsonDictionary;
- (id)rawSessionId;
- (id)serialize;
- (void)writeTo:(id)arg1;

@end