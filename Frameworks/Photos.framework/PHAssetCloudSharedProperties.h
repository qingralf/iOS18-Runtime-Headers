/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/Photos.framework/Photos
 */

@interface PHAssetCloudSharedProperties : PHAssetPropertySet {
    bool  _cloudHasCommentsByMe;
    bool  _cloudIsMyAsset;
}

@property (nonatomic, readonly) bool cloudHasCommentsByMe;
@property (nonatomic, readonly) bool cloudIsMyAsset;

+ (id)entityName;
+ (id)keyPathFromPrimaryObject;
+ (id)keyPathToPrimaryObject;
+ (id)propertiesToFetch;
+ (id)propertySetName;

- (bool)cloudHasCommentsByMe;
- (bool)cloudIsMyAsset;
- (id)initWithFetchDictionary:(id)arg1 asset:(id)arg2 prefetched:(bool)arg3;

@end