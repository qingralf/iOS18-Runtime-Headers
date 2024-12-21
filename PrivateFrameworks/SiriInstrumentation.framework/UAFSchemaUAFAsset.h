/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/SiriInstrumentation.framework/SiriInstrumentation
 */

@interface UAFSchemaUAFAsset : SISchemaInstrumentationMessage {
    unsigned long long  _assetDownloadSizeInBytes;
    int  _assetLocale;
    NSString * _assetName;
    NSString * _assetPath;
    unsigned int  _assetSizeOnDisk;
    int  _assetSource;
    NSString * _assetSpecifier;
    unsigned long long  _assetUnarchivedSizeInBytes;
    NSString * _assetVersion;
    struct { 
        unsigned int assetLocale : 1; 
        unsigned int assetSource : 1; 
        unsigned int assetSizeOnDisk : 1; 
        unsigned int isAssetPathValid : 1; 
        unsigned int assetDownloadSizeInBytes : 1; 
        unsigned int assetUnarchivedSizeInBytes : 1; 
    }  _has;
    bool  _hasAssetName;
    bool  _hasAssetPath;
    bool  _hasAssetSpecifier;
    bool  _hasAssetVersion;
    bool  _isAssetPathValid;
}

@property (nonatomic) unsigned long long assetDownloadSizeInBytes;
@property (nonatomic) int assetLocale;
@property (nonatomic, copy) NSString *assetName;
@property (nonatomic, copy) NSString *assetPath;
@property (nonatomic) unsigned int assetSizeOnDisk;
@property (nonatomic) int assetSource;
@property (nonatomic, copy) NSString *assetSpecifier;
@property (nonatomic) unsigned long long assetUnarchivedSizeInBytes;
@property (nonatomic, copy) NSString *assetVersion;
@property (nonatomic) bool hasAssetDownloadSizeInBytes;
@property (nonatomic) bool hasAssetLocale;
@property (nonatomic) bool hasAssetName;
@property (nonatomic) bool hasAssetPath;
@property (nonatomic) bool hasAssetSizeOnDisk;
@property (nonatomic) bool hasAssetSource;
@property (nonatomic) bool hasAssetSpecifier;
@property (nonatomic) bool hasAssetUnarchivedSizeInBytes;
@property (nonatomic) bool hasAssetVersion;
@property (nonatomic) bool hasIsAssetPathValid;
@property (nonatomic) bool isAssetPathValid;
@property (nonatomic, readonly) NSData *jsonData;

- (void).cxx_destruct;
- (unsigned long long)assetDownloadSizeInBytes;
- (int)assetLocale;
- (id)assetName;
- (id)assetPath;
- (unsigned int)assetSizeOnDisk;
- (int)assetSource;
- (id)assetSpecifier;
- (unsigned long long)assetUnarchivedSizeInBytes;
- (id)assetVersion;
- (void)deleteAssetDownloadSizeInBytes;
- (void)deleteAssetLocale;
- (void)deleteAssetName;
- (void)deleteAssetPath;
- (void)deleteAssetSizeOnDisk;
- (void)deleteAssetSource;
- (void)deleteAssetSpecifier;
- (void)deleteAssetUnarchivedSizeInBytes;
- (void)deleteAssetVersion;
- (void)deleteIsAssetPathValid;
- (id)dictionaryRepresentation;
- (bool)hasAssetDownloadSizeInBytes;
- (bool)hasAssetLocale;
- (bool)hasAssetName;
- (bool)hasAssetPath;
- (bool)hasAssetSizeOnDisk;
- (bool)hasAssetSource;
- (bool)hasAssetSpecifier;
- (bool)hasAssetUnarchivedSizeInBytes;
- (bool)hasAssetVersion;
- (bool)hasIsAssetPathValid;
- (unsigned long long)hash;
- (id)initWithDictionary:(id)arg1;
- (id)initWithJSON:(id)arg1;
- (bool)isAssetPathValid;
- (bool)isEqual:(id)arg1;
- (id)jsonData;
- (bool)readFrom:(id)arg1;
- (void)setAssetDownloadSizeInBytes:(unsigned long long)arg1;
- (void)setAssetLocale:(int)arg1;
- (void)setAssetName:(id)arg1;
- (void)setAssetPath:(id)arg1;
- (void)setAssetSizeOnDisk:(unsigned int)arg1;
- (void)setAssetSource:(int)arg1;
- (void)setAssetSpecifier:(id)arg1;
- (void)setAssetUnarchivedSizeInBytes:(unsigned long long)arg1;
- (void)setAssetVersion:(id)arg1;
- (void)setHasAssetDownloadSizeInBytes:(bool)arg1;
- (void)setHasAssetLocale:(bool)arg1;
- (void)setHasAssetName:(bool)arg1;
- (void)setHasAssetPath:(bool)arg1;
- (void)setHasAssetSizeOnDisk:(bool)arg1;
- (void)setHasAssetSource:(bool)arg1;
- (void)setHasAssetSpecifier:(bool)arg1;
- (void)setHasAssetUnarchivedSizeInBytes:(bool)arg1;
- (void)setHasAssetVersion:(bool)arg1;
- (void)setHasIsAssetPathValid:(bool)arg1;
- (void)setIsAssetPathValid:(bool)arg1;
- (id)suppressMessageUnderConditions;
- (void)writeTo:(id)arg1;

@end