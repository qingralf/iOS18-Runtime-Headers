/* Generated by RuntimeBrowser.
 */

@protocol PXSharedLibrarySharingSuggestion <NSObject, NSCopying>

@required

- (<PXDisplayCollection> *)displayCollection;
- (NSString *)identifier;
- (bool)isNew;
- (bool)isPlaceholder;
- (<PXDisplayAsset> *)keyAsset;
- (NSArray *)locations;
- (void)markAsRead;
- (NSString *)title;

@end