/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/SearchFoundation.framework/SearchFoundation
 */

@interface _SFPBRFFont_RFSystemFont : PBCodable <NSSecureCoding, _SFPBRFFont_RFSystemFont> {
    float  _size;
    int  _weight;
}

@property (readonly, copy) NSString *debugDescription; /* unknown property attribute: ? */
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) NSData *jsonData;
@property (nonatomic) float size;
@property (readonly) Class superclass;
@property (nonatomic) int weight;

- (id)dictionaryRepresentation;
- (unsigned long long)hash;
- (id)initWithDictionary:(id)arg1;
- (id)initWithFacade:(id)arg1;
- (id)initWithJSON:(id)arg1;
- (bool)isEqual:(id)arg1;
- (id)jsonData;
- (bool)readFrom:(id)arg1;
- (void)setSize:(float)arg1;
- (void)setWeight:(int)arg1;
- (float)size;
- (int)weight;
- (void)writeTo:(id)arg1;

@end