/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/SearchFoundation.framework/SearchFoundation
 */

@interface RFTableCell : NSObject <NSCopying, NSSecureCoding, RFTableCell> {
    bool  _applySmallCaps;
    NSNumber * _column_span;
    struct { 
        unsigned int text : 1; 
        unsigned int visual : 1; 
        unsigned int horizontal_alignment : 1; 
        unsigned int applySmallCaps : 1; 
    }  _has;
    int  _horizontal_alignment;
    RFTextProperty * _text;
    RFVisualProperty * _visual;
}

@property (nonatomic) bool applySmallCaps;
@property (nonatomic, copy) NSNumber *column_span;
@property (readonly, copy) NSString *debugDescription; /* unknown property attribute: ? */
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) NSDictionary *dictionaryRepresentation;
@property (readonly) unsigned long long hash;
@property (nonatomic) int horizontal_alignment;
@property (nonatomic, readonly) NSData *jsonData;
@property (readonly) Class superclass;
@property (nonatomic, retain) RFTextProperty *text;
@property (nonatomic, retain) RFVisualProperty *visual;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (bool)applySmallCaps;
- (id)column_span;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)dictionaryRepresentation;
- (void)encodeWithCoder:(id)arg1;
- (bool)hasApplySmallCaps;
- (bool)hasHorizontal_alignment;
- (bool)hasText;
- (bool)hasVisual;
- (unsigned long long)hash;
- (int)horizontal_alignment;
- (id)initWithCoder:(id)arg1;
- (id)initWithProtobuf:(id)arg1;
- (bool)isEqual:(id)arg1;
- (id)jsonData;
- (void)setApplySmallCaps:(bool)arg1;
- (void)setColumn_span:(id)arg1;
- (void)setHorizontal_alignment:(int)arg1;
- (void)setText:(id)arg1;
- (void)setVisual:(id)arg1;
- (id)text;
- (id)visual;

@end