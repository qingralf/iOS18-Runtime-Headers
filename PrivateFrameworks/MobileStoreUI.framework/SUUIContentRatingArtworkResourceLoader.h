/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/MobileStoreUI.framework/MobileStoreUI
 */

@interface SUUIContentRatingArtworkResourceLoader : NSObject <SUUIArtworkRequestDelegate> {
    NSMapTable * _artworkRequestIDs;
    SUUIImageDataConsumer * _imageDataConsumer;
    SUUIResourceLoader * _loader;
    NSHashTable * _observers;
    UIImage * _placeholderImage;
}

@property (nonatomic, readonly) SUUIResourceLoader *artworkLoader;
@property (readonly, copy) NSString *debugDescription; /* unknown property attribute: ? */
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) SUUIImageDataConsumer *imageDataConsumer;
@property (nonatomic, readonly) struct CGSize { double x1; double x2; } imageSize;
@property (nonatomic, readonly) UIImage *placeholderImage;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)_loadImage:(id)arg1;
- (id)_urlForContentRating:(id)arg1 clientContext:(id)arg2;
- (void)addObserver:(id)arg1;
- (id)artworkLoader;
- (void)artworkRequest:(id)arg1 didLoadImage:(id)arg2;
- (id)cachedImageForContentRating:(id)arg1 withClientContext:(id)arg2;
- (id)imageDataConsumer;
- (struct CGSize { double x1; double x2; })imageSize;
- (id)init;
- (id)initWithArtworkLoader:(id)arg1;
- (void)loadImageForContentRating:(id)arg1 clientContent:(id)arg2 reason:(long long)arg3;
- (id)placeholderImage;
- (void)removeObserver:(id)arg1;
- (void)setImageDataConsumer:(id)arg1;

@end
