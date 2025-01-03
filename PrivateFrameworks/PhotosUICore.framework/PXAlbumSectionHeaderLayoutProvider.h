/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
 */

@interface PXAlbumSectionHeaderLayoutProvider : NSObject <PXGSingleViewLayoutDelegate, PXPhotosSectionHeaderLayoutProvider, _PXAlbumSectionHeaderLayoutInteractionDelegate> {
    bool  _allowsFloatingBackground;
    bool  _editorialStyle;
    UIImage * _gradientImage;
    PXPhotosViewModel * _viewModel;
    <PXPhotosSectionHeaderLayoutViewProvider> * _viewProvider;
}

@property (nonatomic) bool allowsFloatingBackground;
@property (readonly, copy) NSString *debugDescription; /* unknown property attribute: ? */
@property (readonly, copy) NSString *description;
@property (nonatomic) bool editorialStyle;
@property (nonatomic, readonly) UIImage *gradientImage;
@property (readonly) unsigned long long hash;
@property (nonatomic) <PXPhotosSectionHeaderLayoutProviderInvalidationDelegate> *invalidationDelegate; /* unknown property attribute: ? */
@property (readonly) Class superclass;
@property (nonatomic) <PXPhotosSectionHeaderLayoutProviderInvalidationDelegate> *topHeaderInvalidationDelegate; /* unknown property attribute: ? */
@property (nonatomic, readonly) double topHeaderMinimumHeight; /* unknown property attribute: ? */
@property (nonatomic, readonly) PXPhotosViewModel *viewModel;
@property (nonatomic, readonly) <PXPhotosSectionHeaderLayoutViewProvider> *viewProvider;

- (void).cxx_destruct;
- (bool)allowsFloatingBackground;
- (id)configurationForSingleViewLayout:(id)arg1;
- (id)createSectionHeaderLayoutForSectionedLayout:(id)arg1 dataSource:(id)arg2 sectionIndexPath:(struct PXSimpleIndexPath { long long x1; long long x2; long long x3; long long x4; })arg3 spec:(id)arg4 outAlignment:(unsigned long long*)arg5;
- (void)didTapSectionHeader:(id)arg1;
- (bool)editorialStyle;
- (id)gradientImage;
- (id)init;
- (id)initWithViewModel:(id)arg1 viewProvider:(id)arg2;
- (void)sectionHeader:(id)arg1 didToggleFiltersDisabled:(bool)arg2;
- (void)sectionHeader:(id)arg1 didToggleSelectedState:(bool)arg2;
- (void)sectionedLayout:(id)arg1 headerLayout:(id)arg2 didChangeDataSource:(id)arg3 sectionIndexPath:(struct PXSimpleIndexPath { long long x1; long long x2; long long x3; long long x4; })arg4 hasSectionChanges:(bool)arg5;
- (void)setAllowsFloatingBackground:(bool)arg1;
- (void)setEditorialStyle:(bool)arg1;
- (struct CGSize { double x1; double x2; })singleViewLayout:(id)arg1 desiredSizeForReferenceSize:(struct CGSize { double x1; double x2; })arg2;
- (id)viewModel;
- (id)viewProvider;

@end
