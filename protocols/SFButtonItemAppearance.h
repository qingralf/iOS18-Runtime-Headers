/* Generated by RuntimeBrowser.
 */

@protocol SFButtonItemAppearance <NSObject>

@required

- (NSDictionary *)dictionaryRepresentation;
- (NSData *)jsonData;
- (bool)preferNoFallbackImage;
- (int)renderingMode;
- (int)role;
- (void)setPreferNoFallbackImage:(bool)arg1;
- (void)setRenderingMode:(int)arg1;
- (void)setRole:(int)arg1;
- (void)setStyle:(int)arg1;
- (void)setTintColor:(SFColor *)arg1;
- (int)style;
- (SFColor *)tintColor;

@end
