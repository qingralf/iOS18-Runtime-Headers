/* Generated by RuntimeBrowser.
 */

@protocol _SFPBRFMapAnnotation <NSObject>

@required

- (_SFPBRFMapPoint *)anchor;
- (_SFPBRFVisualProperty *)content;
- (_SFPBLatLng *)coordinate;
- (id)initWithDictionary:(NSDictionary *)arg1;
- (id)initWithJSON:(NSData *)arg1;
- (NSData *)jsonData;
- (_SFPBRFTextProperty *)label;
- (void)setAnchor:(_SFPBRFMapPoint *)arg1;
- (void)setContent:(_SFPBRFVisualProperty *)arg1;
- (void)setCoordinate:(_SFPBLatLng *)arg1;
- (void)setLabel:(_SFPBRFTextProperty *)arg1;
- (void)setTitle:(NSString *)arg1;
- (NSString *)title;

@end
