/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/DocumentCamera.framework/DocumentCamera
 */

@interface ICDocCamFilterViewController : UIViewController <UIGestureRecognizerDelegate, UIScrollViewDelegate> {
    UIView * _backgroundView;
    double  _bottomContentInset;
    double  _bottomOffset;
    short  _currentFilterType;
    NSMutableArray * _filterButtons;
    <ICDocCamFilterViewDelegate> * _filterViewDelegate;
    DCSinglePixelHorizontalLineView * _horizontalLineView;
    double  _horizontalOffset;
    NSArray * _layoutConstraints;
    UILongPressGestureRecognizer * _longPressGesture;
    UIScrollView * _scrollView;
    NSLayoutConstraint * _scrollViewBottomConstraint;
    NSLayoutConstraint * _scrollViewTrailingConstraint;
    bool  _transitioning;
    DCSinglePixelVerticalLineView * _verticalLineView;
}

@property (nonatomic) UIView *backgroundView;
@property (nonatomic) double bottomContentInset;
@property (nonatomic) double bottomOffset;
@property (nonatomic, readonly) struct CGSize { double x1; double x2; } contentSize;
@property (nonatomic) short currentFilterType;
@property (readonly, copy) NSString *debugDescription; /* unknown property attribute: ? */
@property (readonly, copy) NSString *description;
@property (nonatomic, retain) NSMutableArray *filterButtons;
@property (nonatomic) <ICDocCamFilterViewDelegate> *filterViewDelegate;
@property (readonly) unsigned long long hash;
@property (nonatomic) DCSinglePixelHorizontalLineView *horizontalLineView;
@property (nonatomic) double horizontalOffset;
@property (nonatomic, copy) NSArray *layoutConstraints;
@property (nonatomic, retain) UILongPressGestureRecognizer *longPressGesture;
@property (nonatomic) UIScrollView *scrollView;
@property (nonatomic, retain) NSLayoutConstraint *scrollViewBottomConstraint;
@property (nonatomic, readonly) NSLayoutConstraint *scrollViewTrailingConstraint;
@property (readonly) Class superclass;
@property (nonatomic) bool transitioning;
@property (nonatomic) DCSinglePixelVerticalLineView *verticalLineView;

- (void).cxx_destruct;
- (bool)_canShowWhileLocked;
- (void)applyToAll:(short)arg1;
- (id)backgroundView;
- (double)bottomContentInset;
- (double)bottomOffset;
- (void)centerContent:(bool)arg1 isPortrait:(bool)arg2;
- (struct CGSize { double x1; double x2; })contentSize;
- (short)currentFilterType;
- (void)dealloc;
- (id)filterButtonFromLocation:(struct CGPoint { double x1; double x2; })arg1;
- (id)filterButtons;
- (void)filterSelected:(id)arg1;
- (id)filterViewDelegate;
- (bool)gestureRecognizerShouldBegin:(id)arg1;
- (id)horizontalLineView;
- (double)horizontalOffset;
- (id)init;
- (void)initializeFilters;
- (id)layoutConstraints;
- (id)longPressGesture;
- (void)longPressGesture:(id)arg1;
- (bool)prefersStatusBarHidden;
- (void)prepareToAnimateIn:(bool)arg1;
- (id)scrollView;
- (id)scrollViewBottomConstraint;
- (id)scrollViewTrailingConstraint;
- (void)setBackgroundView:(id)arg1;
- (void)setBottomContentInset:(double)arg1;
- (void)setBottomOffset:(double)arg1;
- (void)setCurrentFilterType:(short)arg1;
- (void)setFilterButtons:(id)arg1;
- (void)setFilterViewDelegate:(id)arg1;
- (void)setHorizontalLineView:(id)arg1;
- (void)setHorizontalOffset:(double)arg1;
- (void)setLayoutConstraints:(id)arg1;
- (void)setLongPressGesture:(id)arg1;
- (void)setScrollView:(id)arg1;
- (void)setScrollViewBottomConstraint:(id)arg1;
- (void)setTransitioning:(bool)arg1;
- (void)setUpScrollView;
- (void)setVerticalLineView:(id)arg1;
- (unsigned long long)supportedInterfaceOrientations;
- (bool)transitioning;
- (void)updateConstraints;
- (void)updateConstraintsPad;
- (void)updateConstraintsPhone;
- (void)updateScrollViewContentSize;
- (id)verticalLineView;
- (void)viewDidLayoutSubviews;
- (void)viewDidLoad;
- (void)viewWillAppear:(bool)arg1;
- (void)viewWillTransitionToSize:(struct CGSize { double x1; double x2; })arg1 withTransitionCoordinator:(id)arg2;

@end
