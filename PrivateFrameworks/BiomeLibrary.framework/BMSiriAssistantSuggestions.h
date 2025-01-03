/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/BiomeLibrary.framework/BiomeLibrary
 */

@interface BMSiriAssistantSuggestions : BMEventBase <BMStoreData> {
    unsigned int  _dataVersion;
    NSArray * _entities;
    BMSiriRemembersInteraction * _interaction;
}

@property (nonatomic, readonly) unsigned int dataVersion;
@property (readonly, copy) NSString *debugDescription; /* unknown property attribute: ? */
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) NSArray *entities;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) BMSiriRemembersInteraction *interaction;
@property (readonly) Class superclass;

+ (id)columns;
+ (id)eventWithData:(id)arg1 dataVersion:(unsigned int)arg2;
+ (unsigned int)latestDataVersion;
+ (id)protoFields;
+ (id)validKeyPaths;

- (void).cxx_destruct;
- (id)_entitiesJSONArray;
- (unsigned int)dataVersion;
- (id)description;
- (id)entities;
- (id)initByReadFrom:(id)arg1;
- (id)initWithInteraction:(id)arg1 entities:(id)arg2;
- (id)initWithJSONDictionary:(id)arg1 error:(id*)arg2;
- (id)interaction;
- (bool)isEqual:(id)arg1;
- (id)jsonDictionary;
- (id)serialize;
- (void)writeTo:(id)arg1;

@end
