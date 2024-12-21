/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/MapsUI.framework/MapsUI
 */

@interface MUAttributionArgument : PBCodable <NSCopying> {
    NSString * _vendorId;
}

@property (nonatomic, readonly) bool hasVendorId;
@property (nonatomic, retain) NSString *vendorId;

- (void).cxx_destruct;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (bool)hasVendorId;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (bool)readFrom:(id)arg1;
- (void)setVendorId:(id)arg1;
- (id)vendorId;
- (void)writeTo:(id)arg1;

@end