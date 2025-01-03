/* Generated by RuntimeBrowser.
 */

@protocol _SFPBRFFormattedText <NSObject>

@required

- (void)addAttributions:(_SFPBRFAttribution *)arg1;
- (void)addHighlighted_substrings:(_SFPBRFHighlightedSubstring *)arg1;
- (NSArray *)attributions;
- (_SFPBRFAttribution *)attributionsAtIndex:(unsigned long long)arg1;
- (unsigned long long)attributionsCount;
- (_SFPBRFColor *)background_color;
- (void)clearAttributions;
- (void)clearHighlighted_substrings;
- (_SFPBRFColor *)color;
- (int)design;
- (_SFPBRFEngageable *)engageable;
- (_SFPBRFFont *)font;
- (NSArray *)highlighted_substrings;
- (_SFPBRFHighlightedSubstring *)highlighted_substringsAtIndex:(unsigned long long)arg1;
- (unsigned long long)highlighted_substringsCount;
- (id)initWithDictionary:(NSDictionary *)arg1;
- (id)initWithJSON:(NSData *)arg1;
- (_SFPBRFImageElement *)inline_image_element;
- (_SFPBRFOptionalBool *)is_bold;
- (_SFPBRFOptionalBool *)is_highlighted;
- (_SFPBRFOptionalBool *)is_italic;
- (_SFPBRFOptionalBool *)is_underlined;
- (NSData *)jsonData;
- (void)setAttributions:(NSArray *)arg1;
- (void)setBackground_color:(_SFPBRFColor *)arg1;
- (void)setColor:(_SFPBRFColor *)arg1;
- (void)setDesign:(int)arg1;
- (void)setEngageable:(_SFPBRFEngageable *)arg1;
- (void)setFont:(_SFPBRFFont *)arg1;
- (void)setHighlighted_substrings:(NSArray *)arg1;
- (void)setInline_image_element:(_SFPBRFImageElement *)arg1;
- (void)setIs_bold:(_SFPBRFOptionalBool *)arg1;
- (void)setIs_highlighted:(_SFPBRFOptionalBool *)arg1;
- (void)setIs_italic:(_SFPBRFOptionalBool *)arg1;
- (void)setIs_underlined:(_SFPBRFOptionalBool *)arg1;
- (void)setText:(NSString *)arg1;
- (void)setText_encapsulation:(_SFPBRFTextEncapsulation *)arg1;
- (void)setWeight:(int)arg1;
- (NSString *)text;
- (_SFPBRFTextEncapsulation *)text_encapsulation;
- (int)weight;
- (unsigned long long)whichValue;

@end
