/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/SearchFoundation.framework/SearchFoundation
 */

@interface _SFPBRFSummaryItemTextCardSection : PBCodable <NSSecureCoding, _SFPBRFSummaryItemTextCardSection> {
    _SFPBRFTextProperty * _text_1;
    _SFPBRFTextProperty * _text_2;
    NSArray * _text_3s;
    _SFPBRFTextProperty * _text_4;
    _SFPBRFTextProperty * _text_5;
}

@property (readonly, copy) NSString *debugDescription; /* unknown property attribute: ? */
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) NSData *jsonData;
@property (readonly) Class superclass;
@property (nonatomic, retain) _SFPBRFTextProperty *text_1;
@property (nonatomic, retain) _SFPBRFTextProperty *text_2;
@property (nonatomic, copy) NSArray *text_3s;
@property (nonatomic, retain) _SFPBRFTextProperty *text_4;
@property (nonatomic, retain) _SFPBRFTextProperty *text_5;

- (void).cxx_destruct;
- (void)addText_3:(id)arg1;
- (void)clearText_3;
- (id)dictionaryRepresentation;
- (unsigned long long)hash;
- (id)initWithDictionary:(id)arg1;
- (id)initWithFacade:(id)arg1;
- (id)initWithJSON:(id)arg1;
- (bool)isEqual:(id)arg1;
- (id)jsonData;
- (bool)readFrom:(id)arg1;
- (void)setText_1:(id)arg1;
- (void)setText_2:(id)arg1;
- (void)setText_3:(id)arg1;
- (void)setText_3s:(id)arg1;
- (void)setText_4:(id)arg1;
- (void)setText_5:(id)arg1;
- (id)text_1;
- (id)text_2;
- (id)text_3AtIndex:(unsigned long long)arg1;
- (unsigned long long)text_3Count;
- (id)text_3s;
- (id)text_4;
- (id)text_5;
- (void)writeTo:(id)arg1;

@end