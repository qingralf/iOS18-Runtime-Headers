/* Generated by RuntimeBrowser.
 */

@protocol _SFPBSafariTableOfContentsCardSection <NSObject>

@required

- (void)addTableOfContentsItems:(_SFPBSafariTableOfContentsItem *)arg1;
- (NSString *)algorithmVersion;
- (void)clearTableOfContentsItems;
- (id)initWithDictionary:(NSDictionary *)arg1;
- (id)initWithJSON:(NSData *)arg1;
- (NSData *)jsonData;
- (void)setAlgorithmVersion:(NSString *)arg1;
- (void)setTableOfContentsItems:(NSArray *)arg1;
- (void)setTableOfContentsSource:(int)arg1;
- (void)setTableOfContentsType:(int)arg1;
- (NSArray *)tableOfContentsItems;
- (_SFPBSafariTableOfContentsItem *)tableOfContentsItemsAtIndex:(unsigned long long)arg1;
- (unsigned long long)tableOfContentsItemsCount;
- (int)tableOfContentsSource;
- (int)tableOfContentsType;

@end