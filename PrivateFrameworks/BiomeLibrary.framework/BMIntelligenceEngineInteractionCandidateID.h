/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/BiomeLibrary.framework/BiomeLibrary
 */

@interface BMIntelligenceEngineInteractionCandidateID : BMEventBase <BMStoreData> {
    NSString * _bundleId;
    unsigned int  _dataVersion;
    NSString * _identifier;
}

@property (nonatomic, readonly) NSString *bundleId;
@property (nonatomic, readonly) unsigned int dataVersion;
@property (readonly, copy) NSString *debugDescription; /* unknown property attribute: ? */
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) NSString *identifier;
@property (readonly) Class superclass;

+ (id)columns;
+ (id)eventWithData:(id)arg1 dataVersion:(unsigned int)arg2;
+ (unsigned int)latestDataVersion;
+ (id)protoFields;
+ (id)validKeyPaths;

- (void).cxx_destruct;
- (id)bundleId;
- (unsigned int)dataVersion;
- (id)description;
- (id)identifier;
- (id)initByReadFrom:(id)arg1;
- (id)initWithIdentifier:(id)arg1 bundleId:(id)arg2;
- (id)initWithJSONDictionary:(id)arg1 error:(id*)arg2;
- (bool)isEqual:(id)arg1;
- (id)jsonDictionary;
- (id)serialize;
- (void)writeTo:(id)arg1;

@end
