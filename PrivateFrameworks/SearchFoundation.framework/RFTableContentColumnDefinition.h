/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/SearchFoundation.framework/SearchFoundation
 */

@interface RFTableContentColumnDefinition : NSObject <NSCopying, NSSecureCoding, RFTableContentColumnDefinition> {
    bool  _disable_truncation;
    NSNumber * _drop_order;
    NSNumber * _equal_size_column_group;
    struct { 
        unsigned int horizontal_alignment : 1; 
        unsigned int disable_truncation : 1; 
        unsigned int should_drop_in_flow_layout : 1; 
    }  _has;
    int  _horizontal_alignment;
    bool  _should_drop_in_flow_layout;
    NSNumber * _size_percent;
}

@property (readonly, copy) NSString *debugDescription; /* unknown property attribute: ? */
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) NSDictionary *dictionaryRepresentation;
@property (nonatomic) bool disable_truncation;
@property (nonatomic, copy) NSNumber *drop_order;
@property (nonatomic, copy) NSNumber *equal_size_column_group;
@property (readonly) unsigned long long hash;
@property (nonatomic) int horizontal_alignment;
@property (nonatomic, readonly) NSData *jsonData;
@property (nonatomic) bool should_drop_in_flow_layout;
@property (nonatomic, copy) NSNumber *size_percent;
@property (readonly) Class superclass;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)dictionaryRepresentation;
- (bool)disable_truncation;
- (id)drop_order;
- (void)encodeWithCoder:(id)arg1;
- (id)equal_size_column_group;
- (bool)hasDisable_truncation;
- (bool)hasHorizontal_alignment;
- (bool)hasShould_drop_in_flow_layout;
- (unsigned long long)hash;
- (int)horizontal_alignment;
- (id)initWithCoder:(id)arg1;
- (id)initWithProtobuf:(id)arg1;
- (bool)isEqual:(id)arg1;
- (id)jsonData;
- (void)setDisable_truncation:(bool)arg1;
- (void)setDrop_order:(id)arg1;
- (void)setEqual_size_column_group:(id)arg1;
- (void)setHorizontal_alignment:(int)arg1;
- (void)setShould_drop_in_flow_layout:(bool)arg1;
- (void)setSize_percent:(id)arg1;
- (bool)should_drop_in_flow_layout;
- (id)size_percent;

@end
