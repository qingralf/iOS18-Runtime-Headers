/* Generated by RuntimeBrowser.
 */

@protocol _SFPBPlayWatchListItemButtonItem <NSObject>

@required

- (_SFPBImage *)image;
- (id)initWithDictionary:(NSDictionary *)arg1;
- (id)initWithJSON:(NSData *)arg1;
- (NSData *)jsonData;
- (void)setImage:(_SFPBImage *)arg1;
- (void)setTitle:(NSString *)arg1;
- (void)setUniqueId:(unsigned long long)arg1;
- (void)setWatchListItem:(_SFPBWatchListItem *)arg1;
- (NSString *)title;
- (unsigned long long)uniqueId;
- (_SFPBWatchListItem *)watchListItem;

@end
