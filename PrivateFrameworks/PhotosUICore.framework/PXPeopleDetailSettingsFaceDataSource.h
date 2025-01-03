/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
 */

@interface PXPeopleDetailSettingsFaceDataSource : NSObject <PXPeopleDetailSettingsDataSource> {
    PHFetchResult * _faces;
    NSString * _title;
}

@property (nonatomic, readonly) long long action;
@property (readonly, copy) NSString *debugDescription; /* unknown property attribute: ? */
@property (readonly, copy) NSString *description;
@property (nonatomic, retain) PHFetchResult *faces;
@property (nonatomic, readonly) bool hasMoreDetails;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) unsigned long long numberOfItems;
@property (readonly) Class superclass;
@property (nonatomic, copy) NSString *title;

- (void).cxx_destruct;
- (long long)action;
- (id)faces;
- (bool)hasMoreDetails;
- (void)imageAtIndex:(unsigned long long)arg1 targetSize:(struct CGSize { double x1; double x2; })arg2 displayScale:(double)arg3 resultHandler:(id /* block */)arg4;
- (id)initWithTitle:(id)arg1 faces:(id)arg2;
- (id)modelObjectForIndex:(long long)arg1;
- (unsigned long long)numberOfItems;
- (void)setFaces:(id)arg1;
- (void)setTitle:(id)arg1;
- (id)title;

@end
