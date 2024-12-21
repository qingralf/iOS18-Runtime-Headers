/* Generated by RuntimeBrowser.
 */

@protocol _SFPBRFSummaryItemButtonCardSection <NSObject>

@required

- (void)addText_2:(_SFPBRFTextProperty *)arg1;
- (void)addText_3:(_SFPBRFTextProperty *)arg1;
- (bool)buttonItemsAreTrailing;
- (_SFPBButtonItem *)button_1;
- (_SFPBButtonItem *)button_2;
- (_SFPBButtonItem *)button_3;
- (void)clearText_2;
- (void)clearText_3;
- (id)initWithDictionary:(NSDictionary *)arg1;
- (id)initWithJSON:(NSData *)arg1;
- (NSData *)jsonData;
- (void)setButtonItemsAreTrailing:(bool)arg1;
- (void)setButton_1:(_SFPBButtonItem *)arg1;
- (void)setButton_2:(_SFPBButtonItem *)arg1;
- (void)setButton_3:(_SFPBButtonItem *)arg1;
- (void)setText_1:(_SFPBRFTextProperty *)arg1;
- (void)setText_2s:(NSArray *)arg1;
- (void)setText_3s:(NSArray *)arg1;
- (void)setText_4:(_SFPBRFTextProperty *)arg1;
- (void)setThumbnail:(_SFPBRFVisualProperty *)arg1;
- (_SFPBRFTextProperty *)text_1;
- (_SFPBRFTextProperty *)text_2AtIndex:(unsigned long long)arg1;
- (unsigned long long)text_2Count;
- (NSArray *)text_2s;
- (_SFPBRFTextProperty *)text_3AtIndex:(unsigned long long)arg1;
- (unsigned long long)text_3Count;
- (NSArray *)text_3s;
- (_SFPBRFTextProperty *)text_4;
- (_SFPBRFVisualProperty *)thumbnail;

@end