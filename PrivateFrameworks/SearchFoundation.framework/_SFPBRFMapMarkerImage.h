/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/SearchFoundation.framework/SearchFoundation
 */

@interface _SFPBRFMapMarkerImage : PBCodable <NSSecureCoding, _SFPBRFMapMarkerImage> {
    _SFPBLatLng * _coordinate;
    NSString * _systemImage;
    NSString * _title;
}

@property (nonatomic, retain) _SFPBLatLng *coordinate;
@property (readonly, copy) NSString *debugDescription; /* unknown property attribute: ? */
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) NSData *jsonData;
@property (readonly) Class superclass;
@property (nonatomic, copy) NSString *systemImage;
@property (nonatomic, copy) NSString *title;

- (void).cxx_destruct;
- (id)coordinate;
- (id)dictionaryRepresentation;
- (unsigned long long)hash;
- (id)initWithDictionary:(id)arg1;
- (id)initWithFacade:(id)arg1;
- (id)initWithJSON:(id)arg1;
- (bool)isEqual:(id)arg1;
- (id)jsonData;
- (bool)readFrom:(id)arg1;
- (void)setCoordinate:(id)arg1;
- (void)setSystemImage:(id)arg1;
- (void)setTitle:(id)arg1;
- (id)systemImage;
- (id)title;
- (void)writeTo:(id)arg1;

@end