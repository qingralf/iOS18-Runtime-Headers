/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
 */

@interface PXPlacesMapLayout : NSObject <PXPlacesMapLayout> {
    <PXPlacesGeotaggedItemDataSource> * _dataSource;
    <PXPlacesMapPipelineComponentProvider> * pipelineComponentProvider;
}

@property (readonly) <PXPlacesGeotaggedItemDataSource> *dataSource;
@property (readonly, copy) NSString *debugDescription; /* unknown property attribute: ? */
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic) <PXPlacesMapPipelineComponentProvider> *pipelineComponentProvider;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)dataSource;
- (id)initWithDataSource:(id)arg1;
- (id)layoutForViewPort:(id)arg1 andDataSourceChange:(id)arg2;
- (id)layoutItemForGeotaggable:(id)arg1;
- (id)pipelineComponentProvider;
- (void)reset;
- (void)setPipelineComponentProvider:(id)arg1;

@end
