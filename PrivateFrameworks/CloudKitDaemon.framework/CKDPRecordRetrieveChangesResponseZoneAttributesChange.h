/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/CloudKitDaemon.framework/CloudKitDaemon
 */

@interface CKDPRecordRetrieveChangesResponseZoneAttributesChange : PBCodable <NSCopying> {
    CKDPZone * _recordZone;
}

@property (nonatomic, readonly) bool hasRecordZone;
@property (nonatomic, retain) CKDPZone *recordZone;

- (void).cxx_destruct;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (bool)hasRecordZone;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (bool)readFrom:(id)arg1;
- (id)recordZone;
- (void)setRecordZone:(id)arg1;
- (void)writeTo:(id)arg1;

@end
