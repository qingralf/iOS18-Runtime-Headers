/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/HearingUI.framework/HearingUI
 */

@interface HACCContentViewController : UIViewController <CCUIContentModuleContentViewController, UIGestureRecognizerDelegate> {
    struct CGRect { 
        struct CGPoint { 
            double x; 
            double y; 
        } origin; 
        struct CGSize { 
            double width; 
            double height; 
        } size; 
    }  _collapsedFrame;
    UIView<HACCContentModule> * _contentView;
    unsigned long long  _controlType;
    CCUIContentModuleDetailTransitioningDelegate * _detailTransitioningDelegate;
    UIViewController<CCUIContentModuleContentViewController> * _expandedViewController;
    bool  _shouldAlwaysExpand;
    UITapGestureRecognizer * _tapRecognizer;
    double  preferredExpandedContentHeight;
}

@property (nonatomic) struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; } collapsedFrame;
@property (nonatomic) double compactContinuousCornerRadius; /* unknown property attribute: ? */
@property (nonatomic, retain) CCUIModuleContentMetrics *contentMetrics; /* unknown property attribute: ? */
@property (nonatomic) unsigned long long contentRenderingMode; /* unknown property attribute: ? */
@property (nonatomic, retain) UIView<HACCContentModule> *contentView;
@property (nonatomic, readonly) UIViewPropertyAnimator *customAnimator; /* unknown property attribute: ? */
@property (readonly, copy) NSString *debugDescription; /* unknown property attribute: ? */
@property (nonatomic, readonly) INIntent *defaultConfigurationIntent; /* unknown property attribute: ? */
@property (readonly, copy) NSString *description;
@property (nonatomic, retain) UIViewController<CCUIContentModuleContentViewController> *expandedViewController;
@property (nonatomic) long long gridSizeClass; /* unknown property attribute: ? */
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) unsigned long long implicitlyExpandedGridSizeClasses; /* unknown property attribute: ? */
@property (nonatomic, readonly) double preferredExpandedContentHeight;
@property (nonatomic, readonly) double preferredExpandedContentWidth; /* unknown property attribute: ? */
@property (nonatomic, readonly) double preferredExpandedContinuousCornerRadius; /* unknown property attribute: ? */
@property (nonatomic) bool prefersExpandedContentSizeMatchesGridSize; /* unknown property attribute: ? */
@property (nonatomic, readonly) bool promptsForUserConfiguration; /* unknown property attribute: ? */
@property (nonatomic, readonly) bool providesOwnPlatter; /* unknown property attribute: ? */
@property (getter=isResizing, nonatomic) bool resizing; /* unknown property attribute: ? */
@property (nonatomic) bool shouldAlwaysExpand;
@property (nonatomic, readonly) bool shouldPerformClickInteraction; /* unknown property attribute: ? */
@property (nonatomic, readonly) bool shouldPerformHoverInteraction; /* unknown property attribute: ? */
@property (readonly) Class superclass;
@property (nonatomic, retain) UITapGestureRecognizer *tapRecognizer;
@property (nonatomic) long long userVisibilityStatus; /* unknown property attribute: ? */
@property (nonatomic, readonly) bool wantsConfigurationIntent; /* unknown property attribute: ? */

- (void).cxx_destruct;
- (id)_axIdentifierForModule:(unsigned long long)arg1;
- (bool)_canShowWhileLocked;
- (void)_contentViewSubscribeListeners;
- (void)_contentViewUnsubscribeListeners;
- (void)_handleTapGestureRecognizer:(id)arg1;
- (void)addExpandedView:(id)arg1 shouldAlwaysExpand:(bool)arg2;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })collapsedFrame;
- (id)contentView;
- (id)contentViewForControlType:(unsigned long long)arg1 module:(unsigned long long)arg2 delegate:(id)arg3;
- (unsigned long long)controlTypeForModule:(unsigned long long)arg1;
- (id)expandedViewController;
- (id)initWithContentModule:(unsigned long long)arg1 andDelegate:(id)arg2;
- (double)preferredExpandedContentHeight;
- (void)removeExpandedView:(id)arg1;
- (void)setCollapsedFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)setContentView:(id)arg1;
- (void)setExpandedViewController:(id)arg1;
- (void)setShouldAlwaysExpand:(bool)arg1;
- (void)setTapRecognizer:(id)arg1;
- (bool)shouldAlwaysExpand;
- (id)tapRecognizer;
- (void)updateValue;
- (void)updateViewConstraints;
- (void)updateWithValue:(id)arg1;
- (id)value;
- (void)viewDidDisappear:(bool)arg1;
- (void)viewWillAppear:(bool)arg1;

@end