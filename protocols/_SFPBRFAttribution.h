/* Generated by RuntimeBrowser.
 */

@protocol _SFPBRFAttribution <NSObject>

@required

- (_SFPBCommandReference *)commandReference;
- (_SFPBRFVisualProperty *)image;
- (int)index;
- (id)initWithDictionary:(NSDictionary *)arg1;
- (id)initWithJSON:(NSData *)arg1;
- (NSData *)jsonData;
- (NSString *)locale;
- (NSString *)localized_index;
- (NSString *)localized_separator;
- (void)setCommandReference:(_SFPBCommandReference *)arg1;
- (void)setImage:(_SFPBRFVisualProperty *)arg1;
- (void)setIndex:(int)arg1;
- (void)setLocale:(NSString *)arg1;
- (void)setLocalized_index:(NSString *)arg1;
- (void)setLocalized_separator:(NSString *)arg1;
- (void)setSubtitle:(_SFPBRFTextProperty *)arg1;
- (void)setTitle:(_SFPBRFTextProperty *)arg1;
- (_SFPBRFTextProperty *)subtitle;
- (_SFPBRFTextProperty *)title;

@end
