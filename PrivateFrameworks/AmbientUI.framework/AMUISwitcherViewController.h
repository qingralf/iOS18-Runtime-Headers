/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/AmbientUI.framework/AmbientUI
 */

@interface AMUISwitcherViewController : UIViewController <AMUISwitcherLayout, BSUIScrollViewDelegate> {
    _AMUISwitcherTransitionContext * _currentTransition;
    <AMUISwitcherDataSource> * _dataSource;
    <AMUISwitcherDelegate> * _delegate;
    bool  _firstLayout;
    NSLayoutConstraint * _horizontalTrailingSpacerConstraint;
    NSMutableDictionary * _knownItems;
    long long  _lastScrollMethod;
    <AMUISwitcherLayout> * _layout;
    BSUIScrollView * _scrollView;
    long long  _topItemIndex;
    BSCompoundAssertion * _unsettledAssertions;
    NSLayoutConstraint * _verticalTrailingSpacerConstraint;
    NSMutableDictionary * _visibleItems;
}

@property (getter=isCircular, nonatomic, readonly) bool circular;
@property (nonatomic) <AMUISwitcherDataSource> *dataSource;
@property (readonly, copy) NSString *debugDescription; /* unknown property attribute: ? */
@property (nonatomic) <AMUISwitcherDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) <AMUISwitcherLayout> *layout;
@property (getter=isScrollEnabled, nonatomic) bool scrollEnabled;
@property (getter=isScrollingInteractively, nonatomic, readonly) bool scrollingInteractively;
@property (nonatomic, readonly) double spacing;
@property (readonly) Class superclass;
@property (nonatomic, readonly) long long switcherAxis;
@property (nonatomic, readonly, copy) NSArray *visibleIndices;
@property (nonatomic, readonly, copy) NSArray *visibleItems;

- (void).cxx_destruct;
- (id)_accessibilityIdentifierPrefix;
- (bool)_beginTransitionIfNeededFromRecord:(id)arg1 toRecord:(id)arg2;
- (bool)_canShowWhileLocked;
- (void)_detachItemRecord:(id)arg1;
- (bool)_endTransitionIfNeeded;
- (long long)_indexOfItem:(id)arg1;
- (long long)_indexOfItemWithIdentifier:(id)arg1;
- (void)_noteTransitionFrom:(id)arg1 to:(id)arg2 progress:(double)arg3;
- (void)_noteTransitionProgressIfNeeded;
- (struct CGSize { double x1; double x2; })_pageSize;
- (double)_presentationProgressForItemIndex:(long long)arg1;
- (bool)_scrollToIndex:(long long)arg1 animated:(bool)arg2 completion:(id /* block */)arg3;
- (void)_sendTransitionUpdate;
- (bool)_shouldAdjustForRTL;
- (id)_switcherLayout;
- (void)_updateForUnsettled:(bool)arg1;
- (void)_updateTrailingSpacerConstraints;
- (id)acquireUnsettledAssertionForReason:(id)arg1;
- (id)dataSource;
- (void)dealloc;
- (id)delegate;
- (id)initWithLayout:(id)arg1;
- (bool)isCircular;
- (bool)isScrollEnabled;
- (bool)isScrollingInteractively;
- (id)layout;
- (double)presentationProgressForIdentifier:(id)arg1;
- (double)presentationProgressForItem:(id)arg1;
- (void)reload;
- (void)reloadItemAtIndex:(long long)arg1;
- (void)reloadItemWithIdentifier:(id)arg1;
- (bool)scrollToIdentifier:(id)arg1 animated:(bool)arg2;
- (bool)scrollToItem:(id)arg1 animated:(bool)arg2;
- (void)scrollViewDidEndScrolling:(id)arg1;
- (void)scrollViewDidScroll:(id)arg1 withContext:(struct { long long x1; struct CGPoint { double x_2_1_1; double x_2_1_2; } x2; struct CGPoint { double x_3_1_1; double x_3_1_2; } x3; })arg2;
- (void)setDataSource:(id)arg1;
- (void)setDelegate:(id)arg1;
- (void)setScrollEnabled:(bool)arg1;
- (bool)shouldAutomaticallyForwardAppearanceMethods;
- (double)spacing;
- (void)switcher:(id)arg1 updateItem:(id)arg2 view:(id)arg3 forPresentationProgress:(double)arg4;
- (long long)switcherAxis;
- (void)updateViewConstraints;
- (void)viewDidAppear:(bool)arg1;
- (void)viewDidDisappear:(bool)arg1;
- (void)viewDidLoad;
- (void)viewDidMoveToWindow:(id)arg1 shouldAppearOrDisappear:(bool)arg2;
- (void)viewWillAppear:(bool)arg1;
- (void)viewWillDisappear:(bool)arg1;
- (void)viewWillLayoutSubviews;
- (void)viewWillMoveToWindow:(id)arg1;
- (id)visibleIndices;
- (id)visibleItems;

@end
