/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
 */

@interface PXExportContainer : NSObject {
    PHCollection * _collection;
    NSURL * _url;
}

@property (nonatomic, readonly) PHFetchResult *assets;
@property (nonatomic, readonly) NSString *localizedTitle;
@property (nonatomic, copy) NSURL *url;

+ (void)_traverseStartingAt:(id)arg1 prefix:(id)arg2 storeIn:(id)arg3 uniquifier:(id)arg4;
+ (id)containersForRootCollection:(id)arg1 destinationURL:(id)arg2;
+ (id)containersForRootCollection:(id)arg1 destinationURL:(id)arg2 uniquifier:(id)arg3 includeRootName:(bool)arg4;

- (void).cxx_destruct;
- (id)_initWithCollection:(id)arg1;
- (id)assets;
- (id)description;
- (id)init;
- (id)localizedTitle;
- (void)setUrl:(id)arg1;
- (id)url;

@end