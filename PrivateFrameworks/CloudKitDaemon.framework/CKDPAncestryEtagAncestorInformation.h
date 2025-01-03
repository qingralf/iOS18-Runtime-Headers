/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/CloudKitDaemon.framework/CloudKitDaemon
 */

@interface CKDPAncestryEtagAncestorInformation : PBCodable <NSCopying> {
    NSString * _zoneEtag;
    CKDPRecordZoneIdentifier * _zoneIdentifier;
}

@property (nonatomic, readonly) bool hasZoneEtag;
@property (nonatomic, readonly) bool hasZoneIdentifier;
@property (nonatomic, retain) NSString *zoneEtag;
@property (nonatomic, retain) CKDPRecordZoneIdentifier *zoneIdentifier;

- (void).cxx_destruct;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (bool)hasZoneEtag;
- (bool)hasZoneIdentifier;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (bool)readFrom:(id)arg1;
- (void)setZoneEtag:(id)arg1;
- (void)setZoneIdentifier:(id)arg1;
- (void)writeTo:(id)arg1;
- (id)zoneEtag;
- (id)zoneIdentifier;

@end
