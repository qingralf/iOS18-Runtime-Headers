/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
 */

@interface PXTilingControllerCompositionEngine : NSObject <PXScrollControllerUpdateDelegate, PXTilingControllerCompositionInput, PXTilingControllerCompositionObserver, PXTilingControllerCompositionOutput, PXTilingControllerObserver> {
    PXTilingControllerComposition * __composition;
    NSHashTable * __compositions;
    struct UIEdgeInsets { 
        double top; 
        double left; 
        double bottom; 
        double right; 
    }  __contentInset;
    PXTilingControllerDefaultComposition * __defaultComposition;
    NSMutableArray * __invalidationContexts;
    struct CGSize { 
        double width; 
        double height; 
    }  __referenceSize;
    <PXScrollController> * __scrollController;
    NSHashTable * __tilingControllers;
    NSMutableArray * __tilingControllersRequestingFocus;
    bool  _isPerformingChanges;
    bool  _isUpdatingComposition;
    struct { 
        bool scrollControllerMetrics; 
        bool composition; 
    }  _needsUpdateFlags;
}

@property (setter=_setComposition:, nonatomic, retain) PXTilingControllerComposition *_composition;
@property (nonatomic, readonly) NSHashTable *_compositions;
@property (setter=_setContentInset:, nonatomic) struct UIEdgeInsets { double x1; double x2; double x3; double x4; } _contentInset;
@property (nonatomic, readonly) PXTilingControllerDefaultComposition *_defaultComposition;
@property (nonatomic, readonly) NSMutableArray *_invalidationContexts;
@property (setter=_setReferenceSize:, nonatomic) struct CGSize { double x1; double x2; } _referenceSize;
@property (nonatomic, readonly) <PXScrollController> *_scrollController;
@property (nonatomic, readonly) NSHashTable *_tilingControllers;
@property (nonatomic, readonly) NSMutableArray *_tilingControllersRequestingFocus;
@property (nonatomic, readonly) struct UIEdgeInsets { double x1; double x2; double x3; double x4; } contentInset;
@property (readonly, copy) NSString *debugDescription; /* unknown property attribute: ? */
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) NSArray *invalidationContexts;
@property (nonatomic, readonly) struct CGSize { double x1; double x2; } referenceSize;
@property (readonly) Class superclass;
@property (nonatomic, readonly) NSArray *tilingControllersRequestingFocus;

+ (id)compositionEngineForScrollController:(id)arg1 createIfNeeded:(bool)arg2;

- (void).cxx_destruct;
- (void)_beginUpdate;
- (id)_composition;
- (id)_compositions;
- (struct UIEdgeInsets { double x1; double x2; double x3; double x4; })_contentInset;
- (id)_defaultComposition;
- (void)_endUpdate;
- (id)_initWithScrollController:(id)arg1;
- (void)_invalidateComposition;
- (void)_invalidateScrollControllerMetrics;
- (id)_invalidationContexts;
- (bool)_needsUpdate;
- (void)_performChanges:(id /* block */)arg1;
- (struct CGSize { double x1; double x2; })_referenceSize;
- (id)_scrollController;
- (void)_setComposition:(id)arg1;
- (void)_setContentInset:(struct UIEdgeInsets { double x1; double x2; double x3; double x4; })arg1;
- (void)_setNeedsUpdate;
- (void)_setReferenceSize:(struct CGSize { double x1; double x2; })arg1;
- (id)_tilingControllers;
- (id)_tilingControllersRequestingFocus;
- (bool)_updateCompositionIfNeeded;
- (void)_updateScrollControllerMetricsIfNeeded;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })contentBoundsForTilingController:(id)arg1;
- (struct UIEdgeInsets { double x1; double x2; double x3; double x4; })contentInset;
- (struct CGPoint { double x1; double x2; })convertPoint:(struct CGPoint { double x1; double x2; })arg1 fromTilingController:(id)arg2;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })convertRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1 fromTilingController:(id)arg2;
- (id)convertScrollInfo:(id)arg1 fromTilingController:(id)arg2;
- (id)init;
- (id)invalidationContexts;
- (struct CGPoint { double x1; double x2; })originForTilingController:(id)arg1;
- (struct CGPoint { double x1; double x2; })preferredOriginForTilingController:(id)arg1;
- (void)px_scrollControllerDidUpdate:(id)arg1;
- (struct CGSize { double x1; double x2; })referenceSize;
- (void)registerComposition:(id)arg1;
- (void)registerTilingController:(id)arg1;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })scrollBoundsForTilingController:(id)arg1;
- (id)scrollInfoForTilingController:(id)arg1;
- (void)setContentBounds:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1 scrollBounds:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg2 scrollInfo:(id)arg3;
- (void)setOrigin:(struct CGPoint { double x1; double x2; })arg1 forTilingController:(id)arg2;
- (void)setReferenceSize:(struct CGSize { double x1; double x2; })arg1 contentInset:(struct UIEdgeInsets { double x1; double x2; double x3; double x4; })arg2 forTilingController:(id)arg3;
- (void)setTilingControllerCompositionNeedsUpdate:(id)arg1 withContext:(id)arg2;
- (void)setTilingControllerNeedsUpdate:(id)arg1;
- (void)tilingController:(id)arg1 invalidatedWithContext:(long long)arg2;
- (id)tilingControllersRequestingFocus;
- (void)unregisterComposition:(id)arg1;
- (void)unregisterTilingController:(id)arg1;

@end
