/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
 */

@interface PXSortCollectionAction : PXPhotosAction {
    PHCollection * _collection;
    PHFetchResult * _originalCollectionContent;
    struct PXSortCollectionActionSortType { 
        unsigned int sortKey; 
        bool ascending; 
    }  _originalSortType;
    struct PXSortCollectionActionSortType { 
        unsigned int sortKey; 
        bool ascending; 
    }  _sortType;
}

@property (nonatomic, readonly) PHCollection *collection;
@property (nonatomic, readonly) PHFetchResult *originalCollectionContent;
@property (nonatomic, readonly) struct PXSortCollectionActionSortType { unsigned int x1; bool x2; } originalSortType;
@property (nonatomic, readonly) struct PXSortCollectionActionSortType { unsigned int x1; bool x2; } sortType;

- (void).cxx_destruct;
- (void)_performPeopleVirtualCollectionActionWithCompletion:(id /* block */)arg1;
- (id)actionIdentifier;
- (id)collection;
- (id)initWithCollection:(id)arg1 sortType:(struct PXSortCollectionActionSortType { unsigned int x1; bool x2; })arg2;
- (id)originalCollectionContent;
- (struct PXSortCollectionActionSortType { unsigned int x1; bool x2; })originalSortType;
- (void)performAction:(id /* block */)arg1;
- (void)performChangeToSortType:(struct PXSortCollectionActionSortType { unsigned int x1; bool x2; })arg1 completeCallback:(id /* block */)arg2;
- (void)performUndo:(id /* block */)arg1;
- (struct PXSortCollectionActionSortType { unsigned int x1; bool x2; })sortType;

@end