/* Generated by RuntimeBrowser.
 */

@protocol _CPPhotosAggregatedInfo <NSObject>

@required

- (id)initWithDictionary:(NSDictionary *)arg1;
- (id)initWithJSON:(NSData *)arg1;
- (NSData *)jsonData;
- (void)setTotalNumberOfAssets:(int)arg1;
- (void)setTotalNumberOfEmbeddingMatchedAssets:(int)arg1;
- (void)setTotalNumberOfMetadataMatchedAssets:(int)arg1;
- (int)totalNumberOfAssets;
- (int)totalNumberOfEmbeddingMatchedAssets;
- (int)totalNumberOfMetadataMatchedAssets;

@end
