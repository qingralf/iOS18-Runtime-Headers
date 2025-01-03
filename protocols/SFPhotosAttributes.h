/* Generated by RuntimeBrowser.
 */

@protocol SFPhotosAttributes <NSObject>

@required

- (NSDictionary *)dictionaryRepresentation;
- (bool)isEmbeddingMatched;
- (bool)isFavorite;
- (bool)isMetadataMatched;
- (bool)isVideo;
- (NSData *)jsonData;
- (int)photosSuggestionType;
- (unsigned long long)positionIndex;
- (void)setIsEmbeddingMatched:(bool)arg1;
- (void)setIsFavorite:(bool)arg1;
- (void)setIsMetadataMatched:(bool)arg1;
- (void)setIsVideo:(bool)arg1;
- (void)setPhotosSuggestionType:(int)arg1;
- (void)setPositionIndex:(unsigned long long)arg1;

@end
