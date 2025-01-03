/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/SiriInstrumentation.framework/SiriInstrumentation
 */

@interface UAFSchemaUAFAssetMetadata : SISchemaInstrumentationMessage {
    NSString * _assetName;
    unsigned long long  _assetSizeInBytes;
    struct { 
        unsigned int assetSizeInBytes : 1; 
    }  _has;
    bool  _hasAssetName;
}

@property (nonatomic, copy) NSString *assetName;
@property (nonatomic) unsigned long long assetSizeInBytes;
@property (nonatomic) bool hasAssetName;
@property (nonatomic) bool hasAssetSizeInBytes;
@property (nonatomic, readonly) NSData *jsonData;

- (void).cxx_destruct;
- (id)assetName;
- (unsigned long long)assetSizeInBytes;
- (void)deleteAssetName;
- (void)deleteAssetSizeInBytes;
- (id)dictionaryRepresentation;
- (bool)hasAssetName;
- (bool)hasAssetSizeInBytes;
- (unsigned long long)hash;
- (id)initWithDictionary:(id)arg1;
- (id)initWithJSON:(id)arg1;
- (bool)isEqual:(id)arg1;
- (id)jsonData;
- (bool)readFrom:(id)arg1;
- (void)setAssetName:(id)arg1;
- (void)setAssetSizeInBytes:(unsigned long long)arg1;
- (void)setHasAssetName:(bool)arg1;
- (void)setHasAssetSizeInBytes:(bool)arg1;
- (id)suppressMessageUnderConditions;
- (void)writeTo:(id)arg1;

@end
