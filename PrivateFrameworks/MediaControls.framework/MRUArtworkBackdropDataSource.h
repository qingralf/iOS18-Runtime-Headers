/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/MediaControls.framework/MediaControls
 */

@interface MRUArtworkBackdropDataSource : NSObject {
    void backdropImages;
    void loadBackdropImageTasks;
    void loadedArtworkImages;
    void loadedBackdropImageKeys;
    void observers;
}

- (void).cxx_destruct;
- (void)addObserver:(id)arg1;
- (id)backdropImageWithKey:(id)arg1;
- (void)cleanUpWithKey:(id)arg1;
- (bool)hasLoadedBackdropImageFor:(id)arg1;
- (id)init;
- (void)loadBackdropImageWithArtworkImage:(id)arg1 backdropSize:(struct CGSize { double x1; double x2; })arg2 key:(id)arg3;
- (void)loadBackdropImageWithArtworkImage:(id)arg1 backdropSize:(struct CGSize { double x1; double x2; })arg2 key:(id)arg3 overrideLoadedImage:(bool)arg4;
- (void)removeObserver:(id)arg1;

@end
