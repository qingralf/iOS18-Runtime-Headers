/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/Silex.framework/Silex
 */

@interface SXComponentController : NSObject <SXComponentController, SXViewportChangeListener> {
    <SXDOMObjectProviding> * _DOMObjectProvider;
    <SXComponentViewEngine> * _componentViewEngine;
    NSArray * _flattenedComponentViews;
    <SXComponentHosting> * _host;
    bool  _isPresented;
    bool  _isPresenting;
    NSMutableDictionary * _mappedComponentViews;
    NSMutableArray * _nestedComponentViews;
    NSHashTable * _observers;
    SXPresentationAttributes * _presentationAttributes;
    SXLayoutBlueprint * _presentedBlueprint;
    NSMutableArray * _sortedComponentViews;
    SXViewport * _viewport;
}

@property (nonatomic, readonly) <SXDOMObjectProviding> *DOMObjectProvider;
@property (nonatomic, retain) <SXComponentViewEngine> *componentViewEngine;
@property (readonly, copy) NSString *debugDescription; /* unknown property attribute: ? */
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) NSArray *flattenedComponentViews;
@property (readonly) unsigned long long hash;
@property (nonatomic) <SXComponentHosting> *host;
@property (nonatomic, readonly) bool isPresented;
@property (nonatomic) bool isPresenting;
@property (nonatomic, retain) NSMutableDictionary *mappedComponentViews;
@property (nonatomic, retain) NSMutableArray *nestedComponentViews;
@property (nonatomic, readonly) NSHashTable *observers;
@property (nonatomic, readonly) SXPresentationAttributes *presentationAttributes;
@property (nonatomic, readonly) SXLayoutBlueprint *presentedBlueprint;
@property (nonatomic, retain) NSMutableArray *sortedComponentViews;
@property (readonly) Class superclass;
@property (nonatomic, readonly) SXViewport *viewport;

- (void).cxx_destruct;
- (id)DOMObjectProvider;
- (void)addObserver:(id)arg1;
- (void)assistiveTechnologyStatusDidChange;
- (id)componentViewEngine;
- (id)componentViewForIdentifier:(id)arg1;
- (id)componentViewForPoint:(struct CGPoint { double x1; double x2; })arg1;
- (id)componentViewForPoint:(struct CGPoint { double x1; double x2; })arg1 inComponents:(id)arg2;
- (id)componentViews;
- (id)componentViewsForRole:(int)arg1;
- (id)componentViewsForRole:(int)arg1 forLayoutBlueprint:(id)arg2;
- (id)componentsInRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)fadeComponent:(id)arg1 completion:(id /* block */)arg2;
- (id)flattenedComponentViews;
- (id)host;
- (id)initWithViewport:(id)arg1 DOMObjectProvider:(id)arg2;
- (void)integrateBlueprint:(id)arg1 withCompletion:(id /* block */)arg2;
- (bool)isPresented;
- (bool)isPresenting;
- (id)mappedComponentViews;
- (id)nestedComponentViews;
- (id)observers;
- (void)presentBlueprint:(id)arg1 forParentComponentView:(id)arg2 inHost:(id)arg3;
- (id)presentComponentBlueprint:(id)arg1 inHost:(id)arg2 columnLayout:(id)arg3;
- (void)presentComponentsInBlueprint:(id)arg1;
- (id)presentationAttributes;
- (id)presentedBlueprint;
- (void)provideInfosLayoutTo:(id)arg1;
- (void)removeComponentsInLayoutBlueprint:(id)arg1 removedFromLayoutBlueprint:(id)arg2;
- (void)removeObserver:(id)arg1;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })renderBounds;
- (void)renderContentsIfNeededForComponents:(id)arg1;
- (void)setComponentViewEngine:(id)arg1;
- (void)setHost:(id)arg1;
- (void)setIsPresenting:(bool)arg1;
- (void)setMappedComponentViews:(id)arg1;
- (void)setNestedComponentViews:(id)arg1;
- (void)setSortedComponentViews:(id)arg1;
- (id)sortedComponentViews;
- (void)updatePresentationStateForNestedComponentView:(id)arg1 presentationState:(long long)arg2;
- (void)updatePresentationStateForNestedComponentViews:(id)arg1 presentationState:(long long)arg2;
- (void)updateVisibilityStatesForComponentViews:(id)arg1;
- (void)updateVisibilityStatesForComponentViews:(id)arg1 parentComponent:(id)arg2 withOffset:(struct CGPoint { double x1; double x2; })arg3;
- (void)updateVisibilityStatesForComponentViews:(id)arg1 toState:(long long)arg2;
- (id)viewport;
- (void)viewport:(id)arg1 appearStateChangedFromState:(unsigned long long)arg2;
- (void)viewport:(id)arg1 boundsDidChangeFromBounds:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg2;
- (void)viewport:(id)arg1 dynamicBoundsDidChangeFromBounds:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg2;

@end
