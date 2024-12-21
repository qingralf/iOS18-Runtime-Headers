/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/SearchFoundation.framework/SearchFoundation
 */

@interface RFTextElement : NSObject <NSCopying, NSSecureCoding, RFTextElement> {
    NSArray * _formatted_text;
    NSNumber * _line_limit;
    RFShowMoreOnTap * _show_more_on_tap;
}

@property (readonly, copy) NSString *debugDescription; /* unknown property attribute: ? */
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) NSDictionary *dictionaryRepresentation;
@property (nonatomic, copy) NSArray *formatted_text;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) NSData *jsonData;
@property (nonatomic, copy) NSNumber *line_limit;
@property (nonatomic, retain) RFShowMoreOnTap *show_more_on_tap;
@property (readonly) Class superclass;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)dictionaryRepresentation;
- (void)encodeWithCoder:(id)arg1;
- (id)formatted_text;
- (unsigned long long)hash;
- (id)initWithCoder:(id)arg1;
- (id)initWithProtobuf:(id)arg1;
- (bool)isEqual:(id)arg1;
- (id)jsonData;
- (id)line_limit;
- (void)setFormatted_text:(id)arg1;
- (void)setLine_limit:(id)arg1;
- (void)setShow_more_on_tap:(id)arg1;
- (id)show_more_on_tap;

@end