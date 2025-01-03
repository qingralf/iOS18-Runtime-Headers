/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/PhotosUIPrivate.framework/PhotosUIPrivate
 */

@interface PUImportChangeDetailsCollectionViewHelper : NSObject {
    UICollectionView * _collectionView;
    id /* block */  _dataSourceSettingHandler;
}

@property (nonatomic) UICollectionView *collectionView;
@property (nonatomic, copy) id /* block */ dataSourceSettingHandler;

- (void).cxx_destruct;
- (void)applyChangeDetails:(id)arg1 forNewDataSource:(id)arg2 completionBlock:(id /* block */)arg3;
- (id)collectionView;
- (id /* block */)dataSourceSettingHandler;
- (id)initWithCollectionView:(id)arg1 dataSourceSettingHandler:(id /* block */)arg2;
- (void)setCollectionView:(id)arg1;
- (void)setDataSourceSettingHandler:(id /* block */)arg1;
- (void)transitionFromDataSource:(id)arg1 toDataSource:(id)arg2 changeHistory:(id)arg3 animated:(bool)arg4 completionHandler:(id /* block */)arg5;

@end
