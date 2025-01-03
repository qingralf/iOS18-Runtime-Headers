/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/UIFoundation.framework/UIFoundation
 */

@interface NSTextViewportLayoutController : NSObject {
    <NSTextViewportLayoutDelegate_Private> * _delegate;
    id /* block */  _platformRenderingSurfaceUpdater;
    id /* block */  _renderingSurfaceUpdater;
    NSMapTable * _renderingSurfaces;
    NSTextContainer * _textContainer;
    NSTextLayoutManager * _textLayoutManager;
    struct CGRect { 
        struct CGPoint { 
            double x; 
            double y; 
        } origin; 
        struct CGSize { 
            double width; 
            double height; 
        } size; 
    }  _viewportBounds;
    NSArray * _viewportElements;
    struct { 
        unsigned int _layoutIsValid : 1; 
        unsigned int _needsLayout : 1; 
        unsigned int _shouldReset : 1; 
        unsigned int _updatingRenderingSurfaces : 1; 
        unsigned int _isTextLayoutManager : 1; 
        unsigned int _delegateConformsToPublicAPI : 1; 
        unsigned int _delegateSupportsLocationPositionMapping : 1; 
        unsigned int _delegateSupportsRenderingSurfaces : 1; 
        unsigned int _delegateSupportsAuxiliaryRenderingSurfaces : 1; 
        unsigned int _delegateSupportsPresentationLayoutFragment : 1; 
        unsigned int _needsLayoutSelectorType : 2; 
    }  _viewportLayoutControllerFlags;
    NSMutableArray * _viewportLayoutObservers;
    struct CGPoint { 
        double x; 
        double y; 
    }  _viewportOffset;
    NSTextRange * _viewportRange;
}

@property (copy) id /* block */ _platformRenderingSurfaceUpdater;
@property <NSTextViewportLayoutControllerDelegate> *delegate;
@property (readonly) <NSTextViewportElementProvider> *elementProvider;
@property (copy) id /* block */ renderingSurfaceUpdater;
@property (readonly) NSTextContainer *textContainer;
@property (readonly) NSTextLayoutManager *textLayoutManager;
@property (readonly) struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; } viewportBounds;
@property (readonly) NSTextRange *viewportRange;

+ (bool)flushesCachedViewportElements;

- (void).cxx_destruct;
- (id /* block */)_platformRenderingSurfaceUpdater;
- (void)_resetLayout;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })_viewportBounds;
- (bool)addRenderingSurface:(id)arg1 key:(id)arg2 group:(long long)arg3 placement:(long long)arg4;
- (void)addViewportLayoutObserver:(id)arg1;
- (void)adjustViewport:(double)arg1 atLocation:(id)arg2 verticalOffsetFromLocation:(double)arg3;
- (void)adjustViewportByVerticalOffset:(double)arg1;
- (void)dealloc;
- (id)delegate;
- (id)elementProvider;
- (void)enumerateTextViewportElementsInRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1 options:(long long)arg2 usingBlock:(id /* block */)arg3;
- (void)enumerateViewportElementsFromLocation:(id)arg1 options:(long long)arg2 usingBlock:(id /* block */)arg3;
- (id)initWithElementProvider:(id)arg1;
- (id)initWithTextContainer:(id)arg1;
- (id)initWithTextLayoutManager:(id)arg1;
- (void)layoutViewport;
- (id)locationAtPoint:(struct CGPoint { double x1; double x2; })arg1;
- (double)relocateViewportToTextLocation:(id)arg1;
- (void)removeViewportLayoutObserver:(id)arg1;
- (id)renderingSurfaceForKey:(id)arg1;
- (id /* block */)renderingSurfaceUpdater;
- (void)setDelegate:(id)arg1;
- (void)setNeedsLayout;
- (void)setRenderingSurface:(id)arg1 forKey:(id)arg2;
- (void)setRenderingSurfaceUpdater:(id /* block */)arg1;
- (void)set_platformRenderingSurfaceUpdater:(id /* block */)arg1;
- (id)textContainer;
- (id)textLayoutManager;
- (id)textViewportElementAtPoint:(struct CGPoint { double x1; double x2; })arg1;
- (id)textViewportElementForLocation:(id)arg1;
- (id)textViewportElementsInRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })viewport;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })viewportBounds;
- (id)viewportRange;

@end
