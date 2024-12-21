/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
 */

@interface PXFeedConfiguration : NSObject <NSCopying> {
    <PXFeedActionPerformer> * _actionPerformer;
    id /* block */  _chromeControllerPromise;
    id /* block */  _dataSourceManagerPromise;
    <PXFeedItemLayoutFactory> * _itemLayoutFactory;
    PXMediaProvider * _mediaProvider;
    <PXFeedPlaceholderFactory> * _placeholderFactory;
    bool  _shouldEmbedContentLayout;
    id /* block */  _specManagerPromise;
    id /* block */  _visibleRectChangeObserver;
}

@property (nonatomic, retain) <PXFeedActionPerformer> *actionPerformer;
@property (nonatomic, readonly) bool allowsPopOnEmptyBehavior;
@property (nonatomic, copy) id /* block */ chromeControllerPromise;
@property (nonatomic, copy) id /* block */ dataSourceManagerPromise;
@property (nonatomic, readonly) bool hidesBackButton;
@property (nonatomic, retain) <PXFeedItemLayoutFactory> *itemLayoutFactory;
@property (nonatomic, readonly) NSString *localizedSubtitle;
@property (nonatomic, retain) PXMediaProvider *mediaProvider;
@property (nonatomic, retain) <PXFeedPlaceholderFactory> *placeholderFactory;
@property (nonatomic, readonly) long long selectionContext;
@property (nonatomic) bool shouldEmbedContentLayout;
@property (nonatomic, copy) id /* block */ specManagerPromise;
@property (nonatomic, readonly) NSString *viewControllerTitle;
@property (nonatomic, copy) id /* block */ visibleRectChangeObserver;
@property (nonatomic, readonly) bool wantsEmbeddedScrollView;

- (void).cxx_destruct;
- (id)actionPerformer;
- (bool)allowsPopOnEmptyBehavior;
- (id /* block */)chromeControllerPromise;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)dataSourceManager;
- (id /* block */)dataSourceManagerPromise;
- (void)handleContentDismissed;
- (void)handleContentSeen;
- (bool)hidesBackButton;
- (id)init;
- (id)initWithDataSourceManagerPromise:(id /* block */)arg1 specManagerPromise:(id /* block */)arg2 itemLayoutFactory:(id)arg3;
- (id)itemLayoutFactory;
- (id)localizedSubtitle;
- (id)mediaProvider;
- (id)objectReferenceForDestination:(id)arg1;
- (id)placeholderFactory;
- (long long)selectionContext;
- (void)setActionPerformer:(id)arg1;
- (void)setChromeControllerPromise:(id /* block */)arg1;
- (void)setDataSourceManagerPromise:(id /* block */)arg1;
- (void)setItemLayoutFactory:(id)arg1;
- (void)setMediaProvider:(id)arg1;
- (void)setPlaceholderFactory:(id)arg1;
- (void)setShouldEmbedContentLayout:(bool)arg1;
- (void)setSpecManagerPromise:(id /* block */)arg1;
- (void)setVisibleRectChangeObserver:(id /* block */)arg1;
- (bool)shouldEmbedContentLayout;
- (id /* block */)specManagerPromise;
- (id)specManagerWithExtendedTraitCollection:(id)arg1;
- (id)viewControllerTitle;
- (id /* block */)visibleRectChangeObserver;
- (bool)wantsEmbeddedScrollView;

@end