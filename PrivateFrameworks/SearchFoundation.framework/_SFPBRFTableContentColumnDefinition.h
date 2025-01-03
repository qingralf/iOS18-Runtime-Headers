/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/SearchFoundation.framework/SearchFoundation
 */

@interface _SFPBRFTableContentColumnDefinition : PBCodable <NSSecureCoding, _SFPBRFTableContentColumnDefinition> {
    bool  _disable_truncation;
    int  _drop_order;
    int  _equal_size_column_group;
    int  _horizontal_alignment;
    bool  _should_drop_in_flow_layout;
    float  _size_percent;
}

@property (readonly, copy) NSString *debugDescription; /* unknown property attribute: ? */
@property (readonly, copy) NSString *description;
@property (nonatomic) bool disable_truncation;
@property (nonatomic) int drop_order;
@property (nonatomic) int equal_size_column_group;
@property (readonly) unsigned long long hash;
@property (nonatomic) int horizontal_alignment;
@property (nonatomic, readonly) NSData *jsonData;
@property (nonatomic) bool should_drop_in_flow_layout;
@property (nonatomic) float size_percent;
@property (readonly) Class superclass;

- (id)dictionaryRepresentation;
- (bool)disable_truncation;
- (int)drop_order;
- (int)equal_size_column_group;
- (unsigned long long)hash;
- (int)horizontal_alignment;
- (id)initWithDictionary:(id)arg1;
- (id)initWithFacade:(id)arg1;
- (id)initWithJSON:(id)arg1;
- (bool)isEqual:(id)arg1;
- (id)jsonData;
- (bool)readFrom:(id)arg1;
- (void)setDisable_truncation:(bool)arg1;
- (void)setDrop_order:(int)arg1;
- (void)setEqual_size_column_group:(int)arg1;
- (void)setHorizontal_alignment:(int)arg1;
- (void)setShould_drop_in_flow_layout:(bool)arg1;
- (void)setSize_percent:(float)arg1;
- (bool)should_drop_in_flow_layout;
- (float)size_percent;
- (void)writeTo:(id)arg1;

@end
