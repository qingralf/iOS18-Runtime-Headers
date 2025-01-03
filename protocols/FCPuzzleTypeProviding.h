/* Generated by RuntimeBrowser.
 */

@protocol FCPuzzleTypeProviding <NSObject, NFCopying, FCTagProviding, FCFeedTheming>

@required

- (FCAssetHandle *)coverImageAssetHandle;
- (FCColor *)darkStylePuzzlePrimaryColor;
- (FCColor *)darkStyleThemeColor;
- (NSString *)engineResourceID;
- (FCAssetHandle *)exploreTileImageAssetHandle;
- (FCAssetHandle *)feedNavImageAssetHandle;
- (NSString *)identifier;
- (NSString *)imageResourceID;
- (NSString *)kind;
- (NSArray *)latestPuzzleIDs;
- (NSString *)nameCompact;
- (NSString *)nameForSharing;
- (FCAssetHandle *)nameImageAssetHandle;
- (FCAssetHandle *)nameImageCompactAssetHandle;
- (FCAssetHandle *)nameImageForDarkBackgroundAssetHandle;
- (FCAssetHandle *)nameImageMaskAssetHandle;
- (NSDictionary *)navigationBarThemeByRankID;
- (NSArray *)orderedNavigationBarThemes;
- (NSArray *)promotedPuzzleIDs;
- (FCColor *)puzzlePrimaryColor;
- (FCColor *)themeColor;
- (<FCPuzzleTypeThumbnailDirectoryType> *)thumbnailDirectory;
- (unsigned long long)traits;

@end
