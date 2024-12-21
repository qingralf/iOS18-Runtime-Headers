/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/SearchFoundation.framework/SearchFoundation
 */

@interface _SFPBRFMapMarker : PBCodable <NSSecureCoding, _SFPBRFMapMarker> {
    _SFPBRFMapMarkerIdentifier * _identifier;
    _SFPBRFMapMarkerImage * _image;
    _SFPBRFMapMarkerText * _text;
    _SFPBRFColor * _tint;
    unsigned long long  _whichValue;
}

@property (readonly, copy) NSString *debugDescription; /* unknown property attribute: ? */
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) _SFPBRFMapMarkerIdentifier *identifier;
@property (nonatomic, retain) _SFPBRFMapMarkerImage *image;
@property (nonatomic, readonly) NSData *jsonData;
@property (readonly) Class superclass;
@property (nonatomic, retain) _SFPBRFMapMarkerText *text;
@property (nonatomic, retain) _SFPBRFColor *tint;
@property (nonatomic, readonly) unsigned long long whichValue;

- (void).cxx_destruct;
- (id)dictionaryRepresentation;
- (unsigned long long)hash;
- (id)identifier;
- (id)image;
- (id)initWithDictionary:(id)arg1;
- (id)initWithFacade:(id)arg1;
- (id)initWithJSON:(id)arg1;
- (bool)isEqual:(id)arg1;
- (id)jsonData;
- (bool)readFrom:(id)arg1;
- (void)setIdentifier:(id)arg1;
- (void)setImage:(id)arg1;
- (void)setText:(id)arg1;
- (void)setTint:(id)arg1;
- (id)text;
- (id)tint;
- (unsigned long long)whichValue;
- (void)writeTo:(id)arg1;

@end