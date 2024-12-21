/* Generated by RuntimeBrowser.
 */

@protocol _SFPBRFMultiButtonCardSection <NSObject>

@required

- (void)addButtons:(_SFPBButtonItem *)arg1;
- (NSArray *)buttons;
- (_SFPBButtonItem *)buttonsAtIndex:(unsigned long long)arg1;
- (unsigned long long)buttonsCount;
- (void)clearButtons;
- (id)initWithDictionary:(NSDictionary *)arg1;
- (id)initWithJSON:(NSData *)arg1;
- (NSData *)jsonData;
- (int)layoutType;
- (void)setButtons:(NSArray *)arg1;
- (void)setLayoutType:(int)arg1;

@end