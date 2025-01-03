/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/CloudKitDaemon.framework/CloudKitDaemon
 */

@interface CKDPFieldPermittedCryptoFeatureSet : PBCodable <NSCopying> {
    struct { 
        int *list; 
        unsigned long long count; 
        unsigned long long size; 
    }  _assetKeyEncryptionTypes;
    struct { 
        int *list; 
        unsigned long long count; 
        unsigned long long size; 
    }  _encryptedFieldContextTypes;
    struct { 
        unsigned int minimumSchemaVersion : 1; 
    }  _has;
    int  _minimumSchemaVersion;
    struct { 
        int *list; 
        unsigned long long count; 
        unsigned long long size; 
    }  _mmcsVersions;
}

@property (nonatomic, readonly) int*assetKeyEncryptionTypes;
@property (nonatomic, readonly) unsigned long long assetKeyEncryptionTypesCount;
@property (nonatomic, readonly) int*encryptedFieldContextTypes;
@property (nonatomic, readonly) unsigned long long encryptedFieldContextTypesCount;
@property (nonatomic) bool hasMinimumSchemaVersion;
@property (nonatomic) int minimumSchemaVersion;
@property (nonatomic, readonly) int*mmcsVersions;
@property (nonatomic, readonly) unsigned long long mmcsVersionsCount;

- (void)addAssetKeyEncryptionType:(int)arg1;
- (void)addEncryptedFieldContextType:(int)arg1;
- (void)addMmcsVersion:(int)arg1;
- (int)assetKeyEncryptionTypeAtIndex:(unsigned long long)arg1;
- (int*)assetKeyEncryptionTypes;
- (unsigned long long)assetKeyEncryptionTypesCount;
- (void)clearAssetKeyEncryptionTypes;
- (void)clearEncryptedFieldContextTypes;
- (void)clearMmcsVersions;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)dealloc;
- (id)description;
- (id)dictionaryRepresentation;
- (int)encryptedFieldContextTypeAtIndex:(unsigned long long)arg1;
- (int*)encryptedFieldContextTypes;
- (unsigned long long)encryptedFieldContextTypesCount;
- (bool)hasMinimumSchemaVersion;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (int)minimumSchemaVersion;
- (int)mmcsVersionAtIndex:(unsigned long long)arg1;
- (int*)mmcsVersions;
- (unsigned long long)mmcsVersionsCount;
- (bool)readFrom:(id)arg1;
- (void)setAssetKeyEncryptionTypes:(int*)arg1 count:(unsigned long long)arg2;
- (void)setEncryptedFieldContextTypes:(int*)arg1 count:(unsigned long long)arg2;
- (void)setHasMinimumSchemaVersion:(bool)arg1;
- (void)setMinimumSchemaVersion:(int)arg1;
- (void)setMmcsVersions:(int*)arg1 count:(unsigned long long)arg2;
- (void)writeTo:(id)arg1;

@end
