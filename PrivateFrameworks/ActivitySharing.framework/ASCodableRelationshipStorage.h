/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/ActivitySharing.framework/ActivitySharing
 */

@interface ASCodableRelationshipStorage : PBCodable <NSCopying> {
    ASCodableRelationshipContainer * _legacyRelationshipContainer;
    ASCodableRelationshipContainer * _legacyRemoteRelationshipContainer;
    ASCodableRelationshipContainer * _secureCloudRelationshipContainer;
    ASCodableRelationshipContainer * _secureCloudRemoteRelationshipContainer;
}

@property (nonatomic, readonly) bool hasLegacyRelationshipContainer;
@property (nonatomic, readonly) bool hasLegacyRemoteRelationshipContainer;
@property (nonatomic, readonly) bool hasSecureCloudRelationshipContainer;
@property (nonatomic, readonly) bool hasSecureCloudRemoteRelationshipContainer;
@property (nonatomic, retain) ASCodableRelationshipContainer *legacyRelationshipContainer;
@property (nonatomic, retain) ASCodableRelationshipContainer *legacyRemoteRelationshipContainer;
@property (nonatomic, retain) ASCodableRelationshipContainer *secureCloudRelationshipContainer;
@property (nonatomic, retain) ASCodableRelationshipContainer *secureCloudRemoteRelationshipContainer;

- (void).cxx_destruct;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (bool)hasLegacyRelationshipContainer;
- (bool)hasLegacyRemoteRelationshipContainer;
- (bool)hasSecureCloudRelationshipContainer;
- (bool)hasSecureCloudRemoteRelationshipContainer;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (id)legacyRelationshipContainer;
- (id)legacyRemoteRelationshipContainer;
- (void)mergeFrom:(id)arg1;
- (bool)readFrom:(id)arg1;
- (id)secureCloudRelationshipContainer;
- (id)secureCloudRemoteRelationshipContainer;
- (void)setLegacyRelationshipContainer:(id)arg1;
- (void)setLegacyRemoteRelationshipContainer:(id)arg1;
- (void)setSecureCloudRelationshipContainer:(id)arg1;
- (void)setSecureCloudRemoteRelationshipContainer:(id)arg1;
- (void)writeTo:(id)arg1;

@end