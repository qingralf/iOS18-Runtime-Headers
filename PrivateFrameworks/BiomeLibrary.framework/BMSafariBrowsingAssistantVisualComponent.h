/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/BiomeLibrary.framework/BiomeLibrary
 */

@interface BMSafariBrowsingAssistantVisualComponent : BMEventBase <BMStoreData> {
    unsigned int  _dataVersion;
    bool  _hasIdentifier;
    unsigned long long  _identifier;
    BMSafariBrowsingAssistantVisualComponentAttribute * _visualComponentAttribute;
    BMSafariBrowsingAssistantVisualComponentData * _visualComponentData;
}

@property (nonatomic, readonly) unsigned int dataVersion;
@property (readonly, copy) NSString *debugDescription; /* unknown property attribute: ? */
@property (readonly, copy) NSString *description;
@property (nonatomic) bool hasIdentifier;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) unsigned long long identifier;
@property (readonly) Class superclass;
@property (nonatomic, readonly) BMSafariBrowsingAssistantVisualComponentAttribute *visualComponentAttribute;
@property (nonatomic, readonly) BMSafariBrowsingAssistantVisualComponentData *visualComponentData;

+ (id)columns;
+ (id)eventWithData:(id)arg1 dataVersion:(unsigned int)arg2;
+ (unsigned int)latestDataVersion;
+ (id)protoFields;
+ (id)validKeyPaths;

- (void).cxx_destruct;
- (unsigned int)dataVersion;
- (id)description;
- (bool)hasIdentifier;
- (unsigned long long)identifier;
- (id)initByReadFrom:(id)arg1;
- (id)initWithJSONDictionary:(id)arg1 error:(id*)arg2;
- (id)initWithVisualComponentAttribute:(id)arg1 visualComponentData:(id)arg2 identifier:(id)arg3;
- (bool)isEqual:(id)arg1;
- (id)jsonDictionary;
- (id)serialize;
- (void)setHasIdentifier:(bool)arg1;
- (id)visualComponentAttribute;
- (id)visualComponentData;
- (void)writeTo:(id)arg1;

@end
