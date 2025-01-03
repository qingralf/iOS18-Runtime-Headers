/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
 */

@interface PXPlacesMapPipeline : NSObject <PXPlacesMapPipelineComponentProvider> {
    PXPlacesImageCache * _imageCache;
    <PXPlacesMapLayout> * _layout;
    <PXPlacesMapRenderer> * _renderer;
    <PXPlacesMapSelectionHandler> * _selectionHandler;
    <PXPlacesMapUpdatePlan> * _updatePlan;
}

@property (nonatomic, readonly) <PXPlacesGeotaggedItemDataSource> *dataSource;
@property (readonly, copy) NSString *debugDescription; /* unknown property attribute: ? */
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (retain) PXPlacesImageCache *imageCache;
@property (readonly) <PXPlacesMapLayout> *layout;
@property (readonly) <PXPlacesMapRenderer> *renderer;
@property (readonly) <PXPlacesMapSelectionHandler> *selectionHandler;
@property (readonly) Class superclass;
@property (readonly) <PXPlacesMapUpdatePlan> *updatePlan;

- (void).cxx_destruct;
- (void)cancel;
- (id)dataSource;
- (id)executeRemoval;
- (id)executeWithUpdatedViewPort:(id)arg1 andDataSourceChange:(id)arg2;
- (id)imageCache;
- (id)initWithLayout:(id)arg1 updatePlan:(id)arg2 renderer:(id)arg3 selectionHandler:(id)arg4;
- (id)layout;
- (id)renderer;
- (id)selectionHandler;
- (void)setImageCache:(id)arg1;
- (id)updatePlan;

@end
